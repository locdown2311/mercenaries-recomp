# Mercenaries (Xbox) — Native Recompilation

Native PC port of **Mercenaries** (Pandemic Studios / LucasArts, 2005) for the original
Xbox, built by **static recompilation** of its `default.xbe` with
[xboxrecomp](https://github.com/sp00nznet/xboxrecomp) (x86 → C → native x86-64 `.exe`).

> **Status: pipeline complete, first build via CI. The game does not boot yet.**
> This repo contains the machine-translated C code (16,663 functions, ~1.56M lines)
> and the project needed to compile it. Bring-up (making it reach the first frame)
> is the next phase.

## What is in here

| Path | What it is |
|---|---|
| `src/main.c` | Host entry point (loads `default.xbe`, maps Xbox memory, calls the recompiled entry point) |
| `src/recomp_manual.c` | Hand-written overrides (starts empty) |
| `src/recomp/gen/*.c` | 16,663 recompiled functions (67 chunks + dispatch + unresolved stubs) |
| `src/recomp/gen/recomp_types.h` | Runtime register model / ICALL macros |
| `CMakeLists.txt` | Builds `mercenaries_recomp.exe` and links the xboxrecomp runtime |
| `.github/workflows/build.yml` | Builds the `.exe` on GitHub Actions (windows-latest) |

## Key facts recovered from the XBE

- Title: **Mercenaries**, Title ID `0x4C410015`, region `0x7`, build `2004-12-02`
- Base `0x00010000`, image size `0x00868AA0`
- **Entry point: `0x0022964A`** (the stored value `0xA8DEC1E1` is obfuscated; xboxrecomp's
  parser decodes it)
- 14 sections, 8 Xbox libraries (XDK 5849), **111 kernel imports**
- 16,662 functions detected across `.text` + D3D/XACTENG/DSOUND/WMADEC/XPP/DOLBY/XGRPH/XMV

## Build

### GitHub Actions (recommended)

Push to the repo (or *Run workflow*) — the `build` workflow clones xboxrecomp, compiles with
MSVC and uploads `mercenaries-recomp` as an artifact.

### Locally

```bash
git clone --depth 1 https://github.com/sp00nznet/xboxrecomp.git xboxrecomp
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
# -> build/Release/mercenaries_recomp.exe
```

## Run (bring your own game dump)

The `.exe` loads the XBE **at runtime**, so put the game files next to it:

```
build/Release/mercenaries_recomp.exe
build/Release/game/default.xbe        <- your own Xbox dump
```

No game code or data is distributed here. You must own the game.

## Next steps (bring-up)

1. Boot past the entry point (CRT / kernel init).
2. Stub missing kernel imports as the game touches them (`RECOMP_STUB_LOG=1`).
3. Fix indirect calls (vtables — 7,629 `game_vtable` functions) with
   `tools.recomp.icall_feedback`.
4. Bring up D3D8 → D3D11 rendering and audio.
5. Iterate until the first frame.
