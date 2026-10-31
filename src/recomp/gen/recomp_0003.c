/**
 * Mercenaries - Recompiled code chunk 3
 * Functions: 250 (0x000339A0 - 0x0003AEC0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000339A0
 * Original: 0x000339A0 - 0x000339A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000339A0(void)
{

loc_000339A0: ;
    eax = 0xE;
    esp += 4; return; /* ret */

}

/**
 * sub_000339B0
 * Original: 0x000339B0 - 0x000339B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000339B0(void)
{

loc_000339B0: ;
    eax = 0x1B0;
    esp += 4; return; /* ret */

}

/**
 * sub_000339C0
 * Original: 0x000339C0 - 0x000339C5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000339C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000339C0: ;
    g_seh_ebp = ebp; sub_000312F0(); return; /* tail jmp 0x000312F0 */

}

/**
 * sub_000339D0
 * Original: 0x000339D0 - 0x000339D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000339D0(void)
{

loc_000339D0: ;
    eax = 0x7934C8;
    esp += 4; return; /* ret */

}

/**
 * sub_000339E0
 * Original: 0x000339E0 - 0x000339E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000339E0(void)
{

loc_000339E0: ;
    eax = MEM32(0x30C248);
    esp += 4; return; /* ret */

}

/**
 * sub_000339F0
 * Original: 0x000339F0 - 0x000339F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000339F0(void)
{

loc_000339F0: ;
    eax = MEM32(0x30C27C);
    esp += 4; return; /* ret */

}

/**
 * sub_00033A00
 * Original: 0x00033A00 - 0x00033A45 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033A00: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(0x30C250));
    PUSH32(esp, esi);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = 0;
    esi = ZX8(MEM8(0x30C251));
    edx = MEM32(0x30C24C);
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | MEM32(0x30C248);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    esi = 0xF;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = esi;
    MEM8(0x30C251) = MEM8(0x30C251) + 1;
    _fa = (uint32_t)(MEM8(0x30C251)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00033A50
 * Original: 0x00033A50 - 0x00033A6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00033A58u); RECOMP_ABI_CALL(0x000311A0u, sub_000311A0); /* call 0x000311A0 */

loc_00033A58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00033A68; /* je: equal / zero */

loc_00033A5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00033A65u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00033A65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00033A68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033A70
 * Original: 0x00033A70 - 0x00033BD6 (358 bytes, 85 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00033A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00033AA0; /* je: equal / zero */

loc_00033A84: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    goto loc_00033AE5;

loc_00033AA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033AC1; /* je: equal / zero */

loc_00033AA4: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    goto loc_00033AE5;

loc_00033AC1: ;
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */

loc_00033AE5: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00033B0E; /* je: equal / zero */

loc_00033AF2: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    goto loc_00033B75;

loc_00033B0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00033B7B; /* je: equal / zero */

loc_00033B2F: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033B3Fu); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_00033B3F: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x28) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x30) = ecx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */

loc_00033B75: ;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_00033B7B: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033B89u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_00033B89: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    esi = MEM32(ebp + 8);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = esp + 0x40;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033BCDu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00033BCD: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00033BE0
 * Original: 0x00033BE0 - 0x00033C89 (169 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033BE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00033BE9u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00033BE9: ;
    ecx = eax;
    PUSH32(esp, 0x00033BF0u); RECOMP_ABI_CALL(0x001EAAC0u, sub_001EAAC0); /* call 0x001EAAC0 */

loc_00033BF0: ;
    eax = MEM32(esi + 0x17C);
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033C05; /* je: equal / zero */

loc_00033BFB: ;
    edx = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00033C05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033C02u); } /* indirect call */
    }

loc_00033C05: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1EC); PUSH32(esp, 0x00033C0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033C09u); } /* indirect call */
    }

loc_00033C0F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033C86; /* je: equal / zero */

loc_00033C15: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1E0); PUSH32(esp, 0x00033C1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033C19u); } /* indirect call */
    }

loc_00033C1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033C86; /* jne: not equal / not zero */

loc_00033C23: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(0x643844);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033C33u); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_00033C33: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033C85; /* je: equal / zero */

loc_00033C39: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1F0); PUSH32(esp, 0x00033C43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033C3Du); } /* indirect call */
    }

loc_00033C43: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00033C4Fu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00033C4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00033C58u); RECOMP_ABI_CALL(0x00140FB0u, sub_00140FB0); /* call 0x00140FB0 */

loc_00033C58: ;
    eax = MEM32(edi + 0x1C);
    MEM32(eax + 0xB0) = MEM32(eax + 0xB0) | 0x200;
    _fa = (uint32_t)(MEM32(eax + 0xB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, 0x00033C6Du); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_00033C6D: ;
    PUSH32(esp, 0x3FC00000);
    ecx = edi;
    PUSH32(esp, 0x00033C79u); RECOMP_ABI_CALL(0x00130440u, sub_00130440); /* call 0x00130440 */

loc_00033C79: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00033C85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033C7Fu); } /* indirect call */
    }

loc_00033C85: ;
    POP32(esp, ebx);

loc_00033C86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00033C90
 * Original: 0x00033C90 - 0x00033E3B (427 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033C90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240C34);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00033CB4u); RECOMP_ABI_CALL(0x000310E0u, sub_000310E0); /* call 0x000310E0 */

loc_00033CB4: ;
    edi = esi + 0x1AC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi) = 0x2DF358;
    PUSH32(esp, 0x00033CCDu); RECOMP_ABI_CALL(0x001F7350u, sub_001F7350); /* call 0x001F7350 */

loc_00033CCD: ;
    MEM32(edi) = 0x2DEE80;
    MEM32(esi + 0x20C) = ebx;
    MEM32(esi + 0x210) = ebx;
    MEM32(esi + 0x214) = ebx;
    MEM32(esi + 0x218) = ebx;
    MEM32(esi + 0x21C) = ebx;
    MEM32(esi + 0x220) = ebx;
    MEM32(esi + 0x248) = ebx;
    edi = esi + 0x24C;
    ecx = esi + 0x278;
    MEM8(esp + 0x18) = 1;
    MEM32(edi) = 0x2DEEC4;
    PUSH32(esp, 0x00033D19u); RECOMP_ABI_CALL(0x00140AE0u, sub_00140AE0); /* call 0x00140AE0 */

loc_00033D19: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    eax = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    MEMF(esi + 0x1BC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esp + 0x1C) = 2;
    MEM32(esi + 0x1A8) = ebx;
    MEM32(esi + 0x1A0) = ebx;
    MEM32(esi + 0x1A4) = ebx;
    MEM32(esi + 0x1B8) = ebx;
    MEM8(esi + 0x1C4) = 1;
    MEMF(esi + 0x1CC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1D0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1D8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1DC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1E0) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00033D90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033D8Du); } /* indirect call */
    }

loc_00033D90: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    edx = MEM32(edi);
    MEMF(esi + 0x1F4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC38C)); /* movss */
    MEMF(esi + 0x1F8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    ecx = edi;
    MEM8(esi + 0x1E4) = 1;
    MEM8(esi + 0x1E5) = LO8(ebx);
    MEM8(esi + 0x1E6) = 1;
    MEMF(esi + 0x1FC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x230) = ebx;
    MEM32(esi + 0x234) = ebx;
    MEM8(esi + 0x238) = LO8(ebx);
    MEM32(esi + 0x240) = ebx;
    MEM32(esi + 0x1EC) = ebx;
    MEM8(esi + 0x239) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00033DFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033DFDu); } /* indirect call */
    }

loc_00033DFF: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00033E07u); RECOMP_ABI_CALL(0x00150C20u, sub_00150C20); /* call 0x00150C20 */

loc_00033E07: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x248) = 0x4140CC;
    eax = MEM32(0x4140CC);
    MEM32(esi + 0x244) = eax;
    _fb = (uint32_t)(0xFFFD40E0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFD40E0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x244) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00033E40
 * Original: 0x00033E40 - 0x00033E46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033E40(void)
{

loc_00033E40: ;
    eax = 0x340;
    esp += 4; return; /* ret */

}

/**
 * sub_00033E50
 * Original: 0x00033E50 - 0x00033E56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033E50(void)
{

loc_00033E50: ;
    eax = 0xB;
    esp += 4; return; /* ret */

}

/**
 * sub_00033E60
 * Original: 0x00033E60 - 0x00033E67 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033E60(void)
{

loc_00033E60: ;
    eax = MEM32(ecx + 0x294);
    esp += 4; return; /* ret */

}

/**
 * sub_00033E70
 * Original: 0x00033E70 - 0x00033E77 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033E70(void)
{

loc_00033E70: ;
    SET_LO8(eax, MEM8(ecx + 0x274));
    esp += 4; return; /* ret */

}

/**
 * sub_00033E80
 * Original: 0x00033E80 - 0x00033E8D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033E80(void)
{

loc_00033E80: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x274) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033E90
 * Original: 0x00033E90 - 0x00033E97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033E90(void)
{

loc_00033E90: ;
    eax = ecx + 0x278;
    esp += 4; return; /* ret */

}

/**
 * sub_00033EA0
 * Original: 0x00033EA0 - 0x00033EE4 (68 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033EA0: ;
    SET_LO8(eax, MEM8(ecx + 0x274));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033EC1; /* je: equal / zero */

loc_00033EAA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x278;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033EBBu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00033EBB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00033EC1: ;
    edx = MEM32(0x6459E8);
    eax = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x6459EC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x6459F0);
    MEM32(ecx + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033EF0
 * Original: 0x00033EF0 - 0x00033F34 (68 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033EF0: ;
    SET_LO8(eax, MEM8(ecx + 0x274));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033F11; /* je: equal / zero */

loc_00033EFA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x278;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033F0Bu); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_00033F0B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00033F11: ;
    edx = MEM32(0x6459E8);
    eax = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x6459EC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x6459F0);
    MEM32(ecx + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033F40
 * Original: 0x00033F40 - 0x00033F46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033F40(void)
{

loc_00033F40: ;
    eax = 0x13;
    esp += 4; return; /* ret */

}

/**
 * sub_00033F50
 * Original: 0x00033F50 - 0x00033F56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033F50(void)
{

loc_00033F50: ;
    eax = MEM32(0x30C258);
    esp += 4; return; /* ret */

}

/**
 * sub_00033F60
 * Original: 0x00033F60 - 0x00034008 (168 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00033F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033F7Eu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00033F7E: ;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x58);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    edi = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033FA0u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00033FA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00033FAE; /* jge: greater or equal (signed >=) */

loc_00033FA7: ;
    eax = 0x6438B8;
    goto loc_00033FB7;

loc_00033FAE: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_00033FB7: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00033FD9; /* je: equal / zero */

loc_00033FC0: ;
    edx = esi + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x26627B66);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033FD9u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00033FD9: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033FEFu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00033FEF: ;
    esi = MEM32(ebp + 8);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033FFEu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00033FFE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034010
 * Original: 0x00034010 - 0x00034020 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034010: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00034018u); RECOMP_ABI_CALL(0x00031570u, sub_00031570); /* call 0x00031570 */

loc_00034018: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00032B00(); return; /* tail jmp 0x00032B00 */

}

/**
 * sub_00034020
 * Original: 0x00034020 - 0x00034040 (32 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034020: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00034028u); RECOMP_ABI_CALL(0x00033BE0u, sub_00033BE0); /* call 0x00033BE0 */

loc_00034028: ;
    SET_LO8(eax, MEM8(esi + 0x1C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003403A; /* je: equal / zero */

loc_00034032: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00032AB0(); return; /* tail jmp 0x00032AB0 */

loc_0003403A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034040
 * Original: 0x00034040 - 0x000340A1 (97 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00034040: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003409A; /* je: equal / zero */

loc_0003404C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00034053u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034050u); } /* indirect call */
    }

loc_00034053: ;
    edx = MEM32(0x30D88C);
    ecx = MEM32(0x30D888);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003409A; /* jne: not equal / not zero */

loc_00034065: ;
    ecx = edi;
    PUSH32(esp, 0x0003406Cu); RECOMP_ABI_CALL(0x00032620u, sub_00032620); /* call 0x00032620 */

loc_0003406C: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003409A; /* jnp: not parity */

loc_00034084: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xAC4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003409A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xAC4)) */

loc_00034093: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0003409A: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000340B0
 * Original: 0x000340B0 - 0x000341DE (302 bytes, 88 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000340B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000340B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xEC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000340CAu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000340CA: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000341C6; /* jnp: not parity */

loc_000340E0: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000340FDu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_000340FD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x10)); /* fsub dword ptr [ebp + 0x10] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003410Eu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0003410E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x74;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x10)); /* fsub dword ptr [ebp + 0x10] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034128u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00034128: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003413Au); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0003413A: ;
    PUSH32(esp, eax);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034148u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00034148: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003415Au); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_0003415A: ;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034168u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00034168: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003417Cu); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0003417C: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    eax = esp + 4;
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000341C6u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_000341C6: ;
    esi = MEM32(ebp + 8);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000341D5u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000341D5: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000341E0
 * Original: 0x000341E0 - 0x00034273 (147 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000341E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000341E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003426B; /* je: equal / zero */

loc_000341ED: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000341F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000341F0u); } /* indirect call */
    }

loc_000341F6: ;
    ecx = MEM32(0x643844);
    eax = MEM32(eax + 0x1C);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    ebx = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00034218u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00034218: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00034226; /* jge: greater or equal (signed >=) */

loc_0003421F: ;
    eax = 0x6438B8;
    goto loc_0003422F;

loc_00034226: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0003422F: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 4) = edi;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0003426B; /* je: equal / zero */

loc_00034239: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00034243u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003423Du); } /* indirect call */
    }

loc_00034243: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3347D2A9);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0003425Fu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0003425F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003426B; /* jle: less or equal (signed <=) */

loc_00034263: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0003426B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034280
 * Original: 0x00034280 - 0x0003441B (411 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00034280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00034280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240C4B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xEC));
    esp = esp - 0xEC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000342AFu); RECOMP_ABI_CALL(0x00033F60u, sub_00033F60); /* call 0x00033F60 */

loc_000342AF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = MEM32(esp + 0x58);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    edx = MEM32(esp + 0x54);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = MEM32(esp + 0x50);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x10) = eax;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0xC) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3D0); /* mulss */
    MEM32(esp + 8) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = esp + 0x68;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003432Fu); RECOMP_ABI_CALL(0x000186F0u, sub_000186F0); /* call 0x000186F0 */

loc_0003432F: ;
    ecx = MEM32(esp + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0xFC) = 0;
    MEM32(esp + 0x7C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0003434B; /* je: equal / zero */

loc_00034346: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003434Bu); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0003434B: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x6C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003435B; /* je: equal / zero */

loc_00034356: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003435Bu); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_0003435B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003436Eu); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_0003436E: ;
    SET_LO8(eax, MEM8(esi + 0x239));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0003439F; /* jne: not equal / not zero */

loc_00034378: ;
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000343D1; /* je: equal / zero */

loc_00034382: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x244)));
    eax = eax - MEM32(esi + 0x244);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6921A0); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC340); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000343D1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC340)) */

loc_0003439F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x102);
    ecx = esp + 0x74;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000343B4u); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_000343B4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x239) = LO8(eax);
    edx = MEM32(esi + 0x248);
    eax = MEM32(edx);
    MEM32(esi + 0x244) = eax;

loc_000343D1: ;
    SET_LO8(ebx, MEM8(esi + 0x239));
    MEM32(esp + 0xFC) = 0xFFFFFFFFu;
    MEM32(esp + 0x68) = 0x2DC928;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000343F0: ;
    ecx = MEM32(esp + esi * 4 + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000343FD; /* je: equal / zero */

loc_000343F8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000343FDu); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_000343FD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000343F0; /* jl: less (signed <) */

loc_00034403: ;
    ecx = MEM32(esp + 0xF4);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00034420
 * Original: 0x00034420 - 0x00034498 (120 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034420: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240C68);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00034443u); RECOMP_ABI_CALL(0x000310E0u, sub_000310E0); /* call 0x000310E0 */

loc_00034443: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2DF570;
    ecx = esi + 0x1C4;
    MEM32(esp + 0x14) = edi;
    MEM32(esi + 0x1B4) = edi;
    MEM32(esi + 0x1B8) = edi;
    MEM32(esi + 0x1BC) = edi;
    PUSH32(esp, 0x0003446Cu); RECOMP_ABI_CALL(0x00140AE0u, sub_00140AE0); /* call 0x00140AE0 */

loc_0003446C: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00034474u); RECOMP_ABI_CALL(0x00030F90u, sub_00030F90); /* call 0x00030F90 */

loc_00034474: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x1B0) = edi;
    MEMF(esi + 0x1AC) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000344A0
 * Original: 0x000344A0 - 0x000344A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000344A0(void)
{

loc_000344A0: ;
    eax = 0xD;
    esp += 4; return; /* ret */

}

/**
 * sub_000344B0
 * Original: 0x000344B0 - 0x000344BD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000344B0(void)
{

loc_000344B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x1C0) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000344C0
 * Original: 0x000344C0 - 0x00034526 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000344C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000344C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240C68);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x000344E2u); RECOMP_ABI_CALL(0x000310E0u, sub_000310E0); /* call 0x000310E0 */

loc_000344E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2DF770;
    ecx = esi + 0x1C4;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x1B4) = eax;
    MEM32(esi + 0x1B8) = eax;
    MEM32(esi + 0x1BC) = eax;
    PUSH32(esp, 0x0003450Bu); RECOMP_ABI_CALL(0x00140AE0u, sub_00140AE0); /* call 0x00140AE0 */

loc_0003450B: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00034514u); RECOMP_ABI_CALL(0x00030F90u, sub_00030F90); /* call 0x00030F90 */

loc_00034514: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00034530
 * Original: 0x00034530 - 0x00034536 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034530(void)
{

loc_00034530: ;
    eax = 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00034540
 * Original: 0x00034540 - 0x00034547 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034540(void)
{

loc_00034540: ;
    eax = MEM32(ecx + 0x1E0);
    esp += 4; return; /* ret */

}

/**
 * sub_00034550
 * Original: 0x00034550 - 0x00034557 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034550(void)
{

loc_00034550: ;
    SET_LO8(eax, MEM8(ecx + 0x1C0));
    esp += 4; return; /* ret */

}

/**
 * sub_00034560
 * Original: 0x00034560 - 0x00034567 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034560(void)
{

loc_00034560: ;
    eax = ecx + 0x1C4;
    esp += 4; return; /* ret */

}

/**
 * sub_00034570
 * Original: 0x00034570 - 0x0003483C (716 bytes, 229 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00034570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x0003458Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034587u); } /* indirect call */
    }

loc_0003458D: ;
    edx = MEM32(esi);
    MEM8(esp + 0x13) = LO8(eax);
    eax = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0003459Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003459Au); } /* indirect call */
    }

loc_0003459D: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000345A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000345A6u); } /* indirect call */
    }

loc_000345A9: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034833; /* je: equal / zero */

loc_000345B5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000345BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000345B9u); } /* indirect call */
    }

loc_000345BC: ;
    edx = MEM32(0x30D88C);
    ecx = MEM32(0x30D888);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034800; /* jne: not equal / not zero */

loc_000345D2: ;
    PUSH32(esp, 0x2DFA58);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000345E3u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000345E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034601u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_00034601: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003460Bu); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0003460B: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034612u); RECOMP_ABI_CALL(0x0003EE20u, sub_0003EE20); /* call 0x0003EE20 */

loc_00034612: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000347CE; /* ja: above (unsigned >) */

loc_0003461B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3483C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00034622u) goto loc_00034622;
    if (_jt == 0x000346C6u) goto loc_000346C6;
    if (_jt == 0x00034759u) goto loc_00034759;
    if (_jt == 0x000347BBu) goto loc_000347BB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00034622: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034627u); RECOMP_ABI_CALL(0x0015EFE0u, sub_0015EFE0); /* call 0x0015EFE0 */

loc_00034627: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034641; /* je: equal / zero */

loc_0003462B: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034636u); RECOMP_ABI_CALL(0x0003EE20u, sub_0003EE20); /* call 0x0003EE20 */

loc_00034636: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003463Cu); RECOMP_ABI_CALL(0x00030F20u, sub_00030F20); /* call 0x00030F20 */

loc_0003463C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003464D;

loc_00034641: ;
    PUSH32(esp, 0x2DFA44);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003464Du); RECOMP_ABI_CALL(0x000336B0u, sub_000336B0); /* call 0x000336B0 */

loc_0003464D: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034654u); RECOMP_ABI_CALL(0x0003EE20u, sub_0003EE20); /* call 0x0003EE20 */

loc_00034654: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003465Au); RECOMP_ABI_CALL(0x00033790u, sub_00033790); /* call 0x00033790 */

loc_0003465A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7130720F);
    ecx = 0x3BF678;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003466Du); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_0003466D: ;
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x48) = 0;
    ecx = 0x3F;
    edi = esp + 0x49;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x4C;
    PUSH32(esp, 0x2DFA10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034696u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00034696: ;
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x361B90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000346A7u); RECOMP_ABI_CALL(0x001002D0u, sub_001002D0); /* call 0x001002D0 */

loc_000346A7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xD628D970u);

loc_000346AF: ;
    PUSH32(esp, esi);
    ecx = 0x37B2C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000346BAu); RECOMP_ABI_CALL(0x0014E7A0u, sub_0014E7A0); /* call 0x0014E7A0 */

loc_000346BA: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000346C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000346BEu); } /* indirect call */
    }

loc_000346C1: ;
    goto loc_000347CE;

loc_000346C6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000346CBu); RECOMP_ABI_CALL(0x0015EFE0u, sub_0015EFE0); /* call 0x0015EFE0 */

loc_000346CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000346E5; /* je: equal / zero */

loc_000346D1: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000346DAu); RECOMP_ABI_CALL(0x0003EE20u, sub_0003EE20); /* call 0x0003EE20 */

loc_000346DA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000346E0u); RECOMP_ABI_CALL(0x00030F20u, sub_00030F20); /* call 0x00030F20 */

loc_000346E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000346EF;

loc_000346E5: ;
    PUSH32(esp, 0x2DF9F4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000346EFu); RECOMP_ABI_CALL(0x000336B0u, sub_000336B0); /* call 0x000336B0 */

loc_000346EF: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000346F6u); RECOMP_ABI_CALL(0x0003EE20u, sub_0003EE20); /* call 0x0003EE20 */

loc_000346F6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000346FCu); RECOMP_ABI_CALL(0x00033790u, sub_00033790); /* call 0x00033790 */

loc_000346FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x5019688C);
    ecx = 0x3BF678;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003470Fu); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_0003470F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003474F; /* jne: not equal / not zero */

loc_00034713: ;
    MEM8(esp + 0x48) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 0x49;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edx = esp + 0x4C;
    PUSH32(esp, 0x2DF9C4);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003473Bu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0003473B: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x361B90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003474Cu); RECOMP_ABI_CALL(0x001002D0u, sub_001002D0); /* call 0x001002D0 */

loc_0003474C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003474F: ;
    PUSH32(esp, 0x94F9E717u);
    goto loc_000346AF;

loc_00034759: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003475Eu); RECOMP_ABI_CALL(0x0015EFE0u, sub_0015EFE0); /* call 0x0015EFE0 */

loc_0003475E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00034778; /* je: equal / zero */

loc_00034764: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003476Du); RECOMP_ABI_CALL(0x0003EE20u, sub_0003EE20); /* call 0x0003EE20 */

loc_0003476D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034773u); RECOMP_ABI_CALL(0x00030F20u, sub_00030F20); /* call 0x00030F20 */

loc_00034773: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034782;

loc_00034778: ;
    PUSH32(esp, 0x2DF9B4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034782u); RECOMP_ABI_CALL(0x000336B0u, sub_000336B0); /* call 0x000336B0 */

loc_00034782: ;
    ecx = 0xB;
    esi = 0x2DF988;
    edi = esp + 0x48;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x35;
    edi = esp + 0x74;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x361B90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000347AFu); RECOMP_ABI_CALL(0x001002D0u, sub_001002D0); /* call 0x001002D0 */

loc_000347AF: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000347B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000347B6u); } /* indirect call */
    }

loc_000347B9: ;
    goto loc_000347CE;

loc_000347BB: ;
    PUSH32(esp, 0x2DF978);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000347C7u); RECOMP_ABI_CALL(0x000336B0u, sub_000336B0); /* call 0x000336B0 */

loc_000347C7: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000347CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000347CBu); } /* indirect call */
    }

loc_000347CE: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000347D5u); RECOMP_ABI_CALL(0x00033890u, sub_00033890); /* call 0x00033890 */

loc_000347D5: ;
    eax = MEM32(ebx + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000347F3; /* je: equal / zero */

loc_000347DF: ;
    ecx = MEM32(ebx + 0x1B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = 0x323338;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000347F3u); RECOMP_ABI_CALL(0x00095E70u, sub_00095E70); /* call 0x00095E70 */

loc_000347F3: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000347FDu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000347FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034800: ;
    eax = MEM32(ebx + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003482F; /* je: equal / zero */

loc_0003480A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00034817u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034814u); } /* indirect call */
    }

loc_00034817: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00034824u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034821u); } /* indirect call */
    }

loc_00034824: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003482Cu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0003482C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003482F: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_00034833: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00034850
 * Original: 0x00034850 - 0x0003486E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034850: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00034858u); RECOMP_ABI_CALL(0x00034870u, sub_00034870); /* call 0x00034870 */

loc_00034858: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034868; /* je: equal / zero */

loc_0003485F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00034865u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00034865: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034868: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034870
 * Original: 0x00034870 - 0x00034875 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034870: ;
    g_seh_ebp = ebp; sub_000311A0(); return; /* tail jmp 0x000311A0 */

}

/**
 * sub_00034880
 * Original: 0x00034880 - 0x000348EC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034880: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00034888u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00034888: ;
    MEM32(esi) = 0x2DFA78;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000348E5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000348E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000348F0
 * Original: 0x000348F0 - 0x0003495C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000348F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000348F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000348F8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000348F8: ;
    MEM32(esi) = 0x2DFA8C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00034955u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00034955: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034960
 * Original: 0x00034960 - 0x000349CC (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034960: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00034968u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00034968: ;
    MEM32(esi) = 0x2DFAA0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000349C5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000349C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000349D0
 * Original: 0x000349D0 - 0x000349DC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000349D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000349D0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000349E0(); return; /* tail jmp 0x000349E0 */

}

/**
 * sub_000349E0
 * Original: 0x000349E0 - 0x00034A4C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000349E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000349E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034A47; /* je: equal / zero */

loc_000349F2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x20C);
    edx = MEM32(ecx + 0x210);
    MEM32(ecx + 0x214) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x210);
    edx = MEM32(ecx + 0x20C);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00034A2A; /* je: equal / zero */

loc_00034A24: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00034A2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034A28u); } /* indirect call */
    }

loc_00034A2A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFCC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFCC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000349F2; /* jne: not equal / not zero */

loc_00034A47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034A50
 * Original: 0x00034A50 - 0x00034ABC (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034AB7; /* je: equal / zero */

loc_00034A62: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x1B4);
    edx = MEM32(ecx + 0x1B8);
    MEM32(ecx + 0x1BC) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx + 0x1B4);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00034A9A; /* je: equal / zero */

loc_00034A94: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00034A9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034A98u); } /* indirect call */
    }

loc_00034A9A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFD70u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFD70u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034A62; /* jne: not equal / not zero */

loc_00034AB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034AC0
 * Original: 0x00034AC0 - 0x00034ACC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034AC0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00034A50(); return; /* tail jmp 0x00034A50 */

}

/**
 * sub_00034AD0
 * Original: 0x00034AD0 - 0x00034ADC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034AD0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00034AE0(); return; /* tail jmp 0x00034AE0 */

}

/**
 * sub_00034AE0
 * Original: 0x00034AE0 - 0x00034B4C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034B47; /* je: equal / zero */

loc_00034AF2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x1A0);
    edx = MEM32(ecx + 0x1A4);
    MEM32(ecx + 0x1A8) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x1A4);
    edx = MEM32(ecx + 0x1A0);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00034B2A; /* je: equal / zero */

loc_00034B24: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00034B2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034B28u); } /* indirect call */
    }

loc_00034B2A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFE50u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFE50u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034AF2; /* jne: not equal / not zero */

loc_00034B47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034B50
 * Original: 0x00034B50 - 0x00034B6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00034B58u); RECOMP_ABI_CALL(0x00034B70u, sub_00034B70); /* call 0x00034B70 */

loc_00034B58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034B68; /* je: equal / zero */

loc_00034B5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00034B65u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00034B65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034B68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034B70
 * Original: 0x00034B70 - 0x00034BCF (95 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034B70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240C96);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0x278;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x00034BA0u); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_00034BA0: ;
    ecx = esi + 0x1AC;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00034BB0u); RECOMP_ABI_CALL(0x001F7D00u, sub_001F7D00); /* call 0x001F7D00 */

loc_00034BB0: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00034BBFu); RECOMP_ABI_CALL(0x000311A0u, sub_000311A0); /* call 0x000311A0 */

loc_00034BBF: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00034BD0
 * Original: 0x00034BD0 - 0x0003584D (3197 bytes, 847 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00034BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00034BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240CAB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xAB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xAB8));
    esp = esp - 0xAB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x9C) = 0x2DFAC8;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    MEM32(esp + 0xAD0) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00034C1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034C1Au); } /* indirect call */
    }

loc_00034C1D: ;
    edx = MEM32(ebx);
    eax = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00034C29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034C26u); } /* indirect call */
    }

loc_00034C29: ;
    edx = MEM32(ebx);
    eax = esp + 0x6C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00034C35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034C32u); } /* indirect call */
    }

loc_00034C35: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x25C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x260) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x264) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C4); PUSH32(esp, 0x00034C5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034C54u); } /* indirect call */
    }

loc_00034C5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x17) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000357F8; /* je: equal / zero */

loc_00034C66: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1D0)); /* movss */
    eax = MEM32(ebx);
    ecx = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00034C7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034C78u); } /* indirect call */
    }

loc_00034C7B: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00034CB6; /* jne: not equal / not zero */

loc_00034C8D: ;
    eax = MEM32(ebx + 0x288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00034CBC; /* jne: not equal / not zero */

loc_00034C9C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1D4); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    goto loc_00034CE9;

loc_00034CB6: ;
    MEM32(esp + 0x20) = edi;
    goto loc_00034CEF;

loc_00034CBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00034CCA; /* jne: not equal / not zero */

loc_00034CC0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1D8)); /* movss */
    goto loc_00034CE9;

loc_00034CCA: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00034CD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034CCEu); } /* indirect call */
    }

loc_00034CD1: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DD414)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00034CEF; /* jbe: below or equal (unsigned <=) */

loc_00034CE1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1D4)); /* movss */

loc_00034CE9: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00034CEF: ;
    ecx = esp + 0x2B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034CFBu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00034CFB: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x00034D05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034CFFu); } /* indirect call */
    }

loc_00034D05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00034D2D; /* je: equal / zero */

loc_00034D09: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2DFAB4);
    ecx = esp + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034D1Cu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00034D1C: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x2BC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034D2Du); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00034D2D: ;
    _fa = (uint32_t)(MEM32(esi + 0x1F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1F0), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x24) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00035610; /* jle: less or equal (signed <=) */

loc_00034D3D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD3DC); /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */

loc_00034D51: ;
    esi = MEM32(esp + 0x18);
    edx = esp + 0x230;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034D64u); RECOMP_ABI_CALL(0x00033F60u, sub_00033F60); /* call 0x00033F60 */

loc_00034D64: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x238;
    PUSH32(esp, edx);
    eax = esp + 0x1BC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034D83u); RECOMP_ABI_CALL(0x00033A70u, sub_00033A70); /* call 0x00033A70 */

loc_00034D83: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    edx = esp + 0x1B4;
    PUSH32(esp, edx);
    eax = esp + 0x1F8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034D9Fu); RECOMP_ABI_CALL(0x000340B0u, sub_000340B0); /* call 0x000340B0 */

loc_00034D9F: ;
    eax = MEM32(esi + 0x1A4);
    PUSH32(esp, 0);
    ecx = esp + 0x2BC;
    PUSH32(esp, ecx);
    edx = esp + 0x1F8;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034DC4u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_00034DC4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00034EC1; /* je: equal / zero */

loc_00034DD2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00034DD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034DD6u); } /* indirect call */
    }

loc_00034DD9: ;
    edx = MEM32(0x30C0D4);
    ecx = MEM32(0x30C0D0);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00034EC1; /* jne: not equal / not zero */

loc_00034DEF: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x28);
    MEM32(esi + 0x1C4) = eax;
    edx = MEM32(ebx);
    ecx = ebx;
    edi = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00034E0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034E05u); } /* indirect call */
    }

loc_00034E0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00034F67; /* je: equal / zero */

loc_00034E13: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00034E35; /* je: equal / zero */

loc_00034E1A: ;
    ecx = MEM32(eax + 0x30);
    MEM32(esi + 0x1C8) = ecx;
    edx = MEM32(eax + 0x34);
    MEM32(esi + 0x1CC) = edx;
    eax = MEM32(eax + 0x38);
    MEM32(esi + 0x1D0) = eax;

loc_00034E35: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00034E3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034E39u); } /* indirect call */
    }

loc_00034E3C: ;
    edx = MEM32(0x30D888);
    esi = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & MEM32(0x30D88C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x1A0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edx));
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE894A379u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE894A379u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00034EB5; /* jne: not equal / not zero */

loc_00034E66: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00034EB5; /* je: equal / zero */

loc_00034E6A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x00034E74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034E6Eu); } /* indirect call */
    }

loc_00034E74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00034EB5; /* je: equal / zero */

loc_00034E78: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x00034E82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034E7Cu); } /* indirect call */
    }

loc_00034E82: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00034E99; /* je: equal / zero */

loc_00034E88: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x00034E92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034E8Cu); } /* indirect call */
    }

loc_00034E92: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00034EB5; /* jne: not equal / not zero */

loc_00034E99: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x174)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DBED0); /* mulss */
    MEMF(eax + 0x174) = xmm0.f[0]; /* movss */

loc_00034EB5: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0x28);
    goto loc_00034EC5;

loc_00034EC1: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00034EC5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(esp + 0x18);
    MEM32(esi + 0x240) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000355C8; /* je: equal / zero */

loc_00034ED7: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00034EDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034EDBu); } /* indirect call */
    }

loc_00034EDE: ;
    edx = MEM32(0x30C0F4);
    ecx = MEM32(0x30C0F0);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(edi);
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00035357; /* jne: not equal / not zero */

loc_00034EF8: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00034EFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034EF8u); } /* indirect call */
    }

loc_00034EFB: ;
    ecx = MEM32(0x30C0F4);
    esi = eax;
    eax = MEM32(0x30C0F0);
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034F1Cu); RECOMP_ABI_CALL(0x000195F0u, sub_000195F0); /* call 0x000195F0 */

loc_00034F1C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034F23u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00034F23: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034F2Au); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_00034F2A: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034F35u); RECOMP_ABI_CALL(0x0001A430u, sub_0001A430); /* call 0x0001A430 */

loc_00034F35: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00034F44; /* jle: less or equal (signed <=) */

loc_00034F3D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x2F8) = MEM8(esi + 0x2F8) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x2F8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00034F44: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebx);
    edi = MEM32(edx + 0x1A0);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x00034F58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034F52u); } /* indirect call */
    }

loc_00034F58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00034F7D; /* je: equal / zero */

loc_00034F5C: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034F65u); RECOMP_ABI_CALL(0x00016930u, sub_00016930); /* call 0x00016930 */

loc_00034F65: ;
    goto loc_00034FB4;

loc_00034F67: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 8);
    MEMF(esi + 0x1AC) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 0x28);
    goto loc_00034EC5;

loc_00034F7D: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00034F84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034F81u); } /* indirect call */
    }

loc_00034F84: ;
    edx = MEM32(0x30C320);
    ecx = MEM32(0x30C31C);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00034FBB; /* jne: not equal / not zero */

loc_00034F96: ;
    ecx = MEM32(ebx + 0x278);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00034FBB; /* je: equal / zero */

loc_00034FA0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x00034FA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034FA2u); } /* indirect call */
    }

loc_00034FA8: ;
    SET_LO8(eax, MEM8(eax + 0x8D0));
    if (1) _cf = (int)(((LO8(eax)) >> ((1) - 1)) & 1);
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00034FBB; /* je: equal / zero */

loc_00034FB4: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034FBBu); RECOMP_ABI_CALL(0x000168E0u, sub_000168E0); /* call 0x000168E0 */

loc_00034FBB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00035029; /* jne: not equal / not zero */

loc_00034FC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035029; /* je: equal / zero */

loc_00034FC4: ;
    edi = MEM32(ebp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00034FD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034FCCu); } /* indirect call */
    }

loc_00034FD2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034FD9u); RECOMP_ABI_CALL(0x001EFC90u, sub_001EFC90); /* call 0x001EFC90 */

loc_00034FD9: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00034FE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034FDDu); } /* indirect call */
    }

loc_00034FE0: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0003502C; /* jne: not equal / not zero */

loc_00034FF2: ;
    ecx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1FC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00035017; /* jnp: not parity */

loc_0003500B: ;
    ecx = MEM32(ecx + 0x1FC);
    MEM32(esi + 0x1B8) = ecx;

loc_00035017: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x364); PUSH32(esp, 0x00035021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003501Bu); } /* indirect call */
    }

loc_00035021: ;
    MEMF(esi + 0x1C0) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0003502C;

loc_00035029: ;
    edi = MEM32(ebp + 0x10);

loc_0003502C: ;
    eax = MEM32(esp + 0x18);
    SET_LO8(ecx, MEM8(eax + 0x1E6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003517D; /* je: equal / zero */

loc_0003503E: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0003517D; /* jge: greater or equal (signed >=) */

loc_00035049: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035055; /* je: equal / zero */

loc_00035050: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003505C;

loc_00035055: ;
    eax = esp + 0x1E0;

loc_0003505C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00035078; /* je: equal / zero */

loc_00035074: ;
    eax = edi;
    goto loc_0003508C;

loc_00035078: ;
    ecx = esp + 0x270;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035089u); RECOMP_ABI_CALL(0x00033F60u, sub_00033F60); /* call 0x00033F60 */

loc_00035089: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003508C: ;
    edx = MEM32(eax);
    MEM32(esp + 0x54) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x58) = ecx;
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x5C) = edx;
    if (CMP_A(_fa, _fb)) goto loc_0003514B; /* ja: above (unsigned >) */

loc_000350B3: ;
    ecx = ZX8(MEM8(eax + 0x35864));
    { uint32_t _jt = MEM32(ecx * 4 + 0x35850); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000350C1u) goto loc_000350C1;
    if (_jt == 0x00035106u) goto loc_00035106;
    if (_jt == 0x00035129u) goto loc_00035129;
    if (_jt == 0x0003514Bu) goto loc_0003514B;
    if (_jt == 0x0003517Du) goto loc_0003517D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000350C1: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x000350CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000350C5u); } /* indirect call */
    }

loc_000350CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000350E0; /* je: equal / zero */

loc_000350CF: ;
    eax = esp + 0x28;
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000350DEu); RECOMP_ABI_CALL(0x000A6890u, sub_000A6890); /* call 0x000A6890 */

loc_000350DE: ;
    goto loc_000350EF;

loc_000350E0: ;
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000350EFu); RECOMP_ABI_CALL(0x000A68D0u, sub_000A68D0); /* call 0x000A68D0 */

loc_000350EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x28;
    PUSH32(esp, 0x41000000);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035101u); RECOMP_ABI_CALL(0x000B2180u, sub_000B2180); /* call 0x000B2180 */

loc_00035101: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003517D;

loc_00035106: ;
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035115u); RECOMP_ABI_CALL(0x000A68D0u, sub_000A68D0); /* call 0x000A68D0 */

loc_00035115: ;
    eax = esp + 0x30;
    PUSH32(esp, 0x41000000);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035124u); RECOMP_ABI_CALL(0x000B2180u, sub_000B2180); /* call 0x000B2180 */

loc_00035124: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003517D;

loc_00035129: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003513Au); RECOMP_ABI_CALL(0x000A6D90u, sub_000A6D90); /* call 0x000A6D90 */

loc_0003513A: ;
    edx = esp + 0x34;
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035149u); RECOMP_ABI_CALL(0x000A68B0u, sub_000A68B0); /* call 0x000A68B0 */

loc_00035149: ;
    goto loc_0003516B;

loc_0003514B: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003515Cu); RECOMP_ABI_CALL(0x000A6D90u, sub_000A6D90); /* call 0x000A6D90 */

loc_0003515C: ;
    edx = esp + 0x34;
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003516Bu); RECOMP_ABI_CALL(0x000A6890u, sub_000A6890); /* call 0x000A6890 */

loc_0003516B: ;
    eax = esp + 0x3C;
    PUSH32(esp, 0x40400000);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003517Au); RECOMP_ABI_CALL(0x000B2180u, sub_000B2180); /* call 0x000B2180 */

loc_0003517A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003517D: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003518Eu); RECOMP_ABI_CALL(0x000341E0u, sub_000341E0); /* call 0x000341E0 */

loc_0003518E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035316; /* je: equal / zero */

loc_00035196: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00035316; /* jge: greater or equal (signed >=) */

loc_000351A1: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000351A8u); RECOMP_ABI_CALL(0x00011590u, sub_00011590); /* call 0x00011590 */

loc_000351A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035215; /* je: equal / zero */

loc_000351AC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3CC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, 0);
    edx = esp + 0x88;
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xBC)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0xD8;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003520Du); RECOMP_ABI_CALL(0x000ADE60u, sub_000ADE60); /* call 0x000ADE60 */

loc_0003520D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00035316;

loc_00035215: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3CC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    edx = MEM32(ebx);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    eax = esp + 0x198;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00035265u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035262u); } /* indirect call */
    }

loc_00035265: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esp + 0xDC;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x54); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x58); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x5C); /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000352CDu); RECOMP_ABI_CALL(0x000ADEF0u, sub_000ADEF0); /* call 0x000ADEF0 */

loc_000352CD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000352D5u); RECOMP_ABI_CALL(0x00011E50u, sub_00011E50); /* call 0x00011E50 */

loc_000352D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00035316; /* je: equal / zero */

loc_000352D9: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x000352E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000352DDu); } /* indirect call */
    }

loc_000352E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035316; /* je: equal / zero */

loc_000352E7: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3BAF5E3);
    eax = esp + 0x184;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000352FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000352F8u); } /* indirect call */
    }

loc_000352FB: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x194;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0003530Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035308u); } /* indirect call */
    }

loc_0003530B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035313u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00035313: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00035316: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000355F5; /* je: equal / zero */

loc_00035322: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x0003532Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035326u); } /* indirect call */
    }

loc_0003532C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000355F5; /* je: equal / zero */

loc_00035334: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000355F5; /* je: equal / zero */

loc_0003533C: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE894A379u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A0), 0xE894A379u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000355F5; /* jne: not equal / not zero */

loc_0003534C: ;
    MEM32(0x3DC94C) = MEM32(0x3DC94C) + 1;
    _fa = (uint32_t)(MEM32(0x3DC94C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000355F5;

loc_00035357: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0003535Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035357u); } /* indirect call */
    }

loc_0003535A: ;
    edx = MEM32(0x30C124);
    ecx = MEM32(0x30C120);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000355E7; /* je: equal / zero */

loc_00035370: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00035377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035374u); } /* indirect call */
    }

loc_00035377: ;
    edx = MEM32(0x30C134);
    ecx = MEM32(0x30C130);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000355E7; /* je: equal / zero */

loc_0003538D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00035394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035391u); } /* indirect call */
    }

loc_00035394: ;
    edx = MEM32(0x30C144);
    ecx = MEM32(0x30C140);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0003549A; /* jne: not equal / not zero */

loc_000353AC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000353B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000353AEu); } /* indirect call */
    }

loc_000353B1: ;
    ecx = MEM32(0x30C144);
    esi = eax;
    eax = MEM32(0x30C140);
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000353D1u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000353D1: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000353D8u); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_000353D8: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DDC40)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x60;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0x134;
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003543Eu); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_0003543E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    edx = MEM32(esi);
    MEMF(esp + 0x160) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x164) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    eax = esp + 0x130;
    MEMF(esp + 0x168) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x170) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0003548Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035488u); } /* indirect call */
    }

loc_0003548B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x00035495u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003548Fu); } /* indirect call */
    }

loc_00035495: ;
    goto loc_000355F5;

loc_0003549A: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0003549Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003549Cu); } /* indirect call */
    }

loc_0003549F: ;
    edx = MEM32(0x30C154);
    ecx = MEM32(0x30C150);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000355C8; /* jne: not equal / not zero */

loc_000354B5: ;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0xF4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000354C6u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000354C6: ;
    ecx = esp + 0x1A4;
    PUSH32(esp, ecx);
    edx = esp + 0xEC;
    PUSH32(esp, edx);
    eax = esp + 0x17C;
    PUSH32(esp, eax);
    ecx = 0x4140E8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000354E8u); RECOMP_ABI_CALL(0x000310A0u, sub_000310A0); /* call 0x000310A0 */

loc_000354E8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000354EFu); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_000354EF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000354F6u); RECOMP_ABI_CALL(0x001F8750u, sub_001F8750); /* call 0x001F8750 */

loc_000354F6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    ecx = esp + 0x90;
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    PUSH32(esp, ecx);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003553Au); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0003553A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035544u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00035544: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003554Bu); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_0003554B: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC084)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    eax = MEM32(edi);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x40); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x2DC8DC); /* addss */
    ecx = esp + 0xF0;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 0x120) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x128) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x12C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x130) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000355C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000355C3u); } /* indirect call */
    }

loc_000355C6: ;
    goto loc_000355F5;

loc_000355C8: ;
    PUSH32(esp, edi);
    ecx = 0x30C10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000355D3u); RECOMP_ABI_CALL(0x00031050u, sub_00031050); /* call 0x00031050 */

loc_000355D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000355F5; /* je: equal / zero */

loc_000355D7: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000355DEu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000355DE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000355E5u); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_000355E5: ;
    goto loc_000355F5;

loc_000355E7: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xB0)) >> 32) & 1);
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000355F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000355F2u); } /* indirect call */
    }

loc_000355F5: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x1F0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00034D51; /* jl: less (signed <) */

loc_00035610: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x0003561Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035614u); } /* indirect call */
    }

loc_0003561A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003565E; /* je: equal / zero */

loc_0003561E: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x00035628u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035622u); } /* indirect call */
    }

loc_00035628: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_00035643; /* je: equal / zero */

loc_00035630: ;
    SET_LO8(eax, MEM8(esi + 0x238));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00035643; /* jne: not equal / not zero */

loc_0003563A: ;
    SET_LO8(eax, MEM8(0x3BF670));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035662; /* je: equal / zero */

loc_00035643: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0003564Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035647u); } /* indirect call */
    }

loc_0003564A: ;
    edx = MEM32(0x30D374);
    ecx = MEM32(0x30D370);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0003567C; /* jne: not equal / not zero */

loc_0003565C: ;
    goto loc_00035662;

loc_0003565E: ;
    esi = MEM32(esp + 0x18);

loc_00035662: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A0), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00035676; /* je: equal / zero */

loc_00035670: ;
    eax = MEM32(esi + 0x1F0);

loc_00035676: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(esi + 0x234)) < (uint32_t)(eax));
    MEM32(esi + 0x234) = MEM32(esi + 0x234) - eax;
    _fa = (uint32_t)(MEM32(esi + 0x234)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0003567C: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000356C8; /* je: equal / zero */

loc_00035683: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x0003568Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035685u); } /* indirect call */
    }

loc_0003568B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000356C8; /* je: equal / zero */

loc_0003568F: ;
    PUSH32(esp, 0xAD34BC4Du);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003569Bu); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_0003569B: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000356C8; /* jbe: below or equal (unsigned <=) */

loc_000356A9: ;
    ecx = MEM32(esi + 0x1E8);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000356C8; /* jne: not equal / not zero */

loc_000356B7: ;
    PUSH32(esp, 0xBA9B074Du);
    PUSH32(esp, 0);
    ecx = 0x361B90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000356C8u); RECOMP_ABI_CALL(0x00108F00u, sub_00108F00); /* call 0x00108F00 */

loc_000356C8: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000356D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000356CCu); } /* indirect call */
    }

loc_000356D2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x34) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000356F6; /* je: equal / zero */

loc_000356DC: ;
    eax = MEM32(edi);
    ecx = esi;
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000356E9u); RECOMP_ABI_CALL(0x00032790u, sub_00032790); /* call 0x00032790 */

loc_000356E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x000356F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000356F0u); } /* indirect call */
    }

loc_000356F6: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x104)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035713; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00035706: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x108)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035761; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00035713: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003571F; /* je: equal / zero */

loc_00035717: ;
    edi = MEM32(edi + 0xF4);
    goto loc_00035721;

loc_0003571F: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00035721: ;
    edx = MEM32(0x2E6D34);
    eax = MEM32(esi + 0x108);
    ecx = MEM32(esi + 0x104);
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0x3F);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x44) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035754u); RECOMP_ABI_CALL(0x000972B0u, sub_000972B0); /* call 0x000972B0 */

loc_00035754: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003575Eu); RECOMP_ABI_CALL(0x000970B0u, sub_000970B0); /* call 0x000970B0 */

loc_0003575E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00035761: ;
    eax = MEM32(esi + 0x24C);
    ecx = esi + 0x24C;
    MEMF(esi + 0x228) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00035778u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035775u); } /* indirect call */
    }

loc_00035778: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0003577Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003577Cu); } /* indirect call */
    }

loc_0003577F: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00035789u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035783u); } /* indirect call */
    }

loc_00035789: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035832; /* je: equal / zero */

loc_00035791: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x0003579Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035795u); } /* indirect call */
    }

loc_0003579B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x000357A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003579Fu); } /* indirect call */
    }

loc_000357A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035832; /* je: equal / zero */

loc_000357AD: ;
    eax = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000357E2; /* ja: above (unsigned >) */

loc_000357B8: ;
    eax = ZX8(MEM8(eax + 0x35888));
    { uint32_t _jt = MEM32(eax * 4 + 0x35874); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000357C6u) goto loc_000357C6;
    if (_jt == 0x000357CDu) goto loc_000357CD;
    if (_jt == 0x000357D4u) goto loc_000357D4;
    if (_jt == 0x000357DBu) goto loc_000357DB;
    if (_jt == 0x000357E2u) goto loc_000357E2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000357C6: ;
    eax = 4;
    goto loc_000357E4;

loc_000357CD: ;
    eax = 1;
    goto loc_000357E4;

loc_000357D4: ;
    eax = 2;
    goto loc_000357E4;

loc_000357DB: ;
    eax = 3;
    goto loc_000357E4;

loc_000357E2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000357E4: ;
    ecx = MEM32(esi + 0x1CC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x323AD8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000357F6u); RECOMP_ABI_CALL(0x000A47D0u, sub_000A47D0); /* call 0x000A47D0 */

loc_000357F6: ;
    goto loc_00035832;

loc_000357F8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x00035802u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000357FCu); } /* indirect call */
    }

loc_00035802: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00035832; /* jne: not equal / not zero */

loc_00035806: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20C); PUSH32(esp, 0x00035811u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003580Bu); } /* indirect call */
    }

loc_00035811: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00035832; /* jne: not equal / not zero */

loc_00035815: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x204); PUSH32(esp, 0x0003581Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035819u); } /* indirect call */
    }

loc_0003581F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00035832; /* jne: not equal / not zero */

loc_00035823: ;
    eax = MEM32(esi + 0x24C);
    ecx = esi + 0x24C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00035832u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003582Fu); } /* indirect call */
    }

loc_00035832: ;
    ecx = MEM32(esp + 0xAC4);
    SET_LO8(eax, MEM8(esp + 0x17));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000358A0
 * Original: 0x000358A0 - 0x000358EF (79 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000358A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000358A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240C68);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0x1C4;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000358D0u); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_000358D0: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000358DFu); RECOMP_ABI_CALL(0x000311A0u, sub_000311A0); /* call 0x000311A0 */

loc_000358DF: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000358F0
 * Original: 0x000358F0 - 0x0003590E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000358F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000358F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000358F8u); RECOMP_ABI_CALL(0x000358A0u, sub_000358A0); /* call 0x000358A0 */

loc_000358F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00035908; /* je: equal / zero */

loc_000358FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00035905u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00035905: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00035908: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00035910
 * Original: 0x00035910 - 0x0003596F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035910: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x340);
    PUSH32(esp, 0x00035924u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00035924: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035934; /* je: equal / zero */

loc_0003592B: ;
    ecx = eax;
    PUSH32(esp, 0x00035932u); RECOMP_ABI_CALL(0x00033C90u, sub_00033C90); /* call 0x00033C90 */

loc_00035932: ;
    goto loc_00035936;

loc_00035934: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00035936: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x20C;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x340) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x340;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035970
 * Original: 0x00035970 - 0x000359BA (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035970: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x20C;
    PUSH32(esp, edi);
    MEM32(ecx + 0x74) = MEM32(ecx + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = 0;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    MEM32(esi) = edi;
    esi = MEM32(ecx + 0x84);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000359C0
 * Original: 0x000359C0 - 0x00035A1F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000359C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000359C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290);
    PUSH32(esp, 0x000359D4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000359D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000359E4; /* je: equal / zero */

loc_000359DB: ;
    ecx = eax;
    PUSH32(esp, 0x000359E2u); RECOMP_ABI_CALL(0x00034420u, sub_00034420); /* call 0x00034420 */

loc_000359E2: ;
    goto loc_000359E6;

loc_000359E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000359E6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x1B4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x290) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x290;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035A20
 * Original: 0x00035A20 - 0x00035A7F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290);
    PUSH32(esp, 0x00035A34u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00035A34: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035A44; /* je: equal / zero */

loc_00035A3B: ;
    ecx = eax;
    PUSH32(esp, 0x00035A42u); RECOMP_ABI_CALL(0x000344C0u, sub_000344C0); /* call 0x000344C0 */

loc_00035A42: ;
    goto loc_00035A46;

loc_00035A44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00035A46: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x1B4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x290) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x290;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035A80
 * Original: 0x00035A80 - 0x00035ACA (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035A80: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x1B4;
    PUSH32(esp, edi);
    MEM32(ecx + 0x74) = MEM32(ecx + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = 0;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    MEM32(esi) = edi;
    esi = MEM32(ecx + 0x84);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00035AD0
 * Original: 0x00035AD0 - 0x00035B2F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1B0);
    PUSH32(esp, 0x00035AE4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00035AE4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035AF4; /* je: equal / zero */

loc_00035AEB: ;
    ecx = eax;
    PUSH32(esp, 0x00035AF2u); RECOMP_ABI_CALL(0x00033970u, sub_00033970); /* call 0x00033970 */

loc_00035AF2: ;
    goto loc_00035AF6;

loc_00035AF4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00035AF6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x1A0;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1B0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035B30
 * Original: 0x00035B30 - 0x00035B7A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035B30: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x1A0;
    PUSH32(esp, edi);
    MEM32(ecx + 0x74) = MEM32(ecx + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = 0;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    MEM32(esi) = edi;
    esi = MEM32(ecx + 0x84);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00035B80
 * Original: 0x00035B80 - 0x00035BF4 (116 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035B80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x16A0497);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00035B92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035B8Fu); } /* indirect call */
    }

loc_00035B92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035BB4; /* je: equal / zero */

loc_00035B96: ;
    ecx = MEM32(0x3172D0);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035BB4; /* je: equal / zero */

loc_00035BA3: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035BD1; /* je: equal / zero */

loc_00035BAB: ;
    ecx = MEM32(ecx);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035BA3; /* jne: not equal / not zero */

loc_00035BB4: ;
    ecx = 0x317268;
    PUSH32(esp, 0x00035BBEu); RECOMP_ABI_CALL(0x00035910u, sub_00035910); /* call 0x00035910 */

loc_00035BBE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035BCC; /* je: equal / zero */

loc_00035BC4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00035BCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035BC9u); } /* indirect call */
    }

loc_00035BCC: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00035BD1: ;
    PUSH32(esp, edi);
    ecx = 0x317268;
    PUSH32(esp, 0x00035BDCu); RECOMP_ABI_CALL(0x00035910u, sub_00035910); /* call 0x00035910 */

loc_00035BDC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035BEE; /* je: equal / zero */

loc_00035BE2: ;
    edx = MEM32(edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x210); PUSH32(esp, 0x00035BEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035BE8u); } /* indirect call */
    }

loc_00035BEE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00035C00
 * Original: 0x00035C00 - 0x00035CC7 (199 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00035C08u); RECOMP_ABI_CALL(0x00031450u, sub_00031450); /* call 0x00031450 */

loc_00035C08: ;
    ecx = esi;
    PUSH32(esp, 0x00035C0Fu); RECOMP_ABI_CALL(0x00032B00u, sub_00032B00); /* call 0x00032B00 */

loc_00035C0F: ;
    eax = MEM32(esi + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E73B36A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7E73B36A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00035C5F; /* ja: above (unsigned >) */

loc_00035C1C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00035C58; /* je: equal / zero */

loc_00035C1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C97CB4F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C97CB4F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00035C4A; /* ja: above (unsigned >) */

loc_00035C25: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00035C43; /* je: equal / zero */

loc_00035C27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x181D2637) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x181D2637 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035C3C; /* je: equal / zero */

loc_00035C2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F14C63C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F14C63C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035C9F; /* jne: not equal / not zero */

loc_00035C35: ;
    PUSH32(esp, 0xE601AE2Bu);
    goto loc_00035C97;

loc_00035C3C: ;
    PUSH32(esp, 0x7B90D373);
    goto loc_00035C97;

loc_00035C43: ;
    PUSH32(esp, 0xD73D9F07u);
    goto loc_00035C97;

loc_00035C4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DE57FD4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6DE57FD4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035C9F; /* jne: not equal / not zero */

loc_00035C51: ;
    PUSH32(esp, 0xB7660F17u);
    goto loc_00035C97;

loc_00035C58: ;
    PUSH32(esp, 0xD5626CBAu);
    goto loc_00035C97;

loc_00035C5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEB74E1BAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEB74E1BAu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00035C8B; /* ja: above (unsigned >) */

loc_00035C66: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00035C84; /* je: equal / zero */

loc_00035C68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A729F81u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A729F81u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035C7D; /* je: equal / zero */

loc_00035C6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDD98A4EFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDD98A4EFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035C9F; /* jne: not equal / not zero */

loc_00035C76: ;
    PUSH32(esp, 0xB7660F17u);
    goto loc_00035C97;

loc_00035C7D: ;
    PUSH32(esp, 0x3E7F2C33);
    goto loc_00035C97;

loc_00035C84: ;
    PUSH32(esp, 0xE691B192u);
    goto loc_00035C97;

loc_00035C8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF7058BCAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF7058BCAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035C9F; /* jne: not equal / not zero */

loc_00035C92: ;
    PUSH32(esp, 0x36C022D9);

loc_00035C97: ;
    PUSH32(esp, 0x00035C9Cu); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_00035C9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00035C9F: ;
    PUSH32(esp, esi);
    ecx = 0x317268;
    PUSH32(esp, 0x00035CAAu); RECOMP_ABI_CALL(0x00035970u, sub_00035970); /* call 0x00035970 */

loc_00035CAA: ;
    PUSH32(esp, 0);
    ecx = esi + 0x1AC;
    PUSH32(esp, 0x00035CB7u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00035CB7: ;
    eax = MEM32(esi + 0x24C);
    ecx = esi + 0x24C;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00035CD0
 * Original: 0x00035CD0 - 0x00035CF1 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035CD0: ;
    PUSH32(esp, esi);
    ecx = 0x3172F0;
    PUSH32(esp, 0x00035CDBu); RECOMP_ABI_CALL(0x000359C0u, sub_000359C0); /* call 0x000359C0 */

loc_00035CDB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035CED; /* je: equal / zero */

loc_00035CE1: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00035CEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035CEAu); } /* indirect call */
    }

loc_00035CED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035D00
 * Original: 0x00035D00 - 0x00035D15 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035D00(void)
{

loc_00035D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00035D08u); RECOMP_ABI_CALL(0x00031450u, sub_00031450); /* call 0x00031450 */

loc_00035D08: ;
    PUSH32(esp, esi);
    ecx = 0x3172F0;
    PUSH32(esp, 0x00035D13u); RECOMP_ABI_CALL(0x00035A80u, sub_00035A80); /* call 0x00035A80 */

loc_00035D13: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035D20
 * Original: 0x00035D20 - 0x00035D62 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035D20: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8D39BDE6u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00035D31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035D2Eu); } /* indirect call */
    }

loc_00035D31: ;
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x00035D3Cu); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_00035D3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035D5E; /* jne: not equal / not zero */

loc_00035D40: ;
    PUSH32(esp, esi);
    ecx = 0x317378;
    PUSH32(esp, 0x00035D4Bu); RECOMP_ABI_CALL(0x00035A20u, sub_00035A20); /* call 0x00035A20 */

loc_00035D4B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035D59; /* je: equal / zero */

loc_00035D51: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00035D59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035D56u); } /* indirect call */
    }

loc_00035D59: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00035D5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035D70
 * Original: 0x00035D70 - 0x00035D85 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035D70(void)
{

loc_00035D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00035D78u); RECOMP_ABI_CALL(0x00031450u, sub_00031450); /* call 0x00031450 */

loc_00035D78: ;
    PUSH32(esp, esi);
    ecx = 0x317378;
    PUSH32(esp, 0x00035D83u); RECOMP_ABI_CALL(0x00035A80u, sub_00035A80); /* call 0x00035A80 */

loc_00035D83: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035D90
 * Original: 0x00035D90 - 0x00035DB1 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035D90: ;
    PUSH32(esp, esi);
    ecx = 0x317400;
    PUSH32(esp, 0x00035D9Bu); RECOMP_ABI_CALL(0x00035AD0u, sub_00035AD0); /* call 0x00035AD0 */

loc_00035D9B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035DAD; /* je: equal / zero */

loc_00035DA1: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00035DADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035DAAu); } /* indirect call */
    }

loc_00035DAD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035DC0
 * Original: 0x00035DC0 - 0x00035DD5 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035DC0(void)
{

loc_00035DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00035DC8u); RECOMP_ABI_CALL(0x00031450u, sub_00031450); /* call 0x00031450 */

loc_00035DC8: ;
    PUSH32(esp, esi);
    ecx = 0x317400;
    PUSH32(esp, 0x00035DD3u); RECOMP_ABI_CALL(0x00035B30u, sub_00035B30); /* call 0x00035B30 */

loc_00035DD3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035DE0
 * Original: 0x00035DE0 - 0x00035DEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035DE0: ;
    MEM32(ecx) = 0x2DFAD8;
    g_seh_ebp = ebp; sub_00011070(); return; /* tail jmp 0x00011070 */

}

/**
 * sub_00035DF0
 * Original: 0x00035DF0 - 0x00035E0B (27 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035DF0(void)
{

loc_00035DF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE964)); /* movss */
    MEM32(0x31750C) = 0;
    MEMF(0x317508) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00035E10
 * Original: 0x00035E10 - 0x00035E15 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035E10: ;
    g_seh_ebp = ebp; sub_00087D20(); return; /* tail jmp 0x00087D20 */

}

/**
 * sub_00035E20
 * Original: 0x00035E20 - 0x00035E62 (66 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035E20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x40A00000);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00035E4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00035E4Bu); } /* indirect call */
    }

loc_00035E4E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00035E58u); RECOMP_ABI_CALL(0x00011A30u, sub_00011A30); /* call 0x00011A30 */

loc_00035E58: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00035E70
 * Original: 0x00035E70 - 0x00035E93 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035E70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM8(ecx + 0x24) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00035EA0
 * Original: 0x00035EA0 - 0x00035EC2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035EA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM8(ecx + 0x24) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00035ED0
 * Original: 0x00035ED0 - 0x00035F6B (155 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035ED0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00035F67; /* je: equal / zero */

loc_00035EDF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7FF);
    ebx = esi + 0x2008;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035EF2u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00035EF2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00035F66; /* jl: less (signed <) */

loc_00035EF9: ;
    MEM32(esi + eax * 4 + 0x2008) = 0;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = eax + 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 0x7FF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x2008);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035F65; /* je: equal / zero */

loc_00035F1E: ;
    edi = edi;

loc_00035F20: ;
    eax = MEM32(esi + edi * 4 + 0x2008);
    MEM32(esi + edi * 4 + 0x2008) = 0;
    ecx = MEM32(esi);
    PUSH32(esp, 0x7FF);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x00035F43u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00035F43: ;
    ecx = MEM32(esi + edi * 4 + 8);
    MEM32(esi + eax * 4 + 8) = ecx;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi & 0x7FF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x2008);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00035F20; /* jne: not equal / not zero */

loc_00035F65: ;
    POP32(esp, edi);

loc_00035F66: ;
    POP32(esp, ebx);

loc_00035F67: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00035F70
 * Original: 0x00035F70 - 0x00035F76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F70(void)
{

loc_00035F70: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00035F80
 * Original: 0x00035F80 - 0x00035F88 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F80(void)
{

loc_00035F80: ;
    eax = 0xD;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00035F90
 * Original: 0x00035F90 - 0x00035FB6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00035F98u); RECOMP_ABI_CALL(0x000124C0u, sub_000124C0); /* call 0x000124C0 */

loc_00035F98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2DFAD8;
    MEM32(esi + 0x178) = eax;
    MEM32(esi + 0x17C) = eax;
    MEM32(esi + 0x180) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00035FC0
 * Original: 0x00035FC0 - 0x00035FDE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00035FC8u); RECOMP_ABI_CALL(0x00035DE0u, sub_00035DE0); /* call 0x00035DE0 */

loc_00035FC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00035FD8; /* je: equal / zero */

loc_00035FCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00035FD5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00035FD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00035FD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00035FE0
 * Original: 0x00035FE0 - 0x00036001 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035FE0: ;
    MEM32(0x317510) = 0;
    ecx = 0x31B5B0;
    /* nop */

loc_00035FF0: ;
    PUSH32(esp, 0x00035FF5u); RECOMP_ABI_CALL(0x00035EA0u, sub_00035EA0); /* call 0x00035EA0 */

loc_00035FF5: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31B830) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x31B830 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00035FF0; /* jl: less (signed <) */

loc_00036000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00036010
 * Original: 0x00036010 - 0x00036104 (244 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00036010: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x4C713AB3);
    ecx = 0x414150;
    PUSH32(esp, 0x00036025u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_00036025: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000360D7; /* jne: not equal / not zero */

loc_0003602D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    PUSH32(esp, 0x660E4490);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00036045u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_00036045: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003608B; /* je: equal / zero */

loc_0003604C: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00036059u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036056u); } /* indirect call */
    }

loc_00036059: ;
    edx = MEM32(esi);
    edi = eax;
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00036067u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036064u); } /* indirect call */
    }

loc_00036067: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 8); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    POP32(esp, edi);
    goto loc_00036091;

loc_0003608B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_00036091: ;
    SET_LO8(eax, MEM8(esi + 0x174));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000360F1; /* je: equal / zero */

loc_0003609B: ;
    xmm0 = XMM_SCALAR(MEMF(0x317508)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000360B3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000360A8: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x31750C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x31750C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000360F1; /* jne: not equal / not zero */

loc_000360B3: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(0x31750C) = edx;
    MEMF(0x317508) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000360D0u); RECOMP_ABI_CALL(0x000140D0u, sub_000140D0); /* call 0x000140D0 */

loc_000360D0: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000360D7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC404)); /* movss */
    MEM32(0x31750C) = 0;
    MEMF(0x317508) = xmm0.f[0]; /* movss */

loc_000360F1: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000360FDu); RECOMP_ABI_CALL(0x000140D0u, sub_000140D0); /* call 0x000140D0 */

loc_000360FD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00036110
 * Original: 0x00036110 - 0x00036135 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036110: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x31B5D4;

loc_00036117: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003612A; /* je: equal / zero */

loc_0003611C: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31B854) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31B854 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00036117; /* jl: less (signed <) */

loc_00036127: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0003612A: ;
    eax = ecx + ecx * 4;
    eax = eax * 8 + 0x31B5B0;
    esp += 4; return; /* ret */

}

/**
 * sub_00036140
 * Original: 0x00036140 - 0x00036196 (86 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00036140: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x0003614Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036149u); } /* indirect call */
    }

loc_0003614F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036190; /* je: equal / zero */

loc_00036153: ;
    ecx = MEM32(0x31750C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036190; /* jne: not equal / not zero */

loc_0003615E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC38C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x317508); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036190; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x317508)) */

loc_0003616F: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00036179u); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_00036179: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x00036186u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036180u); } /* indirect call */
    }

loc_00036186: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036190; /* je: equal / zero */

loc_0003618A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00036190: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000361A0
 * Original: 0x000361A0 - 0x000361EC (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000361A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000361A0: ;
    eax = MEM32(0x31750C);
    PUSH32(esp, 0x7FF);
    PUSH32(esp, 0x319520);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000361B5u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000361B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000361C3; /* jge: greater or equal (signed >=) */

loc_000361BC: ;
    eax = 0x31751C;
    goto loc_000361CA;

loc_000361C3: ;
    eax = eax * 4 + 0x317520;

loc_000361CA: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000361E8; /* je: equal / zero */

loc_000361D1: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x000361E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000361DAu); } /* indirect call */
    }

loc_000361E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000361E8; /* je: equal / zero */

loc_000361E4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000361E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000361F0
 * Original: 0x000361F0 - 0x0003621C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000361F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000361F0: ;
    eax = MEM32(0x31750C);
    PUSH32(esp, 0x7FF);
    PUSH32(esp, 0x319520);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00036205u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00036205: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00036214; /* jge: greater or equal (signed >=) */

loc_0003620C: ;
    eax = 0x31751C;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_00036214: ;
    eax = MEM32(eax * 4 + 0x317520);
    esp += 4; return; /* ret */

}

/**
 * sub_00036220
 * Original: 0x00036220 - 0x0003625A (58 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00036230: ;
    SET_LO8(ebx, MEM8(eax + ecx));
    MEM8(eax + esi) = LO8(ebx);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036249; /* je: equal / zero */

loc_0003623B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036243; /* jne: not equal / not zero */

loc_00036240: ;
    MEM8(esi + 0x1F) = LO8(edx);

loc_00036243: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00036230; /* jl: less (signed <) */

loc_00036249: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003624Fu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0003624F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00036260
 * Original: 0x00036260 - 0x00036278 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036260: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x178;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00036275u); RECOMP_ABI_CALL(0x0004D110u, sub_0004D110); /* call 0x0004D110 */

loc_00036275: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00036280
 * Original: 0x00036280 - 0x000362B5 (53 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036280: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(eax + 0x178);
    edx = MEM32(eax + 0x17C);
    MEM32(eax + 0x180) = 0;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 0x17C);
    edx = MEM32(eax + 0x178);
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000362C0
 * Original: 0x000362C0 - 0x0003630B (75 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000362C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000362C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x000362D4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000362D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000362E6; /* je: equal / zero */

loc_000362DB: ;
    ecx = eax;
    PUSH32(esp, 0x000362E2u); RECOMP_ABI_CALL(0x00035F90u, sub_00035F90); /* call 0x00035F90 */

loc_000362E2: ;
    edi = eax;
    goto loc_000362E8;

loc_000362E6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000362E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi + 0x68;
    PUSH32(esp, 0x000362F3u); RECOMP_ABI_CALL(0x00036260u, sub_00036260); /* call 0x00036260 */

loc_000362F3: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x190;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x20) = eax;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00036310
 * Original: 0x00036310 - 0x00036331 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036310(void)
{

loc_00036310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x68;
    PUSH32(esp, 0x00036321u); RECOMP_ABI_CALL(0x00036280u, sub_00036280); /* call 0x00036280 */

loc_00036321: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi + 0x7C;
    PUSH32(esp, 0x0003632Cu); RECOMP_ABI_CALL(0x00036260u, sub_00036260); /* call 0x00036260 */

loc_0003632C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00036340
 * Original: 0x00036340 - 0x00036346 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036340(void)
{

loc_00036340: ;
    eax = MEM32(0x30C290);
    esp += 4; return; /* ret */

}

/**
 * sub_00036350
 * Original: 0x00036350 - 0x00036395 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036350: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(0x30C0BC));
    PUSH32(esp, esi);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = 0;
    esi = ZX8(MEM8(0x30C0BD));
    edx = MEM32(0x30C0B8);
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | MEM32(0x30C0B4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    esi = 0xF;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = esi;
    MEM8(0x30C0BD) = MEM8(0x30C0BD) + 1;
    _fa = (uint32_t)(MEM8(0x30C0BD)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000363A0
 * Original: 0x000363A0 - 0x000364BA (282 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000363A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000363A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000363B7u); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_000363B7: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000363E3; /* je: equal / zero */

loc_000363BE: ;
    PUSH32(esp, 0x7FF);
    PUSH32(esp, 0x319520);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000363CEu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000363CE: ;
    MEM32(eax * 4 + 0x317520) = edi;
    eax = MEM32(0x317518);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x317518) = eax;

loc_000363E3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE4AE76EFu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000363EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000363ECu); } /* indirect call */
    }

loc_000363EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edi + 0x174) = LO8(ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80A3D79Du);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00036409u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036406u); } /* indirect call */
    }

loc_00036409: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036458; /* je: equal / zero */

loc_0003640D: ;
    ecx = MEM32(0x317510);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00036458; /* jge: greater or equal (signed >=) */

loc_00036418: ;
    MEM32(ecx * 4 + 0x317488) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003642Bu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0003642B: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00036438u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_00036438: ;
    edx = MEM32(eax);
    ecx = MEM32(0x317510);
    MEM32(ecx * 8 + 0x31B830) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx * 8 + 0x31B834) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x317510) = ecx;

loc_00036458: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C90EF84);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00036464u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036461u); } /* indirect call */
    }

loc_00036464: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003649D; /* jne: not equal / not zero */

loc_0003646B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8D39BDE6u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00036477u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036474u); } /* indirect call */
    }

loc_00036477: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003647Eu); RECOMP_ABI_CALL(0x00036110u, sub_00036110); /* call 0x00036110 */

loc_0003647E: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003648F; /* je: equal / zero */

loc_00036484: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00036489u); RECOMP_ABI_CALL(0x00035E70u, sub_00035E70); /* call 0x00035E70 */

loc_00036489: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003648Fu); RECOMP_ABI_CALL(0x00036220u, sub_00036220); /* call 0x00036220 */

loc_0003648F: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00036496u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00036496: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003649Du); RECOMP_ABI_CALL(0x001EAAB0u, sub_001EAAB0); /* call 0x001EAAB0 */

loc_0003649D: ;
    ebx = MEM32(edi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000364ABu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_000364AB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x30); PUSH32(esp, 0x000364B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000364AEu); } /* indirect call */
    }

loc_000364B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000364C0
 * Original: 0x000364C0 - 0x000364F7 (55 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000364C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000364C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000364C8u); RECOMP_ABI_CALL(0x00015270u, sub_00015270); /* call 0x00015270 */

loc_000364C8: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000364D8; /* je: equal / zero */

loc_000364CF: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000364D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000364D5u); } /* indirect call */
    }

loc_000364D8: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000364EA; /* je: equal / zero */

loc_000364DF: ;
    PUSH32(esp, eax);
    ecx = 0x317518;
    PUSH32(esp, 0x000364EAu); RECOMP_ABI_CALL(0x00035ED0u, sub_00035ED0); /* call 0x00035ED0 */

loc_000364EA: ;
    PUSH32(esp, esi);
    ecx = 0x31B520;
    PUSH32(esp, 0x000364F5u); RECOMP_ABI_CALL(0x00036310u, sub_00036310); /* call 0x00036310 */

loc_000364F5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00036500
 * Original: 0x00036500 - 0x00036521 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036500: ;
    PUSH32(esp, esi);
    ecx = 0x31B520;
    PUSH32(esp, 0x0003650Bu); RECOMP_ABI_CALL(0x000362C0u, sub_000362C0); /* call 0x000362C0 */

loc_0003650B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003651D; /* je: equal / zero */

loc_00036511: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0003651Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003651Au); } /* indirect call */
    }

loc_0003651D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00036530
 * Original: 0x00036530 - 0x0003659C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036530: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00036538u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00036538: ;
    MEM32(esi) = 0x2DFC84;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x78) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x7C;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00036595u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00036595: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000365A0
 * Original: 0x000365A0 - 0x000365AC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000365A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000365A0: ;
    eax = ecx + 0x7C;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000365B0(); return; /* tail jmp 0x000365B0 */

}

/**
 * sub_000365B0
 * Original: 0x000365B0 - 0x000365FA (74 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000365B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000365B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000365F4; /* je: equal / zero */

loc_000365C3: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000365CBu); RECOMP_ABI_CALL(0x00036280u, sub_00036280); /* call 0x00036280 */

loc_000365CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000365D7; /* je: equal / zero */

loc_000365CF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000365D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000365D5u); } /* indirect call */
    }

loc_000365D7: ;
    edx = MEM32(edi + 0x1C);
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0xFFFFFE70u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFE70u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x1C) = edx;
    MEM32(edi + 0x20) = ecx;
    eax = MEM32(ebx + 4);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000365C3; /* jne: not equal / not zero */

loc_000365F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00036600
 * Original: 0x00036600 - 0x0003661A (26 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036600: ;
    _fa = (uint32_t)(MEM32(ecx + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7929B8E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA0), 0x7929B8E4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036615; /* jne: not equal / not zero */

loc_0003660C: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00036615: ;
    g_seh_ebp = ebp; sub_00014720(); return; /* tail jmp 0x00014720 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00036620
 * Original: 0x00036620 - 0x00036669 (73 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00036620: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x98); /* comiss */
    if ((_fca > _fcb)) goto loc_00036665; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x98)) */

loc_00036634: ;
    _fa = (uint32_t)(MEM32(esi + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7929B8E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA0), 0x7929B8E4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036665; /* je: equal / zero */

loc_00036640: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003664Au); RECOMP_ABI_CALL(0x00012890u, sub_00012890); /* call 0x00012890 */

loc_0003664A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x98); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036665; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x98)) */

loc_0003665B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x00036665u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003665Fu); } /* indirect call */
    }

loc_00036665: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00036670
 * Original: 0x00036670 - 0x00036708 (152 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036670: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00036682u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003667Fu); } /* indirect call */
    }

loc_00036682: ;
    xmm0 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000366BDu); RECOMP_ABI_CALL(0x000A6F80u, sub_000A6F80); /* call 0x000A6F80 */

loc_000366BD: ;
    eax = MEM32(esi + 0xA0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x298304B4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x298304B4 (32-bit) */
    MEM8(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000366EE; /* jne: not equal / not zero */

loc_000366D2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000366DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000366D6u); } /* indirect call */
    }

loc_000366DC: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000366E9u); RECOMP_ABI_CALL(0x00011BD0u, sub_00011BD0); /* call 0x00011BD0 */

loc_000366E9: ;
    MEM8(esp + 4) = 1;

loc_000366EE: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    ecx = esi;
    PUSH32(esp, 0x000366FCu); RECOMP_ABI_CALL(0x000130A0u, sub_000130A0); /* call 0x000130A0 */

loc_000366FC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00036703u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036700u); } /* indirect call */
    }

loc_00036703: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036710
 * Original: 0x00036710 - 0x0003679F (143 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00036710: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x0003671Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036718u); } /* indirect call */
    }

loc_0003671E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036796; /* jne: not equal / not zero */

loc_00036722: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0003672Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003672Cu); } /* indirect call */
    }

loc_0003672F: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    edi = eax;
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0003673Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003673Cu); } /* indirect call */
    }

loc_0003673F: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 4); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x258)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    POP32(esp, edi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036796; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_0003678D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00036796: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000367A0
 * Original: 0x000367A0 - 0x000367C4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000367A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000367A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000367ADu); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_000367AD: ;
    SET_LO8(eax, MEM8(esi + 0x25C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000367C0; /* je: equal / zero */

loc_000367B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000367BDu); RECOMP_ABI_CALL(0x0010FAE0u, sub_0010FAE0); /* call 0x0010FAE0 */

loc_000367BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000367C0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000367D0
 * Original: 0x000367D0 - 0x000367E0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000367D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000367D0: ;
    SET_LO8(eax, MEM8(ecx + 0x25C));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000367E0
 * Original: 0x000367E0 - 0x0003682C (76 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000367E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000367E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(edx, MEM8(ecx + 0x25C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00036826; /* je: equal / zero */

loc_000367F2: ;
    eax = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x258);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00036815u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036812u); } /* indirect call */
    }

loc_00036815: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0003681Fu); RECOMP_ABI_CALL(0x00011A30u, sub_00011A30); /* call 0x00011A30 */

loc_0003681F: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00036826: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00036830
 * Original: 0x00036830 - 0x00036842 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036830: ;
    edx = MEM32(ecx + 0xA0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x298304B4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x298304B4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00036850
 * Original: 0x00036850 - 0x000368AC (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00036850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x1B4); PUSH32(esp, 0x0003686Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036864u); } /* indirect call */
    }

loc_0003686A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00036871u); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_00036871: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x00036877u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036874u); } /* indirect call */
    }

loc_00036877: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00036883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036880u); } /* indirect call */
    }

loc_00036883: ;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003688Cu); RECOMP_ABI_CALL(0x002035D0u, sub_002035D0); /* call 0x002035D0 */

loc_0003688C: ;
    edx = MEM32(esi);
    ecx = esi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0003689Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036897u); } /* indirect call */
    }

loc_0003689D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000368A3u); RECOMP_ABI_CALL(0x0012C200u, sub_0012C200); /* call 0x0012C200 */

loc_000368A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000368B0
 * Original: 0x000368B0 - 0x00036A47 (407 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000368B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000368B0: ;
    _fb = (uint32_t)(0x810) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x810));
    esp = esp - 0x810;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000368BEu); RECOMP_ABI_CALL(0x00012520u, sub_00012520); /* call 0x00012520 */

loc_000368BE: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000368C7u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_000368C7: ;
    ecx = esi;
    PUSH32(esp, 0x000368CEu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000368CE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000368DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000368D7u); } /* indirect call */
    }

loc_000368DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00036901; /* jne: not equal / not zero */

loc_000368DE: ;
    eax = MEM32(esi + 0x174);
    PUSH32(esp, eax);
    PUSH32(esp, 0x134603D7);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000368F3u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_000368F3: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00036901u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00036901: ;
    _fa = (uint32_t)(MEM8(esi + 0x25C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x25C), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000369A1; /* jne: not equal / not zero */

loc_0003690E: ;
    PUSH32(esp, 0x4DB211E5);
    PUSH32(esp, 0xCA10AF04u);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00036921u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_00036921: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0003692Fu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0003692F: ;
    eax = MEM32(esi + 0x254);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB293ABF1u);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00036944u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_00036944: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00036952u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00036952: ;
    SET_LO8(edx, MEM8(esi + 0x25D));
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = esp + 4;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x42AB788D;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB069958) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xB069958)) >> 32) & 1);
    edx = edx + 0xB069958;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C45D1C5);
    PUSH32(esp, 0x00036977u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_00036977: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00036985u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00036985: ;
    ecx = MEM32(esi + 0x258);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB8B346A1u);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0003699Au); RECOMP_ABI_CALL(0x001EAFF0u, sub_001EAFF0); /* call 0x001EAFF0 */

loc_0003699A: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    goto loc_000369D0;

loc_000369A1: ;
    ecx = esi;
    PUSH32(esp, 0x000369A8u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000369A8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCA10AF04u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000369B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000369B1u); } /* indirect call */
    }

loc_000369B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000369D9; /* je: equal / zero */

loc_000369B8: ;
    PUSH32(esp, 0xB069958);
    PUSH32(esp, 0xCA10AF04u);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000369CBu); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_000369CB: ;
    eax = esp + 4;
    PUSH32(esp, eax);

loc_000369D0: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000369D9u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_000369D9: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000369E5u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000369E5: ;
    ecx = eax;
    PUSH32(esp, 0x000369ECu); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_000369EC: ;
    SET_LO8(eax, MEM8(esi + 0x538));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00036A3F; /* je: equal / zero */

loc_000369F6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00036A00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000369FAu); } /* indirect call */
    }

loc_00036A00: ;
    eax = MEM32(eax + 0x1C);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00036A0Fu); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_00036A0F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00036A3F; /* je: equal / zero */

loc_00036A14: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00036A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036A18u); } /* indirect call */
    }

loc_00036A1E: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00036A2Du); RECOMP_ABI_CALL(0x00146630u, sub_00146630); /* call 0x00146630 */

loc_00036A2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00036A3F; /* jne: not equal / not zero */

loc_00036A31: ;
    ecx = esi;
    PUSH32(esp, 0x00036A38u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00036A38: ;
    ecx = eax;
    PUSH32(esp, 0x00036A3Fu); RECOMP_ABI_CALL(0x001EE0E0u, sub_001EE0E0); /* call 0x001EE0E0 */

loc_00036A3F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x810) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x810)) >> 32) & 1);
    esp = esp + 0x810;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036A50
 * Original: 0x00036A50 - 0x00036AF9 (169 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036A50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240CD6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00036A74u); RECOMP_ABI_CALL(0x000124C0u, sub_000124C0); /* call 0x000124C0 */

loc_00036A74: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2DFCA0;
    ecx = esi + 0x188;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x178) = ebx;
    MEM32(esi + 0x17C) = ebx;
    MEM32(esi + 0x180) = ebx;
    PUSH32(esp, 0x00036A9Du); RECOMP_ABI_CALL(0x00140AE0u, sub_00140AE0); /* call 0x00140AE0 */

loc_00036A9D: ;
    eax = esi + 0x368;
    PUSH32(esp, 0x40);
    MEM32(esi + 0x260) = ebx;
    PUSH32(esp, eax);
    MEM8(esp + 0x20) = 1;
    MEM32(esi + 0x264) = ebx;
    PUSH32(esp, 0x00036ABCu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_00036ABC: ;
    edi = esi + 0x468;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x00036ACCu); RECOMP_ABI_CALL(0x00203740u, sub_00203740); /* call 0x00203740 */

loc_00036ACC: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi) = 0x2DD908;
    MEM32(esi + 0xA0) = ebx;
    MEM8(esi + 0x538) = LO8(ebx);
    POP32(esp, edi);
    MEM8(esi + 0x184) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036B00
 * Original: 0x00036B00 - 0x00036B06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036B00(void)
{

loc_00036B00: ;
    eax = 0x540;
    esp += 4; return; /* ret */

}

/**
 * sub_00036B10
 * Original: 0x00036B10 - 0x00036B1E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00036B10: ;
    eax = MEM32(ecx + 0x170);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x12)) >> 32) & 1);
    eax = eax + 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036B20
 * Original: 0x00036B20 - 0x00036B27 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036B20(void)
{

loc_00036B20: ;
    eax = ecx + 0x468;
    esp += 4; return; /* ret */

}

/**
 * sub_00036B30
 * Original: 0x00036B30 - 0x00036B37 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036B30(void)
{

loc_00036B30: ;
    eax = ecx + 0x188;
    esp += 4; return; /* ret */

}

/**
 * sub_00036B40
 * Original: 0x00036B40 - 0x00036B47 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036B40(void)
{

loc_00036B40: ;
    SET_LO8(eax, MEM8(ecx + 0x25C));
    esp += 4; return; /* ret */

}

/**
 * sub_00036B50
 * Original: 0x00036B50 - 0x00036B7F (47 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036B50(void)
{

loc_00036B50: ;
    SET_LO8(eax, MEM8(esp + 4));
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM8(ecx + 0x25C) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM32(ecx + 0x254) = edx;
    MEM8(ecx + 0x25D) = LO8(eax);
    MEMF(ecx + 0x258) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00036B80
 * Original: 0x00036B80 - 0x00036B87 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036B80(void)
{

loc_00036B80: ;
    eax = MEM32(ecx + 0x254);
    esp += 4; return; /* ret */

}

/**
 * sub_00036B90
 * Original: 0x00036B90 - 0x00036B97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036B90(void)
{

loc_00036B90: ;
    SET_LO8(eax, MEM8(ecx + 0x25D));
    esp += 4; return; /* ret */

}

/**
 * sub_00036BA0
 * Original: 0x00036BA0 - 0x00036BA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036BA0(void)
{

loc_00036BA0: ;
    eax = MEM32(0x31B930);
    esp += 4; return; /* ret */

}

/**
 * sub_00036BB0
 * Original: 0x00036BB0 - 0x00036BB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036BB0(void)
{

loc_00036BB0: ;
    eax = MEM32(0x30C2A0);
    esp += 4; return; /* ret */

}

/**
 * sub_00036BC0
 * Original: 0x00036BC0 - 0x00036C1F (95 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036BC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240CE8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2DFCA0;
    ecx = esi + 0x188;
    MEM32(esp + 0x10) = 0;
    MEM32(esi + 0x468) = 0x2DD8F0;
    PUSH32(esp, 0x00036C00u); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_00036C00: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00036C0Fu); RECOMP_ABI_CALL(0x00011070u, sub_00011070); /* call 0x00011070 */

loc_00036C0F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036C20
 * Original: 0x00036C20 - 0x00036C8C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00036C28u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00036C28: ;
    MEM32(esi) = 0x2DFE58;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00036C85u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00036C85: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00036C90
 * Original: 0x00036C90 - 0x00036C9C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036C90: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00036CA0(); return; /* tail jmp 0x00036CA0 */

}

/**
 * sub_00036CA0
 * Original: 0x00036CA0 - 0x00036D0C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036CA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036D07; /* je: equal / zero */

loc_00036CB2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x178);
    edx = MEM32(ecx + 0x17C);
    MEM32(ecx + 0x180) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x17C);
    edx = MEM32(ecx + 0x178);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00036CEA; /* je: equal / zero */

loc_00036CE4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00036CEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036CE8u); } /* indirect call */
    }

loc_00036CEA: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFAC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFAC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036CB2; /* jne: not equal / not zero */

loc_00036D07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00036D10
 * Original: 0x00036D10 - 0x00036D2E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00036D18u); RECOMP_ABI_CALL(0x00036BC0u, sub_00036BC0); /* call 0x00036BC0 */

loc_00036D18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00036D28; /* je: equal / zero */

loc_00036D1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00036D25u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00036D25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00036D28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00036D30
 * Original: 0x00036D30 - 0x00036E6B (315 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036D30: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00036D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036D3Au); } /* indirect call */
    }

loc_00036D40: ;
    ebx = MEM32(eax + 0x1C);
    ecx = esi;
    PUSH32(esp, 0x00036D4Au); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00036D4A: ;
    PUSH32(esp, ebx);
    ecx = 0x30E854;
    edi = eax;
    PUSH32(esp, 0x00036D57u); RECOMP_ABI_CALL(0x00022E60u, sub_00022E60); /* call 0x00022E60 */

loc_00036D57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00036E64; /* jl: less (signed <) */

loc_00036D5F: ;
    ecx = MEM32(0x30E854);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036E64; /* je: equal / zero */

loc_00036D6F: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7E7CEC2D);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00036D7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036D79u); } /* indirect call */
    }

loc_00036D7C: ;
    ecx = MEM32(0x643844);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB069958) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB069958 (32-bit) */
    eax = MEM32(esi + 0x174);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    ebp = ecx;
    ecx = MEM32(0x6438A8);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00036DA9u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00036DA9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00036DB7; /* jge: greater or equal (signed >=) */

loc_00036DB0: ;
    eax = 0x6438B8;
    goto loc_00036DC0;

loc_00036DB7: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_00036DC0: ;
    eax = MEM32(eax);
    MEM32(ebp + 4) = eax;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x20) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(esp + 0x24) = eax;
    MEM8(esi + 0x539) = 0;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x88778B6Eu);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00036E04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036E01u); } /* indirect call */
    }

loc_00036E04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00036E13; /* jne: not equal / not zero */

loc_00036E0C: ;
    MEM8(esi + 0x539) = 1;

loc_00036E13: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB5CEDA20u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00036E1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036E1Cu); } /* indirect call */
    }

loc_00036E1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036E28; /* jne: not equal / not zero */

loc_00036E23: ;
    eax = 2;

loc_00036E28: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00036E3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036E34u); } /* indirect call */
    }

loc_00036E3A: ;
    ecx = eax;
    PUSH32(esp, 0x00036E41u); RECOMP_ABI_CALL(0x00140FB0u, sub_00140FB0); /* call 0x00140FB0 */

loc_00036E41: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036E56; /* je: equal / zero */

loc_00036E45: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00036E4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036E49u); } /* indirect call */
    }

loc_00036E4F: ;
    ecx = eax;
    PUSH32(esp, 0x00036E56u); RECOMP_ABI_CALL(0x00130160u, sub_00130160); /* call 0x00130160 */

loc_00036E56: ;
    ecx = esi;
    MEM8(esi + 0x538) = 1;
    PUSH32(esp, 0x00036E64u); RECOMP_ABI_CALL(0x00036850u, sub_00036850); /* call 0x00036850 */

loc_00036E64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036E70
 * Original: 0x00036E70 - 0x00037195 (805 bytes, 219 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00036E70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240D08);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x3C));
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = 0x2DFE70;
    SET_LO8(eax, MEM8(esi + 0x538));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x48) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00036EAA; /* jne: not equal / not zero */

loc_00036EA5: ;
    PUSH32(esp, 0x00036EAAu); RECOMP_ABI_CALL(0x00036D30u, sub_00036D30); /* call 0x00036D30 */

loc_00036EAA: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00036EB6u); RECOMP_ABI_CALL(0x000140D0u, sub_000140D0); /* call 0x000140D0 */

loc_00036EB6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00036ECC; /* jne: not equal / not zero */

loc_00036EBA: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x3C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00036ECC: ;
    SET_LO8(eax, MEM8(esi + 0x538));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003717C; /* je: equal / zero */

loc_00036EDA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00036EE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036EDEu); } /* indirect call */
    }

loc_00036EE4: ;
    eax = MEM32(eax + 0x1C);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00036EF3u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_00036EF3: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003717C; /* je: equal / zero */

loc_00036EFC: ;
    ecx = esi;
    PUSH32(esp, 0x00036F03u); RECOMP_ABI_CALL(0x00036850u, sub_00036850); /* call 0x00036850 */

loc_00036F03: ;
    eax = MEM32(esi);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00036F12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036F0Cu); } /* indirect call */
    }

loc_00036F12: ;
    ecx = eax;
    PUSH32(esp, 0x00036F19u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00036F19: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edx = MEM32(esi);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esi;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00036F55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036F4Fu); } /* indirect call */
    }

loc_00036F55: ;
    ecx = eax;
    PUSH32(esp, 0x00036F5Cu); RECOMP_ABI_CALL(0x00140B80u, sub_00140B80); /* call 0x00140B80 */

loc_00036F5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0003717C; /* jne: not equal / not zero */

loc_00036F64: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD8EC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003717C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DD8EC)) */

loc_00036F77: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00036F82u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_00036F82: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003717B; /* je: equal / zero */

loc_00036F8F: ;
    PUSH32(esp, edi);
    ecx = 0x30D38C;
    PUSH32(esp, 0x00036F9Au); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00036F9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00036FB4; /* je: equal / zero */

loc_00036F9E: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00036FACu); RECOMP_ABI_CALL(0x00044300u, sub_00044300); /* call 0x00044300 */

loc_00036FAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0003717B; /* jne: not equal / not zero */

loc_00036FB4: ;
    edx = MEM32(edi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00036FC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036FBDu); } /* indirect call */
    }

loc_00036FC0: ;
    edx = MEM32(esi);
    eax = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00036FCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036FC9u); } /* indirect call */
    }

loc_00036FCC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00037008u); RECOMP_ABI_CALL(0x00015420u, sub_00015420); /* call 0x00015420 */

loc_00037008: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00037027u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037021u); } /* indirect call */
    }

loc_00037027: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00037036u); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_00037036: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003704D; /* je: equal / zero */

loc_0003703A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DBED0); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    goto loc_00037053;

loc_0003704D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00037053: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003717B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00037062: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003717B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x2DC098)) */

loc_0003706F: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x54); /* divss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000370E2u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_000370E2: ;
    fp_push(MEMF(0x2DFE6C)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0003717B; /* jbe: below or equal (unsigned <=) */

loc_000370F5: ;
    edx = MEM32(esi);
    eax = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    edi = 0x2064C0BB;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00037109u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037103u); } /* indirect call */
    }

loc_00037109: ;
    ecx = eax;
    PUSH32(esp, 0x00037110u); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_00037110: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00037116u); RECOMP_ABI_CALL(0x00015420u, sub_00015420); /* call 0x00015420 */

loc_00037116: ;
    fp_push(MEMF(0x2DC3DC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0003712C; /* jbe: below or equal (unsigned <=) */

loc_00037127: ;
    edi = 0x4EF55EF6;

loc_0003712C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0003713Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037137u); } /* indirect call */
    }

loc_0003713D: ;
    ecx = eax;
    PUSH32(esp, 0x00037144u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00037144: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00037151u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003714Eu); } /* indirect call */
    }

loc_00037151: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0003715Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037156u); } /* indirect call */
    }

loc_0003715C: ;
    ecx = eax;
    PUSH32(esp, 0x00037163u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00037163: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003716Eu); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_0003716E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00037178u); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_00037178: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003717B: ;
    POP32(esp, edi);

loc_0003717C: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    ecx = MEM32(esp + 0x40);
    SET_LO8(eax, ~LO8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000371A0
 * Original: 0x000371A0 - 0x000371FF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000371A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000371A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x540);
    PUSH32(esp, 0x000371B4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000371B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000371C4; /* je: equal / zero */

loc_000371BB: ;
    ecx = eax;
    PUSH32(esp, 0x000371C2u); RECOMP_ABI_CALL(0x00036A50u, sub_00036A50); /* call 0x00036A50 */

loc_000371C2: ;
    goto loc_000371C6;

loc_000371C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000371C6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x178;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x540) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x540;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037200
 * Original: 0x00037200 - 0x0003724A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037200: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x178;
    PUSH32(esp, edi);
    MEM32(ecx + 0x74) = MEM32(ecx + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = 0;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    MEM32(esi) = edi;
    esi = MEM32(ecx + 0x84);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00037250
 * Original: 0x00037250 - 0x00037639 (1001 bytes, 272 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00037250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00037250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    MEM8(esi + 0x25C) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCA10AF04u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00037277u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037274u); } /* indirect call */
    }

loc_00037277: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00037289; /* jne: not equal / not zero */

loc_00037283: ;
    MEM8(esi + 0x25C) = LO8(ebx);

loc_00037289: ;
    SET_LO8(eax, MEM8(esi + 0x25C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x254) = 0x2F76F59;
    MEM8(esi + 0x25D) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000372EA; /* je: equal / zero */

loc_000372A4: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB293ABF1u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000372B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000372ADu); } /* indirect call */
    }

loc_000372B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000372BA; /* je: equal / zero */

loc_000372B4: ;
    MEM32(esi + 0x254) = eax;

loc_000372BA: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C45D1C5);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000372C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000372C3u); } /* indirect call */
    }

loc_000372C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000372D8; /* je: equal / zero */

loc_000372CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x25D) = LO8(ecx);

loc_000372D8: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB8B346A1u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000372E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000372E1u); } /* indirect call */
    }

loc_000372E4: ;
    MEMF(esi + 0x258) = (float)fp_top(); fp_pop(); /* fstp */

loc_000372EA: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000372F2u); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_000372F2: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF010280Du);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000372FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000372FBu); } /* indirect call */
    }

loc_000372FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7611FE68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7611FE68 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00037381; /* ja: above (unsigned >) */

loc_00037305: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00037375; /* je: equal / zero */

loc_00037307: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37BFF9F9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37BFF9F9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003734F; /* ja: above (unsigned >) */

loc_0003730E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00037340; /* je: equal / zero */

loc_00037310: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56E3996) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x56E3996 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037331; /* je: equal / zero */

loc_00037317: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2918DAB5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2918DAB5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000373C6; /* jne: not equal / not zero */

loc_00037322: ;
    MEM32(esi + 0x170) = 3;
    goto loc_000373E8;

loc_00037331: ;
    MEM32(esi + 0x170) = 2;
    goto loc_000373E8;

loc_00037340: ;
    MEM32(esi + 0x170) = 6;
    goto loc_000373E8;

loc_0003734F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3902E268) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3902E268 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037369; /* je: equal / zero */

loc_00037356: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x583CEF67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x583CEF67 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000373C6; /* jne: not equal / not zero */

loc_0003735D: ;
    MEM32(esi + 0x170) = 0xB;
    goto loc_000373E8;

loc_00037369: ;
    MEM32(esi + 0x170) = 8;
    goto loc_000373E8;

loc_00037375: ;
    MEM32(esi + 0x170) = 0xA;
    goto loc_000373E8;

loc_00037381: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F65F7E2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F65F7E2u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000373B8; /* ja: above (unsigned >) */

loc_00037388: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000373AC; /* je: equal / zero */

loc_0003738A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B651E6Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8B651E6Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000373A4; /* je: equal / zero */

loc_00037391: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D8A5D2Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8D8A5D2Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000373C6; /* jne: not equal / not zero */

loc_00037398: ;
    MEM32(esi + 0x170) = 5;
    goto loc_000373E8;

loc_000373A4: ;
    MEM32(esi + 0x170) = ebx;
    goto loc_000373E8;

loc_000373AC: ;
    MEM32(esi + 0x170) = 7;
    goto loc_000373E8;

loc_000373B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB9EA20F9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB9EA20F9u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000373DE; /* je: equal / zero */

loc_000373BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC1BFE75u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFC1BFE75u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000373D2; /* je: equal / zero */

loc_000373C6: ;
    MEM32(esi + 0x170) = 0;
    goto loc_000373E8;

loc_000373D2: ;
    MEM32(esi + 0x170) = 9;
    goto loc_000373E8;

loc_000373DE: ;
    MEM32(esi + 0x170) = 4;

loc_000373E8: ;
    MEM8(esi + 0x539) = 0;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000373FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000373F8u); } /* indirect call */
    }

loc_000373FB: ;
    edx = MEM32(esi + 0x3C);
    ebx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esi + 0x174) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0003740Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003740Au); } /* indirect call */
    }

loc_0003740D: ;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x174);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037434u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00037434: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00037442; /* jge: greater or equal (signed >=) */

loc_0003743B: ;
    eax = 0x6438B8;
    goto loc_0003744B;

loc_00037442: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0003744B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = eax;
    MEM32(edx + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0003746C; /* jne: not equal / not zero */

loc_0003745C: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037463u); RECOMP_ABI_CALL(0x001EE0E0u, sub_001EE0E0); /* call 0x001EE0E0 */

loc_00037463: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0003746C: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00037473u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037470u); } /* indirect call */
    }

loc_00037473: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003747Au); RECOMP_ABI_CALL(0x0018DDE0u, sub_0018DDE0); /* call 0x0018DDE0 */

loc_0003747A: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037484u); RECOMP_ABI_CALL(0x002061D0u, sub_002061D0); /* call 0x002061D0 */

loc_00037484: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037492u); RECOMP_ABI_CALL(0x00205F50u, sub_00205F50); /* call 0x00205F50 */

loc_00037492: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000374A0u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000374A0: ;
    eax = MEM32(esi);
    ecx = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000374ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000374A9u); } /* indirect call */
    }

loc_000374AC: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000374BAu); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_000374BA: ;
    ebx = esi + 0x260;
    edx = ebx + 0x108;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000374CEu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_000374CE: ;
    MEM32(ebx) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x70) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4FD51A36);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000374E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000374E3u); } /* indirect call */
    }

loc_000374E6: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3FCBE003);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000374F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000374EFu); } /* indirect call */
    }

loc_000374F2: ;
    PUSH32(esp, 0x933B5BDEu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000374FCu); RECOMP_ABI_CALL(0x00202D40u, sub_00202D40); /* call 0x00202D40 */

loc_000374FC: ;
    MEM32(esi + 0x24C) = eax;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x88);
    eax = MEM32(esi + 0x468);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    edx = esi + 0x4F8;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00037530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003752Au); } /* indirect call */
    }

loc_00037530: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00037542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003753Cu); } /* indirect call */
    }

loc_00037542: ;
    ecx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ebx = esi + 0x468;
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00037557u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037554u); } /* indirect call */
    }

loc_00037557: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE6D23643u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00037563u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037560u); } /* indirect call */
    }

loc_00037563: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003758A; /* je: equal / zero */

loc_00037567: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003756Du); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_0003756D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003758A; /* je: equal / zero */

loc_00037574: ;
    ecx = esi + 0x260;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037583u); RECOMP_ABI_CALL(0x000B35F0u, sub_000B35F0); /* call 0x000B35F0 */

loc_00037583: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003758Au); RECOMP_ABI_CALL(0x000B30E0u, sub_000B30E0); /* call 0x000B30E0 */

loc_0003758A: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037591u); RECOMP_ABI_CALL(0x00203920u, sub_00203920); /* call 0x00203920 */

loc_00037591: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037596u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_00037596: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC094)); /* fmul dword ptr [0x2dc094] */
    PUSH32(esp, ecx);
    ecx = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC350)); /* fadd dword ptr [0x2dc350] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000375ADu); RECOMP_ABI_CALL(0x000D7880u, sub_000D7880); /* call 0x000D7880 */

loc_000375AD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000375B2u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_000375B2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC094)); /* fmul dword ptr [0x2dc094] */
    PUSH32(esp, ecx);
    ecx = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC350)); /* fadd dword ptr [0x2dc350] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000375C9u); RECOMP_ABI_CALL(0x000B29C0u, sub_000B29C0); /* call 0x000B29C0 */

loc_000375C9: ;
    PUSH32(esp, 0x3E4CCCCD);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000375D5u); RECOMP_ABI_CALL(0x000B29D0u, sub_000B29D0); /* call 0x000B29D0 */

loc_000375D5: ;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x298304B4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x298304B4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000375EE; /* jne: not equal / not zero */

loc_000375E2: ;
    MEM32(esi + 0x150) = 0xB;
    goto loc_00037619;

loc_000375EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7929B8E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7929B8E4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000375FF; /* jne: not equal / not zero */

loc_000375F5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DFE7C)); /* movss */
    goto loc_00037611;

loc_000375FF: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DFE78)); /* movss */
    MEM32(esi + 0x150) = 9;

loc_00037611: ;
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */

loc_00037619: ;
    ecx = esi;
    MEM8(esi + 0x538) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037627u); RECOMP_ABI_CALL(0x00036D30u, sub_00036D30); /* call 0x00036D30 */

loc_00037627: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00037630u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003762Du); } /* indirect call */
    }

loc_00037630: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00037640
 * Original: 0x00037640 - 0x000376D1 (145 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00037648u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00037648: ;
    ecx = esi;
    PUSH32(esp, 0x0003764Fu); RECOMP_ABI_CALL(0x00015270u, sub_00015270); /* call 0x00015270 */

loc_0003764F: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003765F; /* je: equal / zero */

loc_00037656: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0003765Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003765Cu); } /* indirect call */
    }

loc_0003765F: ;
    SET_LO8(eax, MEM8(esi + 0x538));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003767A; /* je: equal / zero */

loc_00037669: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00037673u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003766Du); } /* indirect call */
    }

loc_00037673: ;
    ecx = eax;
    PUSH32(esp, 0x0003767Au); RECOMP_ABI_CALL(0x00140DF0u, sub_00140DF0); /* call 0x00140DF0 */

loc_0003767A: ;
    eax = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00037684u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037681u); } /* indirect call */
    }

loc_00037684: ;
    edi = esi + 0x468;
    ecx = edi;
    PUSH32(esp, 0x00037691u); RECOMP_ABI_CALL(0x002038C0u, sub_002038C0); /* call 0x002038C0 */

loc_00037691: ;
    ecx = edi;
    PUSH32(esp, 0x00037698u); RECOMP_ABI_CALL(0x000B2A10u, sub_000B2A10); /* call 0x000B2A10 */

loc_00037698: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0003769Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003769Cu); } /* indirect call */
    }

loc_0003769F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000376A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000376A3u); } /* indirect call */
    }

loc_000376A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000376CF; /* je: equal / zero */

loc_000376AC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000376B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000376B0u); } /* indirect call */
    }

loc_000376B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000376CF; /* je: equal / zero */

loc_000376B8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000376BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000376BCu); } /* indirect call */
    }

loc_000376BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000376CF; /* je: equal / zero */

loc_000376C4: ;
    PUSH32(esp, esi);
    ecx = 0x31B938;
    PUSH32(esp, 0x000376CFu); RECOMP_ABI_CALL(0x00037200u, sub_00037200); /* call 0x00037200 */

loc_000376CF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000376E0
 * Original: 0x000376E0 - 0x00037701 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000376E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000376E0: ;
    PUSH32(esp, esi);
    ecx = 0x31B938;
    PUSH32(esp, 0x000376EBu); RECOMP_ABI_CALL(0x000371A0u, sub_000371A0); /* call 0x000371A0 */

loc_000376EB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000376FD; /* je: equal / zero */

loc_000376F1: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000376FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000376FAu); } /* indirect call */
    }

loc_000376FD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037710
 * Original: 0x00037710 - 0x00037722 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037710: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003771Au); RECOMP_ABI_CALL(0x00036E70u, sub_00036E70); /* call 0x00036E70 */

loc_0003771A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00037730
 * Original: 0x00037730 - 0x00037735 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037730: ;
    g_seh_ebp = ebp; sub_000368B0(); return; /* tail jmp 0x000368B0 */

}

/**
 * sub_00037740
 * Original: 0x00037740 - 0x00037750 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037740: ;
    g_seh_ebp = ebp; sub_00036600(); return; /* tail jmp 0x00036600 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00037750
 * Original: 0x00037750 - 0x00037755 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037750: ;
    g_seh_ebp = ebp; sub_00036620(); return; /* tail jmp 0x00036620 */

}

/**
 * sub_00037760
 * Original: 0x00037760 - 0x00037786 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037760: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00037768u); RECOMP_ABI_CALL(0x00036A50u, sub_00036A50); /* call 0x00036A50 */

loc_00037768: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2DFE80;
    MEM32(esi + 0x540) = eax;
    MEM32(esi + 0x544) = eax;
    MEM32(esi + 0x548) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037790
 * Original: 0x00037790 - 0x00037796 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037790(void)
{

loc_00037790: ;
    eax = 0x560;
    esp += 4; return; /* ret */

}

/**
 * sub_000377A0
 * Original: 0x000377A0 - 0x000378AF (271 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000377A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_000377A0: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x30EFF0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000377C4: ;
    eax = ecx;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x8B6724B5u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98CE4424u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x98CE4424u)) >> 32) & 1);
    ecx = ecx + 0x98CE4424u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    edi = eax;
    if (0x13) _cf = (int)(((ecx) >> (32 - (0x13))) & 1);
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0xD) _cf = (int)(((edi) >> ((0xD) - 1)) & 1);
    edi = edi >> 0xD;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((8) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(0x30EFF0) = ecx;
    MEMF(esp + edx * 4 + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00037847; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00037821: ;
    eax = edx;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00037841; /* je: equal / zero */

loc_00037828: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0003783A; /* je: equal / zero */

loc_0003782B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00037833; /* je: equal / zero */

loc_0003782E: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00037871;

loc_00037833: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    goto loc_00037871;

loc_0003783A: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    goto loc_00037871;

loc_00037841: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    goto loc_00037871;

loc_00037847: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003787B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0003784C: ;
    eax = edx;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0003786C; /* je: equal / zero */

loc_00037853: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00037865; /* je: equal / zero */

loc_00037856: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0003785E; /* je: equal / zero */

loc_00037859: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00037871;

loc_0003785E: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    goto loc_00037871;

loc_00037865: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    goto loc_00037871;

loc_0003786C: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */

loc_00037871: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + edx * 4 + 0xC) = xmm0.f[0]; /* movss */

loc_0003787B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000377C4; /* jl: less (signed <) */

loc_00037885: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    POP32(esp, edi);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000378B0
 * Original: 0x000378B0 - 0x000378B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000378B0(void)
{

loc_000378B0: ;
    eax = MEM32(0x30C2B0);
    esp += 4; return; /* ret */

}

/**
 * sub_000378C0
 * Original: 0x000378C0 - 0x00037963 (163 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000378C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000378C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, 0x000378D3u); RECOMP_ABI_CALL(0x00037250u, sub_00037250); /* call 0x00037250 */

loc_000378D3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x54C;
    goto loc_000378E0;

    /* nop */

loc_000378E0: ;
    ecx = MEM32(0x2E003C);
    edx = MEM32(0x2E0040);
    eax = MEM32(0x2E0038);
    MEM32(esp + 0x14) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp + 0x1D) = LO16(ecx);
    MEM8(esp + 0x1F) = LO8(ecx);
    ecx = edx;
    MEM32(esp + 0x18) = edx;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(0x2E0044));
    edx = esp + 0x10;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x1F) = LO8(ecx);
    PUSH32(esp, 0x00037926u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00037926: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00037931u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003792Eu); } /* indirect call */
    }

loc_00037931: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037940; /* je: equal / zero */

loc_00037935: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037940; /* je: equal / zero */

loc_0003793C: ;
    MEM32(edi) = eax;
    goto loc_00037946;

loc_00037940: ;
    MEM32(edi) = 0;

loc_00037946: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000378E0; /* jb: below (unsigned <) */

loc_0003794F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x150) = 0xA;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00037970
 * Original: 0x00037970 - 0x00037975 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037970: ;
    g_seh_ebp = ebp; sub_00036BC0(); return; /* tail jmp 0x00036BC0 */

}

/**
 * sub_00037980
 * Original: 0x00037980 - 0x00037E60 (1248 bytes, 301 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00037980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00037980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x914) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x914));
    esp = esp - 0x914;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000379A4u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000379A4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x000379AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000379A8u); } /* indirect call */
    }

loc_000379AE: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2C)) >> 32) & 1);
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x70) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x54C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x54C)) >> 32) & 1);
    esi = esi + 0x54C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = edx;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = 5;
    /* nop */

loc_000379F0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00037E3F; /* je: equal / zero */

loc_000379F9: ;
    ecx = esp + 0x118;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037A05u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00037A05: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2DE290);
    ecx = esp + 0x10C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037A1Bu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00037A1B: ;
    eax = esp + 0x104;
    PUSH32(esp, eax);
    ecx = esp + 0x11C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037A2Fu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00037A2F: ;
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0x110;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037A41u); RECOMP_ABI_CALL(0x000377A0u, sub_000377A0); /* call 0x000377A0 */

loc_00037A41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037A57u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_00037A57: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xF0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xF4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xF8)); /* movss */
    MEMF(esp + 0x80) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    MEMF(esp + 0x84) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    MEMF(esp + 0x88) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    MEMF(esp + 0x8C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xD0)); /* movss */
    MEMF(esp + 0x90) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xD4)); /* movss */
    MEMF(esp + 0x94) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xD8)); /* movss */
    MEMF(esp + 0x98) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xDC)); /* movss */
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0xA0) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    MEM32(esp + 0x24) = ecx;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    MEMF(esp + 0xA8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xEC)); /* movss */
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esi);
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0xB0) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xF4)); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0xB8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xFC)); /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    ecx = 0x4031B0;
    MEMF(esp + 0xC0) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037BC1u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_00037BC1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00037BE4; /* je: equal / zero */

loc_00037BC7: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00037BCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037BCBu); } /* indirect call */
    }

loc_00037BCE: ;
    edx = MEM32(0x30C2A4);
    ecx = MEM32(0x30C2A0);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00037BE4; /* jne: not equal / not zero */

loc_00037BE0: ;
    ebx = edi;
    goto loc_00037BE6;

loc_00037BE4: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00037BE6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00037C03; /* je: equal / zero */

loc_00037BEA: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00037BF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037BEEu); } /* indirect call */
    }

loc_00037BF1: ;
    edx = MEM32(0x30C24C);
    ecx = MEM32(0x30C248);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00037C05; /* je: equal / zero */

loc_00037C03: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00037C05: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00037C11; /* jne: not equal / not zero */

loc_00037C09: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00037E3F; /* je: equal / zero */

loc_00037C11: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00037C23; /* je: equal / zero */

loc_00037C17: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00037C21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037C1Bu); } /* indirect call */
    }

loc_00037C21: ;
    goto loc_00037C31;

loc_00037C23: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00037C33; /* je: equal / zero */

loc_00037C27: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x00037C31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037C2Bu); } /* indirect call */
    }

loc_00037C31: ;
    esi = eax;

loc_00037C33: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037C3Au); RECOMP_ABI_CALL(0x00130170u, sub_00130170); /* call 0x00130170 */

loc_00037C3A: ;
    ecx = MEM32(0x30EFF0);
    eax = ecx;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x8B6724B5u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98CE4424u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x98CE4424u)) >> 32) & 1);
    edx = edx + 0x98CE4424u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    edx = eax;
    if (0xD) _cf = (int)(((edx) >> ((0xD) - 1)) & 1);
    edx = edx >> 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x13) _cf = (int)(((ecx) >> (32 - (0x13))) & 1);
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((8) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0xC) = eax;
    eax = ecx;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x8B6724B5u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98CE4424u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x98CE4424u)) >> 32) & 1);
    edx = edx + 0x98CE4424u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    edx = eax;
    if (0xD) _cf = (int)(((edx) >> ((0xD) - 1)) & 1);
    edx = edx >> 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x13) _cf = (int)(((ecx) >> (32 - (0x13))) & 1);
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((8) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x18) = eax;
    eax = ecx;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x8B6724B5u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98CE4424u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x98CE4424u)) >> 32) & 1);
    edx = edx + 0x98CE4424u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    edx = eax;
    if (0x13) _cf = (int)(((ecx) >> (32 - (0x13))) & 1);
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0xD) _cf = (int)(((edx) >> ((0xD) - 1)) & 1);
    edx = edx >> 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((8) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x28) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEM32(0x30EFF0) = ecx;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037D55u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00037D55: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC084)); /* movss */
    ecx = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00037DAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037DACu); } /* indirect call */
    }

loc_00037DAF: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = 0x30EFF0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037DBEu); RECOMP_ABI_CALL(0x00011ED0u, sub_00011ED0); /* call 0x00011ED0 */

loc_00037DBE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037DC5u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00037DC5: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    eax = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00037E1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037E1Cu); } /* indirect call */
    }

loc_00037E1F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00037E3F; /* je: equal / zero */

loc_00037E23: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00037E2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037E27u); } /* indirect call */
    }

loc_00037E2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00037E3F; /* je: equal / zero */

loc_00037E31: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037E38u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00037E38: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00037E3Fu); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_00037E3F: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000379F0; /* jne: not equal / not zero */

loc_00037E59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00037E60
 * Original: 0x00037E60 - 0x00037EBF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x560);
    PUSH32(esp, 0x00037E74u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00037E74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037E84; /* je: equal / zero */

loc_00037E7B: ;
    ecx = eax;
    PUSH32(esp, 0x00037E82u); RECOMP_ABI_CALL(0x00037760u, sub_00037760); /* call 0x00037760 */

loc_00037E82: ;
    goto loc_00037E86;

loc_00037E84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00037E86: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x540;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x560) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x560;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037EC0
 * Original: 0x00037EC0 - 0x00037F0A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037EC0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x540;
    PUSH32(esp, edi);
    MEM32(ecx + 0x74) = MEM32(ecx + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = 0;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    MEM32(esi) = edi;
    esi = MEM32(ecx + 0x84);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00037F10
 * Original: 0x00037F10 - 0x00037F25 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037F10(void)
{

loc_00037F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00037F18u); RECOMP_ABI_CALL(0x00037640u, sub_00037640); /* call 0x00037640 */

loc_00037F18: ;
    PUSH32(esp, esi);
    ecx = 0x31B9C0;
    PUSH32(esp, 0x00037F23u); RECOMP_ABI_CALL(0x00037EC0u, sub_00037EC0); /* call 0x00037EC0 */

loc_00037F23: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037F30
 * Original: 0x00037F30 - 0x00037F40 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00037F38u); RECOMP_ABI_CALL(0x00037980u, sub_00037980); /* call 0x00037980 */

loc_00037F38: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00036670(); return; /* tail jmp 0x00036670 */

}

/**
 * sub_00037F40
 * Original: 0x00037F40 - 0x00037F61 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037F40: ;
    PUSH32(esp, esi);
    ecx = 0x31B9C0;
    PUSH32(esp, 0x00037F4Bu); RECOMP_ABI_CALL(0x00037E60u, sub_00037E60); /* call 0x00037E60 */

loc_00037F4B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00037F5D; /* je: equal / zero */

loc_00037F51: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00037F5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00037F5Au); } /* indirect call */
    }

loc_00037F5D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037F70
 * Original: 0x00037F70 - 0x00037FDC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00037F78u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00037F78: ;
    MEM32(esi) = 0x2E0048;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00037FD5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00037FD5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00037FE0
 * Original: 0x00037FE0 - 0x00037FEC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00037FE0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00037FF0(); return; /* tail jmp 0x00037FF0 */

}

/**
 * sub_00037FF0
 * Original: 0x00037FF0 - 0x0003805C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00037FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00037FF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038057; /* je: equal / zero */

loc_00038002: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x540);
    edx = MEM32(ecx + 0x544);
    MEM32(ecx + 0x548) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x544);
    edx = MEM32(ecx + 0x540);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003803A; /* je: equal / zero */

loc_00038034: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0003803Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038038u); } /* indirect call */
    }

loc_0003803A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFAA0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFAA0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038002; /* jne: not equal / not zero */

loc_00038057: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00038060
 * Original: 0x00038060 - 0x0003807B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038060: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x80;
    edi = 0x31BA48;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x31BC48) = eax;
    MEM32(0x31BC4C) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038080
 * Original: 0x00038080 - 0x000380A4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038080: ;
    eax = MEM32(0x31BC48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000380A3; /* jge: greater or equal (signed >=) */

loc_0003808C: ;
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x31BA48) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x31BC48) = eax;
    MEM32(0x31BC4C) = MEM32(0x31BC4C) + 1;
    _fa = (uint32_t)(MEM32(0x31BC4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000380A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000380B0
 * Original: 0x000380B0 - 0x000380B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000380B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000380B0: ;
    g_seh_ebp = ebp; sub_00038060(); return; /* tail jmp 0x00038060 */

}

/**
 * sub_000380C0
 * Original: 0x000380C0 - 0x00038108 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000380C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000380C0: ;
    eax = MEM32(0x31BC4C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x73E331CE);
    ecx = 0x414150;
    PUSH32(esp, 0x000380D6u); RECOMP_ABI_CALL(0x00122090u, sub_00122090); /* call 0x00122090 */

loc_000380D6: ;
    eax = MEM32(0x31BC48);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00038102; /* jle: less or equal (signed <=) */

loc_000380E1: ;
    ecx = MEM32(esi * 4 + 0x31BA48);
    PUSH32(esp, 0x2DE4E4);
    PUSH32(esp, ecx);
    ecx = 0x414150;
    PUSH32(esp, 0x000380F8u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000380F8: ;
    eax = MEM32(0x31BC48);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000380E1; /* jl: less (signed <) */

loc_00038102: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00038060(); return; /* tail jmp 0x00038060 */

}

/**
 * sub_00038110
 * Original: 0x00038110 - 0x00038137 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038110: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x73E331CE);
    ecx = 0x414150;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0003812Cu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0003812C: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(MEM32(0x31BC4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x31BC4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00038140
 * Original: 0x00038140 - 0x0003819D (93 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038140: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240D28);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x00038162u); RECOMP_ABI_CALL(0x00036A50u, sub_00036A50); /* call 0x00036A50 */

loc_00038162: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E0060;
    ecx = esi + 0x550;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x540) = eax;
    MEM32(esi + 0x544) = eax;
    MEM32(esi + 0x548) = eax;
    PUSH32(esp, 0x0003818Bu); RECOMP_ABI_CALL(0x00011340u, sub_00011340); /* call 0x00011340 */

loc_0003818B: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000381A0
 * Original: 0x000381A0 - 0x000381A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000381A0(void)
{

loc_000381A0: ;
    eax = 0x570;
    esp += 4; return; /* ret */

}

/**
 * sub_000381B0
 * Original: 0x000381B0 - 0x000381B7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000381B0(void)
{

loc_000381B0: ;
    eax = ecx + 0x550;
    esp += 4; return; /* ret */

}

/**
 * sub_000381C0
 * Original: 0x000381C0 - 0x000381C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000381C0(void)
{

loc_000381C0: ;
    eax = MEM32(0x30C2C0);
    esp += 4; return; /* ret */

}

/**
 * sub_000381D0
 * Original: 0x000381D0 - 0x000381D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000381D0(void)
{

loc_000381D0: ;
    eax = 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000381E0
 * Original: 0x000381E0 - 0x000382B6 (214 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000381E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000381E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000381F5u); RECOMP_ABI_CALL(0x00036E70u, sub_00036E70); /* call 0x00036E70 */

loc_000381F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038200; /* jne: not equal / not zero */

loc_000381F9: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00038200: ;
    eax = MEM32(esi + 0x54C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000382AD; /* je: equal / zero */

loc_0003820E: ;
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003821Eu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0003821E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2E0218)); /* movss */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003824Fu); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0003824F: ;
    edx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEM32(esp + 0xC) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    ecx = MEM32(esi + 0x54C);
    eax = esp + 0x20;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000382ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000382AAu); } /* indirect call */
    }

loc_000382AD: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000382C0
 * Original: 0x000382C0 - 0x0003844E (398 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000382C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000382C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000382D5u); RECOMP_ABI_CALL(0x00036670u, sub_00036670); /* call 0x00036670 */

loc_000382D5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000382DAu); RECOMP_ABI_CALL(0x0015EFE0u, sub_0015EFE0); /* call 0x0015EFE0 */

loc_000382DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000382EC; /* je: equal / zero */

loc_000382DE: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000382E7u); RECOMP_ABI_CALL(0x00038080u, sub_00038080); /* call 0x00038080 */

loc_000382E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000382F8;

loc_000382EC: ;
    PUSH32(esp, 0x2E0228);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000382F8u); RECOMP_ABI_CALL(0x000336B0u, sub_000336B0); /* call 0x000336B0 */

loc_000382F8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000382FDu); RECOMP_ABI_CALL(0x00038110u, sub_00038110); /* call 0x00038110 */

loc_000382FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAF31AE33u);
    ecx = 0x3BF678;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003830Du); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_0003830D: ;
    MEM8(esp + 0x10) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x413FC0);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, ecx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003832Eu); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0003832E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x80);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0xC2219C1Fu);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038347u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_00038347: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x110) = 0;
    ecx = 0x3F;
    edi = esp + 0x111;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x114;
    PUSH32(esp, 0x2E021C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038379u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00038379: ;
    edx = esp + 0x11C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x361B90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003838Du); RECOMP_ABI_CALL(0x001002D0u, sub_001002D0); /* call 0x001002D0 */

loc_0003838D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038397u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00038397: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5ED2723B);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000383A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000383A0u); } /* indirect call */
    }

loc_000383A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038448; /* je: equal / zero */

loc_000383AB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000383B1u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_000383B1: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x94) = 0;
    ecx = 0x1F;
    edi = esp + 0x95;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000383DBu); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_000383DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x80);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x95A675F7u);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000383F7u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_000383F7: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038402u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_00038402: ;
    PUSH32(esp, eax);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2DE4E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x361B90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003841Cu); RECOMP_ABI_CALL(0x001002D0u, sub_001002D0); /* call 0x001002D0 */

loc_0003841C: ;
    PUSH32(esp, 0x660E4490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038426u); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_00038426: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038448; /* je: equal / zero */

loc_0003842D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xAC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038448u); RECOMP_ABI_CALL(0x00057F50u, sub_00057F50); /* call 0x00057F50 */

loc_00038448: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00038450
 * Original: 0x00038450 - 0x000384AF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038450: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x570);
    PUSH32(esp, 0x00038464u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00038464: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038474; /* je: equal / zero */

loc_0003846B: ;
    ecx = eax;
    PUSH32(esp, 0x00038472u); RECOMP_ABI_CALL(0x00038140u, sub_00038140); /* call 0x00038140 */

loc_00038472: ;
    goto loc_00038476;

loc_00038474: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00038476: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x540;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x570) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x570;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000384B0
 * Original: 0x000384B0 - 0x000384CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000384B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000384B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000384B8u); RECOMP_ABI_CALL(0x00037970u, sub_00037970); /* call 0x00037970 */

loc_000384B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000384C8; /* je: equal / zero */

loc_000384BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000384C5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000384C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000384C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000384D0
 * Original: 0x000384D0 - 0x000384FE (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000384D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000384D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000384D8u); RECOMP_ABI_CALL(0x00037640u, sub_00037640); /* call 0x00037640 */

loc_000384D8: ;
    PUSH32(esp, esi);
    ecx = 0x31BC50;
    PUSH32(esp, 0x000384E3u); RECOMP_ABI_CALL(0x00037EC0u, sub_00037EC0); /* call 0x00037EC0 */

loc_000384E3: ;
    ecx = MEM32(esi + 0x54C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000384FC; /* je: equal / zero */

loc_000384ED: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000384F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000384EFu); } /* indirect call */
    }

loc_000384F2: ;
    MEM32(esi + 0x54C) = 0;

loc_000384FC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038500
 * Original: 0x00038500 - 0x0003854B (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038500: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8D39BDE6u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00038511u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003850Eu); } /* indirect call */
    }

loc_00038511: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00038517u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00038517: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x00038525u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_00038525: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038547; /* jne: not equal / not zero */

loc_00038529: ;
    PUSH32(esp, edi);
    ecx = 0x31BC50;
    PUSH32(esp, 0x00038534u); RECOMP_ABI_CALL(0x00038450u, sub_00038450); /* call 0x00038450 */

loc_00038534: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038542; /* je: equal / zero */

loc_0003853A: ;
    edx = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00038542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003853Fu); } /* indirect call */
    }

loc_00038542: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00038547: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038550
 * Original: 0x00038550 - 0x000385BC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038550: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00038558u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00038558: ;
    MEM32(esi) = 0x2E0244;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000385B5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000385B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000385C0
 * Original: 0x000385C0 - 0x000385CC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000385C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000385C0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000385D0(); return; /* tail jmp 0x000385D0 */

}

/**
 * sub_000385D0
 * Original: 0x000385D0 - 0x0003863C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000385D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000385D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038637; /* je: equal / zero */

loc_000385E2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x540);
    edx = MEM32(ecx + 0x544);
    MEM32(ecx + 0x548) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x544);
    edx = MEM32(ecx + 0x540);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003861A; /* je: equal / zero */

loc_00038614: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0003861Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038618u); } /* indirect call */
    }

loc_0003861A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFA90u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFA90u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000385E2; /* jne: not equal / not zero */

loc_00038637: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00038640
 * Original: 0x00038640 - 0x000386FF (191 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00038640: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0003864Eu); RECOMP_ABI_CALL(0x00037250u, sub_00037250); /* call 0x00037250 */

loc_0003864E: ;
    ecx = 0x403750;
    PUSH32(esp, 0x00038658u); RECOMP_ABI_CALL(0x0001F480u, sub_0001F480); /* call 0x0001F480 */

loc_00038658: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x54C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000386CF; /* je: equal / zero */

loc_00038662: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0003866Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038668u); } /* indirect call */
    }

loc_0003866B: ;
    ecx = MEM32(esi + 0x54C);
    PUSH32(esp, 0x202020FF);
    PUSH32(esp, 0x0003867Bu); RECOMP_ABI_CALL(0x001779B0u, sub_001779B0); /* call 0x001779B0 */

loc_0003867B: ;
    ecx = MEM32(esi + 0x54C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00038688u); RECOMP_ABI_CALL(0x00177890u, sub_00177890); /* call 0x00177890 */

loc_00038688: ;
    ecx = MEM32(esi + 0x54C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00038695u); RECOMP_ABI_CALL(0x00177910u, sub_00177910); /* call 0x00177910 */

loc_00038695: ;
    ecx = MEM32(esi + 0x54C);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x000386A5u); RECOMP_ABI_CALL(0x00177850u, sub_00177850); /* call 0x00177850 */

loc_000386A5: ;
    ecx = MEM32(esi + 0x54C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000386B2u); RECOMP_ABI_CALL(0x001778B0u, sub_001778B0); /* call 0x001778B0 */

loc_000386B2: ;
    ecx = MEM32(esi + 0x54C);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x000386C2u); RECOMP_ABI_CALL(0x001778D0u, sub_001778D0); /* call 0x001778D0 */

loc_000386C2: ;
    ecx = MEM32(esi + 0x54C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000386CFu); RECOMP_ABI_CALL(0x00177970u, sub_00177970); /* call 0x00177970 */

loc_000386CF: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6E99129D);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000386DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000386D8u); } /* indirect call */
    }

loc_000386DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000386EE; /* je: equal / zero */

loc_000386DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000386E5u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_000386E5: ;
    MEMF(esi + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000386EE: ;
    PUSH32(esp, edi);
    ecx = esi + 0x550;
    PUSH32(esp, 0x000386FAu); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_000386FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00038700
 * Original: 0x00038700 - 0x0003870B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038700: ;
    MEM32(ecx) = 0x2E0258;
    g_seh_ebp = ebp; sub_00036BC0(); return; /* tail jmp 0x00036BC0 */

}

/**
 * sub_00038710
 * Original: 0x00038710 - 0x00038716 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038710(void)
{

loc_00038710: ;
    eax = 0x580;
    esp += 4; return; /* ret */

}

/**
 * sub_00038720
 * Original: 0x00038720 - 0x00038726 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038720(void)
{

loc_00038720: ;
    eax = MEM32(0x30C2E8);
    esp += 4; return; /* ret */

}

/**
 * sub_00038730
 * Original: 0x00038730 - 0x00038736 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038730(void)
{

loc_00038730: ;
    eax = 0x15;
    esp += 4; return; /* ret */

}

/**
 * sub_00038740
 * Original: 0x00038740 - 0x000387A5 (101 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038740: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00038748u); RECOMP_ABI_CALL(0x00036A50u, sub_00036A50); /* call 0x00036A50 */

loc_00038748: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x2E0258;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x540) = eax;
    MEM32(esi + 0x544) = eax;
    MEM32(esi + 0x548) = eax;
    MEM32(esi + 0x550) = eax;
    MEM32(esi + 0x554) = eax;
    MEM32(esi + 0x558) = eax;
    SET_LO8(eax, MEM8(esi + 0x578));
    SET_LO8(eax, LO8(eax) & 0xFB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x578) = LO8(eax);
    MEMF(esi + 0x56C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x570) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x574) = 0x80808080u;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000387B0
 * Original: 0x000387B0 - 0x000387CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000387B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000387B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000387B8u); RECOMP_ABI_CALL(0x00038700u, sub_00038700); /* call 0x00038700 */

loc_000387B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000387C8; /* je: equal / zero */

loc_000387BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000387C5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000387C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000387C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000387D0
 * Original: 0x000387D0 - 0x000388DE (270 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000387D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000387D0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x539));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000388CB; /* je: equal / zero */

loc_000387E4: ;
    SET_LO8(eax, MEM8(esi + 0x538));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000388CB; /* je: equal / zero */

loc_000387F2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x000387FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000387F4u); } /* indirect call */
    }

loc_000387FA: ;
    eax = MEM32(eax + 0x1C);
    ecx = esp + 7;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00038809u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_00038809: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000388CB; /* je: equal / zero */

loc_00038812: ;
    eax = MEM32(esi);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00038821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003881Bu); } /* indirect call */
    }

loc_00038821: ;
    ecx = eax;
    PUSH32(esp, 0x00038828u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00038828: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(esi);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00038860u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003885Au); } /* indirect call */
    }

loc_00038860: ;
    ecx = eax;
    PUSH32(esp, 0x00038867u); RECOMP_ABI_CALL(0x00140B60u, sub_00140B60); /* call 0x00140B60 */

loc_00038867: ;
    fp_push(MEMF(0x2DC884)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000388CB; /* jbe: below or equal (unsigned <=) */

loc_00038875: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC340); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000388CB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC340)) */

loc_00038884: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00038895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003888Fu); } /* indirect call */
    }

loc_00038895: ;
    ecx = eax;
    PUSH32(esp, 0x0003889Cu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0003889C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000388A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000388A6u); } /* indirect call */
    }

loc_000388A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FFABE9A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000388BAu); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_000388BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3FFABE9A);
    PUSH32(esp, 0x000388C8u); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_000388C8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000388CB: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000388D7u); RECOMP_ABI_CALL(0x00036E70u, sub_00036E70); /* call 0x00036E70 */

loc_000388D7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00038802
 * Original: 0x00038802 - 0x000388DE (220 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038802(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00038802: ;
    ecx = eax;
    PUSH32(esp, 0x00038809u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_00038809: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000388CB; /* je: equal / zero */

loc_00038812: ;
    eax = MEM32(esi);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00038821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003881Bu); } /* indirect call */
    }

loc_00038821: ;
    ecx = eax;
    PUSH32(esp, 0x00038828u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00038828: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(esi);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00038860u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003885Au); } /* indirect call */
    }

loc_00038860: ;
    ecx = eax;
    PUSH32(esp, 0x00038867u); RECOMP_ABI_CALL(0x00140B60u, sub_00140B60); /* call 0x00140B60 */

loc_00038867: ;
    fp_push(MEMF(0x2DC884)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000388CB; /* jbe: below or equal (unsigned <=) */

loc_00038875: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC340); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000388CB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC340)) */

loc_00038884: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00038895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003888Fu); } /* indirect call */
    }

loc_00038895: ;
    ecx = eax;
    PUSH32(esp, 0x0003889Cu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0003889C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000388A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000388A6u); } /* indirect call */
    }

loc_000388A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FFABE9A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000388BAu); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_000388BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3FFABE9A);
    PUSH32(esp, 0x000388C8u); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_000388C8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000388CB: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000388D7u); RECOMP_ABI_CALL(0x00036E70u, sub_00036E70); /* call 0x00036E70 */

loc_000388D7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000388E0
 * Original: 0x000388E0 - 0x00038923 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000388E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000388E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x548);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038921; /* jne: not equal / not zero */

loc_000388ED: ;
    eax = MEM32(0x30C2E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x30C2CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x30C2CC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003890C; /* jne: not equal / not zero */

loc_000388FA: ;
    eax = MEM32(0x30C2D4);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00038907u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038904u); } /* indirect call */
    }

loc_00038907: ;
    eax = MEM32(0x30C2E0);

loc_0003890C: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x540) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x540;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = 0x30C2D0;
    PUSH32(esp, 0x00038921u); RECOMP_ABI_CALL(0x0004D110u, sub_0004D110); /* call 0x0004D110 */

loc_00038921: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038930
 * Original: 0x00038930 - 0x00038968 (56 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038930: ;
    eax = MEM32(ecx + 0x548);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038967; /* je: equal / zero */

loc_0003893A: ;
    MEM32(0x30C2E0) = MEM32(0x30C2E0) - 1;
    _fa = (uint32_t)(MEM32(0x30C2E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x540);
    edx = MEM32(ecx + 0x544);
    MEM32(ecx + 0x548) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x544);
    ecx = MEM32(ecx + 0x540);
    MEM32(eax) = ecx;

loc_00038967: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00038970
 * Original: 0x00038970 - 0x000389B5 (69 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038970: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(0x30C2A8));
    PUSH32(esp, esi);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = 0;
    esi = ZX8(MEM8(0x30C2A9));
    edx = MEM32(0x30C2A4);
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | MEM32(0x30C2A0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    esi = 0xF;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = esi;
    MEM8(0x30C2A9) = MEM8(0x30C2A9) + 1;
    _fa = (uint32_t)(MEM8(0x30C2A9)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000389C0
 * Original: 0x000389C0 - 0x00038A91 (209 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000389C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000389C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000389CEu); RECOMP_ABI_CALL(0x00037250u, sub_00037250); /* call 0x00037250 */

loc_000389CE: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000389DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000389D7u); } /* indirect call */
    }

loc_000389DA: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x55C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000389EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000389E4u); } /* indirect call */
    }

loc_000389EA: ;
    ecx = MEM32(0x643844);
    eax = MEM32(eax + 0x1C);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    edi = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00038A0Cu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00038A0C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00038A1A; /* jge: greater or equal (signed >=) */

loc_00038A13: ;
    eax = 0x6438B8;
    goto loc_00038A23;

loc_00038A1A: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_00038A23: ;
    edx = MEM32(eax);
    MEM32(edi + 4) = edx;
    xmm0 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    MEMF(esi + 0x560) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    PUSH32(esp, 0x3F);
    eax = esi + 0x368;
    PUSH32(esp, eax);
    MEMF(esi + 0x564) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    PUSH32(esp, 0x2D5FCC31);
    MEMF(esi + 0x568) = xmm0.f[0]; /* movss */
    edi = esi + 0x56C;
    PUSH32(esp, 0x00038A71u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00038A71: ;
    MEM32(esi + eax * 4 + 0x268) = edi;
    ecx = MEM32(esi + 0x260);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x260) = ecx;
    MEM8(edi + 0xC) = MEM8(edi + 0xC) & 0xFE;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00038AA0
 * Original: 0x00038AA0 - 0x00038CCF (559 bytes, 178 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00038AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00038AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x824) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x824;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x18); /* comiss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00038AC8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + 0x18)) */

loc_00038ABB: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x120); PUSH32(esp, 0x00038AC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038ABFu); } /* indirect call */
    }

loc_00038AC5: ;
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_00038AC8: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038ADB; /* jne: not equal / not zero */

loc_00038ACF: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x00038AD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038AD3u); } /* indirect call */
    }

loc_00038AD9: ;
    esi = eax;

loc_00038ADB: ;
    eax = MEM32(0x643844);
    MEM32(eax) = esi;
    ecx = MEM32(0x6438B4);
    edi = eax;
    eax = MEM32(0x6438A8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038AF8u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00038AF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00038B06; /* jge: greater or equal (signed >=) */

loc_00038AFF: ;
    eax = 0x6438B8;
    goto loc_00038B0F;

loc_00038B06: ;
    edx = MEM32(0x6438B0);
    eax = edx + eax * 4;

loc_00038B0F: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00038B1F; /* jne: not equal / not zero */

loc_00038B18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00038B1F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038B40; /* je: equal / zero */

loc_00038B23: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00038B2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038B27u); } /* indirect call */
    }

loc_00038B2A: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038B40; /* jne: not equal / not zero */

loc_00038B3C: ;
    edi = ebx;
    goto loc_00038B42;

loc_00038B40: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00038B42: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038B4Bu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00038B4B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x134603D7);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038B5Au); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_00038B5A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038B68u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00038B68: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x19) = edx;
    MEM32(esp + 0x1D) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x29) = edx;
    eax = esp + 0x20;
    MEM16(esp + 0x2D) = LO16(edx);
    PUSH32(esp, 0x2E0444);
    PUSH32(esp, eax);
    MEM8(esp + 0x28) = 0;
    MEM8(esp + 0x37) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038B9Cu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00038B9C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2E0438);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038BB2u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00038BB2: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038BC0u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00038BC0: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2DE290);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038BD3u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00038BD3: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038BE1u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00038BE1: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ecx + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0xE6D23643u);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038BF6u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_00038BF6: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038C04u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00038C04: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038C29; /* je: equal / zero */

loc_00038C08: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2E042C);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038C1Bu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00038C1B: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038C29u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00038C29: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038C51; /* je: equal / zero */

loc_00038C30: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2E0410);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038C43u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00038C43: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038C51u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00038C51: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB5CEDA20u);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038C63u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_00038C63: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038C71u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00038C71: ;
    PUSH32(esp, 0);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xB0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC6DF7F6Bu);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038C90u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_00038C90: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038CAF; /* je: equal / zero */

loc_00038C96: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00038C9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038C9Au); } /* indirect call */
    }

loc_00038C9D: ;
    edx = MEM32(0x30C2EC);
    ecx = MEM32(0x30C2E8);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038CB1; /* je: equal / zero */

loc_00038CAF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00038CB1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038CB8u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00038CB8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038CBFu); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_00038CBF: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038CC6u); RECOMP_ABI_CALL(0x000388E0u, sub_000388E0); /* call 0x000388E0 */

loc_00038CC6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00038CD0
 * Original: 0x00038CD0 - 0x00038DC9 (249 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00038CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x85C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x85C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038CEBu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00038CEB: ;
    eax = MEM32(0x643844);
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(0x6438B4);
    esi = eax;
    eax = MEM32(0x6438A8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038D0Bu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00038D0B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00038D19; /* jge: greater or equal (signed >=) */

loc_00038D12: ;
    eax = 0x6438B8;
    goto loc_00038D22;

loc_00038D19: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_00038D22: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00038D48; /* je: equal / zero */

loc_00038D2B: ;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038D48u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00038D48: ;
    ecx = esp + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038D51u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00038D51: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2DE290);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038D64u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00038D64: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esp + 0x5C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038D72u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00038D72: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038D8Eu); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_00038D8E: ;
    esi = eax;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038D97u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00038D97: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038D9Eu); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_00038D9E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038DC2; /* je: equal / zero */

loc_00038DA2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00038DA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038DA6u); } /* indirect call */
    }

loc_00038DA9: ;
    edx = MEM32(0x30C2EC);
    ecx = MEM32(0x30C2E8);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038DC2; /* jne: not equal / not zero */

loc_00038DBB: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00038DC2u); RECOMP_ABI_CALL(0x000388E0u, sub_000388E0); /* call 0x000388E0 */

loc_00038DC2: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00038DD0
 * Original: 0x00038DD0 - 0x00038E3C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00038DD8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00038DD8: ;
    MEM32(esi) = 0x2E044C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00038E35u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00038E35: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038E40
 * Original: 0x00038E40 - 0x00038E4C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00038E40: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00038E50(); return; /* tail jmp 0x00038E50 */

}

/**
 * sub_00038E50
 * Original: 0x00038E50 - 0x00038EBC (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038E50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038EB7; /* je: equal / zero */

loc_00038E62: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x550);
    edx = MEM32(ecx + 0x554);
    MEM32(ecx + 0x558) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x554);
    edx = MEM32(ecx + 0x550);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00038E9A; /* je: equal / zero */

loc_00038E94: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00038E9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038E98u); } /* indirect call */
    }

loc_00038E9A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFA80u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFA80u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00038E62; /* jne: not equal / not zero */

loc_00038EB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00038EC0
 * Original: 0x00038EC0 - 0x00038F1F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x580);
    PUSH32(esp, 0x00038ED4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00038ED4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038EE4; /* je: equal / zero */

loc_00038EDB: ;
    ecx = eax;
    PUSH32(esp, 0x00038EE2u); RECOMP_ABI_CALL(0x00038740u, sub_00038740); /* call 0x00038740 */

loc_00038EE2: ;
    goto loc_00038EE6;

loc_00038EE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00038EE6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x550;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x580;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038F20
 * Original: 0x00038F20 - 0x00038F6A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038F20: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x550;
    PUSH32(esp, edi);
    MEM32(ecx + 0x74) = MEM32(ecx + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = 0;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    MEM32(esi) = edi;
    esi = MEM32(ecx + 0x84);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00038F70
 * Original: 0x00038F70 - 0x00038F8C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038F70(void)
{

loc_00038F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00038F78u); RECOMP_ABI_CALL(0x00037640u, sub_00037640); /* call 0x00037640 */

loc_00038F78: ;
    ecx = esi;
    PUSH32(esp, 0x00038F7Fu); RECOMP_ABI_CALL(0x00038930u, sub_00038930); /* call 0x00038930 */

loc_00038F7F: ;
    PUSH32(esp, esi);
    ecx = 0x31BCD8;
    PUSH32(esp, 0x00038F8Au); RECOMP_ABI_CALL(0x00038F20u, sub_00038F20); /* call 0x00038F20 */

loc_00038F8A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038F90
 * Original: 0x00038F90 - 0x00038FB1 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038F90: ;
    PUSH32(esp, esi);
    ecx = 0x31BCD8;
    PUSH32(esp, 0x00038F9Bu); RECOMP_ABI_CALL(0x00038EC0u, sub_00038EC0); /* call 0x00038EC0 */

loc_00038F9B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00038FAD; /* je: equal / zero */

loc_00038FA1: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00038FADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00038FAAu); } /* indirect call */
    }

loc_00038FAD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00038FC0
 * Original: 0x00038FC0 - 0x00039035 (117 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00038FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00038FC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240D48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00038FE4u); RECOMP_ABI_CALL(0x000124C0u, sub_000124C0); /* call 0x000124C0 */

loc_00038FE4: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E0468;
    edi = esi + 0x184;
    ecx = edi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x174) = ebx;
    MEM32(esi + 0x178) = ebx;
    MEM32(esi + 0x17C) = ebx;
    PUSH32(esp, 0x0003900Fu); RECOMP_ABI_CALL(0x00203740u, sub_00203740); /* call 0x00203740 */

loc_0003900F: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi) = 0x2DD908;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0x180) = ebx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00039040
 * Original: 0x00039040 - 0x00039046 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039040(void)
{

loc_00039040: ;
    eax = 0x280;
    esp += 4; return; /* ret */

}

/**
 * sub_00039050
 * Original: 0x00039050 - 0x00039057 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039050(void)
{

loc_00039050: ;
    eax = ecx + 0x184;
    esp += 4; return; /* ret */

}

/**
 * sub_00039060
 * Original: 0x00039060 - 0x00039067 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039060(void)
{

loc_00039060: ;
    eax = MEM32(ecx + 0x180);
    esp += 4; return; /* ret */

}

/**
 * sub_00039070
 * Original: 0x00039070 - 0x00039085 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039070: ;
    MEM32(ecx) = 0x2E0468;
    MEM32(ecx + 0x184) = 0x2DD8F0;
    g_seh_ebp = ebp; sub_00011070(); return; /* tail jmp 0x00011070 */

}

/**
 * sub_00039090
 * Original: 0x00039090 - 0x000390FC (108 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039090: ;
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0003909Eu); RECOMP_ABI_CALL(0x00012520u, sub_00012520); /* call 0x00012520 */

loc_0003909E: ;
    ecx = esi;
    PUSH32(esp, 0x000390A5u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000390A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000390B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000390AEu); } /* indirect call */
    }

loc_000390B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000390F4; /* jne: not equal / not zero */

loc_000390B5: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000390BEu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_000390BE: ;
    eax = MEM32(esi + 0x170);
    PUSH32(esp, eax);
    PUSH32(esp, 0x134603D7);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000390D3u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_000390D3: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000390E1u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_000390E1: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000390EDu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000390ED: ;
    ecx = eax;
    PUSH32(esp, 0x000390F4u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_000390F4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00039100
 * Original: 0x00039100 - 0x00039106 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039100(void)
{

loc_00039100: ;
    eax = MEM32(0x30C2F8);
    esp += 4; return; /* ret */

}

/**
 * sub_00039110
 * Original: 0x00039110 - 0x0003912E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039110: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00039118u); RECOMP_ABI_CALL(0x00039070u, sub_00039070); /* call 0x00039070 */

loc_00039118: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00039128; /* je: equal / zero */

loc_0003911F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00039125u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00039125: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039128: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00039113
 * Original: 0x00039113 - 0x0003912E (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039113(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039113: ;
    PUSH32(esp, 0x00039118u); RECOMP_ABI_CALL(0x00039070u, sub_00039070); /* call 0x00039070 */

loc_00039118: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00039128; /* je: equal / zero */

loc_0003911F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00039125u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00039125: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039128: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00039130
 * Original: 0x00039130 - 0x0003919C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00039138u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00039138: ;
    MEM32(esi) = 0x2E0614;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00039195u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00039195: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000391A0
 * Original: 0x000391A0 - 0x000391AC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000391A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000391A0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000391B0(); return; /* tail jmp 0x000391B0 */

}

/**
 * sub_000391B0
 * Original: 0x000391B0 - 0x0003921C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000391B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000391B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039217; /* je: equal / zero */

loc_000391C2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x174);
    edx = MEM32(ecx + 0x178);
    MEM32(ecx + 0x17C) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x178);
    edx = MEM32(ecx + 0x174);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000391FA; /* je: equal / zero */

loc_000391F4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000391FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000391F8u); } /* indirect call */
    }

loc_000391FA: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFD80u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFD80u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000391C2; /* jne: not equal / not zero */

loc_00039217: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00039220
 * Original: 0x00039220 - 0x000392EF (207 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00039220: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x254);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x30E854;
    PUSH32(esp, 0x00039235u); RECOMP_ABI_CALL(0x00022E60u, sub_00022E60); /* call 0x00022E60 */

loc_00039235: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00039275; /* jl: less (signed <) */

loc_00039239: ;
    ecx = MEM32(0x30E854);
    edi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039275; /* je: equal / zero */

loc_00039246: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x00039256u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00039250u); } /* indirect call */
    }

loc_00039256: ;
    eax = eax | 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003926Au); RECOMP_ABI_CALL(0x0012FCC0u, sub_0012FCC0); /* call 0x0012FCC0 */

loc_0003926A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x180) = eax;
    goto loc_0003927F;

loc_00039275: ;
    MEM32(esi + 0x180) = 0;

loc_0003927F: ;
    eax = MEM32(esi + 0x180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000392EC; /* je: equal / zero */

loc_00039289: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x258)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000392A2; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00039299: ;
    ecx = MEM32(esi + 0x258);
    MEM32(eax + 0x4C) = ecx;

loc_000392A2: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x25C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000392BE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000392AF: ;
    edx = MEM32(esi + 0x180);
    eax = MEM32(esi + 0x25C);
    MEM32(edx + 0x50) = eax;

loc_000392BE: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x260)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000392DA; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000392CB: ;
    ecx = MEM32(esi + 0x180);
    edx = MEM32(esi + 0x260);
    MEM32(ecx + 0x54) = edx;

loc_000392DA: ;
    eax = MEM32(esi + 0x180);
    ecx = MEM32(esi + 0x270);
    MEM32(eax + 0xB4) = ecx;

loc_000392EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000392F0
 * Original: 0x000392F0 - 0x00039382 (146 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000392F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000392F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240D68);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = 0x2E0628;
    eax = MEM32(esi + 0x180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0003932A; /* jne: not equal / not zero */

loc_00039325: ;
    PUSH32(esp, 0x0003932Au); RECOMP_ABI_CALL(0x00039220u, sub_00039220); /* call 0x00039220 */

loc_0003932A: ;
    eax = MEM32(esi + 0x268);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039364; /* je: equal / zero */

loc_00039334: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00039341u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003933Eu); } /* indirect call */
    }

loc_00039341: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0003934Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003934Bu); } /* indirect call */
    }

loc_0003934E: ;
    ecx = MEM32(esi + 0x26C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003935Bu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0003935B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x26C) = eax;

loc_00039364: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00039370u); RECOMP_ABI_CALL(0x000140D0u, sub_000140D0); /* call 0x000140D0 */

loc_00039370: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00039390
 * Original: 0x00039390 - 0x000393EF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x280);
    PUSH32(esp, 0x000393A4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000393A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000393B4; /* je: equal / zero */

loc_000393AB: ;
    ecx = eax;
    PUSH32(esp, 0x000393B2u); RECOMP_ABI_CALL(0x00038FC0u, sub_00038FC0); /* call 0x00038FC0 */

loc_000393B2: ;
    goto loc_000393B6;

loc_000393B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000393B6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x174;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x280) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x280;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000393F0
 * Original: 0x000393F0 - 0x0003965A (618 bytes, 190 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000393F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000393F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039407u); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_00039407: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00039413u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00039410u); } /* indirect call */
    }

loc_00039413: ;
    PUSH32(esp, 0xC);
    ebx = eax;
    PUSH32(esp, 0x2E0640);
    PUSH32(esp, ebx);
    MEM8(esp + 0x23) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039427u); RECOMP_ABI_CALL(0x002379A0u, sub_002379A0); /* call 0x002379A0 */

loc_00039427: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039442; /* je: equal / zero */

loc_0003942E: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2E0630);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003943Bu); RECOMP_ABI_CALL(0x002379A0u, sub_002379A0); /* call 0x002379A0 */

loc_0003943B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039447; /* jne: not equal / not zero */

loc_00039442: ;
    MEM8(esp + 0x17) = 0;

loc_00039447: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003944Du); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0003944D: ;
    edx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esi + 0x170) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00039462u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003945Fu); } /* indirect call */
    }

loc_00039462: ;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x170);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039489u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00039489: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00039497; /* jge: greater or equal (signed >=) */

loc_00039490: ;
    eax = 0x6438B8;
    goto loc_000394A0;

loc_00039497: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000394A0: ;
    eax = MEM32(eax);
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = eax;
    MEM32(edx + 4) = eax;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000394BC; /* je: equal / zero */

loc_000394B5: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000394BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000394B9u); } /* indirect call */
    }

loc_000394BC: ;
    ebx = MEM32(esi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000394CAu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_000394CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x30); PUSH32(esp, 0x000394D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000394CDu); } /* indirect call */
    }

loc_000394D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esi + 0x260) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x25C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x258) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000394FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000394F9u); } /* indirect call */
    }

loc_000394FC: ;
    MEM32(esi + 0x254) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x651896A0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0003950Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003950Bu); } /* indirect call */
    }

loc_0003950E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039521; /* je: equal / zero */

loc_00039512: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039518u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00039518: ;
    MEMF(esi + 0x258) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039521: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE573CE82u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0003952Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003952Au); } /* indirect call */
    }

loc_0003952D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039540; /* je: equal / zero */

loc_00039531: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039537u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00039537: ;
    MEMF(esi + 0x25C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039540: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA644EC99u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0003954Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00039549u); } /* indirect call */
    }

loc_0003954C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003955F; /* je: equal / zero */

loc_00039550: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039556u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00039556: ;
    MEMF(esi + 0x260) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003955F: ;
    ecx = esi;
    MEM32(esi + 0x180) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039570u); RECOMP_ABI_CALL(0x00039220u, sub_00039220); /* call 0x00039220 */

loc_00039570: ;
    ebx = esi + 0xB0;
    PUSH32(esp, ebx);
    ecx = esi + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003957Fu); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_0003957F: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x88);
    eax = MEM32(esi + 0x184);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = esi + 0x214;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000395ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000395A7u); } /* indirect call */
    }

loc_000395AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    ebx = esi + 0x184;
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000395C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000395BFu); } /* indirect call */
    }

loc_000395C2: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000395CCu); RECOMP_ABI_CALL(0x000B35F0u, sub_000B35F0); /* call 0x000B35F0 */

loc_000395CC: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000395D3u); RECOMP_ABI_CALL(0x00203920u, sub_00203920); /* call 0x00203920 */

loc_000395D3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x26C) = ebx;
    MEM32(esi + 0x264) = ebx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3AEB15FA);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000395EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000395EAu); } /* indirect call */
    }

loc_000395ED: ;
    MEM32(esi + 0x264) = eax;
    MEM32(esi + 0x268) = ebx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x94DA8C4Au);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00039605u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00039602u); } /* indirect call */
    }

loc_00039605: ;
    MEM32(esi + 0x268) = eax;
    eax = MEM32(esi + 0x264);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003961F; /* je: equal / zero */

loc_00039615: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003961Cu); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_0003961C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003961F: ;
    MEM32(esi + 0x270) = 6;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E1B1EC5);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00039635u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00039632u); } /* indirect call */
    }

loc_00039635: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039648; /* je: equal / zero */

loc_00039639: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003963Fu); RECOMP_ABI_CALL(0x0012B5F0u, sub_0012B5F0); /* call 0x0012B5F0 */

loc_0003963F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x270) = eax;

loc_00039648: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00039651u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003964Eu); } /* indirect call */
    }

loc_00039651: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00039660
 * Original: 0x00039660 - 0x0003970D (173 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00039669u); RECOMP_ABI_CALL(0x00015270u, sub_00015270); /* call 0x00015270 */

loc_00039669: ;
    eax = MEM32(esi + 0x26C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039691; /* je: equal / zero */

loc_00039675: ;
    ecx = MEM32(0x300E7C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00039682u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00039682: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x26C) = ebx;
    MEM32(esi + 0x268) = ebx;

loc_00039691: ;
    eax = MEM32(esi + 0x264);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000396AA; /* je: equal / zero */

loc_0003969B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000396A1u); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_000396A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x264) = ebx;

loc_000396AA: ;
    PUSH32(esp, edi);
    edi = esi + 0x184;
    ecx = edi;
    MEM32(esi + 0x268) = ebx;
    PUSH32(esp, 0x000396BEu); RECOMP_ABI_CALL(0x002038C0u, sub_002038C0); /* call 0x002038C0 */

loc_000396BE: ;
    ecx = edi;
    PUSH32(esp, 0x000396C5u); RECOMP_ABI_CALL(0x000B2A10u, sub_000B2A10); /* call 0x000B2A10 */

loc_000396C5: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000396CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000396C9u); } /* indirect call */
    }

loc_000396CC: ;
    eax = MEM32(esi + 0x180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000396E8; /* je: equal / zero */

loc_000396D7: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000396DFu); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_000396DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x180) = ebx;

loc_000396E8: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000396F6; /* je: equal / zero */

loc_000396ED: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000396F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000396F3u); } /* indirect call */
    }

loc_000396F6: ;
    edx = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000396FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000396FCu); } /* indirect call */
    }

loc_000396FF: ;
    PUSH32(esp, esi);
    ecx = 0x31BD60;
    PUSH32(esp, 0x0003970Au); RECOMP_ABI_CALL(0x000228D0u, sub_000228D0); /* call 0x000228D0 */

loc_0003970A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00039710
 * Original: 0x00039710 - 0x00039731 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039710: ;
    PUSH32(esp, esi);
    ecx = 0x31BD60;
    PUSH32(esp, 0x0003971Bu); RECOMP_ABI_CALL(0x00039390u, sub_00039390); /* call 0x00039390 */

loc_0003971B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003972D; /* je: equal / zero */

loc_00039721: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0003972Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003972Au); } /* indirect call */
    }

loc_0003972D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00039740
 * Original: 0x00039740 - 0x00039795 (85 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039740: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240D88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2E0668;
    ecx = esi + 0x170;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00039776u); RECOMP_ABI_CALL(0x001F3680u, sub_001F3680); /* call 0x001F3680 */

loc_00039776: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00039785u); RECOMP_ABI_CALL(0x00011070u, sub_00011070); /* call 0x00011070 */

loc_00039785: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000397A0
 * Original: 0x000397A0 - 0x000397A5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000397A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000397A0: ;
    g_seh_ebp = ebp; sub_00012520(); return; /* tail jmp 0x00012520 */

}

/**
 * sub_000397B0
 * Original: 0x000397B0 - 0x000397DB (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000397B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000397B0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000397D0; /* jp: parity */

loc_000397C8: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000397D0: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp)); /* fdiv dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000397E0
 * Original: 0x000397E0 - 0x0003980B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000397E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000397E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00039801; /* jnp: not parity */

loc_000397F5: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */

loc_00039801: ;
    MEMF(esp) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00039809
 * Original: 0x00039809 - 0x0003980B (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039809(void)
{

loc_00039809: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003980A
 * Original: 0x0003980A - 0x0003980B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003980A(void)
{

loc_0003980A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00039810
 * Original: 0x00039810 - 0x00039816 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039810(void)
{

loc_00039810: ;
    eax = 0x200;
    esp += 4; return; /* ret */

}

/**
 * sub_00039820
 * Original: 0x00039820 - 0x00039827 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039820(void)
{

loc_00039820: ;
    eax = MEM32(ecx + 0x1EC);
    esp += 4; return; /* ret */

}

/**
 * sub_00039830
 * Original: 0x00039830 - 0x00039837 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039830(void)
{

loc_00039830: ;
    eax = ecx + 0x170;
    esp += 4; return; /* ret */

}

/**
 * sub_00039840
 * Original: 0x00039840 - 0x00039846 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039840(void)
{

loc_00039840: ;
    eax = 0x17;
    esp += 4; return; /* ret */

}

/**
 * sub_00039850
 * Original: 0x00039850 - 0x00039858 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039850: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00209040(); return; /* tail jmp 0x00209040 */

}

/**
 * sub_00039860
 * Original: 0x00039860 - 0x00039886 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039860: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E0660;
    if (TEST_Z(_fa, _fb)) goto loc_00039880; /* je: equal / zero */

loc_00039870: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00039880u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003987Du); } /* indirect call */
    }

loc_00039880: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00039890
 * Original: 0x00039890 - 0x00039923 (147 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039890: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240D88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x000398B3u); RECOMP_ABI_CALL(0x000124C0u, sub_000124C0); /* call 0x000124C0 */

loc_000398B3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x170;
    MEM32(esp + 0x14) = edi;
    MEM32(esi) = 0x2E0668;
    PUSH32(esp, 0x000398CAu); RECOMP_ABI_CALL(0x001F3610u, sub_001F3610); /* call 0x001F3610 */

loc_000398CA: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x1D4) = edi;
    MEM32(esi + 0x1DC) = edi;
    MEM32(esi + 0x1E0) = edi;
    MEM32(esi + 0x1E4) = edi;
    MEM32(esi + 0x1EC) = edi;
    MEM32(esi + 0x1F0) = edi;
    MEM32(esi + 0x1C0) = edi;
    MEM32(esi + 0x1C4) = edi;
    MEM32(esi + 0x1C8) = edi;
    MEM32(esi + 0x1CC) = edi;
    MEM32(esi + 0x1E8) = 0xFFFFFFFFu;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00039930
 * Original: 0x00039930 - 0x0003994E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00039938u); RECOMP_ABI_CALL(0x00039740u, sub_00039740); /* call 0x00039740 */

loc_00039938: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00039948; /* je: equal / zero */

loc_0003993F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00039945u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00039945: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039948: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00039950
 * Original: 0x00039950 - 0x000399D3 (131 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039950: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0003995Eu); RECOMP_ABI_CALL(0x001EA030u, sub_001EA030); /* call 0x001EA030 */

loc_0003995E: ;
    eax = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039996; /* je: equal / zero */

loc_00039968: ;
    ecx = MEM32(esi + 0x1C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039996; /* je: equal / zero */

loc_00039972: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x643860;
    PUSH32(esp, 0x0003997Eu); RECOMP_ABI_CALL(0x001F7AF0u, sub_001F7AF0); /* call 0x001F7AF0 */

loc_0003997E: ;
    eax = MEM32(esi + 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x643860;
    PUSH32(esp, 0x00039990u); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_00039990: ;
    MEM32(esi + 0x1C8) = edi;

loc_00039996: ;
    ecx = MEM32(esi + 0x1C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000399CE; /* je: equal / zero */

loc_000399A0: ;
    eax = MEM32(esi + 0x1CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000399CE; /* je: equal / zero */

loc_000399AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x643860;
    PUSH32(esp, 0x000399B6u); RECOMP_ABI_CALL(0x001F7AF0u, sub_001F7AF0); /* call 0x001F7AF0 */

loc_000399B6: ;
    ecx = MEM32(esi + 0x1C4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = 0x643860;
    PUSH32(esp, 0x000399C8u); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_000399C8: ;
    MEM32(esi + 0x1CC) = edi;

loc_000399CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000399E0
 * Original: 0x000399E0 - 0x00039A52 (114 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000399E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000399E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x20); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x24); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x28); /* subss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039A23u); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_00039A23: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039A33u); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_00039A33: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00039A60
 * Original: 0x00039A60 - 0x00039A66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039A60(void)
{

loc_00039A60: ;
    eax = MEM32(0x30C308);
    esp += 4; return; /* ret */

}

/**
 * sub_00039A70
 * Original: 0x00039A70 - 0x00039AF9 (137 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039A70: ;
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = ecx + 0x10;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039A8E; /* jne: not equal / not zero */

loc_00039A83: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00039A8Bu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_00039A8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00039A8E: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = ecx + ecx * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    esi = MEM32(esp + 8);
    xmm0 = XMM_MEM(esi); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039AC9; /* je: equal / zero */

loc_00039ABB: ;
    goto loc_00039AC0;

    /* nop */

loc_00039AC0: ;
    ecx = edx;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039AC0; /* jne: not equal / not zero */

loc_00039AC9: ;
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esi + 0x24);
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039AE9; /* je: equal / zero */

loc_00039ADF: ;
    /* nop */

loc_00039AE0: ;
    edx = ecx;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00039AE0; /* jne: not equal / not zero */

loc_00039AE9: ;
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x2C) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00039B00
 * Original: 0x00039B00 - 0x00039CB7 (439 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00039B00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240DAB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 4;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x00039B2Au); RECOMP_ABI_CALL(0x00203D00u, sub_00203D00); /* call 0x00203D00 */

loc_00039B2A: ;
    ebp = edi + 0x540;
    ecx = ebp;
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0x00039B3Fu); RECOMP_ABI_CALL(0x001F2AB0u, sub_001F2AB0); /* call 0x001F2AB0 */

loc_00039B3F: ;
    MEM32(edi) = 0;
    eax = MEM32(0x31BDF4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x31BDF4) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x89);
    MEM32(ebp) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 0x500;
    esi = edi + 0x314;

loc_00039B67: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x20;
    PUSH32(esp, 0x2E0818);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00039B7Cu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00039B7C: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00039B86u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00039B86: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ebx + -32) = eax;
    edx = esp + 0x2C;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    MEMF(esi + -16) = xmm0.f[0]; /* movss */
    MEMF(esi + -20) = xmm0.f[0]; /* movss */
    MEMF(esi + -24) = xmm0.f[0]; /* movss */
    MEMF(esi + -28) = xmm0.f[0]; /* movss */
    MEMF(esi + -36) = xmm0.f[0]; /* movss */
    MEMF(esi + -40) = xmm0.f[0]; /* movss */
    MEMF(esi + -44) = xmm0.f[0]; /* movss */
    MEMF(esi + -48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + -12) = xmm0.f[0]; /* movss */
    MEMF(esi + -32) = xmm0.f[0]; /* movss */
    MEMF(esi + -52) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00039BEDu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00039BED: ;
    PUSH32(esp, 0x3F);
    ecx = edi + 0x1D4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00039BFCu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00039BFC: ;
    ecx = esi + -52;
    MEM32(edi + eax * 4 + 0xD4) = ecx;
    edx = MEM32(edi + 0xCC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0xCC) = edx;
    eax = MEM32(ebp);
    ecx = MEM32(ebp);
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x8B6724B5u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98CE4424u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x98CE4424u)) >> 32) & 1);
    ecx = ecx + 0x98CE4424u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    if (0x13) _cf = (int)(((ecx) >> (32 - (0x13))) & 1);
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    if (0xD) _cf = (int)(((edx) >> ((0xD) - 1)) & 1);
    edx = edx >> 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((8) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC34C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x2E0814); /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x20) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x40)) >> 32) & 1);
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00039B67; /* jl: less (signed <) */

loc_00039CA2: ;
    ecx = MEM32(esp + 0x30);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00039CC0
 * Original: 0x00039CC0 - 0x00039F83 (707 bytes, 180 insns)
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00039CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00039CC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x1C); /* subss */
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x20); /* subss */
    PUSH32(esp, edi);
    eax = esp + 0xC;
    esi = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x24); /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039D0Fu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00039D0F: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(esi);
    ecx = MEM32(0x643844);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(edx + 0x18C);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    edi = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039D56u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00039D56: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00039D64; /* jge: greater or equal (signed >=) */

loc_00039D5D: ;
    eax = 0x6438B8;
    goto loc_00039D6D;

loc_00039D64: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_00039D6D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00039F7B; /* je: equal / zero */

loc_00039D7A: ;
    esi = MEM32(esi);
    eax = MEM32(ebp + 0xC);
    edx = esi + 0x194;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039D9Cu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00039D9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00039F7B; /* je: equal / zero */

loc_00039DA4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x40);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(esp + 0x20) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x18) = eax;
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = esp + 0x24;
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x88;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039E51u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00039E51: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    eax = esp + 0x88;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039EB3u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_00039EB3: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x18;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039EDAu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00039EDA: ;
    esi = MEM32(ebp + 0x28);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039EE3u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_00039EE3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x2C)); /* fmul dword ptr [ebp + 0x2c] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x78;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x30)); /* fadd dword ptr [ebp + 0x30] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039F0Du); RECOMP_ABI_CALL(0x0022F8BDu, sub_0022F8BD); /* call 0x0022F8BD */

loc_00039F0D: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039F13u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_00039F13: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x2C)); /* fmul dword ptr [ebp + 0x2c] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    eax = esp + 0xD0;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039F3Au); RECOMP_ABI_CALL(0x0022F8BDu, sub_0022F8BD); /* call 0x0022F8BD */

loc_00039F3A: ;
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039F57u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00039F57: ;
    ecx = esp + 0x110;
    PUSH32(esp, ecx);
    ecx = esp + 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039F6Bu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00039F6B: ;
    ecx = MEM32(ebp + 8);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00039F7Bu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00039F7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 48; return; /* ret 44 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00039F90
 * Original: 0x00039F90 - 0x00039FFC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00039F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00039F98u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00039F98: ;
    MEM32(esi) = 0x2E0824;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00039FF5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00039FF5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003A000
 * Original: 0x0003A000 - 0x0003A126 (294 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0003A000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0003A000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);

loc_0003A015: ;
    eax = ecx + edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + ebx); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    edx = edi;
    esi = ecx;

loc_0003A033: ;
    eax = esi + esi * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ebx + 0xC;
    /* nop */

loc_0003A040: ;
    _fca = xmm2.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003A04B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(eax)) */

loc_0003A045: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003A040;

loc_0003A04B: ;
    eax = edx + edx * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ebx + 0xC;

loc_0003A055: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003A064; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0003A05E: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0003A055;

loc_0003A064: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003A0FE; /* jl: less (signed <) */

loc_0003A06C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0003A0F4; /* je: equal / zero */

loc_0003A072: ;
    ecx = edx + edx * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ecx + ebx + 0x20);
    xmm0 = XMM_MEM(ecx + ebx); /* movaps */
    xmm1 = XMM_MEM(ecx + ebx + 0x10); /* movaps */
    eax = ecx + ebx;
    ecx = MEM32(eax + 0x24);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(eax + 0x2C);
    MEM32(esp + 0x3C) = ecx;
    ecx = esi + esi * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm3 = XMM_MEM(ecx + ebx); /* movaps */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm3); /* movaps */
    xmm3 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm3); /* movaps */
    ebx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = ebx;
    ebx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = ebx;
    ebx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = ebx;
    ebx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = ebx;
    eax = MEM32(esp + 0x34);
    ebx = MEM32(ebp + 8);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(ecx + 0x20) = edi;
    edi = MEM32(ebp + 0x10);
    XMM_STORE(ecx, xmm0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(ebp + 0xC);

loc_0003A0F4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003A033; /* jle: less or equal (signed <=) */

loc_0003A0FE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003A111; /* jge: greater or equal (signed >=) */

loc_0003A102: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A10Eu); RECOMP_ABI_CALL(0x0003A000u, sub_0003A000); /* call 0x0003A000 */

loc_0003A10E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A111: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003A11F; /* jge: greater or equal (signed >=) */

loc_0003A115: ;
    ecx = esi;
    MEM32(ebp + 0xC) = ecx;
    goto loc_0003A015;

loc_0003A11F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0003A130
 * Original: 0x0003A130 - 0x0003A13C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003A130: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003A140(); return; /* tail jmp 0x0003A140 */

}

/**
 * sub_0003A140
 * Original: 0x0003A140 - 0x0003A1AC (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A140: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A1A7; /* je: equal / zero */

loc_0003A152: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x1DC);
    edx = MEM32(ecx + 0x1E0);
    MEM32(ecx + 0x1E4) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x1E0);
    edx = MEM32(ecx + 0x1DC);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003A18A; /* je: equal / zero */

loc_0003A184: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0003A18Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A188u); } /* indirect call */
    }

loc_0003A18A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFE00u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFE00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A152; /* jne: not equal / not zero */

loc_0003A1A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0003A1B0
 * Original: 0x0003A1B0 - 0x0003A255 (165 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C0);
    PUSH32(esp, eax);
    ecx = 0x30E854;
    PUSH32(esp, 0x0003A1C4u); RECOMP_ABI_CALL(0x00022E60u, sub_00022E60); /* call 0x00022E60 */

loc_0003A1C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003A253; /* jl: less (signed <) */

loc_0003A1CC: ;
    ecx = MEM32(0x30E854);
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A252; /* je: equal / zero */

loc_0003A1DA: ;
    eax = MEM32(esi + 0x1EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A211; /* jne: not equal / not zero */

loc_0003A1E4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0003A1F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A1EEu); } /* indirect call */
    }

loc_0003A1F4: ;
    eax = eax | 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003A208u); RECOMP_ABI_CALL(0x0012FCC0u, sub_0012FCC0); /* call 0x0012FCC0 */

loc_0003A208: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1EC) = eax;

loc_0003A211: ;
    eax = MEM32(esi + 0x1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003A252; /* jne: not equal / not zero */

loc_0003A21B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0003A229u); RECOMP_ABI_CALL(0x0012BB40u, sub_0012BB40); /* call 0x0012BB40 */

loc_0003A229: ;
    edi = MEM32(edi + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003A252; /* jl: less (signed <) */

loc_0003A233: ;
    PUSH32(esp, 0x16);
    ecx = esi + 0xB0;
    edx = eax + eax * 2;
    PUSH32(esp, ecx);
    eax = edi + edx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0003A249u); RECOMP_ABI_CALL(0x0012F910u, sub_0012F910); /* call 0x0012F910 */

loc_0003A249: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1F0) = eax;

loc_0003A252: ;
    POP32(esp, edi);

loc_0003A253: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003A260
 * Original: 0x0003A260 - 0x0003A361 (257 bytes, 86 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003A260: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    fp_push(MEMF(ebp)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    ebx = ecx;
    fp_push(MEMF(ebp + 4)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    edi = ebx + 0x2E0;
    fp_push(MEMF(ebp + 8)); /* fld float */
    esi = ebx + 0x520;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEM32(esp + 0x10) = 8;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E083C)); /* fmul dword ptr [0x2e083c] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC094)); /* fmul dword ptr [0x2dc094] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E0838)); /* fmul dword ptr [0x2e0838] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0003A2E0;

loc_0003A2D8: ;
    eax = MEM32(esp + 0x2C);
    /* nop */

loc_0003A2E0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + -32)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEMF(esi) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    ecx = ebp;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = MEM32(esi + -64);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0003A346u); RECOMP_ABI_CALL(0x00039CC0u, sub_00039CC0); /* call 0x00039CC0 */

loc_0003A346: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0003A2D8; /* jne: not equal / not zero */

loc_0003A357: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003A370
 * Original: 0x0003A370 - 0x0003A3CF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x0003A384u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0003A384: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A394; /* je: equal / zero */

loc_0003A38B: ;
    ecx = eax;
    PUSH32(esp, 0x0003A392u); RECOMP_ABI_CALL(0x00039890u, sub_00039890); /* call 0x00039890 */

loc_0003A392: ;
    goto loc_0003A396;

loc_0003A394: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003A396: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x1DC;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x200;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003A3D0
 * Original: 0x0003A3D0 - 0x0003A41A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A3D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A3D0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x1DC;
    PUSH32(esp, edi);
    MEM32(ecx + 0x74) = MEM32(ecx + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = 0;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    MEM32(esi) = edi;
    esi = MEM32(ecx + 0x84);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0003A420
 * Original: 0x0003A420 - 0x0003A448 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A420: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0003A447; /* js: sign (negative) */

loc_0003A429: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0003A446u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A443u); } /* indirect call */
    }

loc_0003A446: ;
    POP32(esp, esi);

loc_0003A447: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003A450
 * Original: 0x0003A450 - 0x0003A470 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A450: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003A46F; /* jle: less or equal (signed <=) */

loc_0003A459: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003A46Cu); RECOMP_ABI_CALL(0x0003A000u, sub_0003A000); /* call 0x0003A000 */

loc_0003A46C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A46F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003A470
 * Original: 0x0003A470 - 0x0003A587 (279 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0003A470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A487u); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_0003A487: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xDA96371Bu);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0003A493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A490u); } /* indirect call */
    }

loc_0003A493: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0003A49Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A49Cu); } /* indirect call */
    }

loc_0003A49F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0003A4C0; /* je: equal / zero */

loc_0003A4A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x643860;
    MEM32(esi + 0x1C8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A4C0u); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_0003A4C0: ;
    ecx = MEM32(esi + 0x1C0);
    eax = MEM32(esi + 0x170);
    ebx = esi + 0x170;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0003A4D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A4D5u); } /* indirect call */
    }

loc_0003A4D8: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0003A4DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A4DCu); } /* indirect call */
    }

loc_0003A4DF: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xEDCCBA70u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0003A4EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A4E8u); } /* indirect call */
    }

loc_0003A4EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0003A50C; /* je: equal / zero */

loc_0003A4F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x643860;
    MEM32(esi + 0x1CC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A50Cu); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_0003A50C: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A51Eu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0003A51E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0003A528u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A525u); } /* indirect call */
    }

loc_0003A528: ;
    edx = esi + 0xB0;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A536u); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_0003A536: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x1EC) = edi;
    MEM32(esi + 0x1F0) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A54Bu); RECOMP_ABI_CALL(0x0003A1B0u, sub_0003A1B0); /* call 0x0003A1B0 */

loc_0003A54B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    MEM32(esi + 0x1D4) = 0x4140CC;
    eax = MEM32(0x4140CC);
    MEM32(esi + 0x1D0) = eax;
    ecx = esi + 0x18;
    MEM32(esi + 0x1D8) = edi;
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0003A57Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A57Bu); } /* indirect call */
    }

loc_0003A57E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0003A590
 * Original: 0x0003A590 - 0x0003A63E (174 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A590: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A5BE; /* je: equal / zero */

loc_0003A5A0: ;
    ecx = MEM32(esi + 0x1C8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x643860;
    PUSH32(esp, 0x0003A5B2u); RECOMP_ABI_CALL(0x001F7AF0u, sub_001F7AF0); /* call 0x001F7AF0 */

loc_0003A5B2: ;
    MEM32(esi + 0x1C8) = edi;
    MEM32(esi + 0x1C0) = edi;

loc_0003A5BE: ;
    eax = MEM32(esi + 0x1C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A5E6; /* je: equal / zero */

loc_0003A5C8: ;
    edx = MEM32(esi + 0x1CC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x643860;
    PUSH32(esp, 0x0003A5DAu); RECOMP_ABI_CALL(0x001F7AF0u, sub_001F7AF0); /* call 0x001F7AF0 */

loc_0003A5DA: ;
    MEM32(esi + 0x1CC) = edi;
    MEM32(esi + 0x1C4) = edi;

loc_0003A5E6: ;
    ecx = esi;
    PUSH32(esp, 0x0003A5EDu); RECOMP_ABI_CALL(0x00015270u, sub_00015270); /* call 0x00015270 */

loc_0003A5ED: ;
    eax = MEM32(esi + 0x170);
    ecx = esi + 0x170;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0003A5FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A5F9u); } /* indirect call */
    }

loc_0003A5FC: ;
    eax = MEM32(esi + 0x1EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A617; /* je: equal / zero */

loc_0003A606: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003A60Eu); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_0003A60E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1EC) = edi;

loc_0003A617: ;
    eax = MEM32(esi + 0x1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A630; /* je: equal / zero */

loc_0003A621: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003A627u); RECOMP_ABI_CALL(0x0012BB10u, sub_0012BB10); /* call 0x0012BB10 */

loc_0003A627: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1F0) = edi;

loc_0003A630: ;
    PUSH32(esp, esi);
    ecx = 0x31BDF8;
    PUSH32(esp, 0x0003A63Bu); RECOMP_ABI_CALL(0x0003A3D0u, sub_0003A3D0); /* call 0x0003A3D0 */

loc_0003A63B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003A640
 * Original: 0x0003A640 - 0x0003A661 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A640: ;
    PUSH32(esp, esi);
    ecx = 0x31BDF8;
    PUSH32(esp, 0x0003A64Bu); RECOMP_ABI_CALL(0x0003A370u, sub_0003A370); /* call 0x0003A370 */

loc_0003A64B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A65D; /* je: equal / zero */

loc_0003A651: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0003A65Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A65Au); } /* indirect call */
    }

loc_0003A65D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003A670
 * Original: 0x0003A670 - 0x0003A68C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A670: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    MEM8(esp) = 0;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0003A688u); RECOMP_ABI_CALL(0x0003A450u, sub_0003A450); /* call 0x0003A450 */

loc_0003A688: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003A690
 * Original: 0x0003A690 - 0x0003A6F5 (101 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A690: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240DC8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2E0840;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0003A6DF; /* js: sign (negative) */

loc_0003A6C2: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0003A6DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A6DCu); } /* indirect call */
    }

loc_0003A6DF: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x2E0660;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003A700
 * Original: 0x0003A700 - 0x0003A711 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003A700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003A700: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003A70Du); RECOMP_ABI_CALL(0x0003A670u, sub_0003A670); /* call 0x0003A670 */

loc_0003A70D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003A720
 * Original: 0x0003A720 - 0x0003AC38 (1304 bytes, 312 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0003A720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0003A720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240DF6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x228;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x68) = 0x2E084C;
    edx = MEM32(ecx + 0x1F0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x23C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0003AC21; /* je: equal / zero */

loc_0003A763: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 8); /* comiss */
    if ((_fca >= _fcb)) goto loc_0003AC21; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ebp + 8)) */

loc_0003A770: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0658)); /* movss */
    edx = esp + 0xB0;
    MEM32(esp + 0x90) = 0x2E0840;
    MEM32(esp + 0xA0) = edx;
    MEM32(esp + 0xA8) = 0x80000008u;
    MEM32(esp + 0xA4) = eax;
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0x1F0);
    eax = MEM32(ecx);
    edx = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x240) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0003A7C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A7C4u); } /* indirect call */
    }

loc_0003A7C7: ;
    eax = MEM32(esp + 0xA4);
    ebx = MEM32(esp + 0xA0);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AC0D; /* je: equal / zero */

loc_0003A7E5: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ebx;
    /* nop */

loc_0003A7F0: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003ABE5; /* jne: not equal / not zero */

loc_0003A7FC: ;
    esi = MEM32(eax + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003ABE5; /* je: equal / zero */

loc_0003A807: ;
    edi = MEM32(esi + 0xA4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebx + -32)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + -36)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + -40)); /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A84F; /* je: equal / zero */

loc_0003A832: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0003A839u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003A836u); } /* indirect call */
    }

loc_0003A839: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0003A857; /* je: equal / zero */

loc_0003A84F: ;
    MEM32(esp + 0x1C) = 0;

loc_0003A857: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A97C; /* je: equal / zero */

loc_0003A85F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC890)); /* movss */
    eax = MEM32(esi + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A8C6; /* je: equal / zero */

loc_0003A88C: ;
    PUSH32(esp, 0x67A023F7);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A898u); RECOMP_ABI_CALL(0x001EA000u, sub_001EA000); /* call 0x001EA000 */

loc_0003A898: ;
    ebx = eax;
    eax = MEM32(esi + 0xAC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xE4)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xE8)); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xEC)); /* movss */
    goto loc_0003A923;

loc_0003A8C6: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A97C; /* je: equal / zero */

loc_0003A8D4: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A97C; /* je: equal / zero */

loc_0003A8E0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A8E7u); RECOMP_ABI_CALL(0x000397E0u, sub_000397E0); /* call 0x000397E0 */

loc_0003A8E7: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x324BFF50);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A8F7u); RECOMP_ABI_CALL(0x001EA000u, sub_001EA000); /* call 0x001EA000 */

loc_0003A8F7: ;
    ecx = MEM32(esi + 0xA8);
    ebx = eax;
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A909u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0003A909: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */

loc_0003A923: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0003A978; /* je: equal / zero */

loc_0003A92D: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003A978; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x2DC08C)) */

loc_0003A953: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 1);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A96Bu); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_0003A96B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A975u); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_0003A975: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003A978: ;
    ebx = MEM32(esp + 0xC);

loc_0003A97C: ;
    edi = MEM32(esi + 0xA8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003ABE5; /* je: equal / zero */

loc_0003A98A: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003ABE5; /* je: equal / zero */

loc_0003A996: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + -16)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + -24)); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003A9C7u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0003A9C7: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(edi);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + -28)); /* movss */
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0003AA06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003AA03u); } /* indirect call */
    }

loc_0003AA06: ;
    eax = MEM32(esi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003AA26; /* jnp: not parity */

loc_0003AA1A: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */

loc_0003AA26: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC084)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    eax = esp + 0x78;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x68) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003AAD8u); RECOMP_ABI_CALL(0x000399E0u, sub_000399E0); /* call 0x000399E0 */

loc_0003AAD8: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 0x4C); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003AAF6; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esp + 0x4C)) */

loc_0003AAED: ;
    ecx = esp + 0x5C;
    goto loc_0003ABD8;

loc_0003AAF6: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC084)); /* fmul dword ptr [0x2dc084] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2E0848)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0003AB40; /* jbe: below or equal (unsigned <=) */

loc_0003AB36: ;
    xmm4 = XMM_SCALAR(MEMF(0x2E0848)); /* movss */
    goto loc_0003AB56;

loc_0003AB40: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003AB56; /* ja: above (unsigned >) (xmm0.f[0] vs xmm4.f[0]) */

loc_0003AB53: ;
    xmm4 = xmm0; /* movaps */

loc_0003AB56: ;
    esi = MEM32(esi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003AB73; /* jnp: not parity */

loc_0003AB67: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */

loc_0003AB73: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    ecx = esp + 0x50;

loc_0003ABD8: ;
    edx = MEM32(edi);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0003ABE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003ABE2u); } /* indirect call */
    }

loc_0003ABE5: ;
    eax = MEM32(esp + 0xA4);
    esi = MEM32(esp + 0xA0);
    edx = eax + eax * 2;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + -40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0003A7F0; /* jne: not equal / not zero */

loc_0003AC0D: ;
    ecx = esp + 0x90;
    MEM8(esp + 0x23C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003AC21u); RECOMP_ABI_CALL(0x0003A690u, sub_0003A690); /* call 0x0003A690 */

loc_0003AC21: ;
    ecx = MEM32(esp + 0x234);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003AC40
 * Original: 0x0003AC40 - 0x0003AC65 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003AC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0003AC48u); RECOMP_ABI_CALL(0x0003A690u, sub_0003A690); /* call 0x0003A690 */

loc_0003AC48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003AC5F; /* je: equal / zero */

loc_0003AC4F: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0003AC5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003AC5Cu); } /* indirect call */
    }

loc_0003AC5F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0003AC70
 * Original: 0x0003AC70 - 0x0003AEA1 (561 bytes, 154 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0003AC70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240E08);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0xC) = 0x2E085C;
    ebx = MEM32(esp + 0x38);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esp + 0x34) = edi;
    PUSH32(esp, 0x0003ACA5u); RECOMP_ABI_CALL(0x000140D0u, sub_000140D0); /* call 0x000140D0 */

loc_0003ACA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003ACBD; /* jne: not equal / not zero */

loc_0003ACA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0003ACBD: ;
    _fa = (uint32_t)(MEM32(esi + 0x1EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1EC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003ACD4; /* jne: not equal / not zero */

loc_0003ACC5: ;
    _fa = (uint32_t)(MEM32(esi + 0x1F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1F0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003ACD4; /* jne: not equal / not zero */

loc_0003ACCD: ;
    ecx = esi;
    PUSH32(esp, 0x0003ACD4u); RECOMP_ABI_CALL(0x0003A1B0u, sub_0003A1B0); /* call 0x0003A1B0 */

loc_0003ACD4: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0003ACDCu); RECOMP_ABI_CALL(0x0003A720u, sub_0003A720); /* call 0x0003A720 */

loc_0003ACDC: ;
    _fa = (uint32_t)(MEM32(0x31BDF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x31BDF0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AE8B; /* je: equal / zero */

loc_0003ACE8: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0003ACF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003ACF1u); } /* indirect call */
    }

loc_0003ACF4: ;
    ecx = MEM32(0x31BDF0);
    edx = MEM32(ecx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0003AD04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003AD01u); } /* indirect call */
    }

loc_0003AD04: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2E065C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0003AE32; /* ja: above (unsigned >) */

loc_0003AD46: ;
    eax = MEM32(esi + 0x1C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AE32; /* je: equal / zero */

loc_0003AD54: ;
    _fa = (uint32_t)(MEM32(esi + 0x18C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AD8A; /* je: equal / zero */

loc_0003AD5C: ;
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003AD68u); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_0003AD68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AD8A; /* je: equal / zero */

loc_0003AD6C: ;
    _fa = (uint32_t)(MEM32(eax + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x88), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AD8A; /* je: equal / zero */

loc_0003AD74: ;
    eax = MEM32(esi + 0x1C4);
    edx = MEM32(esi + 0x170);
    ecx = esi + 0x170;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0003AD8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003AD87u); } /* indirect call */
    }

loc_0003AD8A: ;
    _fa = (uint32_t)(MEM32(esi + 0x1E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1E8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003ADE3; /* jne: not equal / not zero */

loc_0003AD93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x31BE80;
    /* nop */

loc_0003ADA0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003ADB5; /* je: equal / zero */

loc_0003ADA4: ;
    _fb = (uint32_t)(0x550) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x550;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31FE40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x31FE40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003ADA0; /* jl: less (signed <) */

loc_0003ADB3: ;
    goto loc_0003ADE3;

loc_0003ADB5: ;
    MEM32(esi + 0x1E8) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x550);
    MEM32(eax + 0x31BE80) = esi;
    eax = eax + 0x31BE84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x190) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0003ADE3; /* je: equal / zero */

loc_0003ADD7: ;
    ecx = esi + 0x194;
    MEM32(eax + 0x2D0) = ecx;

loc_0003ADE3: ;
    ecx = MEM32(esi + 0x1E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AE8B; /* je: equal / zero */

loc_0003ADF2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003AE8B; /* jge: greater or equal (signed >=) */

loc_0003ADFB: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x550);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x31BE80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x31BE80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003AE17u); RECOMP_ABI_CALL(0x0003A260u, sub_0003A260); /* call 0x0003A260 */

loc_0003AE17: ;
    ecx = MEM32(esi + 0x190);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6438E0);
    ecx = esi + 0x194;
    PUSH32(esp, 0x0003AE30u); RECOMP_ABI_CALL(0x00204770u, sub_00204770); /* call 0x00204770 */

loc_0003AE30: ;
    goto loc_0003AE8B;

loc_0003AE32: ;
    eax = MEM32(esi + 0x1E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AE59; /* je: equal / zero */

loc_0003AE3D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x550);
    MEM32(eax + 0x31BE80) = edi;
    MEM32(esi + 0x190) = edi;
    MEM32(esi + 0x1E8) = 0xFFFFFFFFu;

loc_0003AE59: ;
    eax = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(MEM32(esi + 0x18C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003AE77; /* je: equal / zero */

loc_0003AE67: ;
    edx = MEM32(esi + 0x170);
    ecx = esi + 0x170;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0003AE77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003AE74u); } /* indirect call */
    }

loc_0003AE77: ;
    eax = MEM32(esi + 0x1D4);
    ecx = MEM32(eax);
    MEM32(esi + 0x1D0) = ecx;
    MEM32(esi + 0x1D8) = edi;

loc_0003AE8B: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003AEB0
 * Original: 0x0003AEB0 - 0x0003AEBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003AEB0: ;
    MEM32(ecx) = 0x2E0868;
    g_seh_ebp = ebp; sub_00011070(); return; /* tail jmp 0x00011070 */

}

/**
 * sub_0003AEC0
 * Original: 0x0003AEC0 - 0x0003AF0E (78 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003AEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0003AEC0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x244); /* subss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x228); /* subss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEMF(edi) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003AEFAu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_0003AEFA: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003AF04u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_0003AF04: ;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
