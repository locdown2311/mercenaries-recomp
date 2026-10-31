# STATUS DO PORT — Mercenaries (Xbox) → PC nativo

> **Última atualização:** 2026-10-31 · **Commit base:** `4cfc03f` · CI run #3 concluído ✅
> **Repositório:** https://github.com/locdown2311/mercenaries-recomp
> **Documento de retomada:** leia isto antes de continuar.

## TL;DR

O jogo **compila no GitHub Actions** e o executável gerado **roda**: passa
do media check (imagens de partição no `saves/`), inicializa GPU/áudio e
**entra no loop principal** com `RECOMP_VBLANK=1` (~40 Hz de vblanks,
centenas de chamadas de kernel).

**Estado:** pipeline completa + build CI + o jogo **passa do media check e
entra no loop principal** com `RECOMP_VBLANK=1`. Próximo objetivo: render
D3D8 e carga de assets.

---

## 1. O que já foi feito

### 1.1 Extração do XISO (fora do repo, na máquina)
- Entrada: `Mercenaries (USA, Europe).xiso.iso` (2,5 GB), formato **XDVDFS**.
- Parser próprio: volume header no setor 32 (`0x10000`), árvore AVL de diretórios.
- Resultado: **434 arquivos** (2,5 GB) em `mercenaries/extracted/`.
- Ferramentas usadas (não versionadas): `parse_xiso.py`, `extract_xbe.py`, `xbe_to_pe.py`.

### 1.2 Identificação do alvo
| Campo | Valor |
|---|---|
| Título | **Mercenaries** |
| Title ID | `0x4C410015` |
| Região | `0x7` (NA, JP, RoW) |
| Build | 2004-12-02 |
| Codename interno | **retrostrike** (`c:\projects\retrostrike\Release\release.exe`) |
| Engine | "Red Engine" + Havok + Lua + XACT + D3D8 |
| XDK | 5849 (8 libs: XAPILIB, XMV, XACTENG, D3D8, XGRAPHC, DSOUND, XBOXKRNL, LIBC) |
| Base / imagem | `0x00010000` / `0x00868AA0` |
| **Entry point** | **`0x0022964A`** (o armazenado `0xA8DEC1E1` é ofuscado; o parser decodifica) |
| Seções | 14 (`.text`, XMV, XACTENG, D3D, XGRPH, DSOUND, WMADEC, XPP, `.rdata`, `.data`, DOLBY, ...) |
| Imports de kernel | 111 |

### 1.3 Pipeline xboxrecomp (rodada na máquina)
| Etapa | Resultado |
|---|---|
| `tools.xbe_parser` | layout, entry point decodificado, imports |
| `tools.disasm` | **16.662 funções**, 153.865 xrefs, 3.141 strings |
| `tools.func_id` | 19.199 classificadas (7.629 vtable, 731 áudio, 301 render, 156 input, ...) |
| `tools.abi_analysis` | 3.478 `thiscall` |
| `tools.recomp --all --split 250` | **16.663 funções**, **1.561.704 linhas de C**, 67 arquivos (~58 MB) |

### 1.4 Repositório + CI
- Projeto em `mercenaries-recomp/` (este repo).
- `.github/workflows/build.yml`: checkout → clone `xboxrecomp` → `ilammy/msvc-dev-cmd`
  (MSVC x64) → CMake + **Ninja** → build → upload do artefato.
- Build: ~74 min no `windows-latest`; artefato `mercenaries-recomp` (~8 MB zip, exe 22 MB).

### 1.5 Primeiro boot (marco)
Executado com o artefato da run #2:
```
XBE loaded: 3223552 bytes
Xbox memory mapped (64 MB, 14/14 seções)
Kernel bridge: 111/111 resolved
Starting game...
[KERNEL] #1  PsCreateSystemThreadEx
[KERNEL] #10 NtAllocateVirtualMemory 1 MB
[KERNEL] #13 NtCreateFile \Device\Harddisk0\Partition1\
[KERNEL] #16 ExQueryNonVolatileSetting (launch data, titleid 0x4C410015)
HalReturnToFirmware routine=2 → saiu
```
Não foi crash: o jogo executou código recompilado de verdade e saiu pela
checagem de mídia (comportamento "sem disco").

### 1.6 Correções já commitadas
| Commit | O que resolve |
|---|---|
| `f4e4d3d` | Ponto de partida: código gerado + projeto + workflow |
| `d8896e4` | `ci: use msvc-dev-cmd + Ninja` — o generator "Visual Studio 17 2022" não existe no runner |
| `4cfc03f` | `runtime: keep saves ... next to the game` — save-dir `saves/` em vez de `%LOCALAPPDATA%` |

### 1.7 Segundo boot — passou do media check (build `4cfc03f`)
Com o save-dir `saves/` ao lado do jogo, o runtime criou `Partition0.img`
(tabela de partições) + `Partition1..5.img` e o jogo **passou da checagem de
mídia** (TDATA/UDATA/TitleMeta.xbx) e foi até o init de vídeo
(`AvSendTVEncoderOption`) e GPU/áudio (`KeConnectInterrupt`).

O frame loop ainda parava no primeiro clear — até rodar com **`RECOMP_VBLANK=1`**:
```
[NV2A] vblank -> ISR claimed it
[NV2A] vblank 600 (tick): last 600 in 15156 ms   (~40 Hz)
[KERNEL] summary: 1758 total calls, latest ordinal 119 (slot 54)
```
Agora o jogo **fica no loop principal** (não sai, não trava mais na saída).
Próximo: confirmar render (D3D8) e carga de assets/DATAxbox.

---

## 2. O que falta fazer

### 2.1 Curto prazo (destravar o boot)
1. ~~Confirmar que o build `4cfc03f` passa do media check~~ ✅ (ver 1.7).
2. **Rodar sempre com `RECOMP_VBLANK=1`** — sem isso o frame loop para no primeiro clear.
3. **Dados do jogo**: o exe carrega `game\default.xbe` e lê assets de `game\`
   (via `xbox_path_init(game, "saves")`). É preciso o dump completo em `game/`
   (`default.xbe` + `DATAxbox/` + configs). Na máquina de teste usei junction
   `game -> mercenaries/extracted`.
4. Observar o **próximo ponto de falha**: render D3D8 / carga de assets.

### 2.2 Médio prazo
4. **Ordinais de kernel não implementados**: o log mostra
   `Thunk table: 146/378 resolved, 232 unresolved`. Ver `tools.kernel_audit`
   para o relatório por título e implementar os que o jogo usa.
5. **Carga de assets**: `.dsk` (assets/streamed), `.tga` (texturas), `.xwb`/`.xsb`
   (áudio), `.xvu` (shaders), XMV (vídeo).
6. **D3D8 → D3D11**: render combiners, vertex shaders NV2A, texturas.
7. **Áudio** (DSOUND/XACT) e **input** (XInput).
8. **Loop de jogo / primeira frame**.

### 2.3 Longo prazo
9. **Launcher/config UI** (estilo SotC-PC): Jogo e saves, Imagem e FPS,
   Controles, Avançado, Debug.
10. Builds de release + packaging (zip com `game/` vazio + README).

---

## 3. Como retomar

### 3.1 Requisitos
- Windows 10/11 x64 + **VS 2022 BuildTools** (MSVC)
- Python 3.12 + `capstone` (só para re-rodar o pipeline)
- Git

### 3.2 Rebuild (GitHub Actions — recomendado)
Basta dar **push em `main`** (ou Actions → *Run workflow*). O workflow clona o
`xboxrecomp`, compila com MSVC+Ninja e sobe o artefato `mercenaries-recomp`.

### 3.3 Re-testar localmente
1. Baixar o artefato da run mais recente (a API de artifacts **exige token**;
   via web: Actions → run → Artifacts).
2. Extrair `mercenaries_recomp.exe`.
3. Montar a pasta:
   ```
   <pasta>/
     mercenaries_recomp.exe
     game/            <- dump do jogo (default.xbe, DATAxbox/, ...)
   <pasta>/
     mercenaries_recomp.exe
     saves/           <- criado pelo runtime
   ```
4. Rodar com `XBOX_LOG_LEVEL=4` e **`RECOMP_VBLANK=1`** (sem vblank o loop para);
   log detalhado vai para `xbox_kernel.log` no cwd; erros também vão para stderr.
5. Ferramentas de debug úteis: `RECOMP_STUB_LOG=1`, `RECOMP_WATCH=<va>`,
   `RECOMP_ICALL_TRACE`, watchdog `RECOMP_WATCHDOG_SECS`.

### 3.4 Re-rodar o pipeline (se precisar)
```bash
pip install capstone
python -m tools.xbe_parser game/default.xbe --json game/default_analysis.json
python -m tools.disasm   game/default.xbe          # sem --text-only (pega D3D/DSOUND/...)
python -m tools.func_id  game/default.xbe -v
python -m tools.abi_analysis game/default.xbe -v
python -m tools.recomp   game/default.xbe --all --split 250 --gen-dir src/recomp/gen
```

### 3.5 Observações de ambiente (importantes)
- O **sandbox do DSH** bloqueia `git push` (named pipes do MSYS) e escritas
  fora do workspace; esses passos precisam de acesso total.
- O **processo-filho do jogo** não consegue criar arquivos em `%LOCALAPPDATA%`
  sob o sandbox — por isso o save-dir foi para `saves/` ao lado do jogo.

---

## 4. Referências
- xboxrecomp: https://github.com/sp00nznet/xboxrecomp
- xboxrecomp-cli (`xbr`): https://github.com/apexJCL/xboxrecomp-cli
- Este projeto: `README.md`
