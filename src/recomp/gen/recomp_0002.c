/**
 * Mercenaries - Recompiled code chunk 2
 * Functions: 250 (0x00029C40 - 0x00033970)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00029C40
 * Original: 0x00029C40 - 0x00029C48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00029C40: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F3C60(); return; /* tail jmp 0x001F3C60 */

}

/**
 * sub_00029C50
 * Original: 0x00029C50 - 0x00029C57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029C50(void)
{

loc_00029C50: ;
    MEM32(ecx) = 0x2DC8CC;
    esp += 4; return; /* ret */

}

/**
 * sub_00029C60
 * Original: 0x00029C60 - 0x00029CD4 (116 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029C60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2409B2);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0x6F8;
    MEM32(esp + 0x10) = 2;
    PUSH32(esp, 0x00029C90u); RECOMP_ABI_CALL(0x001F3720u, sub_001F3720); /* call 0x001F3720 */

loc_00029C90: ;
    ecx = esi + 0x69C;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x00029CA0u); RECOMP_ABI_CALL(0x001F3C60u, sub_001F3C60); /* call 0x001F3C60 */

loc_00029CA0: ;
    PUSH32(esp, 0x29C40);
    PUSH32(esp, 8);
    PUSH32(esp, 0xD0);
    PUSH32(esp, esi);
    MEM32(esi + 0x694) = 0x2DC8CC;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00029CC4u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00029CC4: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00029CE0
 * Original: 0x00029CE0 - 0x00029DCF (239 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00029CE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6EC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029CF1u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_00029CF1: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029D13; /* je: equal / zero */

loc_00029CFA: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00029D01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029CFEu); } /* indirect call */
    }

loc_00029D01: ;
    edx = MEM32(0x30C2A4);
    ecx = MEM32(0x30C2A0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029D15; /* je: equal / zero */

loc_00029D13: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00029D15: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00029D32; /* je: equal / zero */

loc_00029D21: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00029D2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029D25u); } /* indirect call */
    }

loc_00029D2B: ;
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 8) = ecx;

loc_00029D32: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00029D36: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029DA2; /* je: equal / zero */

loc_00029D3B: ;
    ebp = ZX8(LO8(ebx));
    eax = MEM32(esi + ebp * 4 + 0x630);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029DA2; /* je: equal / zero */

loc_00029D49: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029D73; /* jne: not equal / not zero */

loc_00029D4D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00029D57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029D51u); } /* indirect call */
    }

loc_00029D57: ;
    ecx = MEM32(esi + 0x664);
    edx = MEM32(esi + 0x630);
    PUSH32(esp, eax);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x26C);
    goto loc_00029D97;

loc_00029D73: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00029D7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029D77u); } /* indirect call */
    }

loc_00029D7D: ;
    ecx = MEM32(esi + ebp * 4 + 0x664);
    edx = MEM32(esi + ebp * 4 + 0x630);
    PUSH32(esp, eax);
    eax = edi + 0xB0;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);

loc_00029D97: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029D9Fu); RECOMP_ABI_CALL(0x00038CD0u, sub_00038CD0); /* call 0x00038CD0 */

loc_00029D9F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00029DA2: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029D36; /* jb: below (unsigned <) */

loc_00029DA9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00029DCB; /* je: equal / zero */

loc_00029DAF: ;
    ecx = esi + 0x6F0;
    PUSH32(esp, 0x00029DBAu); RECOMP_ABI_CALL(0x001453E0u, sub_001453E0); /* call 0x001453E0 */

loc_00029DBA: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00029DC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029DBEu); } /* indirect call */
    }

loc_00029DC1: ;
    MEM32(esi + 0x6EC) = 0;

loc_00029DCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00029DD0
 * Original: 0x00029DD0 - 0x00029F03 (307 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029DD0(void)
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

loc_00029DD0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x6EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029DE3u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_00029DE3: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EFB; /* je: equal / zero */

loc_00029DF0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00029DF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029DF4u); } /* indirect call */
    }

loc_00029DF7: ;
    edx = MEM32(0x30C2A4);
    ecx = MEM32(0x30C2A0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029EFB; /* jne: not equal / not zero */

loc_00029E0D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00029E17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029E11u); } /* indirect call */
    }

loc_00029E17: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EFB; /* je: equal / zero */

loc_00029E21: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xEA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi + 0xEA4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00029E5F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00029E3F: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0xEA0); /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC084)); /* movss */
    MEMF(edi + 0xEA0) = xmm1.f[0]; /* movss */
    MEMF(edi + 0xEA4) = xmm0.f[0]; /* movss */

loc_00029E5F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xEA0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00029EA4u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00029EA4: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    eax = esp + 0x18;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00029EFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029EF8u); } /* indirect call */
    }

loc_00029EFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00029F10
 * Original: 0x00029F10 - 0x00029FDF (207 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00029F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029F10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 8);
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx, xmm2); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm4 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0 = xmm4; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0x55); /* shufps */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm7 = xmm0; /* movaps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm0, 0xAA); /* shufps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    edx = esp + 0xC;
    MEMF(edx) = xmm7.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xC9); /* shufps */
    xmm6 = xmm4; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm4, 0xD2); /* shufps */
    xmm6 = XMM_MUL(xmm6, xmm5); /* mulps */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xD2); /* shufps */
    xmm1 = xmm4; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0xC9); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm5); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm6); /* subps */
    xmm5 = xmm3; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm3, 0); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm4); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm2 = XMM_ADD(xmm2, xmm5); /* addps */
    XMM_STORE(ecx, xmm2); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00029FE0
 * Original: 0x00029FE0 - 0x0002A0B7 (215 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00029FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 8);
    xmm5 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx, xmm2); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    xmm3 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0x55); /* shufps */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm0, 0xAA); /* shufps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xC9); /* shufps */
    edx = esp + 0xC;
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    MEMF(edx) = xmm7.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm3, 0xD2); /* shufps */
    xmm6 = XMM_MUL(xmm6, xmm5); /* mulps */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xD2); /* shufps */
    xmm1 = xmm3; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm3, 0xC9); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm5); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm6); /* subps */
    xmm5 = xmm4; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm2 = XMM_ADD(xmm2, xmm5); /* addps */
    XMM_STORE(ecx, xmm2); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002A0C0
 * Original: 0x0002A0C0 - 0x0002A32B (619 bytes, 184 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002A0C0(void)
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

loc_0002A0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(esi + 4) = eax;
    MEM32(esi) = ebx;
    xmm2 = XMM_MEM(ecx); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x1C, xmm0); /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002A14F; /* jnp: not parity */

loc_0002A115: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_0002A156;

loc_0002A14F: ;
    xmm1.f[0] = xmm1.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */

loc_0002A156: ;
    eax = MEM32(ebx + 0x3C);
    edx = esp + 0x20;
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    edi = esi + 0x30;
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    PUSH32(esp, eax);
    ecx = edi;
    XMM_STORE(esp + 0x28, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A17Bu); RECOMP_ABI_CALL(0x00029FE0u, sub_00029FE0); /* call 0x00029FE0 */

loc_0002A17B: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x3C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A192u); RECOMP_ABI_CALL(0x00029FE0u, sub_00029FE0); /* call 0x00029FE0 */

loc_0002A192: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebx + 0x3C);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A1A8u); RECOMP_ABI_CALL(0x001CF750u, sub_001CF750); /* call 0x001CF750 */

loc_0002A1A8: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0x3C);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A1C1u); RECOMP_ABI_CALL(0x001CF750u, sub_001CF750); /* call 0x001CF750 */

loc_0002A1C1: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    ecx = 1;
    fp_top() = fabs(fp_top()); /* fabs */
    edx = 2;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0002A204; /* jbe: below or equal (unsigned <=) */

loc_0002A1F5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    goto loc_0002A20A;

loc_0002A204: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_0002A20A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002A218; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_0002A211: ;
    edx = eax;
    eax = 2;

loc_0002A218: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + eax * 4 + 0x50) = xmm1.f[0]; /* movss */
    eax = edx * 4;
    edx = MEM32(eax + edi);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + esi + 0x50) = edx;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + edi); /* subss */
    MEMF(eax + esi + 0x50) = xmm0.f[0]; /* movss */
    xmm2 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002A2B1; /* jnp: not parity */

loc_0002A277: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_0002A2B8;

loc_0002A2B1: ;
    xmm1.f[0] = xmm1.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */

loc_0002A2B8: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    XMM_STORE(esi + 0x50, xmm1); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_MEM(edi); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xC9); /* shufps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xD2); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xC9); /* shufps */
    eax = esi + 0x60;
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    XMM_STORE(eax, xmm0); /* movaps */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A30Bu); RECOMP_ABI_CALL(0x00029F10u, sub_00029F10); /* call 0x00029F10 */

loc_0002A30B: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x3C);
    edx = esp + 0x20;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A322u); RECOMP_ABI_CALL(0x00029FE0u, sub_00029FE0); /* call 0x00029FE0 */

loc_0002A322: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002A330
 * Original: 0x0002A330 - 0x0002A37C (76 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002A330: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2409C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0x20;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0002A35Du); RECOMP_ABI_CALL(0x00029C60u, sub_00029C60); /* call 0x00029C60 */

loc_0002A35D: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0002A36Cu); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_0002A36C: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002A380
 * Original: 0x0002A380 - 0x0002A83F (1215 bytes, 314 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002A380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002A380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2409EE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0002A3AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A3A8u); } /* indirect call */
    }

loc_0002A3AE: ;
    esi = MEM32(eax + 0x1C);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A3B8u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0002A3B8: ;
    PUSH32(esp, esi);
    ecx = 0x643860;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A3C7u); RECOMP_ABI_CALL(0x001F75B0u, sub_001F75B0); /* call 0x001F75B0 */

loc_0002A3C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A82A; /* je: equal / zero */

loc_0002A3CF: ;
    eax = MEM32(ebx + 0x300);
    ecx = ebx + 0x2F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A823; /* je: equal / zero */

loc_0002A3E3: ;
    edx = MEM32(ebx);
    ecx = ebx;
    edi = ebx + 0xB0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0002A3F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A3EDu); } /* indirect call */
    }

loc_0002A3F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD99139EAu);
    PUSH32(esp, 0x43602D66);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A405u); RECOMP_ABI_CALL(0x00038CD0u, sub_00038CD0); /* call 0x00038CD0 */

loc_0002A405: ;
    esi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A427; /* je: equal / zero */

loc_0002A40E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002A415u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A412u); } /* indirect call */
    }

loc_0002A415: ;
    edx = MEM32(0x30C2EC);
    ecx = MEM32(0x30C2E8);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A429; /* je: equal / zero */

loc_0002A427: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002A429: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x28);
    MEM32(ebx + 0x6EC) = eax;
    ecx = MEM32(esi + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A43Du); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_0002A43D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A444u); RECOMP_ABI_CALL(0x00038930u, sub_00038930); /* call 0x00038930 */

loc_0002A444: ;
    ecx = esp + 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A450u); RECOMP_ABI_CALL(0x001C35B0u, sub_001C35B0); /* call 0x001C35B0 */

loc_0002A450: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002A45Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A459u); } /* indirect call */
    }

loc_0002A45C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x0002A4B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A4B3u); } /* indirect call */
    }

loc_0002A4B9: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0002A4C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A4BEu); } /* indirect call */
    }

loc_0002A4C4: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A4D1u); RECOMP_ABI_CALL(0x0002A0C0u, sub_0002A0C0); /* call 0x0002A0C0 */

loc_0002A4D1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE088)); /* movss */
    ecx = MEM32(0x4409AC);
    MEMF(esp + 0x130) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DDA3C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27);
    MEMF(esp + 0x138) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, 0xE0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002A505u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A502u); } /* indirect call */
    }

loc_0002A505: ;
    MEM16(eax + 4) = 0xE0;
    MEM32(esp + 0x24) = eax;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x150) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A529u); RECOMP_ABI_CALL(0x001C2FD0u, sub_001C2FD0); /* call 0x001C2FD0 */

loc_0002A529: ;
    ecx = MEM32(0x37A3F0);
    edi = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x150) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A542u); RECOMP_ABI_CALL(0x001BDFA0u, sub_001BDFA0); /* call 0x001BDFA0 */

loc_0002A542: ;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A555; /* jne: not equal / not zero */

loc_0002A54D: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002A555u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A553u); } /* indirect call */
    }

loc_0002A555: ;
    eax = MEM32(esi);
    ecx = esi;
    edi = ebx + 0x6F0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x0002A565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A55Fu); } /* indirect call */
    }

loc_0002A565: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A56Du); RECOMP_ABI_CALL(0x00143840u, sub_00143840); /* call 0x00143840 */

loc_0002A56D: ;
    eax = ebx + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A57Du); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0002A57D: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DD444)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C92378E);
    MEMF(esp + 0x94) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002A60Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A607u); } /* indirect call */
    }

loc_0002A60A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A613; /* jne: not equal / not zero */

loc_0002A60E: ;
    eax = 0x2F9FCCC9;

loc_0002A613: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A629u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0002A629: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A650; /* je: equal / zero */

loc_0002A633: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002A63Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A637u); } /* indirect call */
    }

loc_0002A63A: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A658; /* je: equal / zero */

loc_0002A650: ;
    MEM32(esp + 0x28) = 0;

loc_0002A658: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A679; /* je: equal / zero */

loc_0002A65C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002A663u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A660u); } /* indirect call */
    }

loc_0002A663: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x2C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A681; /* je: equal / zero */

loc_0002A679: ;
    MEM32(esp + 0x2C) = 0;

loc_0002A681: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A6A2; /* je: equal / zero */

loc_0002A685: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002A68Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A689u); } /* indirect call */
    }

loc_0002A68C: ;
    edx = MEM32(0x30C24C);
    ecx = MEM32(0x30C248);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A6AA; /* je: equal / zero */

loc_0002A6A2: ;
    MEM32(esp + 0xC) = 0;

loc_0002A6AA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A6CB; /* je: equal / zero */

loc_0002A6AE: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002A6B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A6B2u); } /* indirect call */
    }

loc_0002A6B5: ;
    edx = MEM32(0x30C2B4);
    ecx = MEM32(0x30C2B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A6CB; /* jne: not equal / not zero */

loc_0002A6C7: ;
    ecx = edi;
    goto loc_0002A6CD;

loc_0002A6CB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002A6CD: ;
    eax = MEM32(esp + 0x28);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A6E3; /* je: equal / zero */

loc_0002A6D7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x0002A6E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A6DBu); } /* indirect call */
    }

loc_0002A6E1: ;
    goto loc_0002A713;

loc_0002A6E3: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A6F3; /* je: equal / zero */

loc_0002A6EB: ;
    edi = eax + 0x2E4;
    goto loc_0002A715;

loc_0002A6F3: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A707; /* je: equal / zero */

loc_0002A6FB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x0002A705u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A6FFu); } /* indirect call */
    }

loc_0002A705: ;
    goto loc_0002A713;

loc_0002A707: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A715; /* je: equal / zero */

loc_0002A70B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x0002A713u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A70Du); } /* indirect call */
    }

loc_0002A713: ;
    edi = eax;

loc_0002A715: ;
    ecx = MEM32(esp + 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A71Eu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0002A71E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A725u); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_0002A725: ;
    ecx = ebx + 0x6F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A730u); RECOMP_ABI_CALL(0x00145D50u, sub_00145D50); /* call 0x00145D50 */

loc_0002A730: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = ebx + 0x6F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A740u); RECOMP_ABI_CALL(0x00143970u, sub_00143970); /* call 0x00143970 */

loc_0002A740: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A823; /* je: equal / zero */

loc_0002A748: ;
    edx = edi + 0x48;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A775u); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_0002A775: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A77Cu); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_0002A77C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE084)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x58); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x5C); /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x54); /* subss */
    eax = esp + 0x10;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A7F6u); RECOMP_ABI_CALL(0x00130A90u, sub_00130A90); /* call 0x00130A90 */

loc_0002A7F6: ;
    edx = MEM32(esi);
    ecx = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002A808u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A802u); } /* indirect call */
    }

loc_0002A808: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A80Fu); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_0002A80F: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A817u); RECOMP_ABI_CALL(0x00130A10u, sub_00130A10); /* call 0x00130A10 */

loc_0002A817: ;
    PUSH32(esp, edi);
    ecx = ebx + 0x6F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A823u); RECOMP_ABI_CALL(0x00145420u, sub_00145420); /* call 0x00145420 */

loc_0002A823: ;
    MEM8(ebx + 0xEA8) = 1;

loc_0002A82A: ;
    ecx = MEM32(esp + 0x144);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002A840
 * Original: 0x0002A840 - 0x0002A87F (63 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A840(void)
{

loc_0002A840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0002A84Du); RECOMP_ABI_CALL(0x00025420u, sub_00025420); /* call 0x00025420 */

loc_0002A84D: ;
    ecx = esi;
    MEM8(esi + 0xEA8) = 0;
    PUSH32(esp, 0x0002A85Bu); RECOMP_ABI_CALL(0x0002A380u, sub_0002A380); /* call 0x0002A380 */

loc_0002A85B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    MEMF(esi + 0xEA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(esi + 0xEA4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002A880
 * Original: 0x0002A880 - 0x0002A927 (167 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002A880: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240A10);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 8) = 0x2DD9FC;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0xC) = 0x2DE08C;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x0002A8C3u); RECOMP_ABI_CALL(0x00023930u, sub_00023930); /* call 0x00023930 */

loc_0002A8C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A8DA; /* jne: not equal / not zero */

loc_0002A8C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0002A8DA: ;
    SET_LO8(eax, MEM8(esi + 0xEA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A900; /* jne: not equal / not zero */

loc_0002A8E4: ;
    ecx = esi;
    PUSH32(esp, 0x0002A8EBu); RECOMP_ABI_CALL(0x0002A380u, sub_0002A380); /* call 0x0002A380 */

loc_0002A8EB: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0002A900: ;
    eax = MEM32(esi + 0x6EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A912; /* je: equal / zero */

loc_0002A90A: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002A912u); RECOMP_ABI_CALL(0x00029DD0u, sub_00029DD0); /* call 0x00029DD0 */

loc_0002A912: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002A930
 * Original: 0x0002A930 - 0x0002A99C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002A930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002A938u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0002A938: ;
    MEM32(esi) = 0x2DE094;
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
    PUSH32(esp, 0x0002A995u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002A995: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002A9A0
 * Original: 0x0002A9A0 - 0x0002A9AC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A9A0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002A9B0(); return; /* tail jmp 0x0002A9B0 */

}

/**
 * sub_0002A9B0
 * Original: 0x0002A9B0 - 0x0002AA1C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002A9B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AA17; /* je: equal / zero */

loc_0002A9C2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x6E0);
    edx = MEM32(ecx + 0x6E4);
    MEM32(ecx + 0x6E8) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x6E4);
    edx = MEM32(ecx + 0x6E0);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A9FA; /* je: equal / zero */

loc_0002A9F4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002A9FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A9F8u); } /* indirect call */
    }

loc_0002A9FA: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF150u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF150u;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002A9C2; /* jne: not equal / not zero */

loc_0002AA17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002AA20
 * Original: 0x0002AA20 - 0x0002AA6A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AA20: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x6E0;
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
 * sub_0002AA70
 * Original: 0x0002AA70 - 0x0002AAD5 (101 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AA70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240A28);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x0002AA93u); RECOMP_ABI_CALL(0x00025090u, sub_00025090); /* call 0x00025090 */

loc_0002AA93: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2DE0A8;
    ecx = esi + 0x6F0;
    MEM32(esp + 0x14) = ebx;
    MEM32(esi + 0x6E0) = ebx;
    MEM32(esi + 0x6E4) = ebx;
    MEM32(esi + 0x6E8) = ebx;
    PUSH32(esp, 0x0002AABCu); RECOMP_ABI_CALL(0x001441A0u, sub_001441A0); /* call 0x001441A0 */

loc_0002AABC: ;
    ecx = MEM32(esp + 0xC);
    MEM8(esi + 0xEA8) = LO8(ebx);
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
 * sub_0002AAE0
 * Original: 0x0002AAE0 - 0x0002AAE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AAE0(void)
{

loc_0002AAE0: ;
    eax = 0xEB0;
    esp += 4; return; /* ret */

}

/**
 * sub_0002AAF0
 * Original: 0x0002AAF0 - 0x0002AAF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AAF0(void)
{

loc_0002AAF0: ;
    eax = MEM32(0x30C1A0);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AB00
 * Original: 0x0002AB00 - 0x0002AB1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AB00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002AB08u); RECOMP_ABI_CALL(0x0002AB20u, sub_0002AB20); /* call 0x0002AB20 */

loc_0002AB08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AB18; /* je: equal / zero */

loc_0002AB0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002AB15u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0002AB15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002AB18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002AB20
 * Original: 0x0002AB20 - 0x0002AB8B (107 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AB20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240A50);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    edi = esi + 0x6F0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0xC) = edi;
    ecx = edi + 0x20;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x0002AB5Fu); RECOMP_ABI_CALL(0x00029C60u, sub_00029C60); /* call 0x00029C60 */

loc_0002AB5F: ;
    ecx = edi;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0002AB6Bu); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_0002AB6B: ;
    ecx = esi;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0002AB7Au); RECOMP_ABI_CALL(0x00025360u, sub_00025360); /* call 0x00025360 */

loc_0002AB7A: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002AB90
 * Original: 0x0002AB90 - 0x0002AC08 (120 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AB90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6EC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002ABA0u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0002ABA0: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002ABDE; /* je: equal / zero */

loc_0002ABA9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002ABB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002ABADu); } /* indirect call */
    }

loc_0002ABB0: ;
    edx = MEM32(0x30C2A4);
    ecx = MEM32(0x30C2A0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002ABDE; /* jne: not equal / not zero */

loc_0002ABC2: ;
    ecx = esi + 0x6F0;
    PUSH32(esp, 0x0002ABCDu); RECOMP_ABI_CALL(0x001453E0u, sub_001453E0); /* call 0x001453E0 */

loc_0002ABCD: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002ABD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002ABD1u); } /* indirect call */
    }

loc_0002ABD4: ;
    MEM32(esi + 0x6EC) = 0;

loc_0002ABDE: ;
    edx = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002ABE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002ABE4u); } /* indirect call */
    }

loc_0002ABE7: ;
    ecx = esi;
    PUSH32(esp, 0x0002ABEEu); RECOMP_ABI_CALL(0x000278D0u, sub_000278D0); /* call 0x000278D0 */

loc_0002ABEE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0002ABF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002ABF2u); } /* indirect call */
    }

loc_0002ABF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AC05; /* jne: not equal / not zero */

loc_0002ABFA: ;
    PUSH32(esp, esi);
    ecx = 0x3160B8;
    PUSH32(esp, 0x0002AC05u); RECOMP_ABI_CALL(0x0002AA20u, sub_0002AA20); /* call 0x0002AA20 */

loc_0002AC05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AC10
 * Original: 0x0002AC10 - 0x0002AC6F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AC10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xEB0);
    PUSH32(esp, 0x0002AC24u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0002AC24: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AC34; /* je: equal / zero */

loc_0002AC2B: ;
    ecx = eax;
    PUSH32(esp, 0x0002AC32u); RECOMP_ABI_CALL(0x0002AA70u, sub_0002AA70); /* call 0x0002AA70 */

loc_0002AC32: ;
    goto loc_0002AC36;

loc_0002AC34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002AC36: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x6E0;
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
    _fb = (uint32_t)(0xEB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xEB0;
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
 * sub_0002AC70
 * Original: 0x0002AC70 - 0x0002AC91 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AC70: ;
    PUSH32(esp, esi);
    ecx = 0x3160B8;
    PUSH32(esp, 0x0002AC7Bu); RECOMP_ABI_CALL(0x0002AC10u, sub_0002AC10); /* call 0x0002AC10 */

loc_0002AC7B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AC8D; /* je: equal / zero */

loc_0002AC81: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0002AC8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AC8Au); } /* indirect call */
    }

loc_0002AC8D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002ACA0
 * Original: 0x0002ACA0 - 0x0002ACDF (63 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ACA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002ACA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7C04E2F4);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0002ACB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002ACB4u); } /* indirect call */
    }

loc_0002ACB7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002ACC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002ACC1u); } /* indirect call */
    }

loc_0002ACC4: ;
    ecx = MEM32(esi + 0x6E8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002ACD1u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0002ACD1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x6E8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002ACE0
 * Original: 0x0002ACE0 - 0x0002AD15 (53 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ACE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002ACE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0002ACE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002ACE6u); } /* indirect call */
    }

loc_0002ACE9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002ACF4; /* jne: not equal / not zero */

loc_0002ACEF: ;
    edi = 0xF4240;

loc_0002ACF4: ;
    eax = MEM32(esi + 0x6E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AD10; /* je: equal / zero */

loc_0002ACFE: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002AD05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AD02u); } /* indirect call */
    }

loc_0002AD05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AD0E; /* jne: not equal / not zero */

loc_0002AD09: ;
    eax = 0x989680;

loc_0002AD0E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002AD10: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AD20
 * Original: 0x0002AD20 - 0x0002AD51 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AD20: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x6F0;
    /* nop */

loc_0002AD30: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AD40; /* je: equal / zero */

loc_0002AD35: ;
    SET_LO8(ebx, MEM8(eax + ecx + 0x7D0));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AD4D; /* je: equal / zero */

loc_0002AD40: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002AD30; /* jb: below (unsigned <) */

loc_0002AD49: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002AD4D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AD60
 * Original: 0x0002AD60 - 0x0002B1DB (1147 bytes, 301 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AD60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240A70);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = 0x2DD9FC;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x90) = ebp;
    MEM32(esp + 0x18) = 0x2DE268;
    eax = MEM32(esp + 0x98);
    PUSH32(esp, eax);
    MEM8(esp + 0x94) = 1;
    PUSH32(esp, 0x0002ADB1u); RECOMP_ABI_CALL(0x00023930u, sub_00023930); /* call 0x00023930 */

loc_0002ADB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B1C2; /* je: equal / zero */

loc_0002ADB9: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6EC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002ADD4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0002ADCA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002ADD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002ADCEu); } /* indirect call */
    }

loc_0002ADD4: ;
    eax = ZX8(MEM8(esi + 0x6E0));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6EC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x98); /* subss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEMF(esi + 0x6EC) = xmm0.f[0]; /* movss */
    if ((_fa == 0)) goto loc_0002AFE4; /* je: equal / zero */

loc_0002ADFE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002B1BE; /* jne: not equal / not zero */

loc_0002AE05: ;
    eax = esi + 0x6F0;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    ebx = esi + 0x718;

loc_0002AE17: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AFC7; /* je: equal / zero */

loc_0002AE25: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002AE2Bu); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0002AE2B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AFC7; /* je: equal / zero */

loc_0002AE38: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002AE3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AE3Cu); } /* indirect call */
    }

loc_0002AE3F: ;
    edx = MEM32(0x30C2EC);
    ecx = MEM32(0x30C2E8);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AFC7; /* jne: not equal / not zero */

loc_0002AE55: ;
    ebp = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(ebp + 0x7D8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002AF5B; /* je: equal / zero */

loc_0002AE69: ;
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0002AE73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AE70u); } /* indirect call */
    }

loc_0002AE73: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + -4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + -8); /* subss */
    edx = MEM32(esi);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DE264); /* comiss */
    ecx = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002AF41; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x2DE264)) */

loc_0002AEBD: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002AEC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AEBDu); } /* indirect call */
    }

loc_0002AEC3: ;
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0002AECDu); RECOMP_ABI_CALL(0x001C4100u, sub_001C4100); /* call 0x001C4100 */

loc_0002AECD: ;
    eax = esi + 0x560;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x2C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002AEF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AEEBu); } /* indirect call */
    }

loc_0002AEF1: ;
    ecx = eax;
    PUSH32(esp, 0x0002AEF8u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_0002AEF8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DE260)); /* fmul dword ptr [0x2de260] */
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x0002AF0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AF06u); } /* indirect call */
    }

loc_0002AF0C: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = esp + 0x30;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0002AF3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AF39u); } /* indirect call */
    }

loc_0002AF3C: ;
    goto loc_0002AFC7;

loc_0002AF41: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002AF47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AF41u); } /* indirect call */
    }

loc_0002AF47: ;
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0002AF51u); RECOMP_ABI_CALL(0x001C4100u, sub_001C4100); /* call 0x001C4100 */

loc_0002AF51: ;
    MEM8(edi + ebp + 0x7D0) = 1;
    goto loc_0002AFC7;

loc_0002AF5B: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x0002AF63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AF5Du); } /* indirect call */
    }

loc_0002AF63: ;
    ecx = eax;
    PUSH32(esp, 0x0002AF6Au); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_0002AF6A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DE25C)); /* fmul dword ptr [0x2de25c] */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002AF7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AF78u); } /* indirect call */
    }

loc_0002AF7E: ;
    ecx = esp + 0x6C;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0002AF8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AF89u); } /* indirect call */
    }

loc_0002AF8C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    eax = esp + 0x3C;
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0002AFC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002AFC4u); } /* indirect call */
    }

loc_0002AFC7: ;
    edx = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0002AE17; /* jb: below (unsigned <) */

loc_0002AFDF: ;
    goto loc_0002B1BE;

loc_0002AFE4: ;
    ecx = esi + 0x6F0;
    MEM32(esp + 0x10) = ecx;
    ebx = esi + 0x778;

loc_0002AFF4: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B1A6; /* je: equal / zero */

loc_0002B002: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002B008u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0002B008: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B1A6; /* je: equal / zero */

loc_0002B015: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002B01Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B019u); } /* indirect call */
    }

loc_0002B01C: ;
    edx = MEM32(0x30C2EC);
    ecx = MEM32(0x30C2E8);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B1A6; /* jne: not equal / not zero */

loc_0002B032: ;
    eax = MEM32(esp + 0x18);
    MEM8(eax + ebp + 0x7D0) = 0;
    SET_LO8(ecx, MEM8(eax + 0x7D8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002B138; /* je: equal / zero */

loc_0002B04E: ;
    edx = MEM32(esi);
    eax = esp + 0x78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002B058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B055u); } /* indirect call */
    }

loc_0002B058: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + -4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + -8); /* subss */
    edx = MEM32(esi);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DE264); /* comiss */
    ecx = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002B126; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x2DE264)) */

loc_0002B0A2: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002B0A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B0A2u); } /* indirect call */
    }

loc_0002B0A8: ;
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0002B0B2u); RECOMP_ABI_CALL(0x001C4100u, sub_001C4100); /* call 0x001C4100 */

loc_0002B0B2: ;
    eax = esi + 0x560;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x2C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002B0D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B0D0u); } /* indirect call */
    }

loc_0002B0D6: ;
    ecx = eax;
    PUSH32(esp, 0x0002B0DDu); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_0002B0DD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC350)); /* fmul dword ptr [0x2dc350] */
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x0002B0F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B0EBu); } /* indirect call */
    }

loc_0002B0F1: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = esp + 0x48;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0002B121u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B11Eu); } /* indirect call */
    }

loc_0002B121: ;
    goto loc_0002B1A6;

loc_0002B126: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002B12Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B126u); } /* indirect call */
    }

loc_0002B12C: ;
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0002B136u); RECOMP_ABI_CALL(0x001C4100u, sub_001C4100); /* call 0x001C4100 */

loc_0002B136: ;
    goto loc_0002B1A6;

loc_0002B138: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x0002B140u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B13Au); } /* indirect call */
    }

loc_0002B140: ;
    ecx = eax;
    PUSH32(esp, 0x0002B147u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_0002B147: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3DC)); /* fmul dword ptr [0x2dc3dc] */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002B15Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B155u); } /* indirect call */
    }

loc_0002B15B: ;
    ecx = esp + 0x84;
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0002B16Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B169u); } /* indirect call */
    }

loc_0002B16C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    eax = esp + 0x54;
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0002B1A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B1A3u); } /* indirect call */
    }

loc_0002B1A6: ;
    edx = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 8 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0002AFF4; /* jb: below (unsigned <) */

loc_0002B1BE: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);

loc_0002B1C2: ;
    ecx = MEM32(esp + 0x88);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002B1E0
 * Original: 0x0002B1E0 - 0x0002B20E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B1E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x6E0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x6E0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B20C; /* jne: not equal / not zero */

loc_0002B1EC: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002B1F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B1F2u); } /* indirect call */
    }

loc_0002B1F5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE270)); /* movss */
    MEM8(esi + 0x6E0) = 0;
    MEMF(esi + 0x6EC) = xmm0.f[0]; /* movss */

loc_0002B20C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B210
 * Original: 0x0002B210 - 0x0002B23F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B210: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x6E0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B23D; /* jne: not equal / not zero */

loc_0002B21D: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002B226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B223u); } /* indirect call */
    }

loc_0002B226: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE270)); /* movss */
    MEMF(esi + 0x6EC) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x6E0) = 1;

loc_0002B23D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B240
 * Original: 0x0002B240 - 0x0002B2C5 (133 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0002B24Au); RECOMP_ABI_CALL(0x00025D90u, sub_00025D90); /* call 0x00025D90 */

loc_0002B24A: ;
    eax = MEM32(esi + 0x6E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B26E; /* je: equal / zero */

loc_0002B254: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002B261u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0002B261: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x6E8) = 0;

loc_0002B26E: ;
    edi = esi + 0x6F0;
    ebx = 8;
    /* nop */

loc_0002B280: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B2BB; /* je: equal / zero */

loc_0002B286: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002B28Cu); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0002B28C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B2B5; /* je: equal / zero */

loc_0002B295: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002B29Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B299u); } /* indirect call */
    }

loc_0002B29C: ;
    edx = MEM32(0x30C2EC);
    ecx = MEM32(0x30C2E8);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B2B5; /* jne: not equal / not zero */

loc_0002B2AE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002B2B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B2B2u); } /* indirect call */
    }

loc_0002B2B5: ;
    MEM32(edi) = 0;

loc_0002B2BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002B280; /* jne: not equal / not zero */

loc_0002B2C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B2D0
 * Original: 0x0002B2D0 - 0x0002B4B5 (485 bytes, 146 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002B2D0(void)
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

loc_0002B2D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x884) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x884;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B2EFu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0002B2EF: ;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x26C);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B314u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0002B314: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002B322; /* jge: greater or equal (signed >=) */

loc_0002B31B: ;
    eax = 0x6438B8;
    goto loc_0002B32B;

loc_0002B322: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0002B32B: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002B3AB; /* je: equal / zero */

loc_0002B334: ;
    edx = MEM32(0x2DE2AC);
    ecx = MEM32(0x2DE2B4);
    eax = MEM32(0x2DE2B0);
    MEM32(esp + 0x10) = edx;
    SET_LO8(edx, MEM8(0x2DE2B8));
    MEM32(esp + 0x18) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM8(esp + 0x1C) = LO8(edx);
    edx = MEM32(esp + 0x18);
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp + 0x1D) = LO16(eax);
    MEM8(esp + 0x1B) = LO8(edx);
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x1F) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0002B380u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B37Au); } /* indirect call */
    }

loc_0002B380: ;
    ebx = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B38Cu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002B38C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B3ABu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0002B3AB: ;
    ecx = esp + 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B3B7u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0002B3B7: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2DE290);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B3CAu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0002B3CA: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B3DBu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002B3DB: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x28;
    PUSH32(esp, 0x2DE28C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B3F3u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002B3F3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2DE274);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B409u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0002B409: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B41Au); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002B41A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B439u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0002B439: ;
    edi = eax;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B442u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0002B442: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B449u); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_0002B449: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B46A; /* je: equal / zero */

loc_0002B44D: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002B454u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B451u); } /* indirect call */
    }

loc_0002B454: ;
    edx = MEM32(0x30C204);
    ecx = MEM32(0x30C200);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B46A; /* jne: not equal / not zero */

loc_0002B466: ;
    ecx = edi;
    goto loc_0002B46C;

loc_0002B46A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002B46C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B0); PUSH32(esp, 0x0002B474u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B46Eu); } /* indirect call */
    }

loc_0002B474: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B47Bu); RECOMP_ABI_CALL(0x00138CF0u, sub_00138CF0); /* call 0x00138CF0 */

loc_0002B47B: ;
    edi = eax;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(ebp + 0xC);
    MEM32(esi + eax * 4 + 0x6F0) = edx;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(edi);
    ecx = edi;
    MEM32(edi + 0x250) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x0002B4A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B49Du); } /* indirect call */
    }

loc_0002B4A3: ;
    MEM8(eax + 0xBD) = 1;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_0002B4C0
 * Original: 0x0002B4C0 - 0x0002B88A (970 bytes, 252 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002B4C0(void)
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

loc_0002B4C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B4DFu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0002B4DF: ;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B4EDu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0002B4ED: ;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x26C);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B512u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0002B512: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002B520; /* jge: greater or equal (signed >=) */

loc_0002B519: ;
    eax = 0x6438B8;
    goto loc_0002B529;

loc_0002B520: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0002B529: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 4) = edi;
    ebx = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0002B618; /* je: equal / zero */

loc_0002B539: ;
    edx = MEM32(0x2DE2C8);
    eax = MEM32(0x2DE2CC);
    ecx = MEM32(0x2DE2D0);
    MEM32(esp + 0x20) = edx;
    SET_LO16(edx, MEM16(0x2DE2D4));
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, LO8(edx));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM16(esp + 0x2C) = LO16(edx);
    MEM32(esp + 0x28) = ecx;
    MEM8(esp + 0x2C) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esp + 0x2E) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0002B57Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B575u); } /* indirect call */
    }

loc_0002B57B: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B589u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002B589: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B5ACu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0002B5AC: ;
    eax = MEM32(0x2DE2C4);
    ecx = MEM32(0x2DE2BC);
    edx = MEM32(0x2DE2C0);
    MEM32(esp + 0x18) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esp + 0x1C) = 0;
    MEM8(esp + 0x1A) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0002B5E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B5DEu); } /* indirect call */
    }

loc_0002B5E4: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B5F2u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002B5F2: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B618u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0002B618: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    eax = ebx + ebx * 2;
    eax = esi + eax * 4;
    MEMF(eax + 0x778) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x774) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(eax + 0x770) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(eax + 0x710) = xmm3.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm3 = xmm0; /* movaps */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(eax + 0x714) = xmm4.f[0]; /* movss */
    ecx = esp + 0xD8;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 0x718) = xmm5.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B6F9u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0002B6F9: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2DE290);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B70Cu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0002B70C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0xDC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B71Du); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002B71D: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x46C7DEE9);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B730u); RECOMP_ABI_CALL(0x001EAFF0u, sub_001EAFF0); /* call 0x001EAFF0 */

loc_0002B730: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xDC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B741u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002B741: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6A7FD838);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B754u); RECOMP_ABI_CALL(0x001EAFF0u, sub_001EAFF0); /* call 0x001EAFF0 */

loc_0002B754: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0xDC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B765u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002B765: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6B7FD9CB);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B778u); RECOMP_ABI_CALL(0x001EAFF0u, sub_001EAFF0); /* call 0x001EAFF0 */

loc_0002B778: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0xDC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B789u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002B789: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6C7FDB5E);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B79Cu); RECOMP_ABI_CALL(0x001EAFF0u, sub_001EAFF0); /* call 0x001EAFF0 */

loc_0002B79C: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xDC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B7ADu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002B7AD: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0xC0;
    PUSH32(esp, 0x2DE28C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B7C8u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002B7C8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2DE274);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B7E1u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0002B7E1: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xDC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B7F2u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002B7F2: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    ecx = esp + 0xDC;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B811u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0002B811: ;
    edi = eax;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B81Au); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0002B81A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B821u); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_0002B821: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B842; /* je: equal / zero */

loc_0002B825: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002B82Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B829u); } /* indirect call */
    }

loc_0002B82C: ;
    edx = MEM32(0x30C204);
    ecx = MEM32(0x30C200);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B842; /* jne: not equal / not zero */

loc_0002B83E: ;
    ecx = edi;
    goto loc_0002B844;

loc_0002B842: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002B844: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B0); PUSH32(esp, 0x0002B84Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B846u); } /* indirect call */
    }

loc_0002B84C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B853u); RECOMP_ABI_CALL(0x00138CF0u, sub_00138CF0); /* call 0x00138CF0 */

loc_0002B853: ;
    edi = eax;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + 0x28);
    MEM32(esi + ebx * 4 + 0x6F0) = edx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x28);
    edx = MEM32(edi);
    MEM32(edi + 0x250) = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0002B878u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B872u); } /* indirect call */
    }

loc_0002B878: ;
    MEM8(eax + 0xBD) = 1;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_0002B890
 * Original: 0x0002B890 - 0x0002B8FC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B890: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002B898u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0002B898: ;
    MEM32(esi) = 0x2DE2D8;
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
    PUSH32(esp, 0x0002B8F5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002B8F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B900
 * Original: 0x0002B900 - 0x0002B90C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B900: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002B910(); return; /* tail jmp 0x0002B910 */

}

/**
 * sub_0002B910
 * Original: 0x0002B910 - 0x0002B97C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B910: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B977; /* je: equal / zero */

loc_0002B922: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x7DC);
    edx = MEM32(ecx + 0x7E0);
    MEM32(ecx + 0x7E4) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x7E0);
    edx = MEM32(ecx + 0x7DC);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002B95A; /* je: equal / zero */

loc_0002B954: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002B95Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002B958u); } /* indirect call */
    }

loc_0002B95A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF810u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF810u;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002B922; /* jne: not equal / not zero */

loc_0002B977: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B980
 * Original: 0x0002B980 - 0x0002B9CA (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B980: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x7DC;
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
 * sub_0002B9D0
 * Original: 0x0002B9D0 - 0x0002BA2F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B9D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5A8);
    PUSH32(esp, 0x0002B9E4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0002B9E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B9F4; /* je: equal / zero */

loc_0002B9EB: ;
    ecx = eax;
    PUSH32(esp, 0x0002B9F2u); RECOMP_ABI_CALL(0x00071880u, sub_00071880); /* call 0x00071880 */

loc_0002B9F2: ;
    goto loc_0002B9F6;

loc_0002B9F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002B9F6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x598;
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
    _fb = (uint32_t)(0x5A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x5A8;
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
 * sub_0002BA30
 * Original: 0x0002BA30 - 0x0002BA7A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002BA30: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x598;
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
 * sub_0002BA80
 * Original: 0x0002BA80 - 0x0002BAA6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002BA80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002BA88u); RECOMP_ABI_CALL(0x00025090u, sub_00025090); /* call 0x00025090 */

loc_0002BA88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2DE2F0;
    MEM32(esi + 0x7DC) = eax;
    MEM32(esi + 0x7E0) = eax;
    MEM32(esi + 0x7E4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002BAB0
 * Original: 0x0002BAB0 - 0x0002BAB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BAB0(void)
{

loc_0002BAB0: ;
    eax = 0x7F0;
    esp += 4; return; /* ret */

}

/**
 * sub_0002BAC0
 * Original: 0x0002BAC0 - 0x0002BAC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BAC0(void)
{

loc_0002BAC0: ;
    eax = MEM32(0x30C1B0);
    esp += 4; return; /* ret */

}

/**
 * sub_0002BAD0
 * Original: 0x0002BAD0 - 0x0002BD43 (627 bytes, 180 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BAD0(void)
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

loc_0002BAD0: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xB4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ebp = ecx;
    PUSH32(esp, 0x0002BAE9u); RECOMP_ABI_CALL(0x00025420u, sub_00025420); /* call 0x00025420 */

loc_0002BAE9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x6E4) = edi;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8A003A1Du);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002BAFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BAFAu); } /* indirect call */
    }

loc_0002BAFD: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB1D4007Au);
    ecx = ebx;
    esi = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002BB0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BB08u); } /* indirect call */
    }

loc_0002BB0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BB4C; /* je: equal / zero */

loc_0002BB0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002BB15u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002BB15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1660EB12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1660EB12 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002BB4C; /* jne: not equal / not zero */

loc_0002BB1F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BB4C; /* je: equal / zero */

loc_0002BB23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002BB29u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002BB29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002BB4C; /* jne: not equal / not zero */

loc_0002BB33: ;
    ecx = 0x3228B8;
    PUSH32(esp, 0x0002BB3Du); RECOMP_ABI_CALL(0x0002B9D0u, sub_0002B9D0); /* call 0x0002B9D0 */

loc_0002BB3D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(ebp + 0x6E4) = eax;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002BB4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BB49u); } /* indirect call */
    }

loc_0002BB4C: ;
    MEM8(ebp + 0x6E0) = 1;
    MEM32(ebp + 0x6E8) = edi;
    MEM32(ebp + 0x6F0) = edi;
    MEM32(ebp + 0x6F4) = edi;
    MEM32(ebp + 0x6F8) = edi;
    MEM32(ebp + 0x6FC) = edi;
    MEM32(ebp + 0x700) = edi;
    MEM32(ebp + 0x704) = edi;
    MEM32(ebp + 0x708) = edi;
    MEM32(ebp + 0x70C) = edi;
    ecx = MEM32(ebp + 0x300);
    eax = ebp + 0x2F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BD21; /* je: equal / zero */

loc_0002BB9D: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C051EC2);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002BBA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BBA6u); } /* indirect call */
    }

loc_0002BBA9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002BBAFu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002BBAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4159A0D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4159A0D0 (32-bit) */
    MEM8(ebp + 0x7D8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0002BBC7; /* jne: not equal / not zero */

loc_0002BBC0: ;
    MEM8(ebp + 0x7D8) = 1;

loc_0002BBC7: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xEDF6FFA0u);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002BBD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BBD0u); } /* indirect call */
    }

loc_0002BBD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BBED; /* je: equal / zero */

loc_0002BBE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002BBE6u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0002BBE6: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002BBED: ;
    eax = MEM32(0x2DE4B0);
    ecx = MEM32(0x2DE4A8);
    edx = MEM32(0x2DE4AC);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x2DE4B4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x32) = eax;
    MEM32(esp + 0x24) = edx;
    SET_LO16(edx, MEM16(0x2DE4B8));
    MEM32(esp + 0x2C) = ecx;
    MEM16(esp + 0x36) = LO16(eax);
    ecx = ebp + 0x7D0;
    MEM16(esp + 0x30) = LO16(edx);
    MEM8(esp + 0x38) = LO8(eax);
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = 8;

loc_0002BC45: ;
    edx = MEM32(esp + 0x14);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM8(edx) = 1;
    PUSH32(esp, 0x0002BC56u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002BC56: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002BC61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BC5Eu); } /* indirect call */
    }

loc_0002BC61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BCF6; /* je: equal / zero */

loc_0002BC69: ;
    ecx = MEM32(0x2DC380);
    edx = MEM32(0x2DC384);
    MEM32(esp + 0x3C) = ecx;
    SET_LO16(ecx, MEM16(0x2DC388));
    MEM32(esp + 0x40) = edx;
    MEM16(esp + 0x44) = LO16(ecx);
    edx = eax;
    goto loc_0002BC90;

    /* nop */

loc_0002BC90: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002BC90; /* jne: not equal / not zero */

loc_0002BC97: ;
    edi = esp + 0x3C;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_0002BCA0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002BCA0; /* jne: not equal / not zero */

loc_0002BCA8: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
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
    ecx = eax;
    edx = esp + 0x3C;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    PUSH32(esp, 0x0002BCC2u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002BCC2: ;
    SET_LO8(ecx, MEM8(ebp + 0x7D8));
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0002BCE3; /* je: equal / zero */

loc_0002BCDC: ;
    PUSH32(esp, 0x0002BCE1u); RECOMP_ABI_CALL(0x0002B4C0u, sub_0002B4C0); /* call 0x0002B4C0 */

loc_0002BCE1: ;
    goto loc_0002BCE8;

loc_0002BCE3: ;
    PUSH32(esp, 0x0002BCE8u); RECOMP_ABI_CALL(0x0002B2D0u, sub_0002B2D0); /* call 0x0002B2D0 */

loc_0002BCE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BCF4; /* je: equal / zero */

loc_0002BCEC: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x0002BCF4u); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_0002BCF4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002BCF6: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x30) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_0002BC45; /* jne: not equal / not zero */

loc_0002BD21: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x414) = 0x46A5EA67;
    MEMF(ebp + 0x6EC) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002BD50
 * Original: 0x0002BD50 - 0x0002BDF8 (168 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002BD50: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    ecx = edi + 0x18;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002BD5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BD59u); } /* indirect call */
    }

loc_0002BD5C: ;
    ecx = MEM32(edi + 0x6E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BD86; /* je: equal / zero */

loc_0002BD66: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0002BD6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BD68u); } /* indirect call */
    }

loc_0002BD6B: ;
    eax = MEM32(edi + 0x6E4);
    PUSH32(esp, eax);
    ecx = 0x3228B8;
    PUSH32(esp, 0x0002BD7Cu); RECOMP_ABI_CALL(0x0002BA30u, sub_0002BA30); /* call 0x0002BA30 */

loc_0002BD7C: ;
    MEM32(edi + 0x6E4) = 0;

loc_0002BD86: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = edi + 0x6F0;
    ebp = 8;

loc_0002BD94: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BDCF; /* je: equal / zero */

loc_0002BD9A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002BDA0u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0002BDA0: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BDC9; /* je: equal / zero */

loc_0002BDA9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002BDB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BDADu); } /* indirect call */
    }

loc_0002BDB0: ;
    edx = MEM32(0x30C2EC);
    ecx = MEM32(0x30C2E8);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002BDC9; /* jne: not equal / not zero */

loc_0002BDC2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002BDC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BDC6u); } /* indirect call */
    }

loc_0002BDC9: ;
    MEM32(ebx) = 0;

loc_0002BDCF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002BD94; /* jne: not equal / not zero */

loc_0002BDD5: ;
    ecx = edi;
    PUSH32(esp, 0x0002BDDCu); RECOMP_ABI_CALL(0x000278D0u, sub_000278D0); /* call 0x000278D0 */

loc_0002BDDC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0002BDE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BDE0u); } /* indirect call */
    }

loc_0002BDE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0002BDF6; /* jne: not equal / not zero */

loc_0002BDEB: ;
    PUSH32(esp, edi);
    ecx = 0x316140;
    PUSH32(esp, 0x0002BDF6u); RECOMP_ABI_CALL(0x0002B980u, sub_0002B980); /* call 0x0002B980 */

loc_0002BDF6: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002BE00
 * Original: 0x0002BE00 - 0x0002BE5F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002BE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F0);
    PUSH32(esp, 0x0002BE14u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0002BE14: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BE24; /* je: equal / zero */

loc_0002BE1B: ;
    ecx = eax;
    PUSH32(esp, 0x0002BE22u); RECOMP_ABI_CALL(0x0002BA80u, sub_0002BA80); /* call 0x0002BA80 */

loc_0002BE22: ;
    goto loc_0002BE26;

loc_0002BE24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002BE26: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x7DC;
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
    _fb = (uint32_t)(0x7F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7F0;
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
 * sub_0002BE60
 * Original: 0x0002BE60 - 0x0002BE81 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002BE60: ;
    PUSH32(esp, esi);
    ecx = 0x316140;
    PUSH32(esp, 0x0002BE6Bu); RECOMP_ABI_CALL(0x0002BE00u, sub_0002BE00); /* call 0x0002BE00 */

loc_0002BE6B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BE7D; /* je: equal / zero */

loc_0002BE71: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0002BE7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BE7Au); } /* indirect call */
    }

loc_0002BE7D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002BE90
 * Original: 0x0002BE90 - 0x0002BEFC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BE90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002BE90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002BE98u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0002BE98: ;
    MEM32(esi) = 0x2DE4D0;
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
    PUSH32(esp, 0x0002BEF5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002BEF5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002BF00
 * Original: 0x0002BF00 - 0x0002BF0C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002BF00: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002BF10(); return; /* tail jmp 0x0002BF10 */

}

/**
 * sub_0002BF10
 * Original: 0x0002BF10 - 0x0002BF7C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002BF10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BF77; /* je: equal / zero */

loc_0002BF22: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x6E0);
    edx = MEM32(ecx + 0x6E4);
    MEM32(ecx + 0x6E8) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x6E4);
    edx = MEM32(ecx + 0x6E0);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002BF5A; /* je: equal / zero */

loc_0002BF54: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002BF5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002BF58u); } /* indirect call */
    }

loc_0002BF5A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF8B0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF8B0u;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002BF22; /* jne: not equal / not zero */

loc_0002BF77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002BF80
 * Original: 0x0002BF80 - 0x0002BF92 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002BF80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002BF8Au); RECOMP_ABI_CALL(0x00023930u, sub_00023930); /* call 0x00023930 */

loc_0002BF8A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002BFA0
 * Original: 0x0002BFA0 - 0x0002BFAD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BFA0(void)
{

loc_0002BFA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002BFAAu); RECOMP_ABI_CALL(0x00022A50u, sub_00022A50); /* call 0x00022A50 */

loc_0002BFAA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002BFB0
 * Original: 0x0002BFB0 - 0x0002BFCB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002BFB0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x80;
    edi = 0x316250;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x316450) = eax;
    MEM32(0x316454) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002BFD0
 * Original: 0x0002BFD0 - 0x0002BFF4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002BFD0: ;
    eax = MEM32(0x316450);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002BFF3; /* jge: greater or equal (signed >=) */

loc_0002BFDC: ;
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x316250) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x316450) = eax;
    MEM32(0x316454) = MEM32(0x316454) + 1;
    _fa = (uint32_t)(MEM32(0x316454)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002BFF3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002C000
 * Original: 0x0002C000 - 0x0002C005 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C000: ;
    g_seh_ebp = ebp; sub_0002BFB0(); return; /* tail jmp 0x0002BFB0 */

}

/**
 * sub_0002C010
 * Original: 0x0002C010 - 0x0002C055 (69 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C010: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0002C01Eu); RECOMP_ABI_CALL(0x00025420u, sub_00025420); /* call 0x00025420 */

loc_0002C01E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8D39BDE6u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002C02Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002C027u); } /* indirect call */
    }

loc_0002C02A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002C030u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002C030: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x0002C03Eu); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0002C03E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C050; /* je: equal / zero */

loc_0002C042: ;
    ecx = edi + 0x2F0;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0002C050u); RECOMP_ABI_CALL(0x00022A20u, sub_00022A20); /* call 0x00022A20 */

loc_0002C050: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002C060
 * Original: 0x0002C060 - 0x0002C0A8 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C060: ;
    eax = MEM32(0x316454);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x31AE2BA);
    ecx = 0x414150;
    PUSH32(esp, 0x0002C076u); RECOMP_ABI_CALL(0x00122090u, sub_00122090); /* call 0x00122090 */

loc_0002C076: ;
    eax = MEM32(0x316450);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002C0A2; /* jle: less or equal (signed <=) */

loc_0002C081: ;
    ecx = MEM32(esi * 4 + 0x316250);
    PUSH32(esp, 0x2DE4E4);
    PUSH32(esp, ecx);
    ecx = 0x414150;
    PUSH32(esp, 0x0002C098u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0002C098: ;
    eax = MEM32(0x316450);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002C081; /* jl: less (signed <) */

loc_0002C0A2: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002BFB0(); return; /* tail jmp 0x0002BFB0 */

}

/**
 * sub_0002C0B0
 * Original: 0x0002C0B0 - 0x0002C0D7 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C0B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C0B0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31AE2BA);
    ecx = 0x414150;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0002C0CCu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0002C0CC: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(MEM32(0x316454)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x316454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C0E0
 * Original: 0x0002C0E0 - 0x0002C125 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C0E0: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(0x30C178));
    PUSH32(esp, esi);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = 0;
    esi = ZX8(MEM8(0x30C179));
    edx = MEM32(0x30C174);
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | MEM32(0x30C170);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    esi = 0xF;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = esi;
    MEM8(0x30C179) = MEM8(0x30C179) + 1;
    _fa = (uint32_t)(MEM8(0x30C179)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C130
 * Original: 0x0002C130 - 0x0002C285 (341 bytes, 106 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002C130(void)
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

loc_0002C130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x184;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C146u); RECOMP_ABI_CALL(0x00025D90u, sub_00025D90); /* call 0x00025D90 */

loc_0002C146: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C14Bu); RECOMP_ABI_CALL(0x0015EFE0u, sub_0015EFE0); /* call 0x0015EFE0 */

loc_0002C14B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C15D; /* je: equal / zero */

loc_0002C14F: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C158u); RECOMP_ABI_CALL(0x0002BFD0u, sub_0002BFD0); /* call 0x0002BFD0 */

loc_0002C158: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002C169;

loc_0002C15D: ;
    PUSH32(esp, 0x2DE558);
    ecx = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C169u); RECOMP_ABI_CALL(0x000336B0u, sub_000336B0); /* call 0x000336B0 */

loc_0002C169: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C16Eu); RECOMP_ABI_CALL(0x0002C0B0u, sub_0002C0B0); /* call 0x0002C0B0 */

loc_0002C16E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DA66C89);
    ecx = 0x3BF678;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C17Eu); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_0002C17E: ;
    PUSH32(esp, 0x2DE52C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C18Fu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0002C18F: ;
    ecx = MEM32(0x413FC0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = MEM32(ebp + 4);
    PUSH32(esp, 0x400);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C1AAu); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0002C1AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C1B4u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0002C1B4: ;
    MEM8(esp + 0x90) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 0x91;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, esi);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edx = esp + 0x94;
    PUSH32(esp, 0x2DE4F8);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C1E2u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002C1E2: ;
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x361B90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C1F6u); RECOMP_ABI_CALL(0x001002D0u, sub_001002D0); /* call 0x001002D0 */

loc_0002C1F6: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C1FCu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0002C1FC: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C206u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0002C206: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5ED2723B);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002C212u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002C20Fu); } /* indirect call */
    }

loc_0002C212: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C27E; /* je: equal / zero */

loc_0002C216: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C21Cu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0002C21C: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x14) = 0;
    ecx = 0x1F;
    edi = esp + 0x15;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C240u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0002C240: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x80);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x95A675F7u);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C259u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0002C259: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C264u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0002C264: ;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2DE4E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x361B90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C27Bu); RECOMP_ABI_CALL(0x001002D0u, sub_001002D0); /* call 0x001002D0 */

loc_0002C27B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002C27E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0002C290
 * Original: 0x0002C290 - 0x0002C2FC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002C298u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0002C298: ;
    MEM32(esi) = 0x2DE570;
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
    PUSH32(esp, 0x0002C2F5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002C2F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C300
 * Original: 0x0002C300 - 0x0002C30C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C300: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002C310(); return; /* tail jmp 0x0002C310 */

}

/**
 * sub_0002C310
 * Original: 0x0002C310 - 0x0002C37C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C377; /* je: equal / zero */

loc_0002C322: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x6E0);
    edx = MEM32(ecx + 0x6E4);
    MEM32(ecx + 0x6E8) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x6E4);
    edx = MEM32(ecx + 0x6E0);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002C35A; /* je: equal / zero */

loc_0002C354: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002C35Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002C358u); } /* indirect call */
    }

loc_0002C35A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF910u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF910u;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002C322; /* jne: not equal / not zero */

loc_0002C377: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002C380
 * Original: 0x0002C380 - 0x0002C3A6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C380: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002C388u); RECOMP_ABI_CALL(0x00025090u, sub_00025090); /* call 0x00025090 */

loc_0002C388: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2DE588;
    MEM32(esi + 0x6E0) = eax;
    MEM32(esi + 0x6E4) = eax;
    MEM32(esi + 0x6E8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C3B0
 * Original: 0x0002C3B0 - 0x0002C3B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C3B0(void)
{

loc_0002C3B0: ;
    eax = 0x6F0;
    esp += 4; return; /* ret */

}

/**
 * sub_0002C3C0
 * Original: 0x0002C3C0 - 0x0002C3C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C3C0(void)
{

loc_0002C3C0: ;
    eax = MEM32(0x30C1D0);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C3D0
 * Original: 0x0002C3D0 - 0x0002C3EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C3D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002C3D8u); RECOMP_ABI_CALL(0x0002C3F0u, sub_0002C3F0); /* call 0x0002C3F0 */

loc_0002C3D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C3E8; /* je: equal / zero */

loc_0002C3DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002C3E5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0002C3E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002C3E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002C3F0
 * Original: 0x0002C3F0 - 0x0002C3F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002C3F0: ;
    g_seh_ebp = ebp; sub_00025360(); return; /* tail jmp 0x00025360 */

}

/**
 * sub_0002C400
 * Original: 0x0002C400 - 0x0002C415 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C400(void)
{

loc_0002C400: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002C408u); RECOMP_ABI_CALL(0x000278D0u, sub_000278D0); /* call 0x000278D0 */

loc_0002C408: ;
    PUSH32(esp, esi);
    ecx = 0x316458;
    PUSH32(esp, 0x0002C413u); RECOMP_ABI_CALL(0x0002AA20u, sub_0002AA20); /* call 0x0002AA20 */

loc_0002C413: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C420
 * Original: 0x0002C420 - 0x0002C47F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C420: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6F0);
    PUSH32(esp, 0x0002C434u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0002C434: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C444; /* je: equal / zero */

loc_0002C43B: ;
    ecx = eax;
    PUSH32(esp, 0x0002C442u); RECOMP_ABI_CALL(0x0002C380u, sub_0002C380); /* call 0x0002C380 */

loc_0002C442: ;
    goto loc_0002C446;

loc_0002C444: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002C446: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x6E0;
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
    _fb = (uint32_t)(0x6F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x6F0;
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
 * sub_0002C480
 * Original: 0x0002C480 - 0x0002C4A1 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C480: ;
    PUSH32(esp, esi);
    ecx = 0x316458;
    PUSH32(esp, 0x0002C48Bu); RECOMP_ABI_CALL(0x0002C420u, sub_0002C420); /* call 0x0002C420 */

loc_0002C48B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C49D; /* je: equal / zero */

loc_0002C491: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0002C49Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002C49Au); } /* indirect call */
    }

loc_0002C49D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C4B0
 * Original: 0x0002C4B0 - 0x0002C4E4 (52 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C4B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0002C4BFu); RECOMP_ABI_CALL(0x00022EF0u, sub_00022EF0); /* call 0x00022EF0 */

loc_0002C4BF: ;
    _fb = (uint32_t)(0x6E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 3;
    /* nop */

loc_0002C4D0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0002C4D8u); RECOMP_ABI_CALL(0x001F36E0u, sub_001F36E0); /* call 0x001F36E0 */

loc_0002C4D8: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002C4D0; /* jne: not equal / not zero */

loc_0002C4DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002C4F0
 * Original: 0x0002C4F0 - 0x0002C4FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C4F0(void)
{

loc_0002C4F0: ;
    MEM32(ecx + 0xA54) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0002C500
 * Original: 0x0002C500 - 0x0002C50A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C500: ;
    SET_LO8(edx, MEM8(ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0002C510
 * Original: 0x0002C510 - 0x0002C551 (65 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 7;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0002C51Eu); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_0002C51E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002C531; /* jne: not equal / not zero */

loc_0002C523: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C531; /* je: equal / zero */

loc_0002C52A: ;
    ecx = esi;
    PUSH32(esp, 0x0002C531u); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_0002C531: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C53F; /* je: equal / zero */

loc_0002C538: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002C54C; /* jne: not equal / not zero */

loc_0002C53F: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0002C54Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002C549u); } /* indirect call */
    }

loc_0002C54C: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002C560
 * Original: 0x0002C560 - 0x0002C60C (172 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C560: ;
    eax = MEM32(ecx + 0xA54);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002C606; /* jne: not equal / not zero */

loc_0002C572: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DE750)); /* movss */
    MEM32(ecx + 0xA80) = 0;
    MEM32(ecx + 0xA84) = 0;
    MEM32(ecx + 0xA54) = 3;
    MEMF(ecx + 0xA6C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA60) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 0xA30);
    MEM32(ecx + 0xA70) = eax;
    edx = MEM32(ecx + 0xA34);
    MEM32(ecx + 0xA74) = edx;
    eax = MEM32(ecx + 0xA38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8DDA726Bu);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    MEM32(ecx + 0xA78) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0002C5F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002C5F2u); } /* indirect call */
    }

loc_0002C5F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002C5FDu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0002C5FD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002C606: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002C610
 * Original: 0x0002C610 - 0x0002C7E6 (470 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002C610(void)
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

loc_0002C610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm4 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xA60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi + 0xA60) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C64D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0002C63E: ;
    MEM8(edi + 0xA8C) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0002C64D: ;
    esi = edi + 0xA70;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0xA6C); /* addss */
    MEMF(edi + 0xA6C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xA6C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    ecx = MEM32(edi + 0xA88);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    PUSH32(esp, 0xBBC5D660u);
    eax = esp + 0x14;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    PUSH32(esp, esi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C71Bu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0002C71B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xA88) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C729u); RECOMP_ABI_CALL(0x00012060u, sub_00012060); /* call 0x00012060 */

loc_0002C729: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DE75C)); /* fmul dword ptr [0x2de75c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C738u); RECOMP_ABI_CALL(0x00012060u, sub_00012060); /* call 0x00012060 */

loc_0002C738: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DE75C)); /* fmul dword ptr [0x2de75c] */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(edi + 0x8B0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(edi + 0x8B4) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x8B8) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x8BC) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0xA48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C7CC; /* je: equal / zero */

loc_0002C78E: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C7C1u); RECOMP_ABI_CALL(0x0002C510u, sub_0002C510); /* call 0x0002C510 */

loc_0002C7C1: ;
    ecx = MEM32(edi + 0xA48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C7CCu); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_0002C7CC: ;
    eax = edi + 0x8B0;
    PUSH32(esp, eax);
    ecx = edi + 0x798;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C7DEu); RECOMP_ABI_CALL(0x002035D0u, sub_002035D0); /* call 0x002035D0 */

loc_0002C7DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0002C7F0
 * Original: 0x0002C7F0 - 0x0002CA12 (546 bytes, 138 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002C7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0002C7F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA58)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edx = MEM32(esi);
    PUSH32(esp, edi);
    MEMF(esi + 0xA58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C855; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0002C82F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x70A51EAC);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEM32(esi + 0xA4C) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002C84Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002C848u); } /* indirect call */
    }

loc_0002C84B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C853u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0002C853: ;
    goto loc_0002C87C;

loc_0002C855: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAB852498u);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002C869u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002C866u); } /* indirect call */
    }

loc_0002C869: ;
    ecx = MEM32(esi + 0xA88);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C876u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0002C876: ;
    MEM32(esi + 0xA88) = eax;

loc_0002C87C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DE790); /* mulss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C8A2; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0002C897: ;
    xmm3 = xmm4; /* movaps */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    goto loc_0002C8C1;

loc_0002C8A2: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0002C8BB; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0002C8B5: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0002C8BB: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_0002C8C1: ;
    edx = esi + 0x6E0;
    ebx = esi + 0xA40;
    MEM32(esp + 0x1C) = edx;
    _fb = (uint32_t)(0x838) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x838;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = 2;
    goto loc_0002C8F0;

loc_0002C8E1: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    /* nop */

loc_0002C8F0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x178); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xBC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x17C); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xC0)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x180); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x178); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x17C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x180)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + -8) = xmm3.f[0]; /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C9DB; /* je: equal / zero */

loc_0002C982: ;
    eax = esp + 0x17;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C9A6u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_0002C9A6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002C9B9; /* jne: not equal / not zero */

loc_0002C9AB: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C9B9; /* je: equal / zero */

loc_0002C9B2: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C9B9u); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_0002C9B9: ;
    SET_LO8(eax, MEM8(edi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C9C7; /* je: equal / zero */

loc_0002C9C0: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002C9D4; /* jne: not equal / not zero */

loc_0002C9C7: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0002C9D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002C9D1u); } /* indirect call */
    }

loc_0002C9D4: ;
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C9DBu); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_0002C9DB: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C9E9u); RECOMP_ABI_CALL(0x002035D0u, sub_002035D0); /* call 0x002035D0 */

loc_0002C9E9: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_0002C8E1; /* jne: not equal / not zero */

loc_0002CA09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002CA20
 * Original: 0x0002CA20 - 0x0002CBE8 (456 bytes, 113 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002CA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0002CA20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edx = MEM32(esi);
    PUSH32(esp, edi);
    MEMF(esi + 0xA5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002CA84; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0002CA5E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF0C85EE6u);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEM32(esi + 0xA50) = 2;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002CA7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CA77u); } /* indirect call */
    }

loc_0002CA7A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002CA82u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0002CA82: ;
    goto loc_0002CAAB;

loc_0002CA84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6965E262);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002CA98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CA95u); } /* indirect call */
    }

loc_0002CA98: ;
    ecx = MEM32(esi + 0xA88);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002CAA5u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0002CAA5: ;
    MEM32(esi + 0xA88) = eax;

loc_0002CAAB: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0xA5C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2DE794); /* mulss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm5.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002CAD3; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm3.f[0]) */

loc_0002CACE: ;
    xmm3 = xmm5; /* movaps */
    goto loc_0002CADB;

loc_0002CAD3: ;
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002CADB; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_0002CAD8: ;
    xmm3 = xmm4; /* movaps */

loc_0002CADB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x970)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xA30); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x974)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xA34); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x978)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0xA38); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xA34); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xA30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 0x8B0) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x8B4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x8B8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8BC) = xmm4.f[0]; /* movss */
    edi = MEM32(esi + 0xA48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CBD0; /* je: equal / zero */

loc_0002CB73: ;
    edx = esp + 0x17;
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm5.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002CB97u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_0002CB97: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002CBAA; /* jne: not equal / not zero */

loc_0002CB9C: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CBAA; /* je: equal / zero */

loc_0002CBA3: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002CBAAu); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_0002CBAA: ;
    SET_LO8(eax, MEM8(edi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CBB8; /* je: equal / zero */

loc_0002CBB1: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002CBC5; /* jne: not equal / not zero */

loc_0002CBB8: ;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0002CBC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CBC2u); } /* indirect call */
    }

loc_0002CBC5: ;
    ecx = MEM32(esi + 0xA48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002CBD0u); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_0002CBD0: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi + 0x798;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002CBE0u); RECOMP_ABI_CALL(0x002035D0u, sub_002035D0); /* call 0x002035D0 */

loc_0002CBE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002CBF0
 * Original: 0x0002CBF0 - 0x0002CD58 (360 bytes, 113 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002CBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002CBF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x214) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x214;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ecx + 0xA8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002CD0E; /* je: equal / zero */

loc_0002CC0D: ;
    eax = ecx + 0x800;
    edx = ecx + 0x704;
    MEM32(esp + 0x18) = 0x2DE73C;
    esi = ecx + 0xEE0;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = edx;
    edi = ecx + 0xEAC;

loc_0002CC35: ;
    MEM8(edi + 0x20) = MEM8(edi + 0x20) | 1;
    _fa = (uint32_t)(MEM8(edi + 0x20)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ebx, MEM8(edi));
    eax = MEM32(esp + 0x18);
    SET_LO8(ebx, LO8(ebx) & 0xFE);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edi) = LO8(ebx);
    ecx = MEM32(0x643844);
    eax = MEM32(eax);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002CC65u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0002CC65: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002CC73; /* jge: greater or equal (signed >=) */

loc_0002CC6C: ;
    eax = 0x6438B8;
    goto loc_0002CC7C;

loc_0002CC73: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0002CC7C: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2D82A39B);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM32(ebx + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002CC9Eu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0002CC9E: ;
    ebx = esp + 0x20;
    MEM32(esp + 0x10) = 8;
    /* nop */

loc_0002CCB0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CCC5; /* je: equal / zero */

loc_0002CCB6: ;
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002CCBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CCBBu); } /* indirect call */
    }

loc_0002CCBE: ;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002CCC5u); RECOMP_ABI_CALL(0x001771B0u, sub_001771B0); /* call 0x001771B0 */

loc_0002CCC5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0002CCB0; /* jne: not equal / not zero */

loc_0002CCD6: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x5C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2DE744) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2DE744 (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0002CC35; /* jl: less (signed <) */

loc_0002CD05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0002CD0E: ;
    edi = ecx + 0xEE0;
    esi = ecx + 0xEAC;
    MEM32(esp + 0x10) = 2;

loc_0002CD22: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi) = MEM8(esi) | 1;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = 8;
    edi = edi;

loc_0002CD30: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CD3B; /* je: equal / zero */

loc_0002CD36: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002CD3Bu); RECOMP_ABI_CALL(0x00177260u, sub_00177260); /* call 0x00177260 */

loc_0002CD3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002CD30; /* jne: not equal / not zero */

loc_0002CD41: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0002CD22; /* jne: not equal / not zero */

loc_0002CD4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002CD0B
 * Original: 0x0002CD0B - 0x0002CD58 (77 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CD0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CD0B: ;
    esp += 8; return; /* ret 4 */

loc_0002CD22: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi) = MEM8(esi) | 1;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = 8;
    edi = edi;

loc_0002CD30: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CD3B; /* je: equal / zero */

loc_0002CD36: ;
    PUSH32(esp, 0x0002CD3Bu); RECOMP_ABI_CALL(0x00177260u, sub_00177260); /* call 0x00177260 */

loc_0002CD3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002CD30; /* jne: not equal / not zero */

loc_0002CD41: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0002CD22; /* jne: not equal / not zero */

loc_0002CD4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002CD60
 * Original: 0x0002CD60 - 0x0002CDCC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002CD60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002CD68u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0002CD68: ;
    MEM32(esi) = 0x2DE798;
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
    PUSH32(esp, 0x0002CDC5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002CDC5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CDD0
 * Original: 0x0002CDD0 - 0x0002CDDC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CDD0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002CDE0(); return; /* tail jmp 0x0002CDE0 */

}

/**
 * sub_0002CDE0
 * Original: 0x0002CDE0 - 0x0002CE4C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002CDE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CE47; /* je: equal / zero */

loc_0002CDF2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0xF20);
    edx = MEM32(ecx + 0xF24);
    MEM32(ecx + 0xF28) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0xF24);
    edx = MEM32(ecx + 0xF20);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CE2A; /* je: equal / zero */

loc_0002CE24: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002CE2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CE28u); } /* indirect call */
    }

loc_0002CE2A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF0D0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF0D0u;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002CDF2; /* jne: not equal / not zero */

loc_0002CE47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002CE50
 * Original: 0x0002CE50 - 0x0002CE9A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002CE50: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0xF20;
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
 * sub_0002CEA0
 * Original: 0x0002CEA0 - 0x0002CFCD (301 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CEA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240AA0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0002CEC5u); RECOMP_ABI_CALL(0x00025090u, sub_00025090); /* call 0x00025090 */

loc_0002CEC5: ;
    PUSH32(esp, 0x1F3C60);
    PUSH32(esp, 0x1F3BE0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x5C);
    eax = esi + 0x6E0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = ebx;
    MEM32(esi) = 0x2DE7B0;
    PUSH32(esp, 0x0002CEEBu); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_0002CEEB: ;
    MEM8(esp + 0x1C) = 1;
    edi = esi + 0xA90;
    ebp = 2;
    goto loc_0002CF00;

    /* nop */

loc_0002CF00: ;
    ecx = edi + 0x108;
    PUSH32(esp, 0x40);
    MEM32(edi) = ebx;
    PUSH32(esp, ecx);
    MEM32(edi + 4) = ebx;
    PUSH32(esp, 0x0002CF13u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0002CF13: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x208;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002CF00; /* jne: not equal / not zero */

loc_0002CF1F: ;
    SET_LO8(edx, MEM8(esi + 0xEAC));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xEA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xEA4) = xmm0.f[0]; /* movss */
    eax = esi + 0xEA0;
    SET_LO8(edx, LO8(edx) & 0xFB);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    edi = 0x80808080u;
    MEM32(eax + -8) = edi;
    MEM32(eax + 8) = edi;
    SET_LO8(edx, LO8(edx) | 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + -4) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0xC));
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0xC) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0xECC));
    eax = esi + 0xEC0;
    MEM32(eax + 8) = edi;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    SET_LO8(edx, LO8(edx) & 0xFB);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) | 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + -4) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0xC));
    MEM32(eax + 8) = edi;
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0xC) = LO8(ecx);
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(esi + 0xF20) = ebx;
    MEM32(esi + 0xF24) = ebx;
    MEM32(esi + 0xF28) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002CFD0
 * Original: 0x0002CFD0 - 0x0002CFD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CFD0(void)
{

loc_0002CFD0: ;
    eax = 0xF30;
    esp += 4; return; /* ret */

}

/**
 * sub_0002CFE0
 * Original: 0x0002CFE0 - 0x0002CFE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CFE0(void)
{

loc_0002CFE0: ;
    eax = MEM32(0x30C1E0);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CFF0
 * Original: 0x0002CFF0 - 0x0002D00E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002CFF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002CFF8u); RECOMP_ABI_CALL(0x0002D010u, sub_0002D010); /* call 0x0002D010 */

loc_0002CFF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D008; /* je: equal / zero */

loc_0002CFFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002D005u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0002D005: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002D008: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002D010
 * Original: 0x0002D010 - 0x0002D069 (89 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D010: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240AB8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x1F3C60);
    PUSH32(esp, 3);
    PUSH32(esp, 0x5C);
    eax = esi + 0x6E0;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0002D04Au); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_0002D04A: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0002D059u); RECOMP_ABI_CALL(0x00025360u, sub_00025360); /* call 0x00025360 */

loc_0002D059: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002D070
 * Original: 0x0002D070 - 0x0002D102 (146 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0xEE0;
    edi = 0x10;

loc_0002D080: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D091; /* je: equal / zero */

loc_0002D086: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0002D08Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D088u); } /* indirect call */
    }

loc_0002D08B: ;
    MEM32(esi) = 0;

loc_0002D091: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002D080; /* jne: not equal / not zero */

loc_0002D097: ;
    edx = MEM32(ebx + 0x18);
    ecx = ebx + 0x18;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002D0A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D09Eu); } /* indirect call */
    }

loc_0002D0A1: ;
    edi = ebx + 0x6E0;
    esi = ebx + 0xA40;
    ebp = 3;

loc_0002D0B2: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D0C9; /* je: equal / zero */

loc_0002D0B8: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D0C0u); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_0002D0C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_0002D0C9: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D0D6; /* je: equal / zero */

loc_0002D0CF: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002D0D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D0D3u); } /* indirect call */
    }

loc_0002D0D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002D0B2; /* jne: not equal / not zero */

loc_0002D0DF: ;
    ecx = ebx;
    PUSH32(esp, 0x0002D0E6u); RECOMP_ABI_CALL(0x000278D0u, sub_000278D0); /* call 0x000278D0 */

loc_0002D0E6: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0002D0EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D0EAu); } /* indirect call */
    }

loc_0002D0ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0002D0FE; /* jne: not equal / not zero */

loc_0002D0F3: ;
    PUSH32(esp, ebx);
    ecx = 0x3164E0;
    PUSH32(esp, 0x0002D0FEu); RECOMP_ABI_CALL(0x0002CE50u, sub_0002CE50); /* call 0x0002CE50 */

loc_0002D0FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D110
 * Original: 0x0002D110 - 0x0002D18D (125 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D110: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = 0x30E854;
    PUSH32(esp, 0x0002D123u); RECOMP_ABI_CALL(0x00022E60u, sub_00022E60); /* call 0x00022E60 */

loc_0002D123: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002D168; /* jl: less (signed <) */

loc_0002D127: ;
    ecx = MEM32(0x30E854);
    edi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D168; /* je: equal / zero */

loc_0002D134: ;
    edx = MEM32(esi + 0xA68);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x118); PUSH32(esp, 0x0002D149u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D143u); } /* indirect call */
    }

loc_0002D149: ;
    eax = eax | 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002D15Du); RECOMP_ABI_CALL(0x0012FCC0u, sub_0012FCC0); /* call 0x0012FCC0 */

loc_0002D15D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x25C) = eax;
    goto loc_0002D172;

loc_0002D168: ;
    MEM32(esi + 0x25C) = 0;

loc_0002D172: ;
    eax = MEM32(esi + 0x25C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D188; /* je: equal / zero */

loc_0002D17C: ;
    edx = MEM32(esi + 0x698);
    MEM32(eax + 0xB4) = edx;

loc_0002D188: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002D190
 * Original: 0x0002D190 - 0x0002D1EF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D190: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF30);
    PUSH32(esp, 0x0002D1A4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0002D1A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D1B4; /* je: equal / zero */

loc_0002D1AB: ;
    ecx = eax;
    PUSH32(esp, 0x0002D1B2u); RECOMP_ABI_CALL(0x0002CEA0u, sub_0002CEA0); /* call 0x0002CEA0 */

loc_0002D1B2: ;
    goto loc_0002D1B6;

loc_0002D1B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002D1B6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0xF20;
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
    _fb = (uint32_t)(0xF30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF30;
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
 * sub_0002D1F0
 * Original: 0x0002D1F0 - 0x0002D593 (931 bytes, 261 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D1F0: ;
    eax = MEM32(0x37A3F4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = ecx;
    ecx = MEM32(esp + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edi;
    eax = edi;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0xA68) = eax;
    PUSH32(esp, 0x0002D219u); RECOMP_ABI_CALL(0x00025420u, sub_00025420); /* call 0x00025420 */

loc_0002D219: ;
    eax = MEM32(esi + 0x300);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x2F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 0xA7C) = ebp;
    MEM32(esi + 0xA80) = ebp;
    MEM32(esi + 0xA84) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D474; /* je: equal / zero */

loc_0002D241: ;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x26C);
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
    PUSH32(esp, 0x0002D266u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0002D266: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002D274; /* jge: greater or equal (signed >=) */

loc_0002D26D: ;
    eax = 0x6438B8;
    goto loc_0002D27D;

loc_0002D274: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0002D27D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(edi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D474; /* je: equal / zero */

loc_0002D28E: ;
    PUSH32(esp, ebx);
    edx = esi + 0xA40;
    eax = esi + 0x800;
    ebx = esi + 0x6E0;
    ecx = esi + 0xEAC;
    edi = esi + 0xA90;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x10) = ecx;
    /* nop */

loc_0002D2C0: ;
    eax = MEM32(ebp + 0x2DE73C);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002D2CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D2CBu); } /* indirect call */
    }

loc_0002D2CE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0002D2D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D2D2u); } /* indirect call */
    }

loc_0002D2D8: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x2DE760);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x0002D302u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0002D302: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0002D30Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D306u); } /* indirect call */
    }

loc_0002D30C: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x2DE76C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D335u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0002D335: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D348u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0002D348: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0002D354u); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_0002D354: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002D35Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D358u); } /* indirect call */
    }

loc_0002D35B: ;
    eax = MEM32(ebp + 0x2DE73C);
    PUSH32(esp, eax);
    ecx = 0x30E854;
    PUSH32(esp, 0x0002D36Cu); RECOMP_ABI_CALL(0x00022E60u, sub_00022E60); /* call 0x00022E60 */

loc_0002D36C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002D3B7; /* jl: less (signed <) */

loc_0002D370: ;
    ecx = MEM32(0x30E854);
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D3B7; /* je: equal / zero */

loc_0002D381: ;
    edx = MEM32(esi + 0xA68);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x118); PUSH32(esp, 0x0002D396u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D390u); } /* indirect call */
    }

loc_0002D396: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x2C);
    eax = eax | 0x280;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002D3ACu); RECOMP_ABI_CALL(0x0012FCC0u, sub_0012FCC0); /* call 0x0012FCC0 */

loc_0002D3AC: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    goto loc_0002D3C1;

loc_0002D3B7: ;
    edx = MEM32(esp + 0x14);
    MEM32(edx) = 0;

loc_0002D3C1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002D437; /* jge: greater or equal (signed >=) */

loc_0002D3C6: ;
    MEM32(ebx + 0x34) = edi;
    ebx = edi + 0x108;
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002D3D7u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0002D3D7: ;
    eax = MEM32(esp + 0x18);
    MEM32(edi) = 0;
    MEM8(eax + 0x20) = MEM8(eax + 0x20) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(ebp + 0x2DE780);
    PUSH32(esp, 0x3F);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0002D3FBu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0002D3FB: ;
    ecx = MEM32(esp + 0x34);
    MEM32(edi + eax * 4 + 8) = ecx;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = edx;
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(ebp + 0x2DE778);
    ebx = eax + -12;
    PUSH32(esp, 0x3F);
    eax = edi + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D427u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0002D427: ;
    MEM32(edi + eax * 4 + 8) = ebx;
    eax = MEM32(edi);
    ebx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = eax;

loc_0002D437: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x5C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x208;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xC (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0002D2C0; /* jl: less (signed <) */

loc_0002D471: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_0002D474: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE748)); /* movss */
    MEMF(esi + 0xA58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DE74C)); /* movss */
    MEMF(esi + 0xA5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DE750)); /* movss */
    MEMF(esi + 0xA60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xA6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DE754)); /* movss */
    MEM32(esi + 0xA4C) = 2;
    MEM32(esi + 0xA50) = ebp;
    MEM32(esi + 0xA54) = ebp;
    MEMF(esi + 0xA64) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xA30);
    MEM32(esi + 0xA70) = eax;
    ecx = MEM32(esi + 0xA34);
    MEM32(esi + 0xA74) = ecx;
    edx = MEM32(esi + 0xA38);
    MEM32(esi + 0xA78) = edx;
    MEM8(esi + 0xA8C) = 0;
    _fb = (uint32_t)(0xEE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xEE0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x10;
    goto loc_0002D510;

    /* nop */

loc_0002D510: ;
    ecx = 0x403750;
    PUSH32(esp, 0x0002D51Au); RECOMP_ABI_CALL(0x0001F480u, sub_0001F480); /* call 0x0001F480 */

loc_0002D51A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D584; /* je: equal / zero */

loc_0002D520: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002D528u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D525u); } /* indirect call */
    }

loc_0002D528: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, 0x0002D534u); RECOMP_ABI_CALL(0x00177850u, sub_00177850); /* call 0x00177850 */

loc_0002D534: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0002D540u); RECOMP_ABI_CALL(0x00177870u, sub_00177870); /* call 0x00177870 */

loc_0002D540: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002D548u); RECOMP_ABI_CALL(0x00177910u, sub_00177910); /* call 0x00177910 */

loc_0002D548: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002D550u); RECOMP_ABI_CALL(0x00177890u, sub_00177890); /* call 0x00177890 */

loc_0002D550: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002D558u); RECOMP_ABI_CALL(0x00177930u, sub_00177930); /* call 0x00177930 */

loc_0002D558: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002D560u); RECOMP_ABI_CALL(0x001778B0u, sub_001778B0); /* call 0x001778B0 */

loc_0002D560: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x0002D56Cu); RECOMP_ABI_CALL(0x001778D0u, sub_001778D0); /* call 0x001778D0 */

loc_0002D56C: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x0002D578u); RECOMP_ABI_CALL(0x00177970u, sub_00177970); /* call 0x00177970 */

loc_0002D578: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x800000FFu);
    PUSH32(esp, 0x0002D584u); RECOMP_ABI_CALL(0x001779B0u, sub_001779B0); /* call 0x001779B0 */

loc_0002D584: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002D510; /* jne: not equal / not zero */

loc_0002D58A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002D5A0
 * Original: 0x0002D5A0 - 0x0002DD2F (1935 bytes, 399 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002D5A0(void)
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

loc_0002D5A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240AF1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0xDC) = 0x2DD9FC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1DC) = ebx;
    MEM32(esp + 0xE0) = 0x2DE96C;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    MEM8(esp + 0x1E0) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D5F6u); RECOMP_ABI_CALL(0x00023930u, sub_00023930); /* call 0x00023930 */

loc_0002D5F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D611; /* jne: not equal / not zero */

loc_0002D5FA: ;
    ecx = MEM32(esp + 0x1D4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0002D611: ;
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D621u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0002D621: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DE968)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC38C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    edx = esp;
    MEM32(edx) = eax;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 4) = ecx;
    ecx = esp + 0x2C;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = esp + 0x130;
    MEMF(esp + 0x60) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm2.f[0]; /* movss */
    MEM32(edx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D6C9u); RECOMP_ABI_CALL(0x00023C40u, sub_00023C40); /* call 0x00023C40 */

loc_0002D6C9: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x1DC) = 2;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0002D6DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D6D5u); } /* indirect call */
    }

loc_0002D6DB: ;
    ecx = MEM32(esp + 0x124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6ED; /* je: equal / zero */

loc_0002D6E8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D6EDu); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0002D6ED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x124) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6FF; /* je: equal / zero */

loc_0002D6F8: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D6FFu); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_0002D6FF: ;
    PUSH32(esp, 2);
    eax = esp + 0x124;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x16C) = 0xE;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D71Bu); RECOMP_ABI_CALL(0x0012E8C0u, sub_0012E8C0); /* call 0x0012E8C0 */

loc_0002D71B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002D892; /* jle: less or equal (signed <=) */

loc_0002D726: ;
    edi = 0x378EFC;
    MEM32(esp + 0x1C) = eax;
    /* nop */

loc_0002D730: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D880; /* je: equal / zero */

loc_0002D73A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D880; /* je: equal / zero */

loc_0002D742: ;
    xmm1 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x30F06C); /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x30F068); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x30F064); /* subss */
    eax = esp + 0x7C;
    MEM32(esp + 0x20) = 0x18;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM32(esp + 0x50) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002D7E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D7E0u); } /* indirect call */
    }

loc_0002D7E3: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE964)); /* movss */
    ecx = MEM32(edi);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = 0xE;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM32(esp + 0x50) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0002D87Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D878u); } /* indirect call */
    }

loc_0002D87E: ;
    fp_pop(); /* fstp st(0) */

loc_0002D880: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_0002D730; /* jne: not equal / not zero */

loc_0002D892: ;
    eax = MEM32(0x30F0A4);
    ecx = MEM32(0x30F09C);
    edx = MEM32(0x30F0A0);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0xA54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    if (CMP_A(_fa, _fb)) goto loc_0002DCDA; /* ja: above (unsigned >) */

loc_0002D8BE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2DD30); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0002D8C5u) goto loc_0002D8C5;
    if (_jt == 0x0002D8D0u) goto loc_0002D8D0;
    if (_jt == 0x0002DAD4u) goto loc_0002DAD4;
    if (_jt == 0x0002DB8Bu) goto loc_0002DB8B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002D8C5: ;
    MEM8(esi + 0xA8C) = LO8(ebx);
    goto loc_0002DCDA;

loc_0002D8D0: ;
    eax = MEM32(esi + 0xA4C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 0xA8C) = 1;
    if ((_fa == 0)) goto loc_0002D9D0; /* je: equal / zero */

loc_0002D8E5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002D90E; /* je: equal / zero */

loc_0002D8E8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002DCDA; /* jne: not equal / not zero */

loc_0002D8EF: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE748)); /* movss */
    MEMF(esi + 0xA58) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xA4C) = 1;
    goto loc_0002DCDA;

loc_0002D90E: ;
    xmm0 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0xC); /* subss */
    edx = MEM32(esi);
    eax = esp + 0xE4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x98) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002D962u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D95Fu); } /* indirect call */
    }

loc_0002D962: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi + 0xA7C);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DBED0); /* subss */
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, eax);
    ecx = 0x316610;
    MEMF(esp + 0xC0) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D9BAu); RECOMP_ABI_CALL(0x001FBA00u, sub_001FBA00); /* call 0x001FBA00 */

loc_0002D9BA: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0xA7C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D9CBu); RECOMP_ABI_CALL(0x0002C7F0u, sub_0002C7F0); /* call 0x0002C7F0 */

loc_0002D9CB: ;
    goto loc_0002DCDA;

loc_0002D9D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0xC); /* subss */
    edx = MEM32(esi);
    eax = esp + 0x108;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0xD4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002DA24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DA21u); } /* indirect call */
    }

loc_0002DA24: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esi + 0xA7C);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DBED0); /* subss */
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    edx = esp + 0xC8;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, eax);
    ecx = 0x316610;
    MEMF(esp + 0xD8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002DA7Cu); RECOMP_ABI_CALL(0x001FBA00u, sub_001FBA00); /* call 0x001FBA00 */

loc_0002DA7C: ;
    MEM32(esi + 0xA7C) = eax;
    eax = MEM32(esi + 0xA50);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0002DAB5; /* je: equal / zero */

loc_0002DA8C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002DAA5; /* je: equal / zero */

loc_0002DA8F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002DCDA; /* jne: not equal / not zero */

loc_0002DA96: ;
    MEM32(esi + 0xA54) = 2;
    goto loc_0002DCDA;

loc_0002DAA5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002DAB0u); RECOMP_ABI_CALL(0x0002CA20u, sub_0002CA20); /* call 0x0002CA20 */

loc_0002DAB0: ;
    goto loc_0002DCDA;

loc_0002DAB5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE74C)); /* movss */
    MEMF(esi + 0xA5C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xA50) = 1;
    goto loc_0002DCDA;

loc_0002DAD4: ;
    xmm0 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0xC); /* subss */
    edx = MEM32(esi);
    eax = esp + 0xFC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x8C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002DB28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DB25u); } /* indirect call */
    }

loc_0002DB28: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DBED0); /* subss */
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEMF(esp + 0xC4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x41A00000);

loc_0002DB6F: ;
    eax = MEM32(esi + 0xA7C);
    PUSH32(esp, eax);
    ecx = 0x316610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002DB80u); RECOMP_ABI_CALL(0x001FBA00u, sub_001FBA00); /* call 0x001FBA00 */

loc_0002DB80: ;
    MEM32(esi + 0xA7C) = eax;
    goto loc_0002DCDA;

loc_0002DB8B: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002DB96u); RECOMP_ABI_CALL(0x0002C610u, sub_0002C610); /* call 0x0002C610 */

loc_0002DB96: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA74)); /* movss */
    edx = MEM32(esi);
    eax = esp + 0x114;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002DBB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DBB0u); } /* indirect call */
    }

loc_0002DBB3: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002DC59; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_0002DBC3: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    edx = MEM32(esi);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0xC); /* subss */
    eax = esp + 0xF0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0xA4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002DC0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DC0Au); } /* indirect call */
    }

loc_0002DC0D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DBED0); /* subss */
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x41F00000);
    goto loc_0002DB6F;

loc_0002DC59: ;
    ecx = MEM32(esi + 0xA84);
    PUSH32(esp, 0x30F064);
    edi = esi + 0xA70;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = 0x3167E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002DC7Cu); RECOMP_ABI_CALL(0x001FBA00u, sub_001FBA00); /* call 0x001FBA00 */

loc_0002DC7C: ;
    PUSH32(esp, 0x30F064);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    MEM32(esi + 0xA84) = eax;
    eax = MEM32(esi + 0xA80);
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DE754); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, eax);
    ecx = 0x3166F8;
    MEMF(esp + 0x80) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002DCD4u); RECOMP_ABI_CALL(0x001FBA00u, sub_001FBA00); /* call 0x001FBA00 */

loc_0002DCD4: ;
    MEM32(esi + 0xA80) = eax;

loc_0002DCDA: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002DCE5u); RECOMP_ABI_CALL(0x0002CBF0u, sub_0002CBF0); /* call 0x0002CBF0 */

loc_0002DCE5: ;
    MEM8(esp + 0x1DC) = 1;
    MEM32(esp + 0x120) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0002DD00: ;
    ecx = MEM32(esp + esi * 4 + 0x124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD10; /* je: equal / zero */

loc_0002DD0B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002DD10u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0002DD10: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002DD00; /* jl: less (signed <) */

loc_0002DD16: ;
    ecx = MEM32(esp + 0x1D4);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
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
 * sub_0002DD40
 * Original: 0x0002DD40 - 0x0002DD61 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DD40: ;
    PUSH32(esp, esi);
    ecx = 0x3164E0;
    PUSH32(esp, 0x0002DD4Bu); RECOMP_ABI_CALL(0x0002D190u, sub_0002D190); /* call 0x0002D190 */

loc_0002DD4B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD5D; /* je: equal / zero */

loc_0002DD51: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0002DD5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DD5Au); } /* indirect call */
    }

loc_0002DD5D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DD70
 * Original: 0x0002DD70 - 0x0002DDAF (63 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DD70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DD70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6749CD02);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0002DD87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DD84u); } /* indirect call */
    }

loc_0002DD87: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002DD94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DD91u); } /* indirect call */
    }

loc_0002DD94: ;
    ecx = MEM32(esi + 0x6E8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DDA1u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0002DDA1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x6E8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002DDB0
 * Original: 0x0002DDB0 - 0x0002DDD2 (34 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DDB0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0xCC4) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0002DDCF; /* jne: not equal / not zero */

loc_0002DDBE: ;
    MEM32(ecx + 0xC18) = 0;
    MEM8(ecx + 0xC10) = 1;

loc_0002DDCF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002DDE0
 * Original: 0x0002DDE0 - 0x0002DE23 (67 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DDE0: ;
    SET_LO8(eax, MEM8(ecx + 0xCC4));
    SET_LO8(edx, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DE20; /* jne: not equal / not zero */

loc_0002DDEC: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC18) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002DE14; /* je: equal / zero */

loc_0002DDF9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002DE05; /* je: equal / zero */

loc_0002DDFC: ;
    MEM8(ecx + 0xC10) = LO8(edx);
    esp += 8; return; /* ret 4 */

loc_0002DE05: ;
    eax = MEM32(ecx + 0xBF4);
    MEM32(ecx + 0xC2C) = eax;
    esp += 8; return; /* ret 4 */

loc_0002DE14: ;
    edx = MEM32(ecx + 0xBF0);
    MEM32(ecx + 0xC2C) = edx;

loc_0002DE20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002DE30
 * Original: 0x0002DE30 - 0x0002DE94 (100 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DE30: ;
    PUSH32(esp, 0);
    MEM32(ecx + 0xC28) = 3;
    PUSH32(esp, 0x0002DE41u); RECOMP_ABI_CALL(0x0002DDE0u, sub_0002DDE0); /* call 0x0002DDE0 */

loc_0002DE41: ;
    MEM32(ecx + 0xC0C) = 0;
    eax = MEM32(ecx + 0xBC4);
    MEM32(ecx + 0xBFC) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0xC0C) = MEM32(ecx + 0xC0C) + eax;
    _fa = (uint32_t)(MEM32(ecx + 0xC0C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0xBC8);
    MEM32(ecx + 0xC00) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0xC0C) = MEM32(ecx + 0xC0C) + eax;
    _fa = (uint32_t)(MEM32(ecx + 0xC0C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0xBCC);
    MEM32(ecx + 0xC04) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0xC0C) = MEM32(ecx + 0xC0C) + eax;
    _fa = (uint32_t)(MEM32(ecx + 0xC0C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0xBD0);
    MEM32(ecx + 0xC08) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0xC0C) = MEM32(ecx + 0xC0C) + eax;
    _fa = (uint32_t)(MEM32(ecx + 0xC0C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002DEA0
 * Original: 0x0002DEA0 - 0x0002DEBB (27 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DEA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002DEB8; /* jl: less (signed <) */

loc_0002DEA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002DEB8; /* jge: greater or equal (signed >=) */

loc_0002DEAD: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0xBB4) = edx;

loc_0002DEB8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002DEC0
 * Original: 0x0002DEC0 - 0x0002DEF5 (53 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DEC0: ;
    eax = MEM32(ecx + 0xBE8);
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEM32(ecx + 0xC20) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ecx + 0xC1C) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xC24) = eax;
    MEM32(ecx + 0xC28) = 1;
    MEM8(ecx + 0xC10) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DF00
 * Original: 0x0002DF00 - 0x0002DF1A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DF00: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002DF06: ;
    MEM32(eax + edx * 4) = ecx;
    MEM32(eax + edx * 4 + 0x40) = ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002DF06; /* jl: less (signed <) */

loc_0002DF13: ;
    MEM32(eax + 0x80) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0002DF20
 * Original: 0x0002DF20 - 0x0002DF5A (58 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DF20: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF56; /* je: equal / zero */

loc_0002DF2D: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002DF30: ;
    _fa = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + esi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF41; /* je: equal / zero */

loc_0002DF36: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002DF30; /* jl: less (signed <) */

loc_0002DF3C: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0002DF41: ;
    MEM32(edi + esi * 4) = ecx;
    PUSH32(esp, 0x0002DF49u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0002DF49: ;
    MEM32(edi + esi * 4 + 0x40) = eax;
    MEM32(edi + 0x80) = MEM32(edi + 0x80) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    POP32(esp, esi);

loc_0002DF56: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002DF60
 * Original: 0x0002DF60 - 0x0002DF95 (53 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DF60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0002DF69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DF66u); } /* indirect call */
    }

loc_0002DF69: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DF74; /* jne: not equal / not zero */

loc_0002DF6F: ;
    edi = 0xF4240;

loc_0002DF74: ;
    eax = MEM32(esi + 0xC14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF90; /* je: equal / zero */

loc_0002DF7E: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002DF85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DF82u); } /* indirect call */
    }

loc_0002DF85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DF8E; /* jne: not equal / not zero */

loc_0002DF89: ;
    eax = 0x989680;

loc_0002DF8E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DF90: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DFA0
 * Original: 0x0002DFA0 - 0x0002DFC3 (35 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DFA0(void)
{

loc_0002DFA0: ;
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
 * sub_0002DFD0
 * Original: 0x0002DFD0 - 0x0002E08C (188 bytes, 60 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0002DFD0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    PUSH32(esp, esi);
    MEM32(ecx + 4) = 4;
    MEM32(ecx) = 0x2DE9A0;
    MEM32(ecx + 0x14) = edx;
    esi = MEM32(eax);
    MEM32(ecx + 8) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 0xC) = esi;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x10) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(ecx + 0x18) = edx;
    POP32(esp, esi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002E013; /* jnp: not parity */

loc_0002E00F: ;
    SET_LO8(eax, 1);
    goto loc_0002E015;

loc_0002E013: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0002E015: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x2C));
    SET_LO8(ebx, LO8(ebx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x2C));
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2DC8A0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM8(ecx + 0x2C) = LO8(eax);
    MEM8(esp + 8) = LO8(eax);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002E03F; /* jnp: not parity */

loc_0002E03D: ;
    SET_LO8(edx, 1);

loc_0002E03F: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    SET_LO8(ebx, MEM8(esp + 0x18));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 8));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 0xE1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM8(ecx + 0x2C) = LO8(eax);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0002E072; /* jne: not equal / not zero */

loc_0002E06A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */

loc_0002E072: ;
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    eax = ecx;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0002E090
 * Original: 0x0002E090 - 0x0002E11B (139 bytes, 42 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0002E090: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ecx + 0x28);
    eax = eax ^ esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(ecx + 0x28);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 4) = 4;
    MEM32(ecx) = 0x2DE9A0;
    MEM32(ecx + 0x14) = edx;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002E0E2; /* jnp: not parity */

loc_0002E0E0: ;
    SET_LO8(edx, 1);

loc_0002E0E2: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(ecx + 0x2C));
    SET_LO8(edx, LO8(edx) & 0xE0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM8(ecx + 0x2C) = LO8(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_0002E107; /* jne: not equal / not zero */

loc_0002E0FF: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */

loc_0002E107: ;
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    eax = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0002E120
 * Original: 0x0002E120 - 0x0002E124 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E120(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0002E120: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002E130
 * Original: 0x0002E130 - 0x0002E165 (53 bytes, 14 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E130(void)
{

loc_0002E130: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = 5;
    MEM32(eax) = 0x2DE9CC;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0002E170
 * Original: 0x0002E170 - 0x0002E18F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E170: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2DE974;
    if (TEST_Z(_fa, _fb)) goto loc_0002E189; /* je: equal / zero */

loc_0002E180: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002E186u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0002E186: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E189: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E190
 * Original: 0x0002E190 - 0x0002E217 (135 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E190(void)
{

loc_0002E190: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = edx;
    SET_LO8(edx, MEM8(ecx + 0x3C));
    MEM8(eax + 0x3C) = LO8(edx);
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0x4C);
    MEM32(eax + 0x4C) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 0x50) = edx;
    ecx = MEM32(ecx + 0x54);
    MEM32(eax + 0x54) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E220
 * Original: 0x0002E220 - 0x0002E287 (103 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E220: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 2);
    ecx = eax + ebp + 0x8D0;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002E241u); RECOMP_ABI_CALL(0x0012E8C0u, sub_0012E8C0); /* call 0x0012E8C0 */

loc_0002E241: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002E249u); RECOMP_ABI_CALL(0x0012BD30u, sub_0012BD30); /* call 0x0012BD30 */

loc_0002E249: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002E275; /* jle: less or equal (signed <=) */

loc_0002E252: ;
    ebx = 0x378EFC;

loc_0002E257: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E26D; /* je: equal / zero */

loc_0002E25D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E26D; /* je: equal / zero */

loc_0002E261: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0002E269u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E263u); } /* indirect call */
    }

loc_0002E269: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E27E; /* jne: not equal / not zero */

loc_0002E26D: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002E257; /* jl: less (signed <) */

loc_0002E275: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002E27E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E290
 * Original: 0x0002E290 - 0x0002E335 (165 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E290: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x8D0;
    MEM32(esp + 0x14) = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0002E2B0: ;
    SET_LO8(eax, MEM8(edi + ebp + 0xB94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E319; /* je: equal / zero */

loc_0002E2BB: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002E2C9u); RECOMP_ABI_CALL(0x0012E8C0u, sub_0012E8C0); /* call 0x0012E8C0 */

loc_0002E2C9: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002E2D1u); RECOMP_ABI_CALL(0x0012BD30u, sub_0012BD30); /* call 0x0012BD30 */

loc_0002E2D1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002E319; /* jle: less or equal (signed <=) */

loc_0002E2D8: ;
    edi = 0x378EFC;
    ebx = esi;
    /* nop */

loc_0002E2E0: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E30F; /* je: equal / zero */

loc_0002E2E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E30F; /* je: equal / zero */

loc_0002E2EC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002E2F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E2F0u); } /* indirect call */
    }

loc_0002E2F3: ;
    edx = MEM32(0x30C2A4);
    ecx = MEM32(0x30C2A0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E30F; /* jne: not equal / not zero */

loc_0002E305: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x0002E30Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E309u); } /* indirect call */
    }

loc_0002E30F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002E2E0; /* jne: not equal / not zero */

loc_0002E315: ;
    edi = MEM32(esp + 0x14);

loc_0002E319: ;
    ecx = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0002E2B0; /* jl: less (signed <) */

loc_0002E32D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002E340
 * Original: 0x0002E340 - 0x0002E3D7 (151 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E340: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x80) = edi;

loc_0002E355: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    MEM32(esp + 0x21) = eax;
    MEM32(esp + 0x25) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x2D) = eax;
    ecx = esp + 0x14;
    MEM16(esp + 0x31) = LO16(eax);
    PUSH32(esp, 0x2DE9FC);
    PUSH32(esp, ecx);
    MEM8(esp + 0x1C) = 0;
    MEM8(esp + 0x3B) = LO8(eax);
    PUSH32(esp, 0x0002E391u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002E391: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002E39Bu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002E39B: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002E3A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E3A3u); } /* indirect call */
    }

loc_0002E3A6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E3C7; /* je: equal / zero */

loc_0002E3AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002E3B2u); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_0002E3B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E3C7; /* je: equal / zero */

loc_0002E3B9: ;
    MEM32(ebp + edi * 4) = eax;
    MEM32(ebp + edi * 4 + 0x40) = esi;
    MEM32(ebp + 0x80) = MEM32(ebp + 0x80) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E3C7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002E355; /* jl: less (signed <) */

loc_0002E3CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E3E0
 * Original: 0x0002E3E0 - 0x0002E487 (167 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002E3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E3E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x830) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x830;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E3F9u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0002E3F9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_0002E400: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E469; /* je: equal / zero */

loc_0002E405: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 9) = eax;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x25) = eax;
    ecx = esp + 0xC;
    MEM16(esp + 0x29) = LO16(eax);
    PUSH32(esp, 0x2DE9FC);
    PUSH32(esp, ecx);
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x33) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E441u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002E441: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E44Bu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002E44B: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E45Bu); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0002E45B: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E469u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002E469: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002E400; /* jl: less (signed <) */

loc_0002E472: ;
    ecx = MEM32(ebp + 8);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E47Fu); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_0002E47F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E490
 * Original: 0x0002E490 - 0x0002E4C5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E490: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM8(eax + 0x3C) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax) = 0x2DDA18;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E4D0
 * Original: 0x0002E4D0 - 0x0002E67F (431 bytes, 129 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002E4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0002E4D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x86C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x86C));
    esp = esp - 0x86C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E4E6u); RECOMP_ABI_CALL(0x000237A0u, sub_000237A0); /* call 0x000237A0 */

loc_0002E4E6: ;
    ecx = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E4EDu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0002E4ED: ;
    PUSH32(esp, eax);
    ecx = ebp + 0xC3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E4F9u); RECOMP_ABI_CALL(0x0002E3E0u, sub_0002E3E0); /* call 0x0002E3E0 */

loc_0002E4F9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    MEM32(esp + 0x21) = eax;
    MEM32(esp + 0x25) = eax;
    MEM32(esp + 0x29) = eax;
    MEM32(esp + 0x2D) = eax;
    MEM32(esp + 0x31) = eax;
    MEM16(esp + 0x35) = LO16(eax);
    ecx = esp + 0x70;
    MEM8(esp + 0x18) = 0;
    MEM8(esp + 0x37) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E52Eu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0002E52E: ;
    SET_LO8(ecx, MEM8(ebp + 0xCC4));
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x42AB788D;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB069958) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xB069958)) >> 32) & 1);
    ecx = ecx + 0xB069958;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4B4491A8);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E553u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0002E553: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E561u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002E561: ;
    eax = MEM32(ebp + 0xC0C);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x2DEA44);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E577u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002E577: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2DEA2C);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E58Du); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0002E58D: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E59Bu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002E59B: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + 0xBFC;

loc_0002E5A3: ;
    ecx = edi + 0x61;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, 0x2DE4BC);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E5B6u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002E5B6: ;
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E5C0u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002E5C0: ;
    ecx = MEM32(esi + -72);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E5D1u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0002E5D1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E5DFu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002E5DF: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + -56) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0002E658; /* jge: greater or equal (signed >=) */

loc_0002E5E6: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x39) = ecx;
    MEM32(esp + 0x3D) = ecx;
    MEM32(esp + 0x41) = ecx;
    MEM32(esp + 0x45) = ecx;
    MEM32(esp + 0x49) = ecx;
    MEM32(esp + 0x4D) = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x55) = ecx;
    edx = esp + 0x3C;
    MEM16(esp + 0x59) = LO16(ecx);
    PUSH32(esp, 0x2DEA14);
    PUSH32(esp, edx);
    MEM8(esp + 0x44) = 0;
    MEM8(esp + 0x63) = LO8(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E622u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002E622: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x2DEA44);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E634u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002E634: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E64Au); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0002E64A: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E658u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002E658: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0002E5A3; /* jl: less (signed <) */

loc_0002E665: ;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E671u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0002E671: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E678u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_0002E678: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E680
 * Original: 0x0002E680 - 0x0002E703 (131 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0002E680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002E687: ;
    ecx = MEM32(esi + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E6F7; /* je: equal / zero */

loc_0002E68E: ;
    SET_LO8(eax, MEM8(ecx + 0x30));
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002E6E2; /* jne: not equal / not zero */

loc_0002E698: ;
    PUSH32(esp, 0x0002E69Du); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0002E69D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 4 + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + edi * 4 + 0x40) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E6E2; /* jne: not equal / not zero */

loc_0002E6A3: ;
    eax = MEM32(esi + edi * 4);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002E6F7; /* jne: not equal / not zero */

loc_0002E6B1: ;
    ebx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E6F7; /* je: equal / zero */

loc_0002E6B8: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002E6BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E6BCu); } /* indirect call */
    }

loc_0002E6BF: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E6F7; /* jne: not equal / not zero */

loc_0002E6D1: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x98)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca > _fcb)) goto loc_0002E6F7; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0002E6E2: ;
    MEM32(esi + edi * 4) = 0;
    MEM32(esi + edi * 4 + 0x40) = 0;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0002E6F7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002E687; /* jl: less (signed <) */

loc_0002E6FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E710
 * Original: 0x0002E710 - 0x0002E77C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E710: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002E718u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0002E718: ;
    MEM32(esi) = 0x2DEA48;
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
    PUSH32(esp, 0x0002E775u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002E775: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E780
 * Original: 0x0002E780 - 0x0002E7DF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E780: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x590);
    PUSH32(esp, 0x0002E794u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0002E794: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7A4; /* je: equal / zero */

loc_0002E79B: ;
    ecx = eax;
    PUSH32(esp, 0x0002E7A2u); RECOMP_ABI_CALL(0x00071CF0u, sub_00071CF0); /* call 0x00071CF0 */

loc_0002E7A2: ;
    goto loc_0002E7A6;

loc_0002E7A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002E7A6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x580;
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
    _fb = (uint32_t)(0x590) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x590;
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
 * sub_0002E7E0
 * Original: 0x0002E7E0 - 0x0002E82A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E7E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E7E0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x580;
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
 * sub_0002E830
 * Original: 0x0002E830 - 0x0002E83C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E830: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002E840(); return; /* tail jmp 0x0002E840 */

}

/**
 * sub_0002E840
 * Original: 0x0002E840 - 0x0002E8AC (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E840: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8A7; /* je: equal / zero */

loc_0002E852: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0xC30);
    edx = MEM32(ecx + 0xC34);
    MEM32(ecx + 0xC38) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0xC34);
    edx = MEM32(ecx + 0xC30);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E88A; /* je: equal / zero */

loc_0002E884: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002E88Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E888u); } /* indirect call */
    }

loc_0002E88A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF330u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF330u;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002E852; /* jne: not equal / not zero */

loc_0002E8A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E8B0
 * Original: 0x0002E8B0 - 0x0002E8FA (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E8B0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0xC30;
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
 * sub_0002E900
 * Original: 0x0002E900 - 0x0002E931 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E900: ;
    eax = MEM32(0x371DBC);
    ecx = MEM32(0x371DC8);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002E918u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0002E918: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002E927; /* jge: greater or equal (signed >=) */

loc_0002E91F: ;
    eax = 0x371DCC;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0002E927: ;
    ecx = MEM32(0x371DC4);
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E940
 * Original: 0x0002E940 - 0x0002F889 (3913 bytes, 858 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002E940(void)
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

loc_0002E940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1F4));
    esp = esp - 0x1F4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E95Au); RECOMP_ABI_CALL(0x0002BAD0u, sub_0002BAD0); /* call 0x0002BAD0 */

loc_0002E95A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0xC2C) = eax;
    MEM32(ebx + 0xC0C) = eax;
    MEM32(esp + 0x18) = 0x61;
    edi = ebx + 0xBD4;
    MEM32(esp + 0x2C) = 4;
    edi = edi;

loc_0002E980: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x1C4;
    PUSH32(esp, 0x2DE4BC);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E997u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002E997: ;
    edx = esp + 0x1CC;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E9A4u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002E9A4: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002E9AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E9ACu); } /* indirect call */
    }

loc_0002E9AF: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi + -32) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002EAD4; /* je: equal / zero */

loc_0002E9BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002EAD4; /* je: equal / zero */

loc_0002E9C7: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x1C4;
    PUSH32(esp, 0x2DEACC);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E9DEu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002E9DE: ;
    edx = esp + 0x1CC;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E9EBu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002E9EB: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002E9F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E9F3u); } /* indirect call */
    }

loc_0002E9F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EA08; /* je: equal / zero */

loc_0002E9FA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EA00u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0002EA00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + -16) = eax;
    goto loc_0002EA0F;

loc_0002EA08: ;
    MEM32(edi + -16) = 0xA;

loc_0002EA0F: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x1C4;
    PUSH32(esp, 0x2DEAB8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EA26u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002EA26: ;
    edx = esp + 0x1CC;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EA33u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002EA33: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002EA3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EA3Bu); } /* indirect call */
    }

loc_0002EA3E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EA44u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002EA44: ;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x1C8;
    PUSH32(esp, 0x2DEA9C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EA5Du); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002EA5D: ;
    edx = esp + 0x1D0;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EA6Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002EA6A: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002EA75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EA72u); } /* indirect call */
    }

loc_0002EA75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi + -804) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002EA8C; /* jne: not equal / not zero */

loc_0002EA82: ;
    MEM32(edi + -804) = 0;

loc_0002EA8C: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x1C4;
    PUSH32(esp, 0x2DEA88);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EAA3u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002EAA3: ;
    edx = esp + 0x1CC;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EAB0u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002EAB0: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002EABBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EAB8u); } /* indirect call */
    }

loc_0002EABB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi + -788) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002EAE8; /* jne: not equal / not zero */

loc_0002EAC8: ;
    MEM32(edi + -788) = 0;
    goto loc_0002EAE8;

loc_0002EAD4: ;
    MEM32(edi + -32) = ecx;
    MEM32(edi + -16) = ecx;
    MEM32(edi) = ecx;
    MEM32(edi + -804) = ecx;
    MEM32(edi + -788) = ecx;

loc_0002EAE8: ;
    eax = MEM32(edi + -16);
    MEM32(edi + 0x28) = eax;
    ecx = MEM32(ebx + 0xC0C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x2C);
    MEM32(ebx + 0xC0C) = ecx;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebx + 0xC10) = 0;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_0002E980; /* jne: not equal / not zero */

loc_0002EB1E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4AA5E13E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002EB2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EB27u); } /* indirect call */
    }

loc_0002EB2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EB3D; /* je: equal / zero */

loc_0002EB2E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EB34u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0002EB34: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xC0C) = eax;

loc_0002EB3D: ;
    ecx = ebx + 0xBFC;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = ecx;
    /* nop */

loc_0002EB50: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x81) = edx;
    MEM32(esp + 0x85) = edx;
    MEM32(esp + 0x89) = edx;
    MEM32(esp + 0x8D) = edx;
    MEM32(esp + 0x91) = edx;
    MEM32(esp + 0x95) = edx;
    PUSH32(esp, edi);
    MEM32(esp + 0x9D) = edx;
    eax = esp + 0x84;
    MEM16(esp + 0xA1) = LO16(edx);
    PUSH32(esp, 0x2DEA14);
    PUSH32(esp, eax);
    MEM8(esp + 0x8C) = 0;
    MEM8(esp + 0xAB) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EBADu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002EBAD: ;
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EBBAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002EBBA: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002EBC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EBC2u); } /* indirect call */
    }

loc_0002EBC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EBD8; /* je: equal / zero */

loc_0002EBC9: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EBCFu); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0002EBCF: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

loc_0002EBD8: ;
    ecx = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0002EB50; /* jl: less (signed <) */

loc_0002EBED: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFB6D87F7u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002EBF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EBF6u); } /* indirect call */
    }

loc_0002EBF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EC0E; /* je: equal / zero */

loc_0002EBFD: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EC03u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0002EC03: ;
    MEMF(ebx + 0xBE4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002EC1E;

loc_0002EC0E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    MEMF(ebx + 0xBE4) = xmm0.f[0]; /* movss */

loc_0002EC1E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F52B4E0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002EC2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EC27u); } /* indirect call */
    }

loc_0002EC2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EC3F; /* je: equal / zero */

loc_0002EC2E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EC34u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0002EC34: ;
    MEMF(ebx + 0xBE8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002EC4F;

loc_0002EC3F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(ebx + 0xBE8) = xmm0.f[0]; /* movss */

loc_0002EC4F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EFF498u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002EC5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EC58u); } /* indirect call */
    }

loc_0002EC5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EC70; /* je: equal / zero */

loc_0002EC5F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EC65u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0002EC65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xBEC) = eax;
    goto loc_0002EC7A;

loc_0002EC70: ;
    MEM32(ebx + 0xBEC) = 0xA;

loc_0002EC7A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6F680A2D);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002EC86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EC83u); } /* indirect call */
    }

loc_0002EC86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EC9B; /* je: equal / zero */

loc_0002EC8A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EC90u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0002EC90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xBF0) = eax;
    goto loc_0002ECA5;

loc_0002EC9B: ;
    MEM32(ebx + 0xBF0) = 5;

loc_0002ECA5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA846010Fu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002ECB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002ECAEu); } /* indirect call */
    }

loc_0002ECB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002ECC6; /* je: equal / zero */

loc_0002ECB5: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002ECBBu); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0002ECBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xBF4) = eax;
    goto loc_0002ECD0;

loc_0002ECC6: ;
    MEM32(ebx + 0xBF4) = 0xA;

loc_0002ECD0: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0002ECDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002ECD4u); } /* indirect call */
    }

loc_0002ECDA: ;
    eax = MEM32(eax + 0x1C);
    esi = MEM32(0x643844);
    MEM32(esi) = eax;
    ecx = MEM32(0x6438A8);
    edx = MEM32(0x6438B4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002ECFAu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0002ECFA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0002ED08; /* jge: greater or equal (signed >=) */

loc_0002ED01: ;
    eax = 0x6438B8;
    goto loc_0002ED11;

loc_0002ED08: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0002ED11: ;
    eax = MEM32(eax);
    ecx = ebx + 0x824;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esi + 4) = eax;
    ecx = 0xFFFFF4CDu;
    MEM32(esp + 0x28) = eax;
    eax = ebx + 0xB94;
    edx = ebx + 0xB9C;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ebx + 0xB0;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x2C) = edx;
    edi = ebx + 0x938;
    MEM32(esp + 0xDC) = ecx;
    MEM32(esp + 0x7C) = 4;
    goto loc_0002ED60;

loc_0002ED5C: ;
    eax = MEM32(esp + 0x18);

loc_0002ED60: ;
    MEM8(eax) = 1;
    MEM8(eax + 4) = 0;
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
    edx = MEM32(esp + 0x18);
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
    MEM32(esp + 0x20) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    eax = MEM32(esp + 0x2C);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    MEM32(0x30EFF0) = ecx;
    ecx = MEM32(esp + 0xDC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = ecx + edx;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x1C4;
    PUSH32(esp, 0x2DEA7C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EDF2u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002EDF2: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EE39; /* je: equal / zero */

loc_0002EDFD: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0002EE07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EE01u); } /* indirect call */
    }

loc_0002EE07: ;
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x1C0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EE18u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002EE18: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x24)) >> 32) & 1);
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EE37u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0002EE37: ;
    goto loc_0002EE3B;

loc_0002EE39: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002EE3B: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ecx + -4) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_0002EF00; /* jne: not equal / not zero */

loc_0002EE4F: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEM8(ecx) = LO8(eax);

loc_0002EF00: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(eax + -52) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(eax + -48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(eax + -44) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EF47; /* je: equal / zero */

loc_0002EF2A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    goto loc_0002EF5B;

loc_0002EF47: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */

loc_0002EF5B: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C4;
    PUSH32(esp, 0x2DEA6C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EF77u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002EF77: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EFC5; /* je: equal / zero */

loc_0002EF82: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0002EF8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EF86u); } /* indirect call */
    }

loc_0002EF8C: ;
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x1C0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EF9Du); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002EF9D: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x24)) >> 32) & 1);
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EFBDu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0002EFBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002F07B; /* jne: not equal / not zero */

loc_0002EFC5: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEM8(eax) = 0;

loc_0002F07B: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    PUSH32(esp, ecx);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    edx = esp + 0x1C4;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    PUSH32(esp, 0x2DEA5C);
    PUSH32(esp, edx);
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F0B7u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0002F0B7: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F105; /* je: equal / zero */

loc_0002F0C2: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0002F0CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002F0C6u); } /* indirect call */
    }

loc_0002F0CC: ;
    ecx = esp + 0x1C0;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F0DDu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002F0DD: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x24)) >> 32) & 1);
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F0FDu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0002F0FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002F1BB; /* jne: not equal / not zero */

loc_0002F105: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEM8(ecx) = 0;

loc_0002F1BB: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x34); /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x5C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x30); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0xEC) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0xF4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x104) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x104)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x108)); /* fld float */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xF4)); /* fsub dword ptr [esp + 0xf4] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    edx = esp + 0xF0;
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, edx);
    eax = esp + 0x100;
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(esp + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEMF(esp + 0xFC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F36Bu); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0002F36B: ;
    ecx = MEM32(esp + 0xF8);
    edx = MEM32(esp + 0xFC);
    eax = MEM32(esp + 0x100);
    MEM32(esp + 0xC4) = ecx;
    MEM32(esp + 0xC8) = edx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    ecx = MEM32(esp + 0xD0);
    edx = MEM32(esp + 0xD4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xB4); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0xC4); /* addss */
    MEMF(esp + 0x170) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esp + 0x174) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    MEMF(esp + 0x178) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    MEM32(esp + 0xE0) = ecx;
    fp_push(MEMF(esp + 0xE0)); /* fld float */
    MEMF(esp + 0x17C) = xmm3.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esp + 0x180) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x184) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEM32(esp + 0xCC) = eax;
    eax = MEM32(esp + 0xD8);
    xmm1 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0xB8); /* addss */
    MEM32(esp + 0xE4) = edx;
    MEM32(esp + 0x114) = ecx;
    MEMF(esp + 0x188) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    MEMF(esp + 0x1B0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xE4)); /* fld float */
    MEM32(esp + 0xE8) = eax;
    fp_top() = fabs(fp_top()); /* fabs */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x118) = ecx;
    MEMF(esp + 0x18C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    MEM32(esp + 0x11C) = ecx;
    MEMF(esp + 0x190) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x124) = eax;
    MEM32(esp + 0x140) = eax;
    MEM32(esp + 0x144) = eax;
    MEM8(esp + 0x14C) = LO8(eax);
    MEM32(esp + 0x120) = ecx;
    MEMF(esp + 0x1B4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xE8)); /* fld float */
    MEMF(esp + 0x194) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEM32(esp + 0x150) = edx;
    MEM32(esp + 0x15C) = eax;
    ecx = esp + 0x110;
    MEM32(esp + 0x154) = edx;
    MEM32(esp + 0x160) = eax;
    MEMF(esp + 0x198) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    MEMF(esp + 0x1A4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x1BC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi + -104;
    MEM32(esp + 0x15C) = edx;
    MEM32(esp + 0x168) = eax;
    MEM32(esp + 0x114) = 0x2DDA18;
    MEMF(esp + 0x1A0) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1A4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1AC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1B0) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F5ACu); RECOMP_ABI_CALL(0x0002E190u, sub_0002E190); /* call 0x0002E190 */

loc_0002F5AC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x170)); /* movss */
    MEMF(edi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x174)); /* movss */
    MEMF(edi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x178)); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x17C)); /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x180)); /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x184)); /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x188)); /* movss */
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18C)); /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x190)); /* movss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x194)); /* movss */
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x198)); /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x19C)); /* movss */
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A0)); /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A4)); /* movss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1A8)); /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1AC)); /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1B0)); /* movss */
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1B4)); /* movss */
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1B8)); /* movss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x110) = 0x2DC928;
    MEM32(esp + 0x20) = eax;
    goto loc_0002F6D0;

    /* nop */
    /* nop */

loc_0002F6D0: ;
    ecx = MEM32(esp + eax * 4 + 0x114);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F6E4; /* je: equal / zero */

loc_0002F6DB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F6E0u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0002F6E0: ;
    eax = MEM32(esp + 0x20);

loc_0002F6E4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0002F6D0; /* jl: less (signed <) */

loc_0002F6EE: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0002F6F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002F6F2u); } /* indirect call */
    }

loc_0002F6F8: ;
    ecx = MEM32(edi + -100);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002F713; /* je: equal / zero */

loc_0002F703: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F708u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0002F708: ;
    eax = MEM32(esp + 0x24);
    MEM32(edi + -100) = 0;

loc_0002F713: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edi + -100) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002F721; /* je: equal / zero */

loc_0002F71A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F721u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_0002F721: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + -28) = 1;
    MEM32(edi + -24) = 0x19;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x7C);
    MEM32(edi + -20) = 0x13;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xC)) >> 32) & 1);
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xB0)) >> 32) & 1);
    edi = edi + 0xB0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x7C) = eax;
    if ((_fa != 0)) goto loc_0002ED5C; /* jne: not equal / not zero */

loc_0002F76A: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7808D159);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002F779u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002F776u); } /* indirect call */
    }

loc_0002F779: ;
    edi = eax;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F781u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002F781: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx + 0xBB0) = eax;
    MEM32(ebx + 0xBAC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0002F7AA; /* je: equal / zero */

loc_0002F798: ;
    ecx = MEM32(0x371DD8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F7A4u); RECOMP_ABI_CALL(0x001246E0u, sub_001246E0); /* call 0x001246E0 */

loc_0002F7A4: ;
    MEM32(ebx + 0xBAC) = eax;

loc_0002F7AA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F5C5EBC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002F7B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002F7B3u); } /* indirect call */
    }

loc_0002F7B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 0xBF8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002F7CD; /* jne: not equal / not zero */

loc_0002F7C3: ;
    MEM32(ebx + 0xBF8) = 0;

loc_0002F7CD: ;
    ecx = MEM32(0x371DBC);
    edx = MEM32(0x371DC8);
    eax = MEM32(ebx + 0xBF8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F7E8u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0002F7E8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0002F7F6; /* jge: greater or equal (signed >=) */

loc_0002F7EF: ;
    eax = 0x371DCC;
    goto loc_0002F7FF;

loc_0002F7F6: ;
    ecx = MEM32(0x371DC4);
    eax = ecx + eax * 4;

loc_0002F7FF: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F814; /* je: equal / zero */

loc_0002F805: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(edx + 0x28);
    PUSH32(esp, ecx);
    ecx = eax + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F814u); RECOMP_ABI_CALL(0x001EAB50u, sub_001EAB50); /* call 0x001EAB50 */

loc_0002F814: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4B4491A8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002F820u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002F81Du); } /* indirect call */
    }

loc_0002F820: ;
    PUSH32(esp, eax);
    MEM8(ebx + 0xCC4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F82Du); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0002F82D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB069958) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB069958 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002F83E; /* jne: not equal / not zero */

loc_0002F837: ;
    MEM8(ebx + 0xCC4) = 0;

loc_0002F83E: ;
    PUSH32(esp, esi);
    ecx = ebx + 0xC3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F84Au); RECOMP_ABI_CALL(0x0002E340u, sub_0002E340); /* call 0x0002E340 */

loc_0002F84A: ;
    ecx = 0x322940;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F854u); RECOMP_ABI_CALL(0x0002E780u, sub_0002E780); /* call 0x0002E780 */

loc_0002F854: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(ebx + 0xC14) = eax;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002F863u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002F860u); } /* indirect call */
    }

loc_0002F863: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F86Cu); RECOMP_ABI_CALL(0x0002DDE0u, sub_0002DDE0); /* call 0x0002DDE0 */

loc_0002F86C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xC28) = 3;
    MEM32(ebx + 0x414) = 0xD231E2D8u;
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
 * sub_0002F890
 * Original: 0x0002F890 - 0x0002F8D7 (71 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F890: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002F898u); RECOMP_ABI_CALL(0x0002BD50u, sub_0002BD50); /* call 0x0002BD50 */

loc_0002F898: ;
    ecx = MEM32(esi + 0xC14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0002F8A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002F8A0u); } /* indirect call */
    }

loc_0002F8A3: ;
    ecx = MEM32(esi + 0xC14);
    PUSH32(esp, ecx);
    ecx = 0x322940;
    PUSH32(esp, 0x0002F8B4u); RECOMP_ABI_CALL(0x0002E7E0u, sub_0002E7E0); /* call 0x0002E7E0 */

loc_0002F8B4: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0xC14) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0002F8C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002F8C2u); } /* indirect call */
    }

loc_0002F8C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002F8D5; /* jne: not equal / not zero */

loc_0002F8CA: ;
    PUSH32(esp, esi);
    ecx = 0x316828;
    PUSH32(esp, 0x0002F8D5u); RECOMP_ABI_CALL(0x0002E8B0u, sub_0002E8B0); /* call 0x0002E8B0 */

loc_0002F8D5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F8E0
 * Original: 0x0002F8E0 - 0x0002FD63 (1155 bytes, 281 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002F8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0002F8E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240B21);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x8C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(esp + 0x4C) = ebx;
    xmm3 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    esi = MEM32(ebp + 0x14);
    eax = esi + esi * 2;
    eax = ebx + eax * 4;
    ecx = eax + 0x7F0;
    edx = MEM32(ecx);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x820) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x820;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = MEM32(ebx + 0xBAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0002F9BA; /* jne: not equal / not zero */

loc_0002F9A2: ;
    eax = MEM32(ebx + 0xBB0);
    ecx = MEM32(0x371DD8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F9B4u); RECOMP_ABI_CALL(0x001246E0u, sub_001246E0); /* call 0x001246E0 */

loc_0002F9B4: ;
    MEM32(ebx + 0xBAC) = eax;

loc_0002F9BA: ;
    ecx = MEM32(ebx + 0xBAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F9EB; /* je: equal / zero */

loc_0002F9C4: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002F9CBu); RECOMP_ABI_CALL(0x00204DB0u, sub_00204DB0); /* call 0x00204DB0 */

loc_0002F9CB: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */

loc_0002F9EB: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x30); /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x6459E8); /* ucomiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002FA4D; /* jp: parity */

loc_0002FA25: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x6459EC); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002FA4D; /* jp: parity */

loc_0002FA32: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x6459F0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002FA4D; /* jp: parity */

loc_0002FA3F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_0002FA4D: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FA5Cu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0002FA5C: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm2; /* movaps */
    eax = esp + 0x18;
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FAA5u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_0002FAA5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = esp + 0xC8;
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FAEFu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0002FAEF: ;
    eax = MEM32(ebx + esi * 4 + 0x8C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FB1A; /* je: equal / zero */

loc_0002FAFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x84874D36u);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FB09u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0002FB09: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0xCC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FB1Au); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0002FB1A: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0);
    edx = esp + 0xCC;
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FB3Cu); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0002FB3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002FD4C; /* je: equal / zero */

loc_0002FB48: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0002FB52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002FB4Cu); } /* indirect call */
    }

loc_0002FB52: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FD2D; /* je: equal / zero */

loc_0002FB5C: ;
    ecx = MEM32(ebx + esi * 4 + 0x8B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebx + 0xBAC);
    if (CMP_EQ(_fa, _fb)) goto loc_0002FB79; /* je: equal / zero */

loc_0002FB6D: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x371DD8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FB79u); RECOMP_ABI_CALL(0x001246E0u, sub_001246E0); /* call 0x001246E0 */

loc_0002FB79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FBB2; /* je: equal / zero */

loc_0002FB7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FB90u); RECOMP_ABI_CALL(0x0002E090u, sub_0002E090); /* call 0x0002E090 */

loc_0002FB90: ;
    PUSH32(esp, 0x3F7D70A4);
    PUSH32(esp, 0x41100000);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x8E8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FBADu); RECOMP_ABI_CALL(0x00065830u, sub_00065830); /* call 0x00065830 */

loc_0002FBAD: ;
    goto loc_0002FD07;

loc_0002FBB2: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FC60; /* je: equal / zero */

loc_0002FBBD: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FBC3u); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_0002FBC3: ;
    ecx = ZX16(MEM16(eax + 0xC));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = edx;
    esi = 4;
    if (CMP_G(_fas, _fbs)) goto loc_0002FBE8; /* jg: greater (signed >) */

loc_0002FBE6: ;
    esi = ecx;

loc_0002FBE8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002FC06; /* jle: less or equal (signed <=) */

loc_0002FBEE: ;
    edx = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002FBF4: ;
    ebx = MEM32(edx);
    MEM32(esp + ecx * 4 + 0x3C) = ebx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002FBF4; /* jl: less (signed <) */

loc_0002FC02: ;
    ebx = MEM32(esp + 0x4C);

loc_0002FC06: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x54) = 5;
    MEM32(esp + 0x50) = 0x2DE9CC;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0x3F7D70A4);
    PUSH32(esp, 0x41100000);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x8E8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FC5Bu); RECOMP_ABI_CALL(0x00065830u, sub_00065830); /* call 0x00065830 */

loc_0002FC5B: ;
    goto loc_0002FD07;

loc_0002FC60: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = 0x30EFF0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FC6Fu); RECOMP_ABI_CALL(0x00011ED0u, sub_00011ED0); /* call 0x00011ED0 */

loc_0002FC6F: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    PUSH32(esp, 0x40000000);
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x2C;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FCE2u); RECOMP_ABI_CALL(0x0002DFD0u, sub_0002DFD0); /* call 0x0002DFD0 */

loc_0002FCE2: ;
    PUSH32(esp, 0x3F7D70A4);
    PUSH32(esp, 0x41100000);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x8E8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FCFFu); RECOMP_ABI_CALL(0x00065830u, sub_00065830); /* call 0x00065830 */

loc_0002FCFF: ;
    MEM32(esp + 0x50) = 0x2DE974;

loc_0002FD07: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x8E4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FD21u); RECOMP_ABI_CALL(0x0006B9B0u, sub_0006B9B0); /* call 0x0006B9B0 */

loc_0002FD21: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xF8); PUSH32(esp, 0x0002FD2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002FD27u); } /* indirect call */
    }

loc_0002FD2D: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x28);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FD3Du); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_0002FD3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx + 0xC3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002FD4Cu); RECOMP_ABI_CALL(0x0002DF20u, sub_0002DF20); /* call 0x0002DF20 */

loc_0002FD4C: ;
    ecx = MEM32(esp + 0x8D4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0002FD70
 * Original: 0x0002FD70 - 0x0002FDDB (107 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002FD70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + edi * 4 + 0xBC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FDD4; /* je: equal / zero */

loc_0002FD83: ;
    eax = MEM32(esi + edi * 4 + 0xBB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FDD4; /* je: equal / zero */

loc_0002FD91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FDD4; /* je: equal / zero */

loc_0002FD95: ;
    eax = MEM32(esi + 0xBF8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002FDA1u); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_0002FDA1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FDC3; /* je: equal / zero */

loc_0002FDA8: ;
    ecx = MEM32(esi + edi * 4 + 0xBD4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0002FDB7u); RECOMP_ABI_CALL(0x00122360u, sub_00122360); /* call 0x00122360 */

loc_0002FDB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FDC3; /* je: equal / zero */

loc_0002FDBB: ;
    edx = MEM32(eax + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x4C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FDD4; /* je: equal / zero */

loc_0002FDC3: ;
    ecx = esi;
    PUSH32(esp, 0x0002FDCAu); RECOMP_ABI_CALL(0x0002AD20u, sub_0002AD20); /* call 0x0002AD20 */

loc_0002FDCA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0002FDD4: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002FDE0
 * Original: 0x0002FDE0 - 0x0002FE95 (181 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0002FDE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x30EFF0);
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
    esi = ecx + eax;
    MEM32(0x30EFF0) = ecx;
    _cf = 0; /* logical op clears CF */
    esi = esi & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = edi;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0002FE28u); RECOMP_ABI_CALL(0x0002FD70u, sub_0002FD70); /* call 0x0002FD70 */

loc_0002FE28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002FE4A; /* jne: not equal / not zero */

loc_0002FE2C: ;
    /* nop */

loc_0002FE30: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002FE4A; /* je: equal / zero */

loc_0002FE35: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002FE3E; /* jne: not equal / not zero */

loc_0002FE3C: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002FE3E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0002FE46u); RECOMP_ABI_CALL(0x0002FD70u, sub_0002FD70); /* call 0x0002FD70 */

loc_0002FE46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FE30; /* je: equal / zero */

loc_0002FE4A: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0002FE52u); RECOMP_ABI_CALL(0x0002FD70u, sub_0002FD70); /* call 0x0002FD70 */

loc_0002FE52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002FE8F; /* jne: not equal / not zero */

loc_0002FE56: ;
    ecx = edi;
    PUSH32(esp, 0x0002FE5Du); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_0002FE5D: ;
    MEM32(edi + esi * 4 + 0xBFC) = MEM32(edi + esi * 4 + 0xBFC) - 1;
    _fa = (uint32_t)(MEM32(edi + esi * 4 + 0xBFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0xC0C) = MEM32(edi + 0xC0C) - 1;
    _fa = (uint32_t)(MEM32(edi + 0xC0C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(edi + esi * 4 + 0xBD4);
    ecx = MEM32(edi + 0xBF8);
    edx = MEM32(edi + esi * 4 + 0xBB4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0002FE89u); RECOMP_ABI_CALL(0x0002F8E0u, sub_0002F8E0); /* call 0x0002F8E0 */

loc_0002FE89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002FE8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002FEA0
 * Original: 0x0002FEA0 - 0x0002FFC7 (295 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FEA0(void)
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

loc_0002FEA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0002FF7A; /* je: equal / zero */

loc_0002FEB4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002FEE0; /* je: equal / zero */

loc_0002FEB7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002FFC2; /* jne: not equal / not zero */

loc_0002FEBE: ;
    PUSH32(esp, 0x0002FEC3u); RECOMP_ABI_CALL(0x0002FDE0u, sub_0002FDE0); /* call 0x0002FDE0 */

loc_0002FEC3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FFC2; /* je: equal / zero */

loc_0002FECB: ;
    MEM32(esi + 0xC24) = MEM32(esi + 0xC24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC28) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002FEE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xC1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002FF5F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xC1C)) */

loc_0002FEEC: ;
    _fa = (uint32_t)(MEM32(esi + 0xC0C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC0C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FF4B; /* je: equal / zero */

loc_0002FEF4: ;
    eax = MEM32(esi + 0xC24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xBEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xBEC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002FF3B; /* jge: greater or equal (signed >=) */

loc_0002FF02: ;
    PUSH32(esp, 0x0002FF07u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0002FF07: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    ecx = MEM32(esi + 0xCBC);
    eax = MEM32(esi + 0xC2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC3E4)); /* fadd dword ptr [0x2dc3e4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xBE4)); /* fmul dword ptr [esi + 0xbe4] */
    MEMF(esi + 0xC1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0002FF5F; /* jge: greater or equal (signed >=) */

loc_0002FF2F: ;
    MEM32(esi + 0xC28) = 2;
    goto loc_0002FF5F;

loc_0002FF3B: ;
    _fa = (uint32_t)(MEM8(esi + 0xC10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xC10), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FF53; /* je: equal / zero */

loc_0002FF43: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0002FF4Bu); RECOMP_ABI_CALL(0x0002DDE0u, sub_0002DDE0); /* call 0x0002DDE0 */

loc_0002FF4B: ;
    MEM8(esi + 0xC10) = LO8(ebx);
    goto loc_0002FF5F;

loc_0002FF53: ;
    MEM32(esi + 0xC24) = ebx;
    MEM32(esi + 0xC28) = ebx;

loc_0002FF5F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esi + 0xC1C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002FF7A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xC20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002FFAC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xC20)) */

loc_0002FF86: ;
    edx = MEM32(esi + 0xBE8);
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEM32(esi + 0xC20) = edx;
    MEMF(esi + 0xC1C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xC28) = 1;

loc_0002FFAC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esi + 0xC20) = xmm0.f[0]; /* movss */

loc_0002FFC2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002FFD0
 * Original: 0x0002FFD0 - 0x00030065 (149 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FFD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002FFD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240B38);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x0002FFF3u); RECOMP_ABI_CALL(0x0002BA80u, sub_0002BA80); /* call 0x0002BA80 */

loc_0002FFF3: ;
    PUSH32(esp, 0x18AD0);
    PUSH32(esp, 0x2E490);
    PUSH32(esp, 4);
    PUSH32(esp, 0xB0);
    eax = esi + 0x8D0;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edi;
    MEM32(esi) = 0x2DEAE0;
    PUSH32(esp, 0x0003001Cu); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_0003001C: ;
    ecx = esi + 0xC3C;
    MEM32(esi + 0xC30) = edi;
    MEM32(esi + 0xC34) = edi;
    MEM32(esi + 0xC38) = edi;
    PUSH32(esp, 0x00030039u); RECOMP_ABI_CALL(0x0002DF00u, sub_0002DF00); /* call 0x0002DF00 */

loc_00030039: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0xC14) = edi;
    MEM32(esi + 0xBAC) = edi;
    MEM32(esi + 0xBB0) = edi;
    MEM8(esi + 0xCC4) = 1;
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
 * sub_00030070
 * Original: 0x00030070 - 0x00030076 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030070(void)
{

loc_00030070: ;
    eax = 0xCD0;
    esp += 4; return; /* ret */

}

/**
 * sub_00030080
 * Original: 0x00030080 - 0x00030087 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030080(void)
{

loc_00030080: ;
    eax = MEM32(ecx + 0xC14);
    esp += 4; return; /* ret */

}

/**
 * sub_00030090
 * Original: 0x00030090 - 0x00030096 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030090(void)
{

loc_00030090: ;
    eax = MEM32(0x30C1F0);
    esp += 4; return; /* ret */

}

/**
 * sub_000300A0
 * Original: 0x000300A0 - 0x000300BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000300A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000300A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000300A8u); RECOMP_ABI_CALL(0x000300C0u, sub_000300C0); /* call 0x000300C0 */

loc_000300A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000300B8; /* je: equal / zero */

loc_000300AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000300B5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000300B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000300B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000300C0
 * Original: 0x000300C0 - 0x0003011C (92 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000300C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000300C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240B38);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x18AD0);
    PUSH32(esp, 4);
    PUSH32(esp, 0xB0);
    eax = esi + 0x8D0;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000300FDu); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_000300FD: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0003010Cu); RECOMP_ABI_CALL(0x00025360u, sub_00025360); /* call 0x00025360 */

loc_0003010C: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00030120
 * Original: 0x00030120 - 0x0003028C (364 bytes, 107 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030120: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240B60);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 8) = 0x2DD9FC;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0xC) = 0x2DEC98;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x00030163u); RECOMP_ABI_CALL(0x0002AD60u, sub_0002AD60); /* call 0x0002AD60 */

loc_00030163: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030197; /* je: equal / zero */

loc_00030167: ;
    ecx = MEM32(esi + 0x300);
    eax = esi + 0x2F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000301AC; /* jne: not equal / not zero */

loc_00030177: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00030181u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003017Bu); } /* indirect call */
    }

loc_00030181: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003018E; /* je: equal / zero */

loc_00030185: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0003018Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003018Bu); } /* indirect call */
    }

loc_0003018E: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00030197u); RECOMP_ABI_CALL(0x0002DDE0u, sub_0002DDE0); /* call 0x0002DDE0 */

loc_00030197: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000301AC: ;
    SET_LO8(eax, MEM8(esi + 0xCC4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000301D1; /* je: equal / zero */

loc_000301B6: ;
    eax = MEM32(esi + 0xC18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000301D1; /* je: equal / zero */

loc_000301C0: ;
    _fa = (uint32_t)(MEM32(esi + 0xC28)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC28), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000301D1; /* je: equal / zero */

loc_000301C9: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000301D1u); RECOMP_ABI_CALL(0x0002FEA0u, sub_0002FEA0); /* call 0x0002FEA0 */

loc_000301D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0xB9C;
    /* nop */

loc_000301E0: ;
    SET_LO8(eax, MEM8(esi + edi + 0xB94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003024A; /* je: equal / zero */

loc_000301EB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003023D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00030203: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0003020Bu); RECOMP_ABI_CALL(0x0002E220u, sub_0002E220); /* call 0x0002E220 */

loc_0003020B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(edi + esi + 0xB98) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00030229; /* je: equal / zero */

loc_00030216: ;
    PUSH32(esp, 0x0003021Bu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0003021B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DBED0)); /* fadd dword ptr [0x2dbed0] */
    goto loc_0003023A;

loc_00030229: ;
    PUSH32(esp, 0x0003022Eu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0003022E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */

loc_0003023A: ;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003023D: ;
    SET_LO8(eax, MEM8(edi + esi + 0xB98));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003024A; /* je: equal / zero */

loc_00030248: ;
    SET_LO8(ebx, 1);

loc_0003024A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000301E0; /* jl: less (signed <) */

loc_00030253: ;
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00030262; /* je: equal / zero */

loc_0003025B: ;
    PUSH32(esp, 0x00030260u); RECOMP_ABI_CALL(0x0002B1E0u, sub_0002B1E0); /* call 0x0002B1E0 */

loc_00030260: ;
    goto loc_00030267;

loc_00030262: ;
    PUSH32(esp, 0x00030267u); RECOMP_ABI_CALL(0x0002B210u, sub_0002B210); /* call 0x0002B210 */

loc_00030267: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = esi + 0xC3C;
    PUSH32(esp, 0x00030277u); RECOMP_ABI_CALL(0x0002E680u, sub_0002E680); /* call 0x0002E680 */

loc_00030277: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00030122
 * Original: 0x00030122 - 0x0003028C (362 bytes, 106 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030122(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030122: ;
    PUSH32(esp, 0x240B60);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 8) = 0x2DD9FC;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0xC) = 0x2DEC98;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x00030163u); RECOMP_ABI_CALL(0x0002AD60u, sub_0002AD60); /* call 0x0002AD60 */

loc_00030163: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030197; /* je: equal / zero */

loc_00030167: ;
    ecx = MEM32(esi + 0x300);
    eax = esi + 0x2F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000301AC; /* jne: not equal / not zero */

loc_00030177: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00030181u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003017Bu); } /* indirect call */
    }

loc_00030181: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003018E; /* je: equal / zero */

loc_00030185: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0003018Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003018Bu); } /* indirect call */
    }

loc_0003018E: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00030197u); RECOMP_ABI_CALL(0x0002DDE0u, sub_0002DDE0); /* call 0x0002DDE0 */

loc_00030197: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000301AC: ;
    SET_LO8(eax, MEM8(esi + 0xCC4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000301D1; /* je: equal / zero */

loc_000301B6: ;
    eax = MEM32(esi + 0xC18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000301D1; /* je: equal / zero */

loc_000301C0: ;
    _fa = (uint32_t)(MEM32(esi + 0xC28)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC28), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000301D1; /* je: equal / zero */

loc_000301C9: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000301D1u); RECOMP_ABI_CALL(0x0002FEA0u, sub_0002FEA0); /* call 0x0002FEA0 */

loc_000301D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0xB9C;
    /* nop */

loc_000301E0: ;
    SET_LO8(eax, MEM8(esi + edi + 0xB94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003024A; /* je: equal / zero */

loc_000301EB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003023D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00030203: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0003020Bu); RECOMP_ABI_CALL(0x0002E220u, sub_0002E220); /* call 0x0002E220 */

loc_0003020B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(edi + esi + 0xB98) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00030229; /* je: equal / zero */

loc_00030216: ;
    PUSH32(esp, 0x0003021Bu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0003021B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DBED0)); /* fadd dword ptr [0x2dbed0] */
    goto loc_0003023A;

loc_00030229: ;
    PUSH32(esp, 0x0003022Eu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0003022E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */

loc_0003023A: ;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003023D: ;
    SET_LO8(eax, MEM8(edi + esi + 0xB98));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003024A; /* je: equal / zero */

loc_00030248: ;
    SET_LO8(ebx, 1);

loc_0003024A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000301E0; /* jl: less (signed <) */

loc_00030253: ;
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00030262; /* je: equal / zero */

loc_0003025B: ;
    PUSH32(esp, 0x00030260u); RECOMP_ABI_CALL(0x0002B1E0u, sub_0002B1E0); /* call 0x0002B1E0 */

loc_00030260: ;
    goto loc_00030267;

loc_00030262: ;
    PUSH32(esp, 0x00030267u); RECOMP_ABI_CALL(0x0002B210u, sub_0002B210); /* call 0x0002B210 */

loc_00030267: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = esi + 0xC3C;
    PUSH32(esp, 0x00030277u); RECOMP_ABI_CALL(0x0002E680u, sub_0002E680); /* call 0x0002E680 */

loc_00030277: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00030138
 * Original: 0x00030138 - 0x0003028C (340 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030138(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030138: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 8) = 0x2DD9FC;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0xC) = 0x2DEC98;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x00030163u); RECOMP_ABI_CALL(0x0002AD60u, sub_0002AD60); /* call 0x0002AD60 */

loc_00030163: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030197; /* je: equal / zero */

loc_00030167: ;
    ecx = MEM32(esi + 0x300);
    eax = esi + 0x2F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000301AC; /* jne: not equal / not zero */

loc_00030177: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00030181u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003017Bu); } /* indirect call */
    }

loc_00030181: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003018E; /* je: equal / zero */

loc_00030185: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0003018Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003018Bu); } /* indirect call */
    }

loc_0003018E: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00030197u); RECOMP_ABI_CALL(0x0002DDE0u, sub_0002DDE0); /* call 0x0002DDE0 */

loc_00030197: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000301AC: ;
    SET_LO8(eax, MEM8(esi + 0xCC4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000301D1; /* je: equal / zero */

loc_000301B6: ;
    eax = MEM32(esi + 0xC18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000301D1; /* je: equal / zero */

loc_000301C0: ;
    _fa = (uint32_t)(MEM32(esi + 0xC28)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC28), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000301D1; /* je: equal / zero */

loc_000301C9: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000301D1u); RECOMP_ABI_CALL(0x0002FEA0u, sub_0002FEA0); /* call 0x0002FEA0 */

loc_000301D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0xB9C;
    /* nop */

loc_000301E0: ;
    SET_LO8(eax, MEM8(esi + edi + 0xB94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003024A; /* je: equal / zero */

loc_000301EB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003023D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00030203: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0003020Bu); RECOMP_ABI_CALL(0x0002E220u, sub_0002E220); /* call 0x0002E220 */

loc_0003020B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(edi + esi + 0xB98) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00030229; /* je: equal / zero */

loc_00030216: ;
    PUSH32(esp, 0x0003021Bu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0003021B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DBED0)); /* fadd dword ptr [0x2dbed0] */
    goto loc_0003023A;

loc_00030229: ;
    PUSH32(esp, 0x0003022Eu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0003022E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */

loc_0003023A: ;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003023D: ;
    SET_LO8(eax, MEM8(edi + esi + 0xB98));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003024A; /* je: equal / zero */

loc_00030248: ;
    SET_LO8(ebx, 1);

loc_0003024A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000301E0; /* jl: less (signed <) */

loc_00030253: ;
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00030262; /* je: equal / zero */

loc_0003025B: ;
    PUSH32(esp, 0x00030260u); RECOMP_ABI_CALL(0x0002B1E0u, sub_0002B1E0); /* call 0x0002B1E0 */

loc_00030260: ;
    goto loc_00030267;

loc_00030262: ;
    PUSH32(esp, 0x00030267u); RECOMP_ABI_CALL(0x0002B210u, sub_0002B210); /* call 0x0002B210 */

loc_00030267: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = esi + 0xC3C;
    PUSH32(esp, 0x00030277u); RECOMP_ABI_CALL(0x0002E680u, sub_0002E680); /* call 0x0002E680 */

loc_00030277: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00030290
 * Original: 0x00030290 - 0x000302EF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xCD0);
    PUSH32(esp, 0x000302A4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000302A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000302B4; /* je: equal / zero */

loc_000302AB: ;
    ecx = eax;
    PUSH32(esp, 0x000302B2u); RECOMP_ABI_CALL(0x0002FFD0u, sub_0002FFD0); /* call 0x0002FFD0 */

loc_000302B2: ;
    goto loc_000302B6;

loc_000302B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000302B6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0xC30;
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
    _fb = (uint32_t)(0xCD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xCD0;
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
 * sub_000302F0
 * Original: 0x000302F0 - 0x00030311 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000302F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000302F0: ;
    PUSH32(esp, esi);
    ecx = 0x316828;
    PUSH32(esp, 0x000302FBu); RECOMP_ABI_CALL(0x00030290u, sub_00030290); /* call 0x00030290 */

loc_000302FB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003030D; /* je: equal / zero */

loc_00030301: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0003030Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003030Au); } /* indirect call */
    }

loc_0003030D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00030320
 * Original: 0x00030320 - 0x0003037F (95 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030320: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240BA6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2DECA8;
    ecx = esi + 0x254;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x00030356u); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_00030356: ;
    ecx = esi;
    MEM32(esi + 0x180) = 0x2DD8F0;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0003036Fu); RECOMP_ABI_CALL(0x00011070u, sub_00011070); /* call 0x00011070 */

loc_0003036F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00030380
 * Original: 0x00030380 - 0x00030386 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030380(void)
{

loc_00030380: ;
    eax = 0x310;
    esp += 4; return; /* ret */

}

/**
 * sub_00030390
 * Original: 0x00030390 - 0x00030397 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030390(void)
{

loc_00030390: ;
    eax = MEM32(ecx + 0x250);
    esp += 4; return; /* ret */

}

/**
 * sub_000303A0
 * Original: 0x000303A0 - 0x000303A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000303A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000303A0: ;
    fp_push(MEMF(0x2DC8D4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000303B0
 * Original: 0x000303B0 - 0x000303B7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000303B0(void)
{

loc_000303B0: ;
    eax = ecx + 0x254;
    esp += 4; return; /* ret */

}

/**
 * sub_000303C0
 * Original: 0x000303C0 - 0x000303C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000303C0(void)
{

loc_000303C0: ;
    eax = MEM32(0x30C200);
    esp += 4; return; /* ret */

}

/**
 * sub_000303D0
 * Original: 0x000303D0 - 0x000303D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000303D0(void)
{

loc_000303D0: ;
    eax = 0x16;
    esp += 4; return; /* ret */

}

/**
 * sub_000303E0
 * Original: 0x000303E0 - 0x000303E7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000303E0(void)
{

loc_000303E0: ;
    eax = MEM32(ecx + 0x270);
    esp += 4; return; /* ret */

}

/**
 * sub_000303F0
 * Original: 0x000303F0 - 0x00030430 (64 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000303F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000303F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240B78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    MEM32(esp) = 0x2DEE5C;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0003041Fu); RECOMP_ABI_CALL(0x000140D0u, sub_000140D0); /* call 0x000140D0 */

loc_0003041F: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030411
 * Original: 0x00030411 - 0x00030430 (31 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030411(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030411: ;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0003041Fu); RECOMP_ABI_CALL(0x000140D0u, sub_000140D0); /* call 0x000140D0 */

loc_0003041F: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030430
 * Original: 0x00030430 - 0x000304AF (127 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030430: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240BA6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00030454u); RECOMP_ABI_CALL(0x000124C0u, sub_000124C0); /* call 0x000124C0 */

loc_00030454: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2DECA8;
    edi = esi + 0x180;
    ecx = edi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x174) = ebx;
    MEM32(esi + 0x178) = ebx;
    MEM32(esi + 0x17C) = ebx;
    PUSH32(esp, 0x0003047Fu); RECOMP_ABI_CALL(0x00203740u, sub_00203740); /* call 0x00203740 */

loc_0003047F: ;
    MEM32(edi) = 0x2DD908;
    ecx = esi + 0x254;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x00030495u); RECOMP_ABI_CALL(0x00137BC0u, sub_00137BC0); /* call 0x00137BC0 */

loc_00030495: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0xA0) = ebx;
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
 * sub_000304B0
 * Original: 0x000304B0 - 0x000304CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000304B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000304B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000304B8u); RECOMP_ABI_CALL(0x00030320u, sub_00030320); /* call 0x00030320 */

loc_000304B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000304C8; /* je: equal / zero */

loc_000304BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000304C5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000304C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000304C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000304D0
 * Original: 0x000304D0 - 0x0003053C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000304D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000304D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000304D8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000304D8: ;
    MEM32(esi) = 0x2DEE68;
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
    PUSH32(esp, 0x00030535u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00030535: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00030540
 * Original: 0x00030540 - 0x0003054C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030540: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00030550(); return; /* tail jmp 0x00030550 */

}

/**
 * sub_00030550
 * Original: 0x00030550 - 0x000305BC (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000305B7; /* je: equal / zero */

loc_00030562: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0003059A; /* je: equal / zero */

loc_00030594: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0003059Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030598u); } /* indirect call */
    }

loc_0003059A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFCF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFCF0u;
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
    if (CMP_NE(_fa, _fb)) goto loc_00030562; /* jne: not equal / not zero */

loc_000305B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000305C0
 * Original: 0x000305C0 - 0x0003061F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000305C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000305C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x310);
    PUSH32(esp, 0x000305D4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000305D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000305E4; /* je: equal / zero */

loc_000305DB: ;
    ecx = eax;
    PUSH32(esp, 0x000305E2u); RECOMP_ABI_CALL(0x00030430u, sub_00030430); /* call 0x00030430 */

loc_000305E2: ;
    goto loc_000305E6;

loc_000305E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000305E6: ;
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
    _fb = (uint32_t)(0x310) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x310;
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
 * sub_00030620
 * Original: 0x00030620 - 0x00030800 (480 bytes, 162 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00030620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00030637u); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_00030637: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00030643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030640u); } /* indirect call */
    }

loc_00030643: ;
    edx = MEM32(esi + 0x3C);
    ebx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esi + 0x170) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00030655u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030652u); } /* indirect call */
    }

loc_00030655: ;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x170);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003067Cu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0003067C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003068A; /* jge: greater or equal (signed >=) */

loc_00030683: ;
    eax = 0x6438B8;
    goto loc_00030693;

loc_0003068A: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_00030693: ;
    eax = MEM32(eax);
    edx = MEM32(esp + 0x10);
    MEM32(edx + 4) = eax;
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 0x14);
    eax = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x2C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000306D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000306D0u); } /* indirect call */
    }

loc_000306D3: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000306DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000306DCu); } /* indirect call */
    }

loc_000306DF: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x000306F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000306EAu); } /* indirect call */
    }

loc_000306F0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000306F7u); RECOMP_ABI_CALL(0x00138B20u, sub_00138B20); /* call 0x00138B20 */

loc_000306F7: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(eax + 0x1B0); PUSH32(esp, 0x0003070Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030704u); } /* indirect call */
    }

loc_0003070A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00030711u); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_00030711: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0003071Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030718u); } /* indirect call */
    }

loc_0003071B: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00030727u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030724u); } /* indirect call */
    }

loc_00030727: ;
    MEM32(esi + 0x250) = eax;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003073Bu); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_0003073B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x88);
    eax = MEM32(esi + 0x180);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = esi + 0x210;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0);
    eax = esi + 0xB0;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0003076Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030769u); } /* indirect call */
    }

loc_0003076F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ebx = esi + 0x180;
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00030784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030781u); } /* indirect call */
    }

loc_00030784: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003078Eu); RECOMP_ABI_CALL(0x000B35F0u, sub_000B35F0); /* call 0x000B35F0 */

loc_0003078E: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00030795u); RECOMP_ABI_CALL(0x00203920u, sub_00203920); /* call 0x00203920 */

loc_00030795: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E1B1EC5);
    ecx = edi;
    ebx = 6;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000307A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000307A3u); } /* indirect call */
    }

loc_000307A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000307B5; /* je: equal / zero */

loc_000307AA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000307B0u); RECOMP_ABI_CALL(0x0012B5F0u, sub_0012B5F0); /* call 0x0012B5F0 */

loc_000307B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_000307B5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000307BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000307B9u); } /* indirect call */
    }

loc_000307BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000307D3; /* je: equal / zero */

loc_000307C3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000307CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000307C7u); } /* indirect call */
    }

loc_000307CD: ;
    MEM32(eax + 0xB4) = ebx;

loc_000307D3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x148); PUSH32(esp, 0x000307DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000307D7u); } /* indirect call */
    }

loc_000307DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_000307F2; /* je: equal / zero */

loc_000307E4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000307E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000307E6u); } /* indirect call */
    }

loc_000307E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000307F2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000307F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000307F4u); } /* indirect call */
    }

loc_000307F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030800
 * Original: 0x00030800 - 0x0003085C (92 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030800: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00030809u); RECOMP_ABI_CALL(0x00015270u, sub_00015270); /* call 0x00015270 */

loc_00030809: ;
    edi = esi + 0x180;
    ecx = edi;
    PUSH32(esp, 0x00030816u); RECOMP_ABI_CALL(0x002038C0u, sub_002038C0); /* call 0x002038C0 */

loc_00030816: ;
    ecx = edi;
    PUSH32(esp, 0x0003081Du); RECOMP_ABI_CALL(0x000B2A10u, sub_000B2A10); /* call 0x000B2A10 */

loc_0003081D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00030824u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030821u); } /* indirect call */
    }

loc_00030824: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x0003082Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030828u); } /* indirect call */
    }

loc_0003082E: ;
    ecx = eax;
    PUSH32(esp, 0x00030835u); RECOMP_ABI_CALL(0x00137C90u, sub_00137C90); /* call 0x00137C90 */

loc_00030835: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030845; /* je: equal / zero */

loc_0003083C: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00030845u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030842u); } /* indirect call */
    }

loc_00030845: ;
    edx = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0003084Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003084Bu); } /* indirect call */
    }

loc_0003084E: ;
    PUSH32(esp, esi);
    ecx = 0x3168B0;
    PUSH32(esp, 0x00030859u); RECOMP_ABI_CALL(0x000228D0u, sub_000228D0); /* call 0x000228D0 */

loc_00030859: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00030801
 * Original: 0x00030801 - 0x00030860 (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030801(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030801: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00030809u); RECOMP_ABI_CALL(0x00015270u, sub_00015270); /* call 0x00015270 */

loc_00030809: ;
    edi = esi + 0x180;
    ecx = edi;
    PUSH32(esp, 0x00030816u); RECOMP_ABI_CALL(0x002038C0u, sub_002038C0); /* call 0x002038C0 */

loc_00030816: ;
    ecx = edi;
    PUSH32(esp, 0x0003081Du); RECOMP_ABI_CALL(0x000B2A10u, sub_000B2A10); /* call 0x000B2A10 */

loc_0003081D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00030824u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030821u); } /* indirect call */
    }

loc_00030824: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x0003082Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030828u); } /* indirect call */
    }

loc_0003082E: ;
    ecx = eax;
    PUSH32(esp, 0x00030835u); RECOMP_ABI_CALL(0x00137C90u, sub_00137C90); /* call 0x00137C90 */

loc_00030835: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030845; /* je: equal / zero */

loc_0003083C: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00030845u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030842u); } /* indirect call */
    }

loc_00030845: ;
    edx = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0003084Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003084Bu); } /* indirect call */
    }

loc_0003084E: ;
    PUSH32(esp, esi);
    ecx = 0x3168B0;
    PUSH32(esp, 0x00030859u); RECOMP_ABI_CALL(0x000228D0u, sub_000228D0); /* call 0x000228D0 */

loc_00030859: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00030860
 * Original: 0x00030860 - 0x00030881 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030860: ;
    PUSH32(esp, esi);
    ecx = 0x3168B0;
    PUSH32(esp, 0x0003086Bu); RECOMP_ABI_CALL(0x000305C0u, sub_000305C0); /* call 0x000305C0 */

loc_0003086B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003087D; /* je: equal / zero */

loc_00030871: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0003087Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003087Au); } /* indirect call */
    }

loc_0003087D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00030890
 * Original: 0x00030890 - 0x00030895 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030890: ;
    g_seh_ebp = ebp; sub_001F7D00(); return; /* tail jmp 0x001F7D00 */

}

/**
 * sub_000308A0
 * Original: 0x000308A0 - 0x000308B2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000308A0(void)
{

loc_000308A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000308A8u); RECOMP_ABI_CALL(0x001F7350u, sub_001F7350); /* call 0x001F7350 */

loc_000308A8: ;
    MEM32(esi) = 0x2DEE80;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000308C0
 * Original: 0x000308C0 - 0x000308DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000308C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000308C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000308C8u); RECOMP_ABI_CALL(0x00030890u, sub_00030890); /* call 0x00030890 */

loc_000308C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000308D8; /* je: equal / zero */

loc_000308CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000308D5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000308D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000308D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000308E0
 * Original: 0x000308E0 - 0x00030925 (69 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000308E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000308E0: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(0x30C218));
    PUSH32(esp, esi);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = 0;
    esi = ZX8(MEM8(0x30C219));
    edx = MEM32(0x30C214);
    ecx = ZX8(LO8(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | MEM32(0x30C210);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    esi = 0xF;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = esi;
    MEM8(0x30C219) = MEM8(0x30C219) + 1;
    _fa = (uint32_t)(MEM8(0x30C219)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00030930
 * Original: 0x00030930 - 0x0003099C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00030938u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00030938: ;
    MEM32(esi) = 0x2DEE94;
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
    PUSH32(esp, 0x00030995u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00030995: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000309A0
 * Original: 0x000309A0 - 0x00030A0C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000309A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000309A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000309A8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000309A8: ;
    MEM32(esi) = 0x2DEEA8;
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
    PUSH32(esp, 0x00030A05u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00030A05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00030A10
 * Original: 0x00030A10 - 0x00030A1C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030A10: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00030A20(); return; /* tail jmp 0x00030A20 */

}

/**
 * sub_00030A20
 * Original: 0x00030A20 - 0x00030A8C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030A20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030A87; /* je: equal / zero */

loc_00030A32: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x1F0);
    edx = MEM32(ecx + 0x1F4);
    MEM32(ecx + 0x1F8) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x1F4);
    edx = MEM32(ecx + 0x1F0);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00030A6A; /* je: equal / zero */

loc_00030A64: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00030A6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030A68u); } /* indirect call */
    }

loc_00030A6A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFDF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFDF0u;
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
    if (CMP_NE(_fa, _fb)) goto loc_00030A32; /* jne: not equal / not zero */

loc_00030A87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030A90
 * Original: 0x00030A90 - 0x00030A9C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030A90: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00030AA0(); return; /* tail jmp 0x00030AA0 */

}

/**
 * sub_00030AA0
 * Original: 0x00030AA0 - 0x00030B0C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030AA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030B07; /* je: equal / zero */

loc_00030AB2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x1F0);
    edx = MEM32(ecx + 0x1F4);
    MEM32(ecx + 0x1F8) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x1F4);
    edx = MEM32(ecx + 0x1F0);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00030AEA; /* je: equal / zero */

loc_00030AE4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00030AEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030AE8u); } /* indirect call */
    }

loc_00030AEA: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00030AB2; /* jne: not equal / not zero */

loc_00030B07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030B10
 * Original: 0x00030B10 - 0x00030B1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030B10(void)
{

loc_00030B10: ;
    MEM32(0x30C23C) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00030B20
 * Original: 0x00030B20 - 0x00030B45 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030B20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F551AEC);
    ecx = esi;
    PUSH32(esp, 0x00030B33u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00030B33: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030B43; /* je: equal / zero */

loc_00030B37: ;
    ecx = esi;
    PUSH32(esp, 0x00030B3Eu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_00030B3E: ;
    MEM32(0x30C23C) = eax;

loc_00030B43: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00030B50
 * Original: 0x00030B50 - 0x00030B57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030B50(void)
{

loc_00030B50: ;
    eax = MEM32(ecx + 0x18C);
    esp += 4; return; /* ret */

}

/**
 * sub_00030B60
 * Original: 0x00030B60 - 0x00030B6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030B60(void)
{

loc_00030B60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030B70
 * Original: 0x00030B70 - 0x00030B79 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030B70: ;
    SET_LO8(eax, MEM8(ecx + 0x190));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00030B80
 * Original: 0x00030B80 - 0x00030B9D (29 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030B80: ;
    SET_LO8(eax, MEM8(ecx + 0x190));
    SET_LO8(eax, LO8(eax) ^ MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 0x190));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x190) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030BA0
 * Original: 0x00030BA0 - 0x00030BBA (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00030BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030BA0: ;
    edx = MEM32(ecx + 0x234);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = 1;
    if (CMP_G(_fas, _fbs)) goto loc_00030BB9; /* jg: greater (signed >) */

loc_00030BAF: ;
    _fa = (uint32_t)(MEM8(ecx + 0x238)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x238), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030BB9; /* je: equal / zero */

loc_00030BB7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00030BB9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030BC0
 * Original: 0x00030BC0 - 0x00030CA2 (226 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030BC0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9EBE984Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x9EBE984Eu (32-bit) */
    eax = 0xF;
    if (CMP_A(_fa, _fb)) goto loc_00030C41; /* ja: above (unsigned >) */

loc_00030BD1: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00030C3B; /* je: equal / zero */

loc_00030BD3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDF6D3D5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xDF6D3D5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00030C11; /* ja: above (unsigned >) */

loc_00030BDB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00030C0B; /* je: equal / zero */

loc_00030BDD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C07250) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4C07250 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030C05; /* je: equal / zero */

loc_00030BE5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9634B09) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x9634B09 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030BFF; /* je: equal / zero */

loc_00030BED: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB9A971) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xBB9A971 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030CA1; /* jne: not equal / not zero */

loc_00030BF9: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_00030BFF: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00030C05: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_00030C0B: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00030C11: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36EB739F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x36EB739F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030C35; /* je: equal / zero */

loc_00030C19: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4936726F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4936726F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030C2F; /* je: equal / zero */

loc_00030C21: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8BA18507u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8BA18507u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030CA1; /* jne: not equal / not zero */

loc_00030C29: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_00030C2F: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_00030C35: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00030C3B: ;
    eax = 0xE;
    esp += 4; return; /* ret */

loc_00030C41: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFAA89EFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xBFAA89EFu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00030C78; /* ja: above (unsigned >) */

loc_00030C49: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00030C75; /* je: equal / zero */

loc_00030C4B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4EF6883u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA4EF6883u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030C6F; /* je: equal / zero */

loc_00030C53: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA610DAA9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA610DAA9u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030C69; /* je: equal / zero */

loc_00030C5B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB57FA993u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB57FA993u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030CA1; /* jne: not equal / not zero */

loc_00030C63: ;
    eax = 0xB;
    esp += 4; return; /* ret */

loc_00030C69: ;
    eax = 0xD;
    esp += 4; return; /* ret */

loc_00030C6F: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_00030C75: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00030C78: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0CA2371u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0CA2371u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030C9C; /* je: equal / zero */

loc_00030C80: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD988D8FDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD988D8FDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030C96; /* je: equal / zero */

loc_00030C88: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE73AC2AEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE73AC2AEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030CA1; /* jne: not equal / not zero */

loc_00030C90: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_00030C96: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_00030C9C: ;
    eax = 0xA;

loc_00030CA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030CB0
 * Original: 0x00030CB0 - 0x00030CE0 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030CB0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x413BE7A3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x413BE7A3 (32-bit) */
    eax = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_00030CDA; /* je: equal / zero */

loc_00030CC1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9DAC718Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x9DAC718Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030CD4; /* je: equal / zero */

loc_00030CC9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9EBE984Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x9EBE984Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030CDF; /* jne: not equal / not zero */

loc_00030CD1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00030CD4: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00030CDA: ;
    eax = 1;

loc_00030CDF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030CE0
 * Original: 0x00030CE0 - 0x00030D13 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030CE0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C29F04D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2C29F04D (32-bit) */
    eax = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_00030D0D; /* je: equal / zero */

loc_00030CF1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33324A17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x33324A17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030D07; /* je: equal / zero */

loc_00030CF9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9CA1C77Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x9CA1C77Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030D12; /* jne: not equal / not zero */

loc_00030D01: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00030D07: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00030D0D: ;
    eax = 3;

loc_00030D12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030D12
 * Original: 0x00030D12 - 0x00030D13 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030D12(void)
{

loc_00030D12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030D20
 * Original: 0x00030D20 - 0x00030D32 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030D20: ;
    SET_LO8(eax, MEM8(ecx + 0x238));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 0x238) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00030D40
 * Original: 0x00030D40 - 0x00030D59 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030D40: ;
    SET_LO8(eax, MEM8(ecx + 0x274));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030D56; /* je: equal / zero */

loc_00030D4A: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1A0), 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030D56; /* je: equal / zero */

loc_00030D53: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00030D56: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00030D60
 * Original: 0x00030D60 - 0x00030E0E (174 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00030D60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00030D6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030D68u); } /* indirect call */
    }

loc_00030D6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030D79; /* jne: not equal / not zero */

loc_00030D72: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00030D79: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00030D81u); RECOMP_ABI_CALL(0x00030B50u, sub_00030B50); /* call 0x00030B50 */

loc_00030D81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9176764u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9176764u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030E04; /* jne: not equal / not zero */

loc_00030D88: ;
    esi = MEM32(esp + 0x24);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00030D96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030D90u); } /* indirect call */
    }

loc_00030D96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030E04; /* je: equal / zero */

loc_00030D9A: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00030DA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030DA3u); } /* indirect call */
    }

loc_00030DA6: ;
    edx = MEM32(edi);
    esi = eax;
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00030DB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030DB1u); } /* indirect call */
    }

loc_00030DB4: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00030E04; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00030DFA: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00030E04: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030E10
 * Original: 0x00030E10 - 0x00030E39 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00030E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030E10: ;
    PUSH32(esp, 0x00030E15u); RECOMP_ABI_CALL(0x00030B50u, sub_00030B50); /* call 0x00030B50 */

loc_00030E15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9176764u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9176764u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030E34; /* jne: not equal / not zero */

loc_00030E1C: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x00030E28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030E22u); } /* indirect call */
    }

loc_00030E28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030E34; /* je: equal / zero */

loc_00030E2C: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_00030E34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030E40
 * Original: 0x00030E40 - 0x00030E57 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00030E48u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00030E48: ;
    ecx = eax;
    PUSH32(esp, 0x00030E4Fu); RECOMP_ABI_CALL(0x001EE0E0u, sub_001EE0E0); /* call 0x001EE0E0 */

loc_00030E4F: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_00030E60
 * Original: 0x00030E60 - 0x00030EB9 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00030E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030E60: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B29E492u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8B29E492u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00030EA0; /* ja: above (unsigned >) */

loc_00030E6E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00030E9A; /* je: equal / zero */

loc_00030E70: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE78A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE78A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030E94; /* je: equal / zero */

loc_00030E78: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B9B0DAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5B9B0DAF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030E8E; /* je: equal / zero */

loc_00030E80: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6B98ED8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6B98ED8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030EB8; /* jne: not equal / not zero */

loc_00030E88: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00030E8E: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00030E94: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_00030E9A: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00030EA0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE150C94Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE150C94Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030EB6; /* je: equal / zero */

loc_00030EA8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF84984D4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF84984D4u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030EB8; /* jne: not equal / not zero */

loc_00030EB0: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_00030EB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00030EB8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030EC0
 * Original: 0x00030EC0 - 0x00030ED7 (23 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030EC0(void)
{

loc_00030EC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1A4) = eax;
    MEM32(ecx + 0x1A8) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030EE0
 * Original: 0x00030EE0 - 0x00030F11 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030EE0: ;
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x200;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x316A58;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x317260) = edx;
    MEM32(0x316A48) = edx;
    MEM32(0x316A4C) = edx;
    MEM32(0x316A50) = edx;
    MEM32(0x316A54) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00030F20
 * Original: 0x00030F20 - 0x00030F4E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030F20: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00030F4D; /* jge: greater or equal (signed >=) */

loc_00030F29: ;
    eax = MEM32(0x317260);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00030F4D; /* jge: greater or equal (signed >=) */

loc_00030F35: ;
    MEM32(ecx * 4 + 0x316A48) = MEM32(ecx * 4 + 0x316A48) + 1;
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x316A48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 8);
    MEM32(eax * 4 + 0x316A58) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x317260) = eax;

loc_00030F4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030F50
 * Original: 0x00030F50 - 0x00030F90 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030F50: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FC0591A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FC0591A (32-bit) */
    eax = 4;
    if (CMP_A(_fa, _fb)) goto loc_00030F82; /* ja: above (unsigned >) */

loc_00030F61: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00030F7C; /* je: equal / zero */

loc_00030F63: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11EF3E9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x11EF3E9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030F79; /* je: equal / zero */

loc_00030F6B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E29F56F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3E29F56F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030F8F; /* jne: not equal / not zero */

loc_00030F73: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00030F79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00030F7C: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00030F82: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE150C94Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE150C94Fu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00030F8F; /* jne: not equal / not zero */

loc_00030F8A: ;
    eax = 3;

loc_00030F8F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00030F90
 * Original: 0x00030F90 - 0x00030F9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030F90(void)
{

loc_00030F90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1A0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00030FA0
 * Original: 0x00030FA0 - 0x00031030 (144 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030FA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00030FB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030FB2u); } /* indirect call */
    }

loc_00030FB5: ;
    ecx = esp + 0x14;
    esi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00030FC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00030FC0u); } /* indirect call */
    }

loc_00030FC3: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00031026; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00031009: ;
    ecx = edi;
    PUSH32(esp, 0x00031010u); RECOMP_ABI_CALL(0x0003EE20u, sub_0003EE20); /* call 0x0003EE20 */

loc_00031010: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00031026; /* ja: above (unsigned >) */

loc_00031015: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x31030); /* switch: 4 entries, 1 targets */
    if (_jt == 0x0003101Cu) goto loc_0003101C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003101C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00031026: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031040
 * Original: 0x00031040 - 0x00031048 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031040(void)
{

loc_00031040: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031050
 * Original: 0x00031050 - 0x00031078 (40 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00031050: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031072; /* je: equal / zero */

loc_0003105B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00031060u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003105Du); } /* indirect call */
    }

loc_00031060: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031072; /* jne: not equal / not zero */

loc_0003106C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00031072: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031080
 * Original: 0x00031080 - 0x00031092 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031080(void)
{

loc_00031080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00031088u); RECOMP_ABI_CALL(0x001F7350u, sub_001F7350); /* call 0x001F7350 */

loc_00031088: ;
    MEM32(esi) = 0x2DEEE4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000310A0
 * Original: 0x000310A0 - 0x000310D1 (49 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000310A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000310A0: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000310AE; /* jne: not equal / not zero */

loc_000310A7: ;
    eax = 0x6438E0;
    goto loc_000310B1;

loc_000310AE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000310B1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000310E0
 * Original: 0x000310E0 - 0x00031137 (87 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000310E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000310E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240BB8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00031103u); RECOMP_ABI_CALL(0x000124C0u, sub_000124C0); /* call 0x000124C0 */

loc_00031103: ;
    edi = esi + 0x180;
    ecx = edi;
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x2DEEF0;
    PUSH32(esp, 0x0003111Eu); RECOMP_ABI_CALL(0x001F7350u, sub_001F7350); /* call 0x001F7350 */

loc_0003111E: ;
    ecx = MEM32(esp + 0xC);
    MEM32(edi) = 0x2DEEE4;
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
 * sub_00031140
 * Original: 0x00031140 - 0x00031146 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031140(void)
{

loc_00031140: ;
    eax = 0x1A0;
    esp += 4; return; /* ret */

}

/**
 * sub_00031150
 * Original: 0x00031150 - 0x00031153 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00031150: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00031160
 * Original: 0x00031160 - 0x00031163 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00031160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00031160: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00031170
 * Original: 0x00031170 - 0x00031176 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031170(void)
{

loc_00031170: ;
    eax = MEM32(0x317258);
    esp += 4; return; /* ret */

}

/**
 * sub_00031180
 * Original: 0x00031180 - 0x00031185 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00031180: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00031190
 * Original: 0x00031190 - 0x00031196 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031190(void)
{

loc_00031190: ;
    eax = 0x1B;
    esp += 4; return; /* ret */

}

/**
 * sub_000311A0
 * Original: 0x000311A0 - 0x000311EF (79 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000311A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000311A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240BB8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0x180;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000311D0u); RECOMP_ABI_CALL(0x001F7D00u, sub_001F7D00); /* call 0x001F7D00 */

loc_000311D0: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000311DFu); RECOMP_ABI_CALL(0x00011070u, sub_00011070); /* call 0x00011070 */

loc_000311DF: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000311F0
 * Original: 0x000311F0 - 0x000312E9 (249 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000311F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000311F0: ;
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
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x3C;
    PUSH32(esp, ebx);
    MEM32(esi + 0x174) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00031210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003120Du); } /* indirect call */
    }

loc_00031210: ;
    SET_LO8(edx, MEM8(esi + 0x190));
    SET_LO8(edx, LO8(edx) | 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = esi + 0x180;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM8(esi + 0x190) = LO8(edx);
    MEM32(esi + 0x18C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00031233u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00031233: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003123Bu); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_0003123B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00031246u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031240u); } /* indirect call */
    }

loc_00031246: ;
    edi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00031255u); RECOMP_ABI_CALL(0x00013AD0u, sub_00013AD0); /* call 0x00013AD0 */

loc_00031255: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00031267u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00031267: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00031271u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003126Eu); } /* indirect call */
    }

loc_00031271: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0003127Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031275u); } /* indirect call */
    }

loc_0003127B: ;
    MEM32(esi + 0x170) = eax;
    eax = MEM32(edi + 0x17C);
    MEM32(esi + 0x17C) = eax;
    ecx = MEM32(edi + 0x178);
    MEM32(esi + 0x178) = ecx;
    edx = MEM32(edi + 0x174);
    MEM32(esi + 0x174) = edx;
    eax = MEM32(edi + 0x184);
    PUSH32(esp, eax);
    ecx = esi + 0x180;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000312B7u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_000312B7: ;
    SET_LO8(eax, MEM8(esi + 0x190));
    edx = MEM32(esi);
    SET_LO8(eax, LO8(eax) & 0xF9);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = esi;
    MEM32(esi + 0x18C) = 0xE9176764u;
    MEM8(esi + 0x190) = LO8(eax);
    MEM8(esi + 0x191) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1D8); PUSH32(esp, 0x000312E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000312DAu); } /* indirect call */
    }

loc_000312E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000312F0
 * Original: 0x000312F0 - 0x00031446 (342 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000312F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000312F0: ;
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
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi + 0x3C;
    PUSH32(esp, 0);
    MEM32(esi + 0x174) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00031313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031310u); } /* indirect call */
    }

loc_00031313: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003131Cu); RECOMP_ABI_CALL(0x00030B80u, sub_00030B80); /* call 0x00030B80 */

loc_0003131C: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00031323u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_00031323: ;
    edi = esi + 0x180;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00031332u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00031332: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003133Bu); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_0003133B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00031347u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031341u); } /* indirect call */
    }

loc_00031347: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00031352u); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_00031352: ;
    ebx = MEM32(esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00031360u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00031360: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x30); PUSH32(esp, 0x00031366u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031363u); } /* indirect call */
    }

loc_00031366: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4FD51A36);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031372u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003136Fu); } /* indirect call */
    }

loc_00031372: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4FD51A36);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0003137Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003137Bu); } /* indirect call */
    }

loc_0003137E: ;
    MEM32(esi + 0x170) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00031390u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003138Du); } /* indirect call */
    }

loc_00031390: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000313A5; /* je: equal / zero */

loc_00031396: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0BB9BF2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0BB9BF2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000313A5; /* je: equal / zero */

loc_0003139D: ;
    MEM32(esi + 0x17C) = eax;
    goto loc_000313AB;

loc_000313A5: ;
    MEM32(esi + 0x17C) = ebx;

loc_000313AB: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA2FB30C6u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000313B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000313B4u); } /* indirect call */
    }

loc_000313B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000313D0; /* je: equal / zero */

loc_000313BB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0BB9BF2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0BB9BF2u (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x178) = ecx;
    goto loc_000313DC;

loc_000313D0: ;
    edx = MEM32(esi + 0x17C);
    MEM32(esi + 0x178) = edx;

loc_000313DC: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8153D278u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000313E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000313E5u); } /* indirect call */
    }

loc_000313E8: ;
    MEM32(esi + 0x174) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x73349B22);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000313FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000313F7u); } /* indirect call */
    }

loc_000313FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = esi + 0x180;
    if (CMP_EQ(_fa, _fb)) goto loc_00031407; /* je: equal / zero */

loc_00031404: ;
    PUSH32(esp, eax);
    goto loc_00031408;

loc_00031407: ;
    PUSH32(esp, ebx);

loc_00031408: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003140Du); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_0003140D: ;
    SET_LO8(edx, MEM8(esi + 0x190));
    SET_LO8(edx, LO8(edx) & 0xFD);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0xE9176764u);
    ecx = esi;
    MEM8(esi + 0x190) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00031428u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_00031428: ;
    MEM8(esi + 0x190) = MEM8(esi + 0x190) & 0xFB;
    _fa = (uint32_t)(MEM8(esi + 0x190)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esi);
    MEM8(esi + 0x191) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1D8); PUSH32(esp, 0x0003143Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031437u); } /* indirect call */
    }

loc_0003143D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031450
 * Original: 0x00031450 - 0x000314B6 (102 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00031450: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x180;
    PUSH32(esp, 0x00031460u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00031460: ;
    ecx = esi;
    PUSH32(esp, 0x00031467u); RECOMP_ABI_CALL(0x00015270u, sub_00015270); /* call 0x00015270 */

loc_00031467: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1CC); PUSH32(esp, 0x00031471u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003146Bu); } /* indirect call */
    }

loc_00031471: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x0003147Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031475u); } /* indirect call */
    }

loc_0003147B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1EC); PUSH32(esp, 0x00031485u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003147Fu); } /* indirect call */
    }

loc_00031485: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000314B4; /* je: equal / zero */

loc_00031489: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1E0); PUSH32(esp, 0x00031493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003148Du); } /* indirect call */
    }

loc_00031493: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000314B4; /* je: equal / zero */

loc_00031497: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1EC); PUSH32(esp, 0x000314A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003149Bu); } /* indirect call */
    }

loc_000314A1: ;
    ecx = eax;
    PUSH32(esp, 0x000314A8u); RECOMP_ABI_CALL(0x00140DF0u, sub_00140DF0); /* call 0x00140DF0 */

loc_000314A8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x000314B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000314AEu); } /* indirect call */
    }

loc_000314B4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000314C0
 * Original: 0x000314C0 - 0x000314D7 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000314C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000314C0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x50)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x50), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000314D6; /* jne: not equal / not zero */

loc_000314C6: ;
    eax = MEM32(ecx + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000314D6; /* je: equal / zero */

loc_000314CD: ;
    eax = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

loc_000314D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000314E0
 * Original: 0x000314E0 - 0x000314F0 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000314E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000314E0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x50)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x50), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000314EF; /* je: equal / zero */

loc_000314E6: ;
    eax = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

loc_000314EF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000314F0
 * Original: 0x000314F0 - 0x00031566 (118 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000314F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000314F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240BD8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = 0x2DF0F0;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 1 (8-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0003152E; /* je: equal / zero */

loc_0003151F: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x0003152Eu); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_0003152E: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00031548; /* je: equal / zero */

loc_00031534: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00031548: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00031554u); RECOMP_ABI_CALL(0x000140D0u, sub_000140D0); /* call 0x000140D0 */

loc_00031554: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00031570
 * Original: 0x00031570 - 0x000315CF (95 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00031570: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00031578u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00031578: ;
    ecx = eax;
    PUSH32(esp, 0x0003157Fu); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_0003157F: ;
    eax = MEM32(esi + 0x178);
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031594; /* je: equal / zero */

loc_0003158A: ;
    edx = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00031594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031591u); } /* indirect call */
    }

loc_00031594: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1EC); PUSH32(esp, 0x0003159Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031598u); } /* indirect call */
    }

loc_0003159E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000315CD; /* je: equal / zero */

loc_000315A2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1E0); PUSH32(esp, 0x000315ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000315A6u); } /* indirect call */
    }

loc_000315AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000315CD; /* je: equal / zero */

loc_000315B0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1EC); PUSH32(esp, 0x000315BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000315B4u); } /* indirect call */
    }

loc_000315BA: ;
    ecx = eax;
    PUSH32(esp, 0x000315C1u); RECOMP_ABI_CALL(0x00140DF0u, sub_00140DF0); /* call 0x00140DF0 */

loc_000315C1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x000315CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000315C7u); } /* indirect call */
    }

loc_000315CD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000315D0
 * Original: 0x000315D0 - 0x00031808 (568 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000315D0(void)
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

loc_000315D0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00031643; /* jb: below (unsigned <) (xmm4.f[0] vs xmm3.f[0]) */

loc_000315F7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00031626u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00031626: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x44);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00031643: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x38);
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC904); /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x2DC880); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00031734; /* ja: above (unsigned >) (xmm4.f[0] vs xmm3.f[0]) */

loc_000316EF: ;
    fp_push(MEMF(esp)); /* fld float */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC090); /* mulss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003173A; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_0003172F: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003173A; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_00031734: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003173A: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00031749; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_00031744: ;
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_00031749: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0x0003175Eu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0003175E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000317F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0003177E: ;
    fp_push(MEMF(esp)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 8); /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000317DFu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000317DF: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000317F0: ;
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00031708
 * Original: 0x00031708 - 0x00031808 (256 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031708(void)
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

loc_00031708: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003173A; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_0003172F: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003173A; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_00031734: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003173A: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00031749; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_00031744: ;
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_00031749: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0x0003175Eu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0003175E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000317F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0003177E: ;
    fp_push(MEMF(esp)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 8); /* divss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000317DFu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000317DF: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000317F0: ;
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00031810
 * Original: 0x00031810 - 0x00031B13 (771 bytes, 185 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00031810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00031810: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00031825u); RECOMP_ABI_CALL(0x000311F0u, sub_000311F0); /* call 0x000311F0 */

loc_00031825: ;
    eax = MEM32(edi + 0x1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031852; /* je: equal / zero */

loc_0003182F: ;
    ebp = esi + 0x1AC;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0003183Du); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_0003183D: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0BB9BF2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1B0), 0xE0BB9BF2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031852; /* je: equal / zero */

loc_00031849: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00031852u); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_00031852: ;
    eax = MEM32(edi + 0x1A8);
    MEM32(esi + 0x1A8) = eax;
    ecx = MEM32(edi + 0x1A4);
    MEM32(esi + 0x1A4) = ecx;
    edx = MEM32(edi + 0x1A0);
    MEM32(esi + 0x1A0) = edx;
    eax = MEM32(edi + 0x1B8);
    MEM32(esi + 0x1B8) = eax;
    ecx = MEM32(edi + 0x1BC);
    MEM32(esi + 0x1BC) = ecx;
    edx = MEM32(edi + 0x1C0);
    MEM32(esi + 0x1C0) = edx;
    SET_LO8(eax, MEM8(edi + 0x1C4));
    MEM8(esi + 0x1C4) = LO8(eax);
    ecx = MEM32(edi + 0x1CC);
    MEM32(esi + 0x1CC) = ecx;
    edx = MEM32(edi + 0x1D0);
    MEM32(esi + 0x1D0) = edx;
    eax = MEM32(edi + 0x1D4);
    MEM32(esi + 0x1D4) = eax;
    ecx = MEM32(edi + 0x1D8);
    MEM32(esi + 0x1D8) = ecx;
    edx = MEM32(edi + 0x1DC);
    MEM32(esi + 0x1DC) = edx;
    eax = MEM32(edi + 0x1E0);
    MEM32(esi + 0x1E0) = eax;
    SET_LO8(ecx, MEM8(edi + 0x1E4));
    MEM8(esi + 0x1E4) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x1E5));
    MEM8(esi + 0x1E5) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x1E6));
    MEM8(esi + 0x1E6) = LO8(eax);
    ecx = MEM32(edi + 0x1C8);
    MEM32(esi + 0x1C8) = ecx;
    edx = MEM32(edi + 0x1E8);
    ecx = MEM32(esi + 0x1E8);
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx;
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp ^ edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1E8) = ebp;
    SET_LO8(eax, MEM8(edi + 0x209));
    MEM8(esi + 0x209) = LO8(eax);
    ecx = MEM32(edi + 0x1F0);
    MEM32(esi + 0x1F0) = ecx;
    edx = MEM32(edi + 0x1F4);
    MEM32(esi + 0x1F4) = edx;
    eax = MEM32(edi + 0x1F8);
    MEM32(esi + 0x1F8) = eax;
    ecx = MEM32(edi + 0x1FC);
    MEM32(esi + 0x1FC) = ecx;
    edx = MEM32(edi + 0x200);
    MEM32(esi + 0x200) = edx;
    eax = MEM32(edi + 0x204);
    MEM32(esi + 0x204) = eax;
    SET_LO8(ecx, MEM8(edi + 0x208));
    MEM8(esi + 0x208) = LO8(ecx);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C09491A);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000319A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000319A2u); } /* indirect call */
    }

loc_000319A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000319B4; /* je: equal / zero */

loc_000319A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000319AFu); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_000319AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000319BA;

loc_000319B4: ;
    eax = MEM32(esi + 0x1B8);

loc_000319BA: ;
    MEM32(esi + 0x230) = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD055B6E2u);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000319CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000319C9u); } /* indirect call */
    }

loc_000319CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000319DB; /* je: equal / zero */

loc_000319D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000319D6u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_000319D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000319E1;

loc_000319DB: ;
    eax = MEM32(esi + 0x1E0);

loc_000319E1: ;
    MEM32(esi + 0x234) = eax;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFA83847Du);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000319F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000319F0u); } /* indirect call */
    }

loc_000319F3: ;
    edx = MEM32(esi + 0x24C);
    edi = esi + 0x24C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00031A05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031A02u); } /* indirect call */
    }

loc_00031A05: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00031A0Eu); RECOMP_ABI_CALL(0x00150D90u, sub_00150D90); /* call 0x00150D90 */

loc_00031A0E: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A0), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031A30; /* jne: not equal / not zero */

loc_00031A17: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC084)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1CC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00031A30; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x1CC)) */

loc_00031A28: ;
    MEMF(esi + 0x1CC) = xmm0.f[0]; /* movss */

loc_00031A30: ;
    eax = MEM32(esi + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DA9C68A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DA9C68A (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00031A48; /* je: equal / zero */

loc_00031A40: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC410)); /* movss */

loc_00031A48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E73B36A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7E73B36A (32-bit) */
    MEMF(esi + 0x228) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_00031AA4; /* ja: above (unsigned >) */

loc_00031A57: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00031A9B; /* je: equal / zero */

loc_00031A59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C97CB4F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C97CB4F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00031A8B; /* ja: above (unsigned >) */

loc_00031A60: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00031A82; /* je: equal / zero */

loc_00031A62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x181D2637) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x181D2637 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031A79; /* je: equal / zero */

loc_00031A69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F14C63C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F14C63C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031AEC; /* jne: not equal / not zero */

loc_00031A70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE601AE2Bu);
    goto loc_00031AE4;

loc_00031A79: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B90D373);
    goto loc_00031AE4;

loc_00031A82: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD73D9F07u);
    goto loc_00031AE4;

loc_00031A8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DE57FD4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6DE57FD4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031AEC; /* jne: not equal / not zero */

loc_00031A92: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB7660F17u);
    goto loc_00031AE4;

loc_00031A9B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD5626CBAu);
    goto loc_00031AE4;

loc_00031AA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEB74E1BAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEB74E1BAu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00031AD6; /* ja: above (unsigned >) */

loc_00031AAB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00031ACD; /* je: equal / zero */

loc_00031AAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A729F81u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A729F81u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031AC4; /* je: equal / zero */

loc_00031AB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDD98A4EFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDD98A4EFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031AEC; /* jne: not equal / not zero */

loc_00031ABB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB7660F17u);
    goto loc_00031AE4;

loc_00031AC4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E7F2C33);
    goto loc_00031AE4;

loc_00031ACD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE691B192u);
    goto loc_00031AE4;

loc_00031AD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF7058BCAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF7058BCAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031AEC; /* jne: not equal / not zero */

loc_00031ADD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x36C022D9);

loc_00031AE4: ;
    PUSH32(esp, 0x00031AE9u); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00031AE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00031AEC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esi + 0x22C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x23C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00031B20
 * Original: 0x00031B20 - 0x0003209A (1402 bytes, 424 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00031B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_00031B20: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x00031B2Fu); RECOMP_ABI_CALL(0x000312F0u, sub_000312F0); /* call 0x000312F0 */

loc_00031B2F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x16A0497);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00031B3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031B38u); } /* indirect call */
    }

loc_00031B3B: ;
    MEM32(edi + 0x1A8) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5B9B0DAF);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00031B4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031B4Au); } /* indirect call */
    }

loc_00031B4D: ;
    ebp = eax;
    PUSH32(esp, 0x134603D7);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00031B5Au); RECOMP_ABI_CALL(0x001ED340u, sub_001ED340); /* call 0x001ED340 */

loc_00031B5A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031B86; /* je: equal / zero */

loc_00031B61: ;
    PUSH32(esp, ebx);
    ebx = edi + 0x1AC;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00031B70u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00031B70: ;
    _fa = (uint32_t)(MEM32(edi + 0x1B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0BB9BF2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1B0), 0xE0BB9BF2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031B85; /* je: equal / zero */

loc_00031B7C: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x00031B85u); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_00031B85: ;
    POP32(esp, ebx);

loc_00031B86: ;
    MEM32(edi + 0x1A4) = ebp;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAFB15F89u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00031B98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031B95u); } /* indirect call */
    }

loc_00031B98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031BA7; /* je: equal / zero */

loc_00031B9C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031BA2u); RECOMP_ABI_CALL(0x00030BC0u, sub_00030BC0); /* call 0x00030BC0 */

loc_00031BA2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031BAC;

loc_00031BA7: ;
    eax = 0xF;

loc_00031BAC: ;
    MEM32(edi + 0x1A0) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21C4FF9B);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031BBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031BBBu); } /* indirect call */
    }

loc_00031BBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031BCD; /* je: equal / zero */

loc_00031BC2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031BC8u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031BC8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031BD3;

loc_00031BCD: ;
    fp_push(MEMD(0x2DF120)); /* fld double */

loc_00031BD3: ;
    PUSH32(esp, 0x00031BD8u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_00031BD8: ;
    MEM32(edi + 0x1B8) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1949B90E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00031BEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031BE7u); } /* indirect call */
    }

loc_00031BEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031BF9; /* je: equal / zero */

loc_00031BEE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031BF4u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031BF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031BFF;

loc_00031BF9: ;
    fp_push(MEMD(0x2DF118)); /* fld double */

loc_00031BFF: ;
    MEMF(edi + 0x1BC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x77A299F8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031C11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031C0Eu); } /* indirect call */
    }

loc_00031C11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031C20; /* je: equal / zero */

loc_00031C15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031C1Bu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031C1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031C26;

loc_00031C20: ;
    fp_push(MEMD(0x2DF118)); /* fld double */

loc_00031C26: ;
    MEMF(edi + 0x1C0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15AE8A16);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00031C38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031C35u); } /* indirect call */
    }

loc_00031C38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031C47; /* je: equal / zero */

loc_00031C3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031C42u); RECOMP_ABI_CALL(0x001EF710u, sub_001EF710); /* call 0x001EF710 */

loc_00031C42: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031C49;

loc_00031C47: ;
    SET_LO8(eax, 1);

loc_00031C49: ;
    MEM8(edi + 0x1C4) = LO8(eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x96B41151u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00031C5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031C58u); } /* indirect call */
    }

loc_00031C5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61A46029) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61A46029 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031C75; /* je: equal / zero */

loc_00031C62: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64652777) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64652777 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x1C8) = ecx;
    goto loc_00031C7F;

loc_00031C75: ;
    MEM32(edi + 0x1C8) = 0;

loc_00031C7F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x544D6D8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031C8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031C88u); } /* indirect call */
    }

loc_00031C8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031C9A; /* je: equal / zero */

loc_00031C8F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031C95u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031C95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031CA0;

loc_00031C9A: ;
    fp_push(MEMD(0x2DF118)); /* fld double */

loc_00031CA0: ;
    MEMF(edi + 0x1CC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBC85C4A);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00031CB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031CAFu); } /* indirect call */
    }

loc_00031CB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031CC1; /* je: equal / zero */

loc_00031CB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031CBCu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031CBC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031CC7;

loc_00031CC1: ;
    fp_push(MEMD(0x2DF118)); /* fld double */

loc_00031CC7: ;
    MEMF(edi + 0x1D0) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7700F02B);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031CD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031CD6u); } /* indirect call */
    }

loc_00031CD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031CE8; /* je: equal / zero */

loc_00031CDD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031CE3u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031CE3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031CEE;

loc_00031CE8: ;
    fp_push(MEMF(edi + 0x1D0)); /* fld float */

loc_00031CEE: ;
    MEMF(edi + 0x1D4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBB22BD10u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00031D00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031CFDu); } /* indirect call */
    }

loc_00031D00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031D0F; /* je: equal / zero */

loc_00031D04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031D0Au); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031D0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031D15;

loc_00031D0F: ;
    fp_push(MEMF(edi + 0x1D0)); /* fld float */

loc_00031D15: ;
    MEMF(edi + 0x1D8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9FC1A1ADu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031D27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031D24u); } /* indirect call */
    }

loc_00031D27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031D36; /* je: equal / zero */

loc_00031D2B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031D31u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031D31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031D3C;

loc_00031D36: ;
    fp_push(MEMD(0x2DF110)); /* fld double */

loc_00031D3C: ;
    MEMF(edi + 0x1DC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9A1AB41Au);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00031D4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031D4Bu); } /* indirect call */
    }

loc_00031D4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031D5D; /* je: equal / zero */

loc_00031D52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031D58u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_00031D58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031D62;

loc_00031D5D: ;
    eax = 1;

loc_00031D62: ;
    MEM32(edi + 0x1E0) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x711CD534);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031D74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031D71u); } /* indirect call */
    }

loc_00031D74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031D83; /* je: equal / zero */

loc_00031D78: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031D7Eu); RECOMP_ABI_CALL(0x001EF710u, sub_001EF710); /* call 0x001EF710 */

loc_00031D7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031D85;

loc_00031D83: ;
    SET_LO8(eax, 1);

loc_00031D85: ;
    MEM8(edi + 0x1E4) = LO8(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F35B93);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00031D97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031D94u); } /* indirect call */
    }

loc_00031D97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031DA6; /* je: equal / zero */

loc_00031D9B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031DA1u); RECOMP_ABI_CALL(0x001EF710u, sub_001EF710); /* call 0x001EF710 */

loc_00031DA1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031DA8;

loc_00031DA6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00031DA8: ;
    MEM8(edi + 0x1E5) = LO8(eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A576468);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031DBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031DB7u); } /* indirect call */
    }

loc_00031DBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031DC9; /* je: equal / zero */

loc_00031DBE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031DC4u); RECOMP_ABI_CALL(0x001EF710u, sub_001EF710); /* call 0x001EF710 */

loc_00031DC4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031DCB;

loc_00031DC9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00031DCB: ;
    MEM8(edi + 0x1E6) = LO8(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAF58AE20u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00031DDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031DDAu); } /* indirect call */
    }

loc_00031DDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031DEC; /* je: equal / zero */

loc_00031DE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031DE7u); RECOMP_ABI_CALL(0x00030CE0u, sub_00030CE0); /* call 0x00030CE0 */

loc_00031DE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031DF1;

loc_00031DEC: ;
    eax = 3;

loc_00031DF1: ;
    ecx = MEM32(edi + 0x1E8);
    ebp = MEM32(edi + 0x1E8);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp ^ ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x1E8) = ebp;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6ECF80EF);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031E16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031E13u); } /* indirect call */
    }

loc_00031E16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031E25; /* je: equal / zero */

loc_00031E1A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031E20u); RECOMP_ABI_CALL(0x001EF710u, sub_001EF710); /* call 0x001EF710 */

loc_00031E20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031E27;

loc_00031E25: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00031E27: ;
    MEM8(edi + 0x209) = LO8(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x222090F6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00031E39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031E36u); } /* indirect call */
    }

loc_00031E39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031E48; /* je: equal / zero */

loc_00031E3D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031E43u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_00031E43: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031E4D;

loc_00031E48: ;
    eax = 1;

loc_00031E4D: ;
    MEM32(edi + 0x1F0) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x46B50603);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031E5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031E5Cu); } /* indirect call */
    }

loc_00031E5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031E6E; /* je: equal / zero */

loc_00031E63: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031E69u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031E69: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031E74;

loc_00031E6E: ;
    fp_push(MEMD(0x2DF108)); /* fld double */

loc_00031E74: ;
    MEMF(edi + 0x1F4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x315800E5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00031E86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031E83u); } /* indirect call */
    }

loc_00031E86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031E95; /* je: equal / zero */

loc_00031E8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031E90u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031E90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031E9B;

loc_00031E95: ;
    fp_push(MEMD(0x2DF100)); /* fld double */

loc_00031E9B: ;
    MEMF(edi + 0x1F8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAEC1DA33u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031EAAu); } /* indirect call */
    }

loc_00031EAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031EBC; /* je: equal / zero */

loc_00031EB1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031EB7u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00031EB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031EC2;

loc_00031EBC: ;
    fp_push(MEMD(0x2DF110)); /* fld double */

loc_00031EC2: ;
    MEMF(edi + 0x1FC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB8AFC9DFu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00031ED4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031ED1u); } /* indirect call */
    }

loc_00031ED4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031EE3; /* je: equal / zero */

loc_00031ED8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031EDEu); RECOMP_ABI_CALL(0x00030CB0u, sub_00030CB0); /* call 0x00030CB0 */

loc_00031EDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031EE8;

loc_00031EE3: ;
    eax = 3;

loc_00031EE8: ;
    MEM32(edi + 0x200) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5CD62A3E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00031EFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031EF7u); } /* indirect call */
    }

loc_00031EFA: ;
    MEM32(edi + 0x204) = eax;
    MEM8(edi + 0x208) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C100FE4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00031F13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031F10u); } /* indirect call */
    }

loc_00031F13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031F21; /* jne: not equal / not zero */

loc_00031F1A: ;
    MEM8(edi + 0x208) = 1;

loc_00031F21: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C09491A);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00031F2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031F2Au); } /* indirect call */
    }

loc_00031F2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031F3C; /* je: equal / zero */

loc_00031F31: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031F37u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_00031F37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031F42;

loc_00031F3C: ;
    eax = MEM32(edi + 0x1B8);

loc_00031F42: ;
    MEM32(edi + 0x230) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD055B6E2u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00031F54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031F51u); } /* indirect call */
    }

loc_00031F54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00031F63; /* je: equal / zero */

loc_00031F58: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00031F5Eu); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_00031F5E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00031F69;

loc_00031F63: ;
    eax = MEM32(edi + 0x1E0);

loc_00031F69: ;
    MEM32(edi + 0x234) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFA83847Du);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00031F7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031F78u); } /* indirect call */
    }

loc_00031F7B: ;
    edx = MEM32(edi + 0x24C);
    esi = edi + 0x24C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00031F8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00031F8Au); } /* indirect call */
    }

loc_00031F8D: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00031F96u); RECOMP_ABI_CALL(0x00150D90u, sub_00150D90); /* call 0x00150D90 */

loc_00031F96: ;
    _fa = (uint32_t)(MEM32(edi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1A0), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00031FB8; /* jne: not equal / not zero */

loc_00031F9F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC084)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x1CC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00031FB8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x1CC)) */

loc_00031FB0: ;
    MEMF(edi + 0x1CC) = xmm0.f[0]; /* movss */

loc_00031FB8: ;
    eax = MEM32(edi + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DA9C68A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DA9C68A (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00031FD0; /* je: equal / zero */

loc_00031FC8: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC410)); /* movss */

loc_00031FD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E73B36A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7E73B36A (32-bit) */
    MEMF(edi + 0x228) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_0003202C; /* ja: above (unsigned >) */

loc_00031FDF: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00032023; /* je: equal / zero */

loc_00031FE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C97CB4F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C97CB4F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00032013; /* ja: above (unsigned >) */

loc_00031FE8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0003200A; /* je: equal / zero */

loc_00031FEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x181D2637) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x181D2637 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032001; /* je: equal / zero */

loc_00031FF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F14C63C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F14C63C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032074; /* jne: not equal / not zero */

loc_00031FF8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE601AE2Bu);
    goto loc_0003206C;

loc_00032001: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B90D373);
    goto loc_0003206C;

loc_0003200A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD73D9F07u);
    goto loc_0003206C;

loc_00032013: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6DE57FD4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6DE57FD4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032074; /* jne: not equal / not zero */

loc_0003201A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB7660F17u);
    goto loc_0003206C;

loc_00032023: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD5626CBAu);
    goto loc_0003206C;

loc_0003202C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEB74E1BAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEB74E1BAu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003205E; /* ja: above (unsigned >) */

loc_00032033: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00032055; /* je: equal / zero */

loc_00032035: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A729F81u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A729F81u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003204C; /* je: equal / zero */

loc_0003203C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDD98A4EFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDD98A4EFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032074; /* jne: not equal / not zero */

loc_00032043: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB7660F17u);
    goto loc_0003206C;

loc_0003204C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E7F2C33);
    goto loc_0003206C;

loc_00032055: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE691B192u);
    goto loc_0003206C;

loc_0003205E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF7058BCAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF7058BCAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032074; /* jne: not equal / not zero */

loc_00032065: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x36C022D9);

loc_0003206C: ;
    PUSH32(esp, 0x00032071u); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00032071: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032074: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(edi + 0x22C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    MEMF(edi + 0x23C) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000320A0
 * Original: 0x000320A0 - 0x0003217B (219 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000320A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000320A0: ;
    _fb = (uint32_t)(0x88C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000320AFu); RECOMP_ABI_CALL(0x00012520u, sub_00012520); /* call 0x00012520 */

loc_000320AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = LO8(edx);
    ecx = 0xF;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x50) = LO8(edx);
    ecx = 0xF;
    edi = esp + 0x51;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(esi + 0x230);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x2DEA44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000320EFu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000320EF: ;
    edx = MEM32(esi + 0x234);
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, 0x2DEA44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032105u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00032105: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x90;
    PUSH32(esp, 0x00032114u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00032114: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2DF138);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00032127u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00032127: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x94;
    PUSH32(esp, 0x00032138u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00032138: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2DF128);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0003214Bu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0003214B: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esp + 0x94;
    PUSH32(esp, 0x0003215Cu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0003215C: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0003216Bu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0003216B: ;
    ecx = eax;
    PUSH32(esp, 0x00032172u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_00032172: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x88C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00032180
 * Original: 0x00032180 - 0x00032452 (722 bytes, 182 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00032180(void)
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

loc_00032180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240BFB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x14) = 0x2DF14C;
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(esp + 0xA0) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000321C1u); RECOMP_ABI_CALL(0x000314F0u, sub_000314F0); /* call 0x000314F0 */

loc_000321C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000321DB; /* jne: not equal / not zero */

loc_000321C5: ;
    ecx = MEM32(esp + 0x94);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000321DB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x23C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003220D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x23C)) */

loc_000321EC: ;
    SET_LO8(eax, MEM8(esi + 0x274));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003220D; /* jne: not equal / not zero */

loc_000321F6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x23C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    MEMF(esi + 0x23C) = xmm0.f[0]; /* movss */
    goto loc_0003227F;

loc_0003220D: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x23C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003227F; /* jnp: not parity */

loc_00032226: ;
    edx = MEM32(esi + 0x234);
    ecx = MEM32(esi + 0x1E0);
    eax = MEM32(esi + 0x230);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00032242; /* jge: greater or equal (signed >=) */

loc_0003223E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00032248;

loc_00032242: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00032248; /* jg: greater (signed >) */

loc_00032246: ;
    ecx = eax;

loc_00032248: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x230) = eax;
    eax = MEM32(esi + 0x1A0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x234) = edx;
    MEMF(esi + 0x23C) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0003227F; /* jne: not equal / not zero */

loc_0003226B: ;
    ecx = esi + 0x24C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003227F; /* je: equal / zero */

loc_00032275: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x59E88683);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0003227Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003227Cu); } /* indirect call */
    }

loc_0003227F: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DA9C68A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A4), 0x5DA9C68A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000322C2; /* jne: not equal / not zero */

loc_0003228B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = 0x323338;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00032299u); RECOMP_ABI_CALL(0x00095B70u, sub_00095B70); /* call 0x00095B70 */

loc_00032299: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0x22C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000322B4; /* jbe: below or equal (unsigned <=) */

loc_000322A9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x228) = xmm0.f[0]; /* movss */

loc_000322B4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0x22C) = xmm0.f[0]; /* movss */

loc_000322C2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1CC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x228); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000322E7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x228)) */

loc_000322D8: ;
    edx = MEM32(esi + 0x24C);
    ecx = esi + 0x24C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000322E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000322E4u); } /* indirect call */
    }

loc_000322E7: ;
    eax = MEM32(esi + 0x24C);
    ecx = esi + 0x24C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000322F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000322F4u); } /* indirect call */
    }

loc_000322F7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x228); /* addss */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esi + 0x228) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1F8); PUSH32(esp, 0x00032316u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032310u); } /* indirect call */
    }

loc_00032316: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032325; /* je: equal / zero */

loc_0003231A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x228) = xmm0.f[0]; /* movss */

loc_00032325: ;
    SET_LO8(eax, MEM8(esi + 0x274));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003241A; /* je: equal / zero */

loc_00032333: ;
    edx = MEM32(esi);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x00032342u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003233Cu); } /* indirect call */
    }

loc_00032342: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00032349u); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_00032349: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x00032358u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032352u); } /* indirect call */
    }

loc_00032358: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003235Fu); RECOMP_ABI_CALL(0x0012FFC0u, sub_0012FFC0); /* call 0x0012FFC0 */

loc_0003235F: ;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003236Eu); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_0003236E: ;
    edx = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x0003237Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032377u); } /* indirect call */
    }

loc_0003237D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00032384u); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_00032384: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000323C5u); RECOMP_ABI_CALL(0x0022FA9Eu, sub_0022FA9E); /* call 0x0022FA9E */

loc_000323C5: ;
    PUSH32(esp, eax);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000323D0u); RECOMP_ABI_CALL(0x0022F9BCu, sub_0022F9BC); /* call 0x0022F9BC */

loc_000323D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = MEM32(esi);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = esp + 0x50;
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0003241Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032417u); } /* indirect call */
    }

loc_0003241A: ;
    SET_LO8(eax, MEM8(esi + 0x208));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003243A; /* je: equal / zero */

loc_00032424: ;
    eax = MEM32(0x320790);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00032433; /* jle: less or equal (signed <=) */

loc_0003242F: ;
    PUSH32(esp, 1);
    goto loc_00032435;

loc_00032433: ;
    PUSH32(esp, 0);

loc_00032435: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003243Au); RECOMP_ABI_CALL(0x00030B80u, sub_00030B80); /* call 0x00030B80 */

loc_0003243A: ;
    ecx = MEM32(esp + 0x94);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
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
 * sub_00032460
 * Original: 0x00032460 - 0x000324B4 (84 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00032460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x240);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000324AF; /* je: equal / zero */

loc_00032470: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032477u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_00032477: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000324A3; /* je: equal / zero */

loc_00032480: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00032487u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032484u); } /* indirect call */
    }

loc_00032487: ;
    ecx = MEM32(0x30C0D4);
    ebx = MEM32(0x30C0D0);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000324A3: ;
    POP32(esp, esi);
    MEM32(edi + 0x240) = ebx;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000324AF: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000324C0
 * Original: 0x000324C0 - 0x00032517 (87 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000324C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000324C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x000324D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000324CDu); } /* indirect call */
    }

loc_000324D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000324E4; /* jne: not equal / not zero */

loc_000324D7: ;
    _fa = (uint32_t)(MEM8(0x3BF670)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3BF670), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000324E4; /* jne: not equal / not zero */

loc_000324E0: ;
    SET_LO8(ebx, 1);
    goto loc_000324E6;

loc_000324E4: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000324E6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x204); PUSH32(esp, 0x000324F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000324EAu); } /* indirect call */
    }

loc_000324F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000324F8; /* jne: not equal / not zero */

loc_000324F4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003250F; /* je: equal / zero */

loc_000324F8: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x200); PUSH32(esp, 0x00032503u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000324FDu); } /* indirect call */
    }

loc_00032503: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003250F; /* je: equal / zero */

loc_00032507: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0003250F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032520
 * Original: 0x00032520 - 0x000325B1 (145 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032520(void)
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

loc_00032520: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20C); PUSH32(esp, 0x00032532u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003252Cu); } /* indirect call */
    }

loc_00032532: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032548; /* jne: not equal / not zero */

loc_00032536: ;
    eax = MEM32(esi + 0x1EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00032550; /* je: equal / zero */

loc_00032548: ;
    MEM32(esp + 0x10) = 1;

loc_00032550: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x0003255Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032554u); } /* indirect call */
    }

loc_0003255A: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) & LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x0003256Cu); RECOMP_ABI_CALL(0x00030B70u, sub_00030B70); /* call 0x00030B70 */

loc_0003256C: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x00032578u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032572u); } /* indirect call */
    }

loc_00032578: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000325A9; /* je: equal / zero */

loc_0003257C: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x00032586u); RECOMP_ABI_CALL(0x000978B0u, sub_000978B0); /* call 0x000978B0 */

loc_00032586: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000325A5; /* jp: parity */

loc_00032596: ;
    eax = 1;
    POP32(esp, edi);
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000325A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000325A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000325C0
 * Original: 0x000325C0 - 0x000325DA (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000325C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000325C0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1CC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000325D7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x1CC)) */

loc_000325D1: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000325D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000325E0
 * Original: 0x000325E0 - 0x00032619 (57 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000325E0(void)
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

loc_000325E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00032612; /* je: equal / zero */

loc_000325F3: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000325FEu); RECOMP_ABI_CALL(0x001ED310u, sub_001ED310); /* call 0x001ED310 */

loc_000325FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032612; /* je: equal / zero */

loc_00032605: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003260Bu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0003260B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00032612: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00032620
 * Original: 0x00032620 - 0x000326D4 (180 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032620(void)
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

loc_00032620: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C7B3E57);
    esi = ecx;
    PUSH32(esp, 0x00032630u); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_00032630: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM32(esi + 0x1A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DA9C68A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A4), 0x5DA9C68A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000326CB; /* jne: not equal / not zero */

loc_00032644: ;
    PUSH32(esp, 0x4EAA67C9);
    ecx = esi;
    PUSH32(esp, 0x00032650u); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_00032650: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = 0x323338;
    PUSH32(esp, 0x00032662u); RECOMP_ABI_CALL(0x00095B70u, sub_00095B70); /* call 0x00095B70 */

loc_00032662: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    ecx = 0x323338;
    PUSH32(esp, 0x00032672u); RECOMP_ABI_CALL(0x00095BE0u, sub_00095BE0); /* call 0x00095BE0 */

loc_00032672: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    ecx = 0x323338;
    PUSH32(esp, 0x00032682u); RECOMP_ABI_CALL(0x00095C00u, sub_00095C00); /* call 0x00095C00 */

loc_00032682: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_00032699; /* jb: below (unsigned <) */

loc_00032690: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00032699: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca >= _fcb)) goto loc_000326CB; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_000326A6: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000326CB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000326E0
 * Original: 0x000326E0 - 0x000326FD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000326E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000326E0: ;
    ecx = MEM32(ecx + 0x1A4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000326FA; /* je: equal / zero */

loc_000326EC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000326F7u); RECOMP_ABI_CALL(0x001ED340u, sub_001ED340); /* call 0x001ED340 */

loc_000326F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000326FA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032700
 * Original: 0x00032700 - 0x0003276F (111 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00032700: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x238));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003275F; /* jne: not equal / not zero */

loc_0003270D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x23C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC8A0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0003276B; /* jp: parity */

loc_00032722: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x0003272Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032728u); } /* indirect call */
    }

loc_0003272E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032746; /* jne: not equal / not zero */

loc_00032732: ;
    eax = MEM32(esi + 0x230);
    ecx = MEM32(esi + 0x1E0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x230) = eax;

loc_00032746: ;
    eax = MEM32(esi + 0x230);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003276B; /* jle: less or equal (signed <=) */

loc_00032750: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x23C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0003275F: ;
    edx = MEM32(esi + 0x1E0);
    MEM32(esi + 0x234) = edx;

loc_0003276B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032770
 * Original: 0x00032770 - 0x00032789 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032770(void)
{

loc_00032770: ;
    eax = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx + 0x1E0);
    MEM32(ecx + 0x230) = eax;
    MEM32(ecx + 0x234) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00032790
 * Original: 0x00032790 - 0x000327F8 (104 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032790: ;
    eax = MEM32(ecx + 0x1A0);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000327B8; /* ja: above (unsigned >) */

loc_0003279E: ;
    eax = ZX8(MEM8(eax + 0x32810));
    { uint32_t _jt = MEM32(eax * 4 + 0x327F8); /* switch: 6 entries, 6 targets */
    if (_jt == 0x000327ACu) goto loc_000327AC;
    if (_jt == 0x000327B2u) goto loc_000327B2;
    if (_jt == 0x000327B8u) goto loc_000327B8;
    if (_jt == 0x000327E8u) goto loc_000327E8;
    if (_jt == 0x000327EEu) goto loc_000327EE;
    if (_jt == 0x000327F4u) goto loc_000327F4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000327AC: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_000327B2: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_000327B8: ;
    PUSH32(esp, 0x72C5C2A8);
    PUSH32(esp, 0x000327C2u); RECOMP_ABI_CALL(0x000326E0u, sub_000326E0); /* call 0x000326E0 */

loc_000327C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000327C8u); RECOMP_ABI_CALL(0x0015E9B0u, sub_0015E9B0); /* call 0x0015E9B0 */

loc_000327C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000327F4; /* ja: above (unsigned >) */

loc_000327D1: ;
    ecx = ZX8(MEM8(eax + 0x3283C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x32820); /* switch: 7 entries, 7 targets */
    if (_jt == 0x000327ACu) goto loc_000327AC;
    if (_jt == 0x000327B2u) goto loc_000327B2;
    if (_jt == 0x000327DFu) goto loc_000327DF;
    if (_jt == 0x000327E5u) goto loc_000327E5;
    if (_jt == 0x000327E8u) goto loc_000327E8;
    if (_jt == 0x000327EEu) goto loc_000327EE;
    if (_jt == 0x000327F4u) goto loc_000327F4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000327DF: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000327E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000327E8: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_000327EE: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_000327F4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00032860
 * Original: 0x00032860 - 0x000328B7 (87 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032860: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1F8); PUSH32(esp, 0x0003286Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032865u); } /* indirect call */
    }

loc_0003286B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000328B5; /* je: equal / zero */

loc_0003286F: ;
    ecx = esi;
    PUSH32(esp, 0x00032876u); RECOMP_ABI_CALL(0x00032460u, sub_00032460); /* call 0x00032460 */

loc_00032876: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000328B5; /* je: equal / zero */

loc_0003287C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00032883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032880u); } /* indirect call */
    }

loc_00032883: ;
    edx = MEM32(0x30C144);
    ecx = MEM32(0x30C140);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000328B5; /* jne: not equal / not zero */

loc_00032895: ;
    ecx = esi;
    PUSH32(esp, 0x0003289Cu); RECOMP_ABI_CALL(0x00017AE0u, sub_00017AE0); /* call 0x00017AE0 */

loc_0003289C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000328B5; /* je: equal / zero */

loc_000328A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x000328AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000328A4u); } /* indirect call */
    }

loc_000328AA: ;
    edx = MEM32(eax);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xD4)); return; /* indirect tail jmp */

loc_000328B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000328C0
 * Original: 0x000328C0 - 0x00032900 (64 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000328C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000328C0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x200)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x200), 2 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000328FC; /* jne: not equal / not zero */

loc_000328CA: ;
    PUSH32(esp, 0x000328CFu); RECOMP_ABI_CALL(0x00032460u, sub_00032460); /* call 0x00032460 */

loc_000328CF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000328FC; /* je: equal / zero */

loc_000328D5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000328DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000328D9u); } /* indirect call */
    }

loc_000328DC: ;
    edx = MEM32(0x30C144);
    ecx = MEM32(0x30C140);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000328FC; /* jne: not equal / not zero */

loc_000328EE: ;
    SET_LO8(eax, MEM8(esi + 0x240));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000328FC; /* je: equal / zero */

loc_000328F8: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000328FC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00032900
 * Original: 0x00032900 - 0x00032975 (117 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032900(void)
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

loc_00032900: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAD34BC4Du);
    ebx = ecx;
    PUSH32(esp, 0x0003290Du); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_0003290D: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0003294C; /* jbe: below or equal (unsigned <=) */

loc_0003291B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00032970; /* je: equal / zero */

loc_00032926: ;
    PUSH32(esp, esi);
    ecx = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00032930u); RECOMP_ABI_CALL(0x00012990u, sub_00012990); /* call 0x00012990 */

loc_00032930: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032952; /* je: equal / zero */

loc_00032934: ;
    eax = MEM32(ebx + 0x1E8);
    esi = 2;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0003294C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00032952: ;
    ecx = edi;
    PUSH32(esp, 0x00032959u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_00032959: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032962; /* jne: not equal / not zero */

loc_0003295D: ;
    esi = 1;

loc_00032962: ;
    eax = MEM32(ebx + 0x1E8);
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);

loc_00032970: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00032980
 * Original: 0x00032980 - 0x000329AA (42 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032980: ;
    eax = MEM32(ecx + 0x230);
    edx = MEM32(ecx + 0x1B8);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_0003299D; /* jns: not sign (positive) */

loc_00032992: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00032994: ;
    MEM32(ecx + 0x230) = eax;
    esp += 8; return; /* ret 4 */

loc_0003299D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00032994; /* jle: less or equal (signed <=) */

loc_000329A1: ;
    MEM32(ecx + 0x230) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000329B0
 * Original: 0x000329B0 - 0x00032A65 (181 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000329B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000329B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x000329C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000329BEu); } /* indirect call */
    }

loc_000329C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000329D2; /* jne: not equal / not zero */

loc_000329C8: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000329D2: ;
    ecx = esi;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x000329E1u); RECOMP_ABI_CALL(0x00030B50u, sub_00030B50); /* call 0x00030B50 */

loc_000329E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9176764u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9176764u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032A59; /* jne: not equal / not zero */

loc_000329E8: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x000329F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000329ECu); } /* indirect call */
    }

loc_000329F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032A59; /* je: equal / zero */

loc_000329F6: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00032A0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032A08u); } /* indirect call */
    }

loc_00032A0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032A27; /* je: equal / zero */

loc_00032A12: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00032A1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032A16u); } /* indirect call */
    }

loc_00032A1C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00032A27: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40000000);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00032A4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032A49u); } /* indirect call */
    }

loc_00032A4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00032A56u); RECOMP_ABI_CALL(0x00011A30u, sub_00011A30); /* call 0x00011A30 */

loc_00032A56: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032A59: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00032A70
 * Original: 0x00032A70 - 0x00032AA5 (53 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032A70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00032AA0; /* je: equal / zero */

loc_00032A7C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00032A83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032A80u); } /* indirect call */
    }

loc_00032A83: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032AA0; /* jne: not equal / not zero */

loc_00032A95: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x374); PUSH32(esp, 0x00032AA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032A9Au); } /* indirect call */
    }

loc_00032AA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032AB0
 * Original: 0x00032AB0 - 0x00032AF3 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x220);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032AF1; /* jne: not equal / not zero */

loc_00032ABD: ;
    eax = MEM32(0x30C274);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x30C23C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x30C23C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032ADC; /* jne: not equal / not zero */

loc_00032ACA: ;
    eax = MEM32(0x30C268);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00032AD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032AD4u); } /* indirect call */
    }

loc_00032AD7: ;
    eax = MEM32(0x30C274);

loc_00032ADC: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x218;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = 0x30C264;
    PUSH32(esp, 0x00032AF1u); RECOMP_ABI_CALL(0x0004D110u, sub_0004D110); /* call 0x0004D110 */

loc_00032AF1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00032B00
 * Original: 0x00032B00 - 0x00032B38 (56 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032B00: ;
    eax = MEM32(ecx + 0x220);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032B37; /* je: equal / zero */

loc_00032B0A: ;
    MEM32(0x30C274) = MEM32(0x30C274) - 1;
    _fa = (uint32_t)(MEM32(0x30C274)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x218);
    edx = MEM32(ecx + 0x21C);
    MEM32(ecx + 0x220) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x21C);
    ecx = MEM32(ecx + 0x218);
    MEM32(eax) = ecx;

loc_00032B37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00032B40
 * Original: 0x00032B40 - 0x00032BD1 (145 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032B40(void)
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

loc_00032B40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x00032B4Eu); RECOMP_ABI_CALL(0x000312F0u, sub_000312F0); /* call 0x000312F0 */

loc_00032B4E: ;
    MEM32(edi + 0x1A8) = 0;
    MEM32(edi + 0x1A4) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x38F3A1F6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00032B6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032B6Bu); } /* indirect call */
    }

loc_00032B6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032B81; /* je: equal / zero */

loc_00032B72: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032B78u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00032B78: ;
    MEMF(edi + 0x1AC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032B81: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE616026Du);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00032B8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032B8Au); } /* indirect call */
    }

loc_00032B8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032BA2; /* je: equal / zero */

loc_00032B91: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032B97u); RECOMP_ABI_CALL(0x00030E60u, sub_00030E60); /* call 0x00030E60 */

loc_00032B97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00032BA2u); RECOMP_ABI_CALL(0x00030F90u, sub_00030F90); /* call 0x00030F90 */

loc_00032BA2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB9057C55u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00032BAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032BABu); } /* indirect call */
    }

loc_00032BAE: ;
    MEM32(edi + 0x1B0) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFA83847Du);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00032BC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032BBDu); } /* indirect call */
    }

loc_00032BC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032BCC; /* je: equal / zero */

loc_00032BC4: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00032BCCu); RECOMP_ABI_CALL(0x00030EC0u, sub_00030EC0); /* call 0x00030EC0 */

loc_00032BCC: ;
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
 * sub_00032BE0
 * Original: 0x00032BE0 - 0x0003307E (1182 bytes, 363 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032BE0(void)
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

loc_00032BE0: ;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA8);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x00032BFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032BF5u); } /* indirect call */
    }

loc_00032BFB: ;
    edx = MEM32(edi);
    SET_LO8(ebx, LO8(eax));
    eax = esp + 0x74;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x13) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00032C0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032C0Au); } /* indirect call */
    }

loc_00032C0D: ;
    edx = MEM32(edi);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00032C1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032C19u); } /* indirect call */
    }

loc_00032C1C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033070; /* je: equal / zero */

loc_00032C24: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00032C2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032C28u); } /* indirect call */
    }

loc_00032C2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033031; /* je: equal / zero */

loc_00032C36: ;
    ecx = esi;
    PUSH32(esp, 0x00032C3Du); RECOMP_ABI_CALL(0x0003EE20u, sub_0003EE20); /* call 0x0003EE20 */

loc_00032C3D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00033031; /* ja: above (unsigned >) */

loc_00032C47: ;
    PUSH32(esp, ebp);
    { uint32_t _jt = MEM32(eax * 4 + 0x33080); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00032C4Fu) goto loc_00032C4F;
    if (_jt == 0x00032CD1u) goto loc_00032CD1;
    if (_jt == 0x00032D5Du) goto loc_00032D5D;
    if (_jt == 0x00032E20u) goto loc_00032E20;
    if (_jt == 0x00032F84u) goto loc_00032F84;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00032C4F: ;
    PUSH32(esp, edi);
    ecx = 0x30D884;
    PUSH32(esp, 0x00032C5Au); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00032C5A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033030; /* je: equal / zero */

loc_00032C64: ;
    eax = MEM32(edi + 0x98);
    edx = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00032C78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032C72u); } /* indirect call */
    }

loc_00032C78: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00033030; /* jbe: below or equal (unsigned <=) */

loc_00032C88: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC192E06Eu);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00032C9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032C99u); } /* indirect call */
    }

loc_00032C9C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00032CA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032CA6u); } /* indirect call */
    }

loc_00032CA9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032CB1u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00032CB1: ;
    eax = MEM32(esi + 0x1AC);
    edx = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x200); PUSH32(esp, 0x00032CC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032CBFu); } /* indirect call */
    }

loc_00032CC5: ;
    MEM8(0x3DC96C) = 0;
    goto loc_00033029;

loc_00032CD1: ;
    PUSH32(esp, edi);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x00032CDCu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00032CDC: ;
    PUSH32(esp, edi);
    ecx = 0x30D350;
    ebx = eax;
    PUSH32(esp, 0x00032CE9u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00032CE9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00033030; /* jne: not equal / not zero */

loc_00032CF3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033030; /* je: equal / zero */

loc_00032CFB: ;
    eax = MEM32(edi + 0x98);
    edx = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00032D0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032D09u); } /* indirect call */
    }

loc_00032D0F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00033030; /* jbe: below or equal (unsigned <=) */

loc_00032D1F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC192E06Eu);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00032D30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032D2Du); } /* indirect call */
    }

loc_00032D30: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00032D3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032D3Au); } /* indirect call */
    }

loc_00032D3D: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00032D44u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00032D44: ;
    eax = MEM32(esi + 0x1AC);
    edx = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x200); PUSH32(esp, 0x00032D58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032D52u); } /* indirect call */
    }

loc_00032D58: ;
    goto loc_00033029;

loc_00032D5D: ;
    PUSH32(esp, edi);
    ecx = 0x30D884;
    PUSH32(esp, 0x00032D68u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00032D68: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033030; /* je: equal / zero */

loc_00032D72: ;
    eax = MEM32(ebx + 0x970);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00033030; /* jle: less or equal (signed <=) */

loc_00032D88: ;
    ebp = ebx + 0x8F0;
    edi = edi;

loc_00032D90: ;
    edi = MEM32(ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032DB3; /* je: equal / zero */

loc_00032D97: ;
    eax = MEM32(edi + 8);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032DA3u); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_00032DA3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032DA9u); RECOMP_ABI_CALL(0x001ED370u, sub_001ED370); /* call 0x001ED370 */

loc_00032DA9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3336D20E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3336D20E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032DCE; /* je: equal / zero */

loc_00032DB3: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0x970);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00032D90; /* jl: less (signed <) */

loc_00032DC9: ;
    goto loc_00033030;

loc_00032DCE: ;
    PUSH32(esp, edi);
    ecx = 0x30C254;
    PUSH32(esp, 0x00032DD9u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00032DD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033030; /* je: equal / zero */

loc_00032DE1: ;
    ecx = MEM32(eax + 0x234);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1E0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00032DFB; /* jge: greater or equal (signed >=) */

loc_00032DEF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x234) = ecx;
    goto loc_00033029;

loc_00032DFB: ;
    ecx = MEM32(eax + 0x230);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1B8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00033030; /* jge: greater or equal (signed >=) */

loc_00032E0D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x230) = ecx;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00032E1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032E18u); } /* indirect call */
    }

loc_00032E1B: ;
    goto loc_00033030;

loc_00032E20: ;
    PUSH32(esp, edi);
    ecx = 0x30D884;
    PUSH32(esp, 0x00032E2Bu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00032E2B: ;
    PUSH32(esp, edi);
    ecx = 0x30D350;
    ebp = eax;
    PUSH32(esp, 0x00032E38u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00032E38: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032EC4; /* je: equal / zero */

loc_00032E40: ;
    eax = MEM32(ebp + 0x7B8);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00033030; /* jle: less or equal (signed <=) */

loc_00032E52: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00032E5Au); RECOMP_ABI_CALL(0x0004CF60u, sub_0004CF60); /* call 0x0004CF60 */

loc_00032E5A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00032E64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032E5Eu); } /* indirect call */
    }

loc_00032E64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032E93; /* je: equal / zero */

loc_00032E68: ;
    ecx = MEM32(eax + 0x1B8);
    _fa = (uint32_t)(MEM32(eax + 0x230)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x230), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00032E93; /* jge: greater or equal (signed >=) */

loc_00032E76: ;
    MEM32(eax + 0x230) = ecx;
    ecx = MEM32(eax + 0x234);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00032E93; /* jne: not equal / not zero */

loc_00032E88: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x368); PUSH32(esp, 0x00032E93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032E8Du); } /* indirect call */
    }

loc_00032E93: ;
    eax = MEM32(ebp + 0x7B8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00032E52; /* jl: less (signed <) */

loc_00032E9E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033030; /* je: equal / zero */

loc_00032EA6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xADF73C1);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00032EBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032EB7u); } /* indirect call */
    }

loc_00032EBA: ;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    goto loc_00033016;

loc_00032EC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033030; /* je: equal / zero */

loc_00032ECC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x00032ED6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032ED0u); } /* indirect call */
    }

loc_00032ED6: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033030; /* je: equal / zero */

loc_00032EE0: ;
    eax = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00033029; /* jle: less or equal (signed <=) */

loc_00032EF1: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00032EF9u); RECOMP_ABI_CALL(0x0003EAE0u, sub_0003EAE0); /* call 0x0003EAE0 */

loc_00032EF9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032F72; /* je: equal / zero */

loc_00032EFF: ;
    eax = MEM32(edi + 0x230);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1B8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00032F5E; /* jge: greater or equal (signed >=) */

loc_00032F0D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xADF73C1);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00032F1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032F1Bu); } /* indirect call */
    }

loc_00032F1E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00032F2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032F28u); } /* indirect call */
    }

loc_00032F2B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00032F33u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00032F33: ;
    ecx = MEM32(edi + 0x230);
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esi + 0x1AC), g_mxcsr, 1); /* cvttss2si */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 0x1B8);
    if ((_fas >= 0)) goto loc_00032F52; /* jns: not sign (positive) */

loc_00032F4E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00032F58;

loc_00032F52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00032F58; /* jle: less or equal (signed <=) */

loc_00032F56: ;
    eax = ecx;

loc_00032F58: ;
    MEM32(edi + 0x230) = eax;

loc_00032F5E: ;
    eax = MEM32(edi + 0x1E0);
    _fa = (uint32_t)(MEM32(edi + 0x234)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x234), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00032F72; /* jge: greater or equal (signed >=) */

loc_00032F6C: ;
    MEM32(edi + 0x234) = eax;

loc_00032F72: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00032EF1; /* jl: less (signed <) */

loc_00032F7F: ;
    goto loc_00033029;

loc_00032F84: ;
    PUSH32(esp, edi);
    ecx = 0x30D884;
    PUSH32(esp, 0x00032F8Fu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00032F8F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033030; /* je: equal / zero */

loc_00032F99: ;
    eax = MEM32(edi + 0x7C8);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00033030; /* jle: less or equal (signed <=) */

loc_00032FAB: ;
    goto loc_00032FB0;

    /* nop */

loc_00032FB0: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00032FB8u); RECOMP_ABI_CALL(0x0004CF80u, sub_0004CF80); /* call 0x0004CF80 */

loc_00032FB8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00032FC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032FBCu); } /* indirect call */
    }

loc_00032FC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032FF1; /* je: equal / zero */

loc_00032FC6: ;
    _fa = (uint32_t)(MEM32(eax + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A0), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032FF1; /* jne: not equal / not zero */

loc_00032FCF: ;
    ecx = MEM32(eax + 0x1B8);
    _fa = (uint32_t)(MEM32(eax + 0x230)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x230), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00032FF1; /* jge: greater or equal (signed >=) */

loc_00032FDD: ;
    MEM32(eax + 0x230) = ecx;
    ecx = MEM32(eax + 0x1E0);
    MEM32(eax + 0x234) = ecx;
    SET_LO8(ebx, 1);

loc_00032FF1: ;
    eax = MEM32(edi + 0x7C8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00032FB0; /* jl: less (signed <) */

loc_00032FFC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033030; /* je: equal / zero */

loc_00033000: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xADF73C1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00033011u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003300Eu); } /* indirect call */
    }

loc_00033011: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;

loc_00033016: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0003301Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003301Bu); } /* indirect call */
    }

loc_0003301E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00033026u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00033026: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00033029: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00033030u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003302Du); } /* indirect call */
    }

loc_00033030: ;
    POP32(esp, ebp);

loc_00033031: ;
    eax = MEM32(esi + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033060; /* je: equal / zero */

loc_0003303B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00033048u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033045u); } /* indirect call */
    }

loc_00033048: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00033055u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033052u); } /* indirect call */
    }

loc_00033055: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003305Du); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0003305D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00033060: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00033070: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000330A0
 * Original: 0x000330A0 - 0x00033457 (951 bytes, 302 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000330A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000330A0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000330CF; /* je: equal / zero */

loc_000330B1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000330B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000330B5u); } /* indirect call */
    }

loc_000330B8: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(esp + 0x30) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000330D4; /* je: equal / zero */

loc_000330CF: ;
    MEM8(esp + 0x30) = 0;

loc_000330D4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033123; /* je: equal / zero */

loc_000330D8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000330DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000330DCu); } /* indirect call */
    }

loc_000330DF: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033127; /* je: equal / zero */

loc_000330F1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000330F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000330F5u); } /* indirect call */
    }

loc_000330F8: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033127; /* je: equal / zero */

loc_0003310A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00033111u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003310Eu); } /* indirect call */
    }

loc_00033111: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033127; /* je: equal / zero */

loc_00033123: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00033129;

loc_00033127: ;
    SET_LO8(ebx, 1);

loc_00033129: ;
    eax = MEM32(ebp + 0x1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003315D; /* je: equal / zero */

loc_00033133: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FC82EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FC82EE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003313E; /* jne: not equal / not zero */

loc_0003313A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003315D; /* jne: not equal / not zero */

loc_0003313E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50BD7725) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50BD7725 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003344B; /* jne: not equal / not zero */

loc_00033149: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033165; /* jne: not equal / not zero */

loc_00033151: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0003315D: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003316F; /* je: equal / zero */

loc_00033165: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DF154)); /* movss */
    goto loc_0003317B;

loc_0003316F: ;
    xmm0 = XMM_SCALAR(MEMF(0x30C240)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */

loc_0003317B: ;
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0003318Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003318Au); } /* indirect call */
    }

loc_0003318D: ;
    edx = MEM32(ebp);
    edi = eax;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0003319Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033199u); } /* indirect call */
    }

loc_0003319C: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003344B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000331E4: ;
    ecx = ebp;
    PUSH32(esp, 0x000331EBu); RECOMP_ABI_CALL(0x0003EE20u, sub_0003EE20); /* call 0x0003EE20 */

loc_000331EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003344B; /* ja: above (unsigned >) */

loc_000331F4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x33458); /* switch: 6 entries, 6 targets */
    if (_jt == 0x000331FBu) goto loc_000331FB;
    if (_jt == 0x00033208u) goto loc_00033208;
    if (_jt == 0x00033260u) goto loc_00033260;
    if (_jt == 0x000332FFu) goto loc_000332FF;
    if (_jt == 0x0003330Bu) goto loc_0003330B;
    if (_jt == 0x000333E8u) goto loc_000333E8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000331FB: ;
    PUSH32(esp, esi);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x00033206u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00033206: ;
    goto loc_00033228;

loc_00033208: ;
    PUSH32(esp, esi);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x00033213u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00033213: ;
    PUSH32(esp, esi);
    ecx = 0x30D350;
    edi = eax;
    PUSH32(esp, 0x00033220u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00033220: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003344B; /* jne: not equal / not zero */

loc_00033228: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003344B; /* je: equal / zero */

loc_00033230: ;
    ecx = MEM32(eax + 0x98);
    edx = MEM32(eax);
    MEM32(esp + 0x30) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00033244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003323Eu); } /* indirect call */
    }

loc_00033244: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0003344B; /* jbe: below or equal (unsigned <=) */

loc_00033254: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00033260: ;
    PUSH32(esp, esi);
    ecx = 0x30D884;
    PUSH32(esp, 0x0003326Bu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0003326B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003344B; /* je: equal / zero */

loc_00033275: ;
    eax = MEM32(ebx + 0x970);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003344B; /* jle: less or equal (signed <=) */

loc_00033285: ;
    edi = ebx + 0x8F0;
    goto loc_00033290;

    /* nop */

loc_00033290: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000332B2; /* je: equal / zero */

loc_00033296: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000332A2u); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_000332A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000332A8u); RECOMP_ABI_CALL(0x001ED370u, sub_001ED370); /* call 0x001ED370 */

loc_000332A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3336D20E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3336D20E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000332CC; /* je: equal / zero */

loc_000332B2: ;
    eax = MEM32(ebx + 0x970);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00033290; /* jl: less (signed <) */

loc_000332C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000332CC: ;
    PUSH32(esp, esi);
    ecx = 0x30C254;
    PUSH32(esp, 0x000332D7u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000332D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003344B; /* je: equal / zero */

loc_000332DF: ;
    ecx = MEM32(eax + 0x234);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1E0) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000332FF; /* jl: less (signed <) */

loc_000332ED: ;
    edx = MEM32(eax + 0x230);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x1B8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003344B; /* jge: greater or equal (signed >=) */

loc_000332FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0003330B: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033373; /* je: equal / zero */

loc_00033313: ;
    PUSH32(esp, esi);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x0003331Eu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0003331E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003344B; /* je: equal / zero */

loc_00033328: ;
    eax = MEM32(esi + 0x7B8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003344B; /* jle: less or equal (signed <=) */

loc_00033338: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00033340u); RECOMP_ABI_CALL(0x0004CF60u, sub_0004CF60); /* call 0x0004CF60 */

loc_00033340: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x0003334Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033344u); } /* indirect call */
    }

loc_0003334A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003335C; /* je: equal / zero */

loc_0003334E: ;
    ecx = MEM32(eax + 0x230);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1B8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000332FF; /* jl: less (signed <) */

loc_0003335C: ;
    eax = MEM32(esi + 0x7B8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00033338; /* jl: less (signed <) */

loc_00033367: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00033373: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003344B; /* je: equal / zero */

loc_0003337B: ;
    PUSH32(esp, esi);
    ecx = 0x30D350;
    PUSH32(esp, 0x00033386u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00033386: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x00033390u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003338Au); } /* indirect call */
    }

loc_00033390: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003344B; /* je: equal / zero */

loc_0003339A: ;
    ebx = MEM32(edi + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003344B; /* jle: less or equal (signed <=) */

loc_000333A7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000333AFu); RECOMP_ABI_CALL(0x0003EAE0u, sub_0003EAE0); /* call 0x0003EAE0 */

loc_000333AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000333D7; /* je: equal / zero */

loc_000333B3: ;
    ecx = MEM32(eax + 0x230);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1B8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000332FF; /* jl: less (signed <) */

loc_000333C5: ;
    edx = MEM32(eax + 0x234);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x1E0) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000332FF; /* jl: less (signed <) */

loc_000333D7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000333A7; /* jl: less (signed <) */

loc_000333DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000333E8: ;
    PUSH32(esp, esi);
    ecx = 0x30D884;
    PUSH32(esp, 0x000333F3u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000333F3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003344B; /* je: equal / zero */

loc_000333F9: ;
    eax = MEM32(esi + 0x7C8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0003344B; /* jle: less or equal (signed <=) */

loc_00033405: ;
    ebx = 9;
    /* nop */

loc_00033410: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00033418u); RECOMP_ABI_CALL(0x0004CF80u, sub_0004CF80); /* call 0x0004CF80 */

loc_00033418: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00033422u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003341Cu); } /* indirect call */
    }

loc_00033422: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033440; /* je: equal / zero */

loc_00033426: ;
    _fa = (uint32_t)(MEM32(eax + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033440; /* jne: not equal / not zero */

loc_0003342E: ;
    ecx = MEM32(eax + 0x230);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1B8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000332FF; /* jl: less (signed <) */

loc_00033440: ;
    eax = MEM32(esi + 0x7C8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00033410; /* jl: less (signed <) */

loc_0003344B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00033470
 * Original: 0x00033470 - 0x00033475 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033470: ;
    g_seh_ebp = ebp; sub_00030EE0(); return; /* tail jmp 0x00030EE0 */

}

/**
 * sub_00033480
 * Original: 0x00033480 - 0x0003354E (206 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033480(void)
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

loc_00033480: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0003348Eu); RECOMP_ABI_CALL(0x000312F0u, sub_000312F0); /* call 0x000312F0 */

loc_0003348E: ;
    MEM32(edi + 0x1A8) = 0;
    MEM32(edi + 0x1A4) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7E517276);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000334AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000334ABu); } /* indirect call */
    }

loc_000334AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000334C3; /* je: equal / zero */

loc_000334B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000334B8u); RECOMP_ABI_CALL(0x00030F50u, sub_00030F50); /* call 0x00030F50 */

loc_000334B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000334C3u); RECOMP_ABI_CALL(0x00030F90u, sub_00030F90); /* call 0x00030F90 */

loc_000334C3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFA83847Du);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000334CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000334CCu); } /* indirect call */
    }

loc_000334CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000334DB; /* je: equal / zero */

loc_000334D3: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000334DBu); RECOMP_ABI_CALL(0x00030EC0u, sub_00030EC0); /* call 0x00030EC0 */

loc_000334DB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75D3DCFB);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000334E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000334E4u); } /* indirect call */
    }

loc_000334E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000334FC; /* je: equal / zero */

loc_000334EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000334F1u); RECOMP_ABI_CALL(0x00095C20u, sub_00095C20); /* call 0x00095C20 */

loc_000334F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x1AC) = eax;
    goto loc_00033506;

loc_000334FC: ;
    MEM32(edi + 0x1AC) = 0;

loc_00033506: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1B55DA04);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00033512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003350Fu); } /* indirect call */
    }

loc_00033512: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033534; /* je: equal / zero */

loc_00033516: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003351Cu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0003351C: ;
    MEMF(edi + 0x1B0) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x1A4) = 0x26E7D29F;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00033534: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x1B0) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x1A4) = 0x26E7D29F;
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
 * sub_00033550
 * Original: 0x00033550 - 0x000336AC (348 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00033550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240BFB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = 0x2DF0F0;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    MEM32(esp + 0x90) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033590u); RECOMP_ABI_CALL(0x000314F0u, sub_000314F0); /* call 0x000314F0 */

loc_00033590: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000335A9; /* jne: not equal / not zero */

loc_00033594: ;
    ecx = MEM32(esp + 0x84);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000335A9: ;
    SET_LO8(eax, MEM8(esi + 0x1C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033695; /* je: equal / zero */

loc_000335B7: ;
    edx = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x000335C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000335C0u); } /* indirect call */
    }

loc_000335C6: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000335CDu); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_000335CD: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x000335DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000335D6u); } /* indirect call */
    }

loc_000335DC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000335E3u); RECOMP_ABI_CALL(0x0012FFC0u, sub_0012FFC0); /* call 0x0012FFC0 */

loc_000335E3: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000335F2u); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_000335F2: ;
    edx = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1EC); PUSH32(esp, 0x00033601u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000335FBu); } /* indirect call */
    }

loc_00033601: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033608u); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_00033608: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033649u); RECOMP_ABI_CALL(0x0022FA9Eu, sub_0022FA9E); /* call 0x0022FA9E */

loc_00033649: ;
    PUSH32(esp, eax);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033654u); RECOMP_ABI_CALL(0x0022F9BCu, sub_0022F9BC); /* call 0x0022F9BC */

loc_00033654: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esi);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = esp + 0x40;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00033695u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033692u); } /* indirect call */
    }

loc_00033695: ;
    ecx = MEM32(esp + 0x84);
    SET_LO8(eax, 1);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000336B0
 * Original: 0x000336B0 - 0x00033706 (86 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000336B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000336B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000336C1u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_000336C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033700; /* jne: not equal / not zero */

loc_000336C5: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000336D0u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000336D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000336E0u); RECOMP_ABI_CALL(0x00122090u, sub_00122090); /* call 0x00122090 */

loc_000336E0: ;
    edi = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000336F9; /* je: equal / zero */

loc_000336E9: ;
    PUSH32(esp, 0x2DE4E4);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000336F9u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000336F9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00033700: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033710
 * Original: 0x00033710 - 0x00033789 (121 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033710: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00033713: ;
    eax = esi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0003373B; /* je: equal / zero */

loc_0003371A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0003372D; /* je: equal / zero */

loc_0003371D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00033751; /* jne: not equal / not zero */

loc_00033720: ;
    eax = MEM32(0x316A50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F2CB2DA);
    goto loc_00033747;

loc_0003372D: ;
    ecx = MEM32(0x316A4C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6B007303);
    goto loc_00033747;

loc_0003373B: ;
    edx = MEM32(0x316A48);
    PUSH32(esp, edx);
    PUSH32(esp, 0x81E077A9u);

loc_00033747: ;
    ecx = 0x414150;
    PUSH32(esp, 0x00033751u); RECOMP_ABI_CALL(0x00122090u, sub_00122090); /* call 0x00122090 */

loc_00033751: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00033713; /* jl: less (signed <) */

loc_00033757: ;
    eax = MEM32(0x317260);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00033783; /* jle: less or equal (signed <=) */

loc_00033762: ;
    eax = MEM32(esi * 4 + 0x316A58);
    PUSH32(esp, 0x2DE4E4);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x00033779u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_00033779: ;
    eax = MEM32(0x317260);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00033762; /* jl: less (signed <) */

loc_00033783: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00030EE0(); return; /* tail jmp 0x00030EE0 */

}

/**
 * sub_00033790
 * Original: 0x00033790 - 0x00033804 (116 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033790: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = eax;
    if ((_fa == 0)) goto loc_000337E4; /* je: equal / zero */

loc_0003379E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000337C4; /* je: equal / zero */

loc_000337A1: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00033802; /* jne: not equal / not zero */

loc_000337A4: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F2CB2DA);
    ecx = 0x414150;
    PUSH32(esp, 0x000337B7u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000337B7: ;
    ecx = MEM32(0x316A50);
    eax = MEM32(esp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000337C4: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6B007303);
    ecx = 0x414150;
    PUSH32(esp, 0x000337D7u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000337D7: ;
    ecx = MEM32(0x316A4C);
    eax = MEM32(esp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000337E4: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x81E077A9u);
    ecx = 0x414150;
    PUSH32(esp, 0x000337F7u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000337F7: ;
    ecx = MEM32(0x316A48);
    eax = MEM32(esp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00033802: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00033810
 * Original: 0x00033810 - 0x0003388A (122 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033810: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    MEM32(esp + 8) = 0;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00033834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003382Eu); } /* indirect call */
    }

loc_00033834: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003384D; /* je: equal / zero */

loc_00033838: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00033842u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003383Cu); } /* indirect call */
    }

loc_00033842: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_0003384D: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40000000);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00033872u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003386Fu); } /* indirect call */
    }

loc_00033872: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0003387Cu); RECOMP_ABI_CALL(0x00011A30u, sub_00011A30); /* call 0x00011A30 */

loc_0003387C: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00033890
 * Original: 0x00033890 - 0x0003396D (221 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00033890(void)
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

loc_00033890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000338A5u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000338A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5ED2723B);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000338B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000338AEu); } /* indirect call */
    }

loc_000338B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033967; /* je: equal / zero */

loc_000338B9: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000338BFu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_000338BF: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x660E4490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000338CDu); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_000338CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000338EF; /* je: equal / zero */

loc_000338D4: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xAC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000338EFu); RECOMP_ABI_CALL(0x00057F50u, sub_00057F50); /* call 0x00057F50 */

loc_000338EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = 0;
    ecx = 0x1F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003390Fu); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0003390F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    edx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003391Bu); RECOMP_ABI_CALL(0x0003EE20u, sub_0003EE20); /* call 0x0003EE20 */

loc_0003391B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, 0x80);
    if (CMP_NE(_fa, _fb)) goto loc_00033931; /* jne: not equal / not zero */

loc_00033925: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBA4D991Fu);
    goto loc_0003393B;

loc_00033931: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x95A675F7u);

loc_0003393B: ;
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033942u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_00033942: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003394Du); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0003394D: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2DE4E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x361B90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00033964u); RECOMP_ABI_CALL(0x001002D0u, sub_001002D0); /* call 0x001002D0 */

loc_00033964: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00033967: ;
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
 * sub_00033970
 * Original: 0x00033970 - 0x00033996 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033970: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00033978u); RECOMP_ABI_CALL(0x000310E0u, sub_000310E0); /* call 0x000310E0 */

loc_00033978: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2DF158;
    MEM32(esi + 0x1A0) = eax;
    MEM32(esi + 0x1A4) = eax;
    MEM32(esi + 0x1A8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
