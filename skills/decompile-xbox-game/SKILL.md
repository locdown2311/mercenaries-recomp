---
name: decompile-xbox-game
description: Decompile or statically recompile an original Xbox (2001-2005) game from its XISO/XBE into a native PC executable. Covers XISO/XDVDFS extraction, XBE parsing (including obfuscated entry points), Ghidra/REA decompilation, the xboxrecomp pipeline (disasm, func_id, abi_analysis, recomp), CI builds with MSVC + Ninja, and boot bring-up (save dir, RECOMP_VBLANK, DPC/timer waits, unresolved kernel ordinals). Use for "descompilar jogo de Xbox", "port nativo Xbox", "XBE analysis", "xboxrecomp", or "Mercenaries".
metadata:
  version: "1"
  tools: xboxrecomp, REA, Ghidra, capstone
---

# Descompilar / recompilar jogo de Xbox (XISO → XBE → PC nativo)

Two independent routes, pick by goal:

| Goal | Route | Tools |
|---|---|---|
| **Understand / decompile code** (readable C, functions, cross-refs) | Ghidra (or REA + Ghidra) | REA 6.7.0 + Ghidra **12.1.4** |
| **Run the game natively on PC** | Static recompilation | [xboxrecomp](https://github.com/sp00nznet/xboxrecomp) |

Both start from the same extracted `default.xbe`. This skill records the
whole pipeline and every blocker encountered on *Mercenaries*, so a new title
does not repeat them.

---

## 1. Extrair o XISO (XDVDFS)

The `.xiso.iso` is an Xbox DVD filesystem, **not** ISO9660/PE.

- Volume header at **sector 32 (`0x10000`)**: ASCII `MICROSOFT*XBOX*MEDIA` (20 bytes),
  then `root_dir_sector` (u32) and `root_dir_size` (u32, **bytes**).
- Optimized/AVL tag: bytes at offset **31337** start with `in!xiso`.
- Directory tables are AVL trees; each entry is `14 + name_len` bytes padded to 4:
  `left(u16 DWORDs) right(u16) start_sector(u32) size(u32) attrs(u8) name_len(u8) name`.
- `attrs & 0x10` = directory; sector numbers are **absolute** (`sector*2048`).
- Sector 32 header + root at sector 264 is the common retail layout.

Reference implementation: `parse_xiso.py` (no workspace do projeto) or
`tools/xiso` inside xboxrecomp.

## 2. Identificar o XBE

```bash
python -m tools.xbe_parser game/default.xbe --json game/default_analysis.json
```

Reports: title name/ID, base (`0x00010000`), image size, **decoded entry point**,
section map, XDK libraries, kernel imports.

**Entry-point obfuscation** (important): some titles store a garbage value.
Example Mercenaries: stored `0xA8DEC1E1` → real **`0x0022964A`**. The xboxrecomp
parser decodes it; never trust the raw field. Verify the decoded VA falls inside
`.text` (or a code section).

XBE header facts: `XBEH` magic, base `0x10000`, 14 sections typical, section
headers at file offset `0x370`, `kernel_thunk` VA at `0x158`.

## 3. Decompilação (Ghidra / REA)

The XBE is not PE/ELF. Two options:

1. **REA**: convert XBE → PE32 first (map the 14 sections, `ImageBase = 0x10000`),
   then `rea analyze <pe> --provider ghidra`. `rea decompile <pe> <addr>` gives
   pseudocode. On Windows REA's native "private DACL" runtime needs full access
   (the DSH sandbox blocks it).
2. **Ghidra headless** directly (no REA): `analyzeHeadless.bat` on the PE, then
   export decompiled functions.

REA version note: **6.7.0 accepts Ghidra 12.1.x only** (verified 12.1.4); 12.2 is
rejected with `unsupported_version`.

## 4. Recompilação estática (xboxrecomp)

Prerequisites: Python 3.10+ with `capstone`, MSVC (VS 2022), CMake 3.20+.

```bash
git clone --depth 1 https://github.com/sp00nznet/xboxrecomp.git
pip install capstone

python -m tools.xbe_parser  game/default.xbe --json game/default_analysis.json
python -m tools.disasm      game/default.xbe            # NO --text-only: also lifts D3D/DSOUND/XACTENG/...
python -m tools.func_id     game/default.xbe -v
python -m tools.abi_analysis game/default.xbe -v        # thiscall recovery
python -m tools.recomp      game/default.xbe --all --split 250 --gen-dir ../mygame/src/recomp/gen
```

- `--split 250` keeps object files buildable in ~15 GB; 1000 does not.
- Generated C is huge (~1.5 M lines for 16.6 k functions). Commit it; it is the
  build input (the original XBE is copyrighted and is NOT committed).
- `func_id` finds ~19 k functions (game + vtable + audio/render). `abi_analysis`
  recovers `thiscall` counts.

## 5. Projeto do jogo + build

Copy `templates/new-game` to your project dir, then:

- `CMakeLists.txt`: `project(<name> C)`, `XBOXRECOMP_DIR` pointing at the clone,
  **add `src/recomp/gen` to include dirs** (headers live there), `/bigobj`.
- `src/main.c`: set the decoded entry point, `YOUR_GAME_XBE_PATH`,
  `YOUR_GAME_DIR`.

Build with **MSVC + Ninja** (do not rely on the "Visual Studio 17 2022" generator —
runner images change its name):

```yaml
- uses: ilammy/msvc-dev-cmd@v1
  with: { arch: x64 }
- run: cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
- run: cmake --build build
```

Expected: ~60–75 min on `windows-latest` for 16 k functions; artifact ~22 MB exe.

## 6. Bring-up (o que destrava cada etapa)

| Sintoma | Causa | Correção |
|---|---|---|
| Sai por `HalReturnToFirmware routine=2` | checagem de mídia: `\Device\Harddisk0\Partition1\` não abre | save-dir gravável; imagens de partição criadas |
| `NtCreateFile FAILED ... Partition1.img` / `TDATA (err=2)` | save-dir em `%LOCALAPPDATA%` sem escrita (sandbox / integridade) | `xbox_path_init(game, "saves")` — relativo ao jogo |
| Loop para no primeiro clear | frame loop espera **vblank** | **`RECOMP_VBLANK=1`** (`paced` = 60 Hz) |
| Loop de `KeInsertQueueDpc`/`KeSetEvent` sem janela | DPC/timer/worker thread não entregue | investigar `xbox_DpcOnRaise`, `xbox_HostTimerWake` |
| `Thunk table: 146/378 resolved` | ordinais de kernel não implementados | `tools/kernel_audit`, implementar os usados |

Env vars úteis:

- `XBOX_LOG_LEVEL=4` — log detalhado em `xbox_kernel.log` (cwd) + stderr.
- `RECOMP_VBLANK=1` (or `paced`) — **obrigatório** para jogos que esperam vblank.
- `RECOMP_STUB_LOG=1` — reporta funções-stub não resolvidas.
- `RECOMP_WATCHDOG_SECS=15` — watchdog de hang (dump do guest stack).
- `RECOMP_WATCH=<va>`, `RECOMP_KERNEL_WATCH=1`, `RECOMP_ICALL_TRACE`.

Layout de teste local:

```
<pasta>/
  mercenaries_recomp.exe
  game/        <- dump do jogo (default.xbe + DATAxbox/...)
  saves/       <- criado pelo runtime (partições, saves)
```

## 7. Armadilhas (checklist)

- [ ] XBE **não** é PE/ELF — converta antes do Ghidra.
- [ ] Entry point pode estar **ofuscado** — use o parser, não o campo cru.
- [ ] O `%LOCALAPPDATA%` pode não ser gravável — use save-dir relativo.
- [ ] `RECOMP_VBLANK=1` antes de concluir que "travou".
- [ ] `--text-only` esquece D3D/DSOUND/XACTENG — omita.
- [ ] Runner sem "VS 17 2022" → msvc-dev-cmd + Ninja.
- [ ] 232 ordinais não resolvidos é aviso real — checar `kernel_audit`.
- [ ] Não publique o dump do jogo; só o C recompilado.

## 8. Verificação

- Confira o SHA-256 do artefato (`actions/runs/<id>/artifacts` → digest).
- Rode com `XBOX_LOG_LEVEL=4` e leia `xbox_kernel.log` até a última chamada.
- Capture janela: enumere as janelas do PID (`EnumWindows`); se nenhuma existir,
  o jogo não chegou a criar o device D3D ainda.

## 9. Referências

- xboxrecomp: https://github.com/sp00nznet/xboxrecomp (`docs/GETTING_STARTED.md`)
- xboxrecomp-cli: https://github.com/apexJCL/xboxrecomp-cli
- REA skill: `reverse-engineer-anything` (Ghidra/IDA providers)
- Projeto de referência deste skill: `mercenaries-recomp/STATUS.md`
