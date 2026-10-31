/**
 * Mercenaries - Recompiled code chunk 12
 * Functions: 250 (0x000921D0 - 0x0009CA60)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000921D0
 * Original: 0x000921D0 - 0x000921D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000921D0(void)
{

loc_000921D0: ;
    MEM32(ecx) = 0x2E69F0;
    esp += 4; return; /* ret */

}

/**
 * sub_000921E0
 * Original: 0x000921E0 - 0x000921FF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000921E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000921E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E69F0;
    if (TEST_Z(_fa, _fb)) goto loc_000921F9; /* je: equal / zero */

loc_000921F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000921F6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000921F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000921F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092200
 * Original: 0x00092200 - 0x00092212 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092200(void)
{

loc_00092200: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00092208u); RECOMP_ABI_CALL(0x000689B0u, sub_000689B0); /* call 0x000689B0 */

loc_00092208: ;
    MEM32(esi) = 0x2E6870;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00092220
 * Original: 0x00092220 - 0x0009223E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092220: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00092228u); RECOMP_ABI_CALL(0x000920A0u, sub_000920A0); /* call 0x000920A0 */

loc_00092228: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092238; /* je: equal / zero */

loc_0009222F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00092235u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00092235: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00092238: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092240
 * Original: 0x00092240 - 0x0009244C (524 bytes, 142 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092240(void)
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

loc_00092240: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00092444; /* je: equal / zero */

loc_00092257: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x51C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC394); /* comiss */
    if ((_fca > _fcb)) goto loc_00092444; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC394)) */

loc_0009226C: ;
    eax = MEM32(ebp);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00092279u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092276u); } /* indirect call */
    }

loc_00092279: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    edx = MEM32(esi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00092299u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092296u); } /* indirect call */
    }

loc_00092299: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x28); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x2C); /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    ecx = ebp;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x34) = 1;
    PUSH32(esp, 0x000922ECu); RECOMP_ABI_CALL(0x00012990u, sub_00012990); /* call 0x00012990 */

loc_000922EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000922F8; /* je: equal / zero */

loc_000922F0: ;
    MEM32(esp + 0x34) = 2;

loc_000922F8: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0009231D; /* je: equal / zero */

loc_00092300: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00092307u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092304u); } /* indirect call */
    }

loc_00092307: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009231D; /* jne: not equal / not zero */

loc_00092319: ;
    ebx = esi;
    goto loc_0009231F;

loc_0009231D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009231F: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    MEM32(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x00092333u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009232Du); } /* indirect call */
    }

loc_00092333: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092443; /* je: equal / zero */

loc_0009233B: ;
    PUSH32(esp, edi);
    /* nop */

loc_00092340: ;
    _fa = (uint32_t)(MEM32(eax + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2D8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092426; /* je: equal / zero */

loc_0009234D: ;
    esi = MEM32(eax + 0x28C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = MEM32(eax + 0x27C);
    if (CMP_EQ(_fa, _fb)) goto loc_00092426; /* je: equal / zero */

loc_00092361: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092426; /* je: equal / zero */

loc_00092369: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    edx = MEM32(esp + 0x3C);
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 4) = 0;
    MEM8(esi + 0x30) = LO8(eax);
    ecx = MEM32(edi + 0x1E8);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092426; /* je: equal / zero */

loc_0009238D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00092394u); RECOMP_ABI_CALL(0x000665B0u, sub_000665B0); /* call 0x000665B0 */

loc_00092394: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000923A2u); RECOMP_ABI_CALL(0x00064690u, sub_00064690); /* call 0x00064690 */

loc_000923A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00092426; /* jl: less (signed <) */

loc_000923AA: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x000923B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000923B0u); } /* indirect call */
    }

loc_000923B6: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x000923C2u); RECOMP_ABI_CALL(0x00032900u, sub_00032900); /* call 0x00032900 */

loc_000923C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000923E6; /* jne: not equal / not zero */

loc_000923CC: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E4258)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */

loc_000923E6: ;
    PUSH32(esp, ebp);
    ecx = esi;
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000923F3u); RECOMP_ABI_CALL(0x000721A0u, sub_000721A0); /* call 0x000721A0 */

loc_000923F3: ;
    PUSH32(esp, 0xB421904);
    ecx = edi;
    PUSH32(esp, 0x000923FFu); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_000923FF: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00092422; /* jbe: below or equal (unsigned <=) */

loc_0009240D: ;
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x51C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD418); /* comiss */
    if ((_fca > _fcb)) goto loc_00092426; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DD418)) */

loc_00092422: ;
    MEM8(esi + 0x30) = MEM8(esi + 0x30) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00092426: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x0009243Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092434u); } /* indirect call */
    }

loc_0009243A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092340; /* jne: not equal / not zero */

loc_00092442: ;
    POP32(esp, edi);

loc_00092443: ;
    POP32(esp, ebx);

loc_00092444: ;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00092450
 * Original: 0x00092450 - 0x0009248F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092450(void)
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

loc_00092450: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009247F; /* je: equal / zero */

loc_00092458: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009245Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009245Cu); } /* indirect call */
    }

loc_0009245F: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009247F; /* jne: not equal / not zero */

loc_00092471: ;
    fp_push(MEMF(esi + 0x3CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x278)); /* fmul dword ptr [esi + 0x278] */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009247F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(eax + 0x3CC)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x278)); /* fmul dword ptr [eax + 0x278] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00092490
 * Original: 0x00092490 - 0x00092514 (132 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00092490: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x40);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000924C4; /* je: equal / zero */

loc_000924A7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000924AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000924ABu); } /* indirect call */
    }

loc_000924AE: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000924C4; /* jne: not equal / not zero */

loc_000924C0: ;
    ecx = esi;
    goto loc_000924C6;

loc_000924C4: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000924C6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x000924D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000924CAu); } /* indirect call */
    }

loc_000924D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00092509; /* je: equal / zero */

loc_000924D4: ;
    esi = MEM32(eax + 0x28C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00092509; /* je: equal / zero */

loc_000924DE: ;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000924EFu); RECOMP_ABI_CALL(0x00065AE0u, sub_00065AE0); /* call 0x00065AE0 */

loc_000924EF: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000924F7u); RECOMP_ABI_CALL(0x00096360u, sub_00096360); /* call 0x00096360 */

loc_000924F7: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00092509: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092520
 * Original: 0x00092520 - 0x00092552 (50 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092520(void)
{

loc_00092520: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    edx = MEM32(esi + 4);
    edi = MEM32(eax);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00092536u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092533u); } /* indirect call */
    }

loc_00092536: ;
    ecx = MEM32(esi + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xB0); PUSH32(esp, 0x00092540u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009253Au); } /* indirect call */
    }

loc_00092540: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009254Du); RECOMP_ABI_CALL(0x000640E0u, sub_000640E0); /* call 0x000640E0 */

loc_0009254D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092560
 * Original: 0x00092560 - 0x00092691 (305 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092560: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    ebp = MEM32(esi + 0x40);
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ebx, 1);
    if ((_fa == 0)) goto loc_000925E7; /* je: equal / zero */

loc_00092577: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00092593; /* je: equal / zero */

loc_0009257A: ;
    eax = MEM32(esi + 0x584);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 8))); }
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    MEM32(esi + 0x584) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00092593: ;
    eax = MEM32(esi + 0x588);
    ecx = MEM32(esi + 0x584);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x584) = ecx;
    eax = ecx;
    if ((_fas >= 0)) goto loc_000925C4; /* jns: not sign (positive) */

loc_000925AB: ;
    eax = 1;
    MEM32(esi + 0x588) = eax;
    MEM32(esi + 0x584) = eax;

loc_000925BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000925C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000925BC; /* jl: less (signed <) */

loc_000925C9: ;
    MEM32(esi + 0x588) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x584) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000925E7: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009260B; /* je: equal / zero */

loc_000925F1: ;
    edx = MEM32(esi + 0x584);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x3DC970;
    PUSH32(esp, 0x00092603u); RECOMP_ABI_CALL(0x00169F80u, sub_00169F80); /* call 0x00169F80 */

loc_00092603: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0009263A; /* jne: not equal / not zero */

loc_0009260B: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esi + 0x584);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00092628; /* jge: greater or equal (signed >=) */

loc_00092619: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x584) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00092628: ;
    ecx = MEM32(edi + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(ecx + 0x40) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0009263A: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(0x371DD8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00092649u); RECOMP_ABI_CALL(0x001246E0u, sub_001246E0); /* call 0x001246E0 */

loc_00092649: ;
    ebx = eax;
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esi + 0x584) = ecx;
    edx = MEM32(edi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = 0x3DC970;
    PUSH32(esp, 0x0009266Au); RECOMP_ABI_CALL(0x00169E90u, sub_00169E90); /* call 0x00169E90 */

loc_0009266A: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = 0x3DC970;
    PUSH32(esp, 0x0009267Bu); RECOMP_ABI_CALL(0x00169E10u, sub_00169E10); /* call 0x00169E10 */

loc_0009267B: ;
    edi = MEM32(edi + 8);
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x00092689u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092683u); } /* indirect call */
    }

loc_00092689: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000926A0
 * Original: 0x000926A0 - 0x000926BA (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000926A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000926A0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax) = 0x2E69F8;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000926C0
 * Original: 0x000926C0 - 0x000926DF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000926C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000926C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E69F8;
    if (TEST_Z(_fa, _fb)) goto loc_000926D9; /* je: equal / zero */

loc_000926D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000926D6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000926D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000926D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000926E0
 * Original: 0x000926E0 - 0x000927E8 (264 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000926E0(void)
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

loc_000926E0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000927E1; /* je: equal / zero */

loc_000926F1: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000927E0; /* je: equal / zero */

loc_000926FD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00092704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092701u); } /* indirect call */
    }

loc_00092704: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000927E0; /* jne: not equal / not zero */

loc_0009271A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00092721u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009271Eu); } /* indirect call */
    }

loc_00092721: ;
    fp_top() = -fp_top(); /* fchs */
    eax = edi + 0xC;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0xC;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0009274Du); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009274D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = MEM32(esi);
    xmm2 = xmm0; /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    ecx = esp + 0x34;
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = esi;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0009279Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009279Bu); } /* indirect call */
    }

loc_0009279E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x1C); /* addss */
    ecx = MEM32(edi + 0x18);
    eax = esp + 0x28;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000927E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000927DAu); } /* indirect call */
    }

loc_000927E0: ;
    POP32(esp, esi);

loc_000927E1: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000927F0
 * Original: 0x000927F0 - 0x00092924 (308 bytes, 90 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000927F0(void)
{
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

loc_000927F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00092817; /* je: equal / zero */

loc_000927FE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00092805u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092802u); } /* indirect call */
    }

loc_00092805: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00092819; /* je: equal / zero */

loc_00092817: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00092819: ;
    edx = MEM32(edi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00092825u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092822u); } /* indirect call */
    }

loc_00092825: ;
    ecx = MEM32(esp + 0x28);
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esi);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    ecx = esi;
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00092881u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009287Eu); } /* indirect call */
    }

loc_00092881: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 0x2C);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000928A8u); RECOMP_ABI_CALL(0x000646E0u, sub_000646E0); /* call 0x000646E0 */

loc_000928A8: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, 0x000928B8u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_000928B8: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000928C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000928C5u); } /* indirect call */
    }

loc_000928C8: ;
    ecx = eax;
    PUSH32(esp, 0x000928CFu); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_000928CF: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000928E1u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_000928E1: ;
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30DA60)); /* fld float */
    POP32(esp, edi);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    POP32(esp, esi);
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00092910; /* jbe: below or equal (unsigned <=) */

loc_000928FC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E686C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_00092910: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E5124)); /* fmul dword ptr [0x2e5124] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00092930
 * Original: 0x00092930 - 0x00092B79 (585 bytes, 139 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092930(void)
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

loc_00092930: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0009294B; /* jne: not equal / not zero */

loc_0009293E: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009294B: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00092971u); RECOMP_ABI_CALL(0x00066D90u, sub_00066D90); /* call 0x00066D90 */

loc_00092971: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0009297Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009297Bu); } /* indirect call */
    }

loc_0009297E: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009298Du); RECOMP_ABI_CALL(0x000927F0u, sub_000927F0); /* call 0x000927F0 */

loc_0009298D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC880)); /* fadd dword ptr [0x2dc880] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, 0x101);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00092A1Au); RECOMP_ABI_CALL(0x00068220u, sub_00068220); /* call 0x00068220 */

loc_00092A1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092A32; /* je: equal / zero */

loc_00092A1E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */

loc_00092A32: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00092A3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092A3Cu); } /* indirect call */
    }

loc_00092A3F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E25E4); /* addss */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00092A91u); RECOMP_ABI_CALL(0x00068480u, sub_00068480); /* call 0x00068480 */

loc_00092A91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(0x2DC3B4)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00092B68; /* je: equal / zero */

loc_00092AA1: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x30DA50)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00092B4D; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00092AEC: ;
    xmm1 = XMM_SCALAR(MEMF(0x30DA54)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00092B0D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00092AF9: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x44); /* mulss */
    goto loc_00092B5B;

loc_00092B0D: ;
    xmm2 = XMM_SCALAR(MEMF(0x30DA58)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00092B61; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00092B1A: ;
    xmm1 = XMM_SCALAR(MEMF(0x30DA5C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00092B4D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00092B27: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x44); /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    goto loc_00092B61;

loc_00092B4D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC098); /* mulss */

loc_00092B5B: ;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */

loc_00092B61: ;
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 0x44); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00092B6E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esp + 0x44)) */

loc_00092B68: ;
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */

loc_00092B6E: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00092B80
 * Original: 0x00092B80 - 0x00092D13 (403 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092B80(void)
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

loc_00092B80: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00092B9B; /* jne: not equal / not zero */

loc_00092B8E: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00092B9B: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00092BC1u); RECOMP_ABI_CALL(0x00066D90u, sub_00066D90); /* call 0x00066D90 */

loc_00092BC1: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00092BCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092BCBu); } /* indirect call */
    }

loc_00092BCE: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092BDDu); RECOMP_ABI_CALL(0x000927F0u, sub_000927F0); /* call 0x000927F0 */

loc_00092BDD: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC880)); /* fadd dword ptr [0x2dc880] */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, 0x101);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00092C64u); RECOMP_ABI_CALL(0x00068220u, sub_00068220); /* call 0x00068220 */

loc_00092C64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092C7C; /* je: equal / zero */

loc_00092C68: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */

loc_00092C7C: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00092C89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092C86u); } /* indirect call */
    }

loc_00092C89: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC3F0); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E25E4); /* addss */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00092CDBu); RECOMP_ABI_CALL(0x00068480u, sub_00068480); /* call 0x00068480 */

loc_00092CDB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092CF3; /* je: equal / zero */

loc_00092CDF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E165C); /* mulss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */

loc_00092CF3: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3B4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x44); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00092D08; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x44)) */

loc_00092D02: ;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */

loc_00092D08: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00092D20
 * Original: 0x00092D20 - 0x0009300C (748 bytes, 175 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092D20(void)
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

loc_00092D20: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00092ED0; /* je: equal / zero */

loc_00092D32: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x2C;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x00092D58u); RECOMP_ABI_CALL(0x00066D90u, sub_00066D90); /* call 0x00066D90 */

loc_00092D58: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00092D65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092D62u); } /* indirect call */
    }

loc_00092D65: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x18); /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x18); /* subss */
    xmm7 = xmm2; /* movaps */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E3F7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00092ED0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00092E1F: ;
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2DD8EC)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00092EC9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00092E8D: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC3C4)); /* fadd dword ptr [0x2dc3c4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC894)); /* fmul dword ptr [0x2dc894] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00092EC9: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x3C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00092EDD; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x3C)) */

loc_00092ED0: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00092EDD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, 0x101);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x34;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00092F4Eu); RECOMP_ABI_CALL(0x00068220u, sub_00068220); /* call 0x00068220 */

loc_00092F4E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092F66; /* je: equal / zero */

loc_00092F52: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3C4); /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */

loc_00092F66: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    PUSH32(esp, 0x101);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = esp + 0x34;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00092FD4u); RECOMP_ABI_CALL(0x00068220u, sub_00068220); /* call 0x00068220 */

loc_00092FD4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092FEC; /* je: equal / zero */

loc_00092FD8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC394); /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */

loc_00092FEC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3B4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x3C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00093001; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x3C)) */

loc_00092FFB: ;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */

loc_00093001: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00093010
 * Original: 0x00093010 - 0x00093038 (40 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093010(void)
{

loc_00093010: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x5A4) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x5A8) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x5AC) = eax;
    MEM8(ecx + 0x5BC) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093040
 * Original: 0x00093040 - 0x000932E0 (672 bytes, 158 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00093040: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241F28);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00093067u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093064u); } /* indirect call */
    }

loc_00093067: ;
    SET_LO8(eax, MEM8(esi + 0x5BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000930E6; /* je: equal / zero */

loc_00093083: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x5B0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x5B4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5B8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000930D8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_000930D1: ;
    MEM8(esi + 0x5BC) = 0;

loc_000930D8: ;
    SET_LO8(eax, MEM8(esi + 0x5BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000932B2; /* jne: not equal / not zero */

loc_000930E6: ;
    PUSH32(esp, edi);
    edi = esi + 0x5A4;
    edx = edi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 8) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x5B0) = xmm1.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x5B4) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x10) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0x5B8) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x5BC) = 1;
    _fa = (uint32_t)(MEM8(0x321DEC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x321DEC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000932B1; /* jne: not equal / not zero */

loc_00093141: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x5B0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x5B4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5B8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm6.f[0]; _fcb = MEMF(0x2DC8B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000932B1; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(0x2DC8B0)) */

loc_0009318F: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5B4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x5B8)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x5B0)); /* movss */
    PUSH32(esp, 0x101);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    ecx = esi;
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm5.f[0]; /* movss */
    PUSH32(esp, 0x000931F3u); RECOMP_ABI_CALL(0x00068220u, sub_00068220); /* call 0x00068220 */

loc_000931F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000932B1; /* je: equal / zero */

loc_000931FB: ;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    MEM32(esp + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = ecx;
    edi = 0x2E69F0;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = esi;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x451C4000);
    PUSH32(esp, 5);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x68) = 0;
    PUSH32(esp, 0x00093262u); RECOMP_ABI_CALL(0x0006B8E0u, sub_0006B8E0); /* call 0x0006B8E0 */

loc_00093262: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    MEM32(esp + 0x38) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000932B1; /* je: equal / zero */

loc_00093272: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x2C;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x00093297u); RECOMP_ABI_CALL(0x00066D90u, sub_00066D90); /* call 0x00066D90 */

loc_00093297: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x5B0) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x5B4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x5B8) = eax;

loc_000932B1: ;
    POP32(esp, edi);

loc_000932B2: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x5B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5B0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x48);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000932E0
 * Original: 0x000932E0 - 0x00093379 (153 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000932E0(void)
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

loc_000932E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093302; /* je: equal / zero */

loc_000932E9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000932F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000932EDu); } /* indirect call */
    }

loc_000932F0: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093304; /* je: equal / zero */

loc_00093302: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00093304: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009330Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093308u); } /* indirect call */
    }

loc_0009330B: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0009331Cu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_0009331C: ;
    xmm0 = XMM_SCALAR(MEMF(0x30DA64)); /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC094); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00093359; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009334C: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009335F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00093359: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_0009335F: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x19);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x00093370u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009336Au); } /* indirect call */
    }

loc_00093370: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00093380
 * Original: 0x00093380 - 0x000933CF (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093380: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000933A1; /* je: equal / zero */

loc_00093388: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009338Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009338Cu); } /* indirect call */
    }

loc_0009338F: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000933A3; /* je: equal / zero */

loc_000933A1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000933A3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x000933B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000933ABu); } /* indirect call */
    }

loc_000933B1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x000933BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000933B9u); } /* indirect call */
    }

loc_000933BF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x19);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x000933CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000933C7u); } /* indirect call */
    }

loc_000933CD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000933D0
 * Original: 0x000933D0 - 0x0009341F (79 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000933D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000933D0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000933F1; /* je: equal / zero */

loc_000933D8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000933DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000933DCu); } /* indirect call */
    }

loc_000933DF: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000933F3; /* je: equal / zero */

loc_000933F1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000933F3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00093401u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000933FBu); } /* indirect call */
    }

loc_00093401: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x0009340Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093409u); } /* indirect call */
    }

loc_0009340F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x19);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x0009341Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093417u); } /* indirect call */
    }

loc_0009341D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093420
 * Original: 0x00093420 - 0x00093461 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093420(void)
{

loc_00093420: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x0009343Au); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_0009343A: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E6A10;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00093470
 * Original: 0x00093470 - 0x000934B1 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093470(void)
{

loc_00093470: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x0009348Au); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_0009348A: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E6A20;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000934C0
 * Original: 0x000934C0 - 0x00093501 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000934C0(void)
{

loc_000934C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x000934DAu); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_000934DA: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E6A30;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00093510
 * Original: 0x00093510 - 0x00093551 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093510(void)
{

loc_00093510: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x0009352Au); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_0009352A: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E513C;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00093560
 * Original: 0x00093560 - 0x00093619 (185 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00093560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093560: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, 0x00093568u); RECOMP_ABI_CALL(0x00093380u, sub_00093380); /* call 0x00093380 */

loc_00093568: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00093574u); RECOMP_ABI_CALL(0x0006C420u, sub_0006C420); /* call 0x0006C420 */

loc_00093574: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x0009357Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093579u); } /* indirect call */
    }

loc_0009357F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093615; /* jne: not equal / not zero */

loc_00093587: ;
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00093590u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009358Du); } /* indirect call */
    }

loc_00093590: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00093598u); RECOMP_ABI_CALL(0x00092240u, sub_00092240); /* call 0x00092240 */

loc_00093598: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093614; /* je: equal / zero */

loc_0009359F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000935A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000935A3u); } /* indirect call */
    }

loc_000935A6: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093614; /* jne: not equal / not zero */

loc_000935B8: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x000935C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000935C0u); } /* indirect call */
    }

loc_000935C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093613; /* je: equal / zero */

loc_000935CA: ;
    PUSH32(esp, esi);
    goto loc_000935D0;

    /* nop */

loc_000935D0: ;
    _fa = (uint32_t)(MEM32(eax + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2D8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093602; /* je: equal / zero */

loc_000935D9: ;
    esi = MEM32(eax + 0x28C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093602; /* je: equal / zero */

loc_000935E3: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000935EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000935E8u); } /* indirect call */
    }

loc_000935EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000935F6; /* jne: not equal / not zero */

loc_000935EF: ;
    MEM32(esi + 4) = eax;
    MEM8(esi + 0x30) = MEM8(esi + 0x30) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000935F6: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00093602u); RECOMP_ABI_CALL(0x000966A0u, sub_000966A0); /* call 0x000966A0 */

loc_00093602: ;
    edx = MEM32(edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x0009360Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093608u); } /* indirect call */
    }

loc_0009360E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000935D0; /* jne: not equal / not zero */

loc_00093612: ;
    POP32(esp, esi);

loc_00093613: ;
    POP32(esp, ebx);

loc_00093614: ;
    POP32(esp, edi);

loc_00093615: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093620
 * Original: 0x00093620 - 0x00093725 (261 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00093620: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241F48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x10) = edi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x00093656u); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_00093656: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    ebx = MEM32(esp + 0x38);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x34) = 0;
    MEM32(edi) = 0x2E6A40;
    MEM32(edi + 0x40) = ebx;
    PUSH32(esp, 0x00093689u); RECOMP_ABI_CALL(0x00065AE0u, sub_00065AE0); /* call 0x00065AE0 */

loc_00093689: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2C), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000936CD; /* je: equal / zero */

loc_0009368F: ;
    edx = MEM32(ebx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0009369Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093698u); } /* indirect call */
    }

loc_0009369B: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000936CD: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, 0x000936DAu); RECOMP_ABI_CALL(0x00093010u, sub_00093010); /* call 0x00093010 */

loc_000936DA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000936E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000936DEu); } /* indirect call */
    }

loc_000936E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009370F; /* je: equal / zero */

loc_000936E5: ;
    eax = MEM32(edi + 0x40);
    edx = MEM32(esi);
    ebx = MEM32(eax + 0x40);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000936F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000936EFu); } /* indirect call */
    }

loc_000936F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009370F; /* je: equal / zero */

loc_000936F6: ;
    SET_LO8(edx, MEM8(esi + 0x2C));
    ecx = MEM32(edi + 0x40);
    eax = MEM32(ecx);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0x10);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x128); PUSH32(esp, 0x0009370Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093709u); } /* indirect call */
    }

loc_0009370F: ;
    ecx = MEM32(esp + 0x28);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00093730
 * Original: 0x00093730 - 0x0009374E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093730: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00093738u); RECOMP_ABI_CALL(0x00073DC0u, sub_00073DC0); /* call 0x00073DC0 */

loc_00093738: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093748; /* je: equal / zero */

loc_0009373F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00093745u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00093745: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00093748: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093750
 * Original: 0x00093750 - 0x000937AC (92 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00093750: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0009375Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093759u); } /* indirect call */
    }

loc_0009375C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093769; /* jne: not equal / not zero */

loc_00093760: ;
    eax = 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00093769: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca > _fcb)) goto loc_00093783; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0009377A: ;
    eax = 3;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00093783: ;
    ecx = MEM32(esi + 0x40);
    MEM8(ecx + 8) = 0;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00093796u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093790u); } /* indirect call */
    }

loc_00093796: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000937A3u); RECOMP_ABI_CALL(0x000640E0u, sub_000640E0); /* call 0x000640E0 */

loc_000937A3: ;
    eax = 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000937B0
 * Original: 0x000937B0 - 0x000938AB (251 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000937B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000937B0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x584);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000937D5; /* jl: less (signed <) */

loc_000937C3: ;
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x584);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000938A6; /* jl: less (signed <) */

loc_000937D5: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000937E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000937DFu); } /* indirect call */
    }

loc_000937E2: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0x40);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000937F2u); RECOMP_ABI_CALL(0x00205330u, sub_00205330); /* call 0x00205330 */

loc_000937F2: ;
    edx = MEM32(esi + 8);
    MEM32(edx + 0x584) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x584);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0x0009380Du); RECOMP_ABI_CALL(0x00204DB0u, sub_00204DB0); /* call 0x00204DB0 */

loc_0009380D: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0009385Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009385Bu); } /* indirect call */
    }

loc_0009385E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000938A6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009388E: ;
    ecx = esi;
    PUSH32(esp, 0x00093895u); RECOMP_ABI_CALL(0x00092560u, sub_00092560); /* call 0x00092560 */

loc_00093895: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000938A6; /* jne: not equal / not zero */

loc_00093899: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000938A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000938A0u); } /* indirect call */
    }

loc_000938A6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000938B0
 * Original: 0x000938B0 - 0x00093E69 (1465 bytes, 356 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000938B0(void)
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

loc_000938B0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x4C));
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x53C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000938DD; /* je: equal / zero */

loc_000938C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x538); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000938DD; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x538)) */

loc_000938D1: ;
    eax = 4;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_000938DD: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000938FE; /* je: equal / zero */

loc_000938E5: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000938ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000938E9u); } /* indirect call */
    }

loc_000938EC: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00093900; /* je: equal / zero */

loc_000938FE: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00093900: ;
    edx = MEM32(esi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0009390Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093909u); } /* indirect call */
    }

loc_0009390C: ;
    eax = MEM32(esp + 0x58);
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x34); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x30); /* subss */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0x3C;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009396Bu); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009396B: ;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00093976u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093973u); } /* indirect call */
    }

loc_00093976: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00093981u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009397Eu); } /* indirect call */
    }

loc_00093981: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000939AA; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0009399D: ;
    POP32(esp, edi);
    eax = 4;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_000939AA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x594)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x413FA0); /* subss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    fp_push(MEMF(0x2DC3C4)); /* fld float */
    MEMF(esi + 0x594) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_000939EA; /* ja: above (unsigned >) */

loc_000939DD: ;
    _fa = (uint32_t)(MEM8(0x321DEC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x321DEC), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00093C67; /* jne: not equal / not zero */

loc_000939EA: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00093C67; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000939F6: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    eax = esp + 0x28;
    MEMF(esi + 0x594) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00093A2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093A2Bu); } /* indirect call */
    }

loc_00093A2E: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00093A3Eu); RECOMP_ABI_CALL(0x00092110u, sub_00092110); /* call 0x00092110 */

loc_00093A3E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC34C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    eax = MEM32(esi);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x78); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00093AA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093A9Cu); } /* indirect call */
    }

loc_00093AA2: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00093C4A; /* je: equal / zero */

loc_00093AAC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x20); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esi + 0x59C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = MEM32(edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = esp + 0x4C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00093B14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093B11u); } /* indirect call */
    }

loc_00093B14: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x28); /* addss */
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, 0x40A00000);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00093B5Cu); RECOMP_ABI_CALL(0x000647C0u, sub_000647C0); /* call 0x000647C0 */

loc_00093B5C: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00093B73; /* jp: parity */

loc_00093B6C: ;
    eax = 1;
    goto loc_00093B75;

loc_00093B73: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00093B75: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x5A1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00093C38; /* jne: not equal / not zero */

loc_00093B83: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    ecx = esp + 0x1C;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00093B98u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00093B98: ;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x6C); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00093BB3u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00093BB3: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x2DE084)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00093BD2; /* ja: above (unsigned >) */

loc_00093BCA: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */

loc_00093BD2: ;
    SET_LO8(eax, MEM8(esi + 0x5A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x5C); /* addss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00093C26; /* je: equal / zero */

loc_00093BEE: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x598)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00093C05u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00093C05: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x70)); /* fdiv dword ptr [esp + 0x70] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x2DC880)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00093C26; /* jbe: below or equal (unsigned <=) */

loc_00093C18: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x598)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */

loc_00093C26: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x594)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD418); /* mulss */
    goto loc_00093C40;

loc_00093C38: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */

loc_00093C40: ;
    MEMF(esi + 0x594) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */

loc_00093C4A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x5A0) = LO8(edx);
    MEMF(esi + 0x598) = xmm0.f[0]; /* movss */

loc_00093C67: ;
    SET_LO8(eax, MEM8(esi + 0x5A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00093CC7; /* je: equal / zero */

loc_00093C71: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC38C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00093C8C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00093C7E: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 4;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00093C8C: ;
    SET_LO8(eax, MEM8(esi + 0x5A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00093CAB; /* je: equal / zero */

loc_00093C96: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00093CA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093C9Au); } /* indirect call */
    }

loc_00093CA0: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00093CAB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x598)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x59C)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */

loc_00093CC7: ;
    eax = MEM32(esp + 0x64);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00093CFB; /* je: equal / zero */

loc_00093CD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E4254)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x68); /* mulss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */

loc_00093CFB: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E4210)); /* movss */
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00093D65; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00093D0A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00093D21u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00093D21: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x30DA60)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E2C30)); /* fmul dword ptr [0x2e2c30] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00093D65; /* jbe: below or equal (unsigned <=) */

loc_00093D3A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x2E0A1C)); /* movss */
    SET_LO8(ebx, 1);
    if ((_fca > _fcb)) goto loc_00093D5B; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(0x2DC098)) */

loc_00093D53: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E686C)); /* movss */

loc_00093D5B: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */

loc_00093D65: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00093D7Cu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00093D7C: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E5190)); /* fadd dword ptr [0x2e5190] */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(MEMF(0x2E5190) / fp_top()); /* fdivr dword ptr [0x2e5190] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC350); /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00093DB7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00093DAE: ;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */

loc_00093DB7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00093DCB; /* je: equal / zero */

loc_00093DBB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */

loc_00093DCB: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x58C); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00093E00; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00093DF2: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC884); /* mulss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */

loc_00093E00: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00093E1A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00093E0D: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00093E20; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00093E1A: ;
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */

loc_00093E20: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00093E2Cu); RECOMP_ABI_CALL(0x000932E0u, sub_000932E0); /* call 0x000932E0 */

loc_00093E2C: ;
    fp_pop(); /* fstp st(0) */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edx = MEM32(edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00093E47; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00093E3E: ;
    eax = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E);
    goto loc_00093E53;

loc_00093E47: ;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x3F);

loc_00093E53: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00093E5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093E55u); } /* indirect call */
    }

loc_00093E5B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00093E70
 * Original: 0x00093E70 - 0x000940E8 (632 bytes, 165 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00093E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00093E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241F6B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x40) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00093EBA; /* je: equal / zero */

loc_00093EA1: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00093EA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093EA5u); } /* indirect call */
    }

loc_00093EA8: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093EBC; /* je: equal / zero */

loc_00093EBA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00093EBC: ;
    esi = edi + 0x2E4;
    ecx = esi + 0x2C;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ecx + 0x14);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093EFAu); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_00093EFA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC3E0); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E4060); /* mulss */
    edx = MEM32(edi);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC394); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    eax = esp + 0x44;
    xmm2 = xmm1; /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00093F65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093F62u); } /* indirect call */
    }

loc_00093F65: ;
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x18); /* subss */
    if ((_fca > _fcb)) goto loc_00093FAE; /* ja: above (unsigned >) (xmm3.f[0] vs xmm4.f[0]) */

loc_00093FA8: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_00093FAE: ;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094023u); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_00094023: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x11);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094034u); RECOMP_ABI_CALL(0x00018B00u, sub_00018B00); /* call 0x00018B00 */

loc_00094034: ;
    ecx = MEM32(esp + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(esi + 0x1C);
    MEM32(esp + 0x18C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0009404F; /* je: equal / zero */

loc_0009404A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009404Fu); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0009404F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x64) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009405E; /* je: equal / zero */

loc_00094057: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009405Eu); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_0009405E: ;
    edx = esp + 0x60;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009406Au); RECOMP_ABI_CALL(0x0012CF60u, sub_0012CF60); /* call 0x0012CF60 */

loc_0009406A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000940BB; /* jle: less or equal (signed <=) */

loc_00094071: ;
    eax = MEM32(0x378EFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = 0x378EE0;
    if (CMP_EQ(_fa, _fb)) goto loc_0009408D; /* je: equal / zero */

loc_0009407F: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094089u); RECOMP_ABI_CALL(0x00067E10u, sub_00067E10); /* call 0x00067E10 */

loc_00094089: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000940BB; /* jne: not equal / not zero */

loc_0009408D: ;
    ecx = MEM32(0x378EF0);
    eax = MEM32(0x378EEC);
    edx = MEM32(0x378EF4);
    MEM32(esp + 0x20) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD440); /* comiss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000940BB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DD440)) */

loc_000940B9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000940BB: ;
    ecx = esp + 0x60;
    MEM32(esp + 0x18C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000940CFu); RECOMP_ABI_CALL(0x00018DF0u, sub_00018DF0); /* call 0x00018DF0 */

loc_000940CF: ;
    ecx = MEM32(esp + 0x184);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000940F0
 * Original: 0x000940F0 - 0x00094154 (100 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000940F0(void)
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

loc_000940F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00094102u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000940FFu); } /* indirect call */
    }

loc_00094102: ;
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    ecx = esp + 4;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009413Du); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009413D: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0009414Du); RECOMP_ABI_CALL(0x000932E0u, sub_000932E0); /* call 0x000932E0 */

loc_0009414D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00094160
 * Original: 0x00094160 - 0x00094188 (40 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094160: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43808000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009417Bu); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_0009417B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094190
 * Original: 0x00094190 - 0x000943CF (575 bytes, 150 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094190(void)
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

loc_00094190: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241F88);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000941BCu); RECOMP_ABI_CALL(0x0006BA70u, sub_0006BA70); /* call 0x0006BA70 */

loc_000941BC: ;
    eax = MEM32(esi + 0x264);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094210; /* jne: not equal / not zero */

loc_000941CA: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = 2;
    MEM32(esp + 0xC) = 0x2E41E4;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x3D4CCCCD);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi + 0x54;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x00094204u); RECOMP_ABI_CALL(0x00065D60u, sub_00065D60); /* call 0x00065D60 */

loc_00094204: ;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0xC) = 0x2DE974;

loc_00094210: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x5A0) = 0;
    MEM8(esi + 0x5A1) = 0;
    MEMF(esi + 0x594) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x598) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x40) = 0;
    MEM32(esi + 0x584) = ebx;
    MEM32(esi + 0x588) = 1;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x84874D36u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00094254u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094251u); } /* indirect call */
    }

loc_00094254: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000942A8; /* je: equal / zero */

loc_00094258: ;
    ecx = MEM32(0x371DD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094264u); RECOMP_ABI_CALL(0x001246E0u, sub_001246E0); /* call 0x001246E0 */

loc_00094264: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000942A8; /* je: equal / zero */

loc_0009426A: ;
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x00094275u); RECOMP_ABI_CALL(0x00169D90u, sub_00169D90); /* call 0x00169D90 */

loc_00094275: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094294; /* je: equal / zero */

loc_00094279: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x00094287u); RECOMP_ABI_CALL(0x00169E10u, sub_00169E10); /* call 0x00169E10 */

loc_00094287: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x120); PUSH32(esp, 0x00094292u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009428Cu); } /* indirect call */
    }

loc_00094292: ;
    goto loc_0009429F;

loc_00094294: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0009429Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094299u); } /* indirect call */
    }

loc_0009429F: ;
    eax = MEM32(edi + 0x20);
    MEM32(esi + 0x580) = eax;

loc_000942A8: ;
    ebx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000942C8; /* je: equal / zero */

loc_000942AF: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000942B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000942B3u); } /* indirect call */
    }

loc_000942B6: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000942CA; /* je: equal / zero */

loc_000942C8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000942CA: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    MEM32(esp + 0x54) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x000942DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000942D8u); } /* indirect call */
    }

loc_000942DE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009437B; /* je: equal / zero */

loc_000942E8: ;
    PUSH32(esp, ebp);
    /* nop */

loc_000942F0: ;
    _fa = (uint32_t)(MEM32(edi + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2D8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009435C; /* je: equal / zero */

loc_000942F9: ;
    ecx = 0x323498;
    PUSH32(esp, 0x00094303u); RECOMP_ABI_CALL(0x00074A70u, sub_00074A70); /* call 0x00074A70 */

loc_00094303: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094356; /* je: equal / zero */

loc_00094309: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00094311u); RECOMP_ABI_CALL(0x000962D0u, sub_000962D0); /* call 0x000962D0 */

loc_00094311: ;
    eax = MEM32(edi + 0x27C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094356; /* je: equal / zero */

loc_0009431B: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x1CC)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x2DC3CC); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x2E5CE4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E5698)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009434C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x2DC3CC)) */

loc_0009433C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0838)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E0A24)); /* movss */

loc_0009434C: ;
    MEMF(ebp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x28) = xmm1.f[0]; /* movss */

loc_00094356: ;
    MEM32(edi + 0x28C) = ebp;

loc_0009435C: ;
    eax = MEM32(esp + 0x54);
    edx = MEM32(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x58) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x00094370u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009436Au); } /* indirect call */
    }

loc_00094370: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000942F0; /* jne: not equal / not zero */

loc_0009437A: ;
    POP32(esp, ebp);

loc_0009437B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E4CCCCD);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x0009438Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094384u); } /* indirect call */
    }

loc_0009438A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    ecx = ebx + 0x2E4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi + 0x5BC) = 0;
    MEMF(esi + 0x58C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000943BB; /* je: equal / zero */

loc_000943AB: ;
    PUSH32(esp, 0xB8E8391Au);
    PUSH32(esp, 0x000943B5u); RECOMP_ABI_CALL(0x00141750u, sub_00141750); /* call 0x00141750 */

loc_000943B5: ;
    MEMF(esi + 0x58C) = (float)fp_top(); fp_pop(); /* fstp */

loc_000943BB: ;
    ecx = MEM32(esp + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000943D0
 * Original: 0x000943D0 - 0x000945D2 (514 bytes, 172 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000943D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000943D0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFFDu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFFDu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0009449D; /* ja: above (unsigned >) */

loc_000943E5: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x944A8); /* switch: 10 entries, 9 targets */
    if (_jt == 0x000943ECu) goto loc_000943EC;
    if (_jt == 0x00094406u) goto loc_00094406;
    if (_jt == 0x0009441Bu) goto loc_0009441B;
    if (_jt == 0x00094430u) goto loc_00094430;
    if (_jt == 0x00094445u) goto loc_00094445;
    if (_jt == 0x0009445Au) goto loc_0009445A;
    if (_jt == 0x0009446Fu) goto loc_0009446F;
    if (_jt == 0x00094484u) goto loc_00094484;
    if (_jt == 0x0009449Du) goto loc_0009449D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000943EC: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094401; /* je: equal / zero */

loc_000943F4: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00093420(); return; /* tail jmp 0x00093420 */

loc_00094401: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00094406: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094401; /* je: equal / zero */

loc_0009440E: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00093620(); return; /* tail jmp 0x00093620 */

loc_0009441B: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094401; /* je: equal / zero */

loc_00094423: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00093470(); return; /* tail jmp 0x00093470 */

loc_00094430: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094401; /* je: equal / zero */

loc_00094438: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000934C0(); return; /* tail jmp 0x000934C0 */

loc_00094445: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094401; /* je: equal / zero */

loc_0009444D: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000782C0(); return; /* tail jmp 0x000782C0 */

loc_0009445A: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094401; /* je: equal / zero */

loc_00094462: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000782C0(); return; /* tail jmp 0x000782C0 */

loc_0009446F: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094401; /* je: equal / zero */

loc_00094477: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00093510(); return; /* tail jmp 0x00093510 */

loc_00094484: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094401; /* je: equal / zero */

loc_00094490: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00078360(); return; /* tail jmp 0x00078360 */

loc_0009449D: ;
    MEM32(esp + 4) = edx;
    ecx = eax;
    g_seh_ebp = ebp; sub_00067990(); return; /* tail jmp 0x00067990 */

    SET_LO8(eax, xbox_PortIn((edx & 0xFFFFu), 1)); /* in al, dx */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0 /* seg:es */);
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _efl; POP32(esp, _efl); recomp_popfd(_efl); } /* popfd */
    _cf = (int)(g_eflags & 1u); /* popfd: CF */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(ecx + ecx)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + ecx) = MEM8(ecx + ecx) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _efl; POP32(esp, _efl); recomp_popfd(_efl); } /* popfd */
    _cf = (int)(g_eflags & 1u); /* popfd: CF */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edx);
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    RECOMP_UNIMPL("outsd dx, dword ptr [esi]", 0x000944C8u); /* TODO: outsd dx, dword ptr [esi] */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ecx + ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + ecx), LO8(eax) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = esi + 4;
    if (TEST_Z(_fa, _fb)) goto loc_000944FA; /* je: equal / zero */

loc_000944E1: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x000944E9u); RECOMP_ABI_CALL(0x00092450u, sub_00092450); /* call 0x00092450 */

loc_000944E9: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000944F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000944F1u); } /* indirect call */
    }

loc_000944F4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    goto loc_0009450B;

loc_000944FA: ;
    PUSH32(esp, 0x000944FFu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_000944FF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DBED0)); /* fmul dword ptr [0x2dbed0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DDA34)); /* fadd dword ptr [0x2dda34] */

loc_0009450B: ;
    edx = MEM32(edi);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00094516u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094513u); } /* indirect call */
    }

loc_00094516: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_00094557; /* je: equal / zero */

loc_0009451D: ;
    edi = MEM32(edi + 0x28);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    if (0x1A) _cf = (int)(((edi) >> (32 - (0x1A))) & 1);
    edi = edi << 0x1A;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((0x1A) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edi)) >> ((((0x1A) & 31u)) - 1)) & 1);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x1A) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00094532u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009452Cu); } /* indirect call */
    }

loc_00094532: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x00094542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009453Cu); } /* indirect call */
    }

loc_00094542: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009454Fu); RECOMP_ABI_CALL(0x000640E0u, sub_000640E0); /* call 0x000640E0 */

loc_0009454F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00094557: ;
    MEM8(ecx + 8) = 0;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00094562u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009455Fu); } /* indirect call */
    }

loc_00094562: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009457B; /* je: equal / zero */

loc_00094566: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00094572u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009456Fu); } /* indirect call */
    }

loc_00094572: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009457Bu); RECOMP_ABI_CALL(0x00093010u, sub_00093010); /* call 0x00093010 */

loc_0009457B: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00094599; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00094593: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_00094599: ;
    ecx = MEM32(esi + 0x40);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000945A6u); RECOMP_ABI_CALL(0x00093040u, sub_00093040); /* call 0x00093040 */

loc_000945A6: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2101);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000945C0u); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_000945C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000944D0
 * Original: 0x000944D0 - 0x000945D2 (258 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000944D0(void)
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

loc_000944D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = esi + 4;
    if (TEST_Z(_fa, _fb)) goto loc_000944FA; /* je: equal / zero */

loc_000944E1: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x000944E9u); RECOMP_ABI_CALL(0x00092450u, sub_00092450); /* call 0x00092450 */

loc_000944E9: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000944F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000944F1u); } /* indirect call */
    }

loc_000944F4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    goto loc_0009450B;

loc_000944FA: ;
    PUSH32(esp, 0x000944FFu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_000944FF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DBED0)); /* fmul dword ptr [0x2dbed0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DDA34)); /* fadd dword ptr [0x2dda34] */

loc_0009450B: ;
    edx = MEM32(edi);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00094516u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094513u); } /* indirect call */
    }

loc_00094516: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_00094557; /* je: equal / zero */

loc_0009451D: ;
    edi = MEM32(edi + 0x28);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    if (0x1A) _cf = (int)(((edi) >> (32 - (0x1A))) & 1);
    edi = edi << 0x1A;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((0x1A) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edi)) >> ((((0x1A) & 31u)) - 1)) & 1);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x1A) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00094532u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009452Cu); } /* indirect call */
    }

loc_00094532: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x00094542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009453Cu); } /* indirect call */
    }

loc_00094542: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009454Fu); RECOMP_ABI_CALL(0x000640E0u, sub_000640E0); /* call 0x000640E0 */

loc_0009454F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00094557: ;
    MEM8(ecx + 8) = 0;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00094562u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009455Fu); } /* indirect call */
    }

loc_00094562: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009457B; /* je: equal / zero */

loc_00094566: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00094572u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009456Fu); } /* indirect call */
    }

loc_00094572: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009457Bu); RECOMP_ABI_CALL(0x00093010u, sub_00093010); /* call 0x00093010 */

loc_0009457B: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00094599; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00094593: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_00094599: ;
    ecx = MEM32(esi + 0x40);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000945A6u); RECOMP_ABI_CALL(0x00093040u, sub_00093040); /* call 0x00093040 */

loc_000945A6: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2101);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000945C0u); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_000945C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000945E0
 * Original: 0x000945E0 - 0x000946FB (283 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000945E0(void)
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

loc_000945E0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000945F1u); RECOMP_ABI_CALL(0x00065AE0u, sub_00065AE0); /* call 0x00065AE0 */

loc_000945F1: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    edi = eax;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00094600u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000945FDu); } /* indirect call */
    }

loc_00094600: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    eax = esp + 0x30;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0009465Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094658u); } /* indirect call */
    }

loc_0009465B: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    ecx = MEM32(esi + 0x40);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00094695u); RECOMP_ABI_CALL(0x00092450u, sub_00092450); /* call 0x00092450 */

loc_00094695: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x2001);
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000946B7u); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_000946B7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    eax = MEM32(esi + 0x40);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC344)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    POP32(esp, edi);
    MEM8(eax + 8) = 0;
    POP32(esp, esi);
    eax = 2;
    if ((_fca > _fcb)) goto loc_000946F5; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000946F0: ;
    eax = 3;

loc_000946F5: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00094700
 * Original: 0x00094700 - 0x0009474B (75 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094700: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094746; /* je: equal / zero */

loc_00094710: ;
    ecx = esi;
    PUSH32(esp, 0x00094717u); RECOMP_ABI_CALL(0x000937B0u, sub_000937B0); /* call 0x000937B0 */

loc_00094717: ;
    ecx = MEM32(esi + 8);
    eax = esp + 4;
    MEM8(esi + 0xC) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00094728u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094725u); } /* indirect call */
    }

loc_00094728: ;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x18) = eax;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_00094746: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00094750
 * Original: 0x00094750 - 0x00094A91 (833 bytes, 229 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094750: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x4C));
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094771; /* je: equal / zero */

loc_00094760: ;
    ecx = esi;
    PUSH32(esp, 0x00094767u); RECOMP_ABI_CALL(0x000937B0u, sub_000937B0); /* call 0x000937B0 */

loc_00094767: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009477F; /* jne: not equal / not zero */

loc_00094771: ;
    MEM32(eax + 0x1C) = 4;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009477F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000947A2; /* je: equal / zero */

loc_00094789: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00094790u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009478Du); } /* indirect call */
    }

loc_00094790: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000947A4; /* je: equal / zero */

loc_000947A2: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000947A4: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x584);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0x000947B6u); RECOMP_ABI_CALL(0x00204DB0u, sub_00204DB0); /* call 0x00204DB0 */

loc_000947B6: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x34) = eax;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00094927; /* jne: not equal / not zero */

loc_000947E1: ;
    edx = MEM32(ebx);
    eax = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000947EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000947EAu); } /* indirect call */
    }

loc_000947ED: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esi + 0x1C);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009481Du); RECOMP_ABI_CALL(0x00066D50u, sub_00066D50); /* call 0x00066D50 */

loc_0009481D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00094927; /* jne: not equal / not zero */

loc_00094825: ;
    goto loc_00094830;

    /* nop */
    edi = edi;

loc_00094830: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = esi;
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00094857u); RECOMP_ABI_CALL(0x00092560u, sub_00092560); /* call 0x00092560 */

loc_00094857: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0xC) = LO8(eax);
    if ((_fa != 0)) goto loc_00094927; /* jne: not equal / not zero */

loc_00094866: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x584);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0x00094878u); RECOMP_ABI_CALL(0x00204DB0u, sub_00204DB0); /* call 0x00204DB0 */

loc_00094878: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 8); /* subss */
    eax = esp + 0x44;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = MEM32(ebx);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000948D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000948D0u); } /* indirect call */
    }

loc_000948D3: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00094927; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00094908: ;
    edx = MEM32(esi + 0x1C);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009491Fu); RECOMP_ABI_CALL(0x00066D50u, sub_00066D50); /* call 0x00066D50 */

loc_0009491F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094830; /* je: equal / zero */

loc_00094927: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00094938; /* je: equal / zero */

loc_00094933: ;
    eax = 0x101;

loc_00094938: ;
    ecx = MEM32(esi + 0x20);
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, edx);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009495Eu); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_0009495E: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    ebp = eax;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x0009496Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094966u); } /* indirect call */
    }

loc_0009496C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094A62; /* je: equal / zero */

loc_00094974: ;
    edi = MEM32(eax + 0x28C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094A62; /* je: equal / zero */

loc_00094982: ;
    eax = MEM32(ebx);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0009498Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009498Bu); } /* indirect call */
    }

loc_0009498E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DC3C4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00094A62; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x2DC3C4)) */

loc_000949CA: ;
    xmm4 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2DC340); /* mulss */
    if ((_fca > _fcb)) goto loc_000949E7; /* ja: above (unsigned >) (xmm4.f[0] vs xmm3.f[0]) */

loc_000949DF: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */

loc_000949E7: ;
    edx = MEM32(ebx);
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DD8EC)); /* movss */
    eax = esp + 0x50;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00094A1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094A1Cu); } /* indirect call */
    }

loc_00094A1F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00094A62u); RECOMP_ABI_CALL(0x00096360u, sub_00096360); /* call 0x00096360 */

loc_00094A62: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094A87; /* je: equal / zero */

loc_00094A69: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00094A87; /* jne: not equal / not zero */

loc_00094A6E: ;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x1C) = 3;
    esi = MEM32(esi + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00094A87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094A81u); } /* indirect call */
    }

loc_00094A87: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094AA0
 * Original: 0x00094AA0 - 0x00094AA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094AA0(void)
{

loc_00094AA0: ;
    MEM32(ecx) = 0x2E6A50;
    esp += 4; return; /* ret */

}

/**
 * sub_00094AB0
 * Original: 0x00094AB0 - 0x00094ACF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094AB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E6A50;
    if (TEST_Z(_fa, _fb)) goto loc_00094AC9; /* je: equal / zero */

loc_00094AC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094AC6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00094AC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094AC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094AD0
 * Original: 0x00094AD0 - 0x00094AEF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094AD0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E6A68;
    if (TEST_Z(_fa, _fb)) goto loc_00094AE9; /* je: equal / zero */

loc_00094AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094AE6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00094AE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094AE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094AF0
 * Original: 0x00094AF0 - 0x00094B0F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094AF0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E6A80;
    if (TEST_Z(_fa, _fb)) goto loc_00094B09; /* je: equal / zero */

loc_00094B00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094B06u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00094B06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094B09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094B10
 * Original: 0x00094B10 - 0x00094B1E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094B10(void)
{

loc_00094B10: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00094B20
 * Original: 0x00094B20 - 0x00094B3A (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094B20: ;
    edx = MEM32(esp + 4);
    eax = ecx + 0x648;
    MEM32(eax + 0x14) = edx;
    MEM8(eax + 0x1C) = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00064020(); return; /* tail jmp 0x00064020 */

}

/**
 * sub_00094B40
 * Original: 0x00094B40 - 0x00094B47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094B40(void)
{

loc_00094B40: ;
    MEM32(ecx) = 0x2E6A98;
    esp += 4; return; /* ret */

}

/**
 * sub_00094B50
 * Original: 0x00094B50 - 0x00094B57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094B50(void)
{

loc_00094B50: ;
    MEM32(ecx) = 0x2E6AB0;
    esp += 4; return; /* ret */

}

/**
 * sub_00094B60
 * Original: 0x00094B60 - 0x00094B67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094B60(void)
{

loc_00094B60: ;
    MEM32(ecx) = 0x2E6AC8;
    esp += 4; return; /* ret */

}

/**
 * sub_00094B70
 * Original: 0x00094B70 - 0x00094B77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094B70(void)
{

loc_00094B70: ;
    MEM32(ecx) = 0x2E6AD0;
    esp += 4; return; /* ret */

}

/**
 * sub_00094B80
 * Original: 0x00094B80 - 0x00094B9F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094B80: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E6A98;
    if (TEST_Z(_fa, _fb)) goto loc_00094B99; /* je: equal / zero */

loc_00094B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094B96u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00094B96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094B99: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094BA0
 * Original: 0x00094BA0 - 0x00094BBF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094BA0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E6AB0;
    if (TEST_Z(_fa, _fb)) goto loc_00094BB9; /* je: equal / zero */

loc_00094BB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094BB6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00094BB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094BB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094BC0
 * Original: 0x00094BC0 - 0x00094BDF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094BC0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E6AC8;
    if (TEST_Z(_fa, _fb)) goto loc_00094BD9; /* je: equal / zero */

loc_00094BD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094BD6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00094BD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094BD9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094BE0
 * Original: 0x00094BE0 - 0x00094BFF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094BE0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E6AD0;
    if (TEST_Z(_fa, _fb)) goto loc_00094BF9; /* je: equal / zero */

loc_00094BF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094BF6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00094BF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094BF9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094C00
 * Original: 0x00094C00 - 0x00094CE3 (227 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094C00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241FD2);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00094C23u); RECOMP_ABI_CALL(0x00092200u, sub_00092200); /* call 0x00092200 */

loc_00094C23: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E6AD8;
    MEM32(esp + 0x14) = ebx;
    MEM8(esi + 0x5C4) = LO8(ebx);
    MEM32(esi + 0x5C0) = 0x2E6A98;
    MEM32(esi + 0x5CC) = esi;
    MEM8(esi + 0x5D4) = LO8(ebx);
    MEM32(esi + 0x5D0) = 0x2E6A50;
    MEM32(esi + 0x5D8) = esi;
    xmm0 = XMM_SCALAR(MEMF(0x2DDC40)); /* movss */
    MEM8(esi + 0x60C) = LO8(ebx);
    MEM32(esi + 0x608) = 0x2E6AB0;
    MEM32(esi + 0x610) = esi;
    MEMF(esi + 0x628) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    ecx = esi + 0x62C;
    MEM8(esp + 0x18) = 3;
    PUSH32(esp, 0x00094C92u); RECOMP_ABI_CALL(0x000926A0u, sub_000926A0); /* call 0x000926A0 */

loc_00094C92: ;
    ecx = MEM32(esp + 0xC);
    MEM8(esi + 0x64C) = LO8(ebx);
    MEM32(esi + 0x648) = 0x2E6A68;
    MEM32(esi + 0x660) = esi;
    MEM8(esi + 0x66C) = LO8(ebx);
    MEM32(esi + 0x668) = 0x2E6A80;
    MEM32(esi + 0x674) = esi;
    MEM32(esi + 0x67C) = ebx;
    MEM32(esi + 0x680) = ebx;
    MEM32(esi + 0x684) = ebx;
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
 * sub_00094CF0
 * Original: 0x00094CF0 - 0x00094D05 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094CF0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    eax = ecx + 0x5D0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094D10
 * Original: 0x00094D10 - 0x00094D16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094D10(void)
{

loc_00094D10: ;
    eax = 0x688;
    esp += 4; return; /* ret */

}

/**
 * sub_00094D20
 * Original: 0x00094D20 - 0x00094D39 (25 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094D20: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x62C;
    MEM32(ecx + 0x634) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00064020(); return; /* tail jmp 0x00064020 */

}

/**
 * sub_00094D40
 * Original: 0x00094D40 - 0x00094D51 (17 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094D40(void)
{

loc_00094D40: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x628) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094D60
 * Original: 0x00094D60 - 0x00094D66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094D60(void)
{

loc_00094D60: ;
    eax = MEM32(0x30DA6C);
    esp += 4; return; /* ret */

}

/**
 * sub_00094D70
 * Original: 0x00094D70 - 0x00094DB7 (71 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094D70: ;
    MEM32(ecx) = 0x2E6AD8;
    MEM32(ecx + 0x668) = 0x2E6A80;
    MEM32(ecx + 0x648) = 0x2E6A68;
    MEM32(ecx + 0x62C) = 0x2E69F8;
    MEM32(ecx + 0x608) = 0x2E6AB0;
    MEM32(ecx + 0x5D0) = 0x2E6A50;
    MEM32(ecx + 0x5C0) = 0x2E6A98;
    g_seh_ebp = ebp; sub_000920A0(); return; /* tail jmp 0x000920A0 */

}

/**
 * sub_00094DC0
 * Original: 0x00094DC0 - 0x00094E23 (99 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094DC0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094E21; /* je: equal / zero */

loc_00094DCB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00094DD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094DCFu); } /* indirect call */
    }

loc_00094DD2: ;
    edx = MEM32(0x30D8B8);
    ecx = MEM32(0x30D8B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094E21; /* jne: not equal / not zero */

loc_00094DE4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x00094DF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094DECu); } /* indirect call */
    }

loc_00094DF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094E20; /* je: equal / zero */

loc_00094DF6: ;
    eax = MEM32(eax + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094E10; /* je: equal / zero */

loc_00094E00: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(eax + 4) = 0;
    MEM8(eax + 0x30) = LO8(ecx);

loc_00094E10: ;
    edx = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x00094E1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E16u); } /* indirect call */
    }

loc_00094E1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094DF6; /* jne: not equal / not zero */

loc_00094E20: ;
    POP32(esp, edi);

loc_00094E21: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094E30
 * Original: 0x00094E30 - 0x00094F45 (277 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094E30(void)
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

loc_00094E30: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00094E58; /* je: equal / zero */

loc_00094E3F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00094E46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E43u); } /* indirect call */
    }

loc_00094E46: ;
    edx = MEM32(0x30D8B8);
    ecx = MEM32(0x30D8B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094E5A; /* je: equal / zero */

loc_00094E58: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094E5A: ;
    edi = MEM32(esp + 0x40);
    ecx = edi;
    PUSH32(esp, 0x00094E65u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_00094E65: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094F31; /* je: equal / zero */

loc_00094E6D: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00094E79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E76u); } /* indirect call */
    }

loc_00094E79: ;
    edx = MEM32(edi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00094E85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094E82u); } /* indirect call */
    }

loc_00094E85: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    edx = MEM32(esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00094EC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094EC0u); } /* indirect call */
    }

loc_00094EC3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2DC3DC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00094F20; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x2DC3DC)) */

loc_00094EFB: ;
    PUSH32(esp, 0x00094F00u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_00094F00: ;
    fp_push(MEMF(0x2DC340)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00094F20; /* jbe: below or equal (unsigned <=) */

loc_00094F0C: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00094F17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094F11u); } /* indirect call */
    }

loc_00094F17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00094F20: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00094F28u); RECOMP_ABI_CALL(0x00094B20u, sub_00094B20); /* call 0x00094B20 */

loc_00094F28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00094F31: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00094F3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094F36u); } /* indirect call */
    }

loc_00094F3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00094F50
 * Original: 0x00094F50 - 0x00094FB9 (105 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094F50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094F78; /* je: equal / zero */

loc_00094F5B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00094F62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094F5Fu); } /* indirect call */
    }

loc_00094F62: ;
    edx = MEM32(0x30D8B8);
    ecx = MEM32(0x30D8B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094F78; /* jne: not equal / not zero */

loc_00094F74: ;
    ecx = esi;
    goto loc_00094F7A;

loc_00094F78: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094F7A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x00094F84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094F7Eu); } /* indirect call */
    }

loc_00094F84: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x28C);
    if (CMP_EQ(_fa, _fb)) goto loc_00094F9A; /* je: equal / zero */

loc_00094F92: ;
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x28);
    goto loc_00094F9C;

loc_00094F9A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094F9C: ;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edi + 0x18);
    eax = edi + 0x5D0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094FB4; /* je: equal / zero */

loc_00094FAC: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00094FB4u); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00094FB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094FC0
 * Original: 0x00094FC0 - 0x0009500E (78 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x5C0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094FCFu); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00094FCF: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094FF3; /* je: equal / zero */

loc_00094FD6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00094FDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094FDAu); } /* indirect call */
    }

loc_00094FDD: ;
    edx = MEM32(0x30D8B8);
    ecx = MEM32(0x30D8B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094FF3; /* jne: not equal / not zero */

loc_00094FEF: ;
    ecx = esi;
    goto loc_00094FF5;

loc_00094FF3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094FF5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x00094FFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094FF9u); } /* indirect call */
    }

loc_00094FFF: ;
    eax = MEM32(eax + 0x28C);
    MEM32(eax + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00095010
 * Original: 0x00095010 - 0x00095081 (113 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095010: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00095035; /* je: equal / zero */

loc_0009501B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095035; /* je: equal / zero */

loc_00095020: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0009502Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095025u); } /* indirect call */
    }

loc_0009502B: ;
    MEM32(esi + 0x584) = 0xFFFFFFFFu;

loc_00095035: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009506F; /* je: equal / zero */

loc_0009503C: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095050; /* jne: not equal / not zero */

loc_00095045: ;
    eax = MEM32(eax + 0x20);
    MEM32(esi + 0x580) = eax;
    goto loc_00095056;

loc_00095050: ;
    MEM32(esi + 0x580) = ecx;

loc_00095056: ;
    ecx = MEM32(esi + 0x18);
    eax = esi + 0x608;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009507D; /* je: equal / zero */

loc_00095063: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009506Bu); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_0009506B: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0009506F: ;
    ecx = esi + 0x5C0;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0009507Du); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_0009507D: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00095090
 * Original: 0x00095090 - 0x00095110 (128 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00095098u); RECOMP_ABI_CALL(0x00093380u, sub_00093380); /* call 0x00093380 */

loc_00095098: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000950B8; /* je: equal / zero */

loc_0009509F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000950A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000950A3u); } /* indirect call */
    }

loc_000950A6: ;
    edx = MEM32(0x30D8B8);
    ecx = MEM32(0x30D8B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000950BA; /* je: equal / zero */

loc_000950B8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000950BA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x000950C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000950C2u); } /* indirect call */
    }

loc_000950C8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x000950D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000950D0u); } /* indirect call */
    }

loc_000950D6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x000950E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000950DEu); } /* indirect call */
    }

loc_000950E4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x26);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x000950F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000950ECu); } /* indirect call */
    }

loc_000950F2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x27);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00095100u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000950FAu); } /* indirect call */
    }

loc_00095100: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x0009510Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095108u); } /* indirect call */
    }

loc_0009510E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00095110
 * Original: 0x00095110 - 0x0009512E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095110: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00095118u); RECOMP_ABI_CALL(0x00094D70u, sub_00094D70); /* call 0x00094D70 */

loc_00095118: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00095128; /* je: equal / zero */

loc_0009511F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095125u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00095125: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095128: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095130
 * Original: 0x00095130 - 0x00095156 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095130: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0009513Du); RECOMP_ABI_CALL(0x00093560u, sub_00093560); /* call 0x00093560 */

loc_0009513D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x00095147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095141u); } /* indirect call */
    }

loc_00095147: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095152; /* jne: not equal / not zero */

loc_0009514B: ;
    ecx = esi;
    PUSH32(esp, 0x00095152u); RECOMP_ABI_CALL(0x00095090u, sub_00095090); /* call 0x00095090 */

loc_00095152: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095160
 * Original: 0x00095160 - 0x000951DA (122 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095160(void)
{

loc_00095160: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00095173u); RECOMP_ABI_CALL(0x00094190u, sub_00094190); /* call 0x00094190 */

loc_00095173: ;
    edx = MEM32(esi + 0x608);
    ecx = esi + 0x608;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00095182u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095180u); } /* indirect call */
    }

loc_00095182: ;
    eax = MEM32(esi + 0x62C);
    ecx = esi + 0x62C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00095191u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009518Fu); } /* indirect call */
    }

loc_00095191: ;
    edx = MEM32(esi + 0x5D0);
    ecx = esi + 0x5D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000951A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009519Eu); } /* indirect call */
    }

loc_000951A0: ;
    eax = MEM32(esi + 0x648);
    ecx = esi + 0x648;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000951AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000951ADu); } /* indirect call */
    }

loc_000951AF: ;
    edx = MEM32(esi + 0x668);
    ecx = esi + 0x668;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000951BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000951BCu); } /* indirect call */
    }

loc_000951BE: ;
    ecx = esi;
    PUSH32(esp, 0x000951C5u); RECOMP_ABI_CALL(0x00095090u, sub_00095090); /* call 0x00095090 */

loc_000951C5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x000951D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000951CFu); } /* indirect call */
    }

loc_000951D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000951E0
 * Original: 0x000951E0 - 0x0009524D (109 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000951E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000951E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x000951EEu); RECOMP_ABI_CALL(0x00095090u, sub_00095090); /* call 0x00095090 */

loc_000951EE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    SET_LO8(ecx, 1);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x19) = LO8(ecx);
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    MEM8(esi + 0x34) = LO8(ecx);
    ecx = MEM32(esi + 8);
    edx = esp + 4;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x14) = eax;
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0009523Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009523Cu); } /* indirect call */
    }

loc_0009523F: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095248u); RECOMP_ABI_CALL(0x00093010u, sub_00093010); /* call 0x00093010 */

loc_00095248: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00095250
 * Original: 0x00095250 - 0x00095255 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095250: ;
    g_seh_ebp = ebp; sub_00094DC0(); return; /* tail jmp 0x00094DC0 */

}

/**
 * sub_00095260
 * Original: 0x00095260 - 0x0009574F (1263 bytes, 317 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095260(void)
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

loc_00095260: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x241FF0);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009528D; /* je: equal / zero */

loc_00095288: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009528Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009528Au); } /* indirect call */
    }

loc_0009528D: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00095294u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095291u); } /* indirect call */
    }

loc_00095294: ;
    ecx = esp + 0x1C;
    ebp = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x000952A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009529Fu); } /* indirect call */
    }

loc_000952A2: ;
    edx = MEM32(edi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000952AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000952ABu); } /* indirect call */
    }

loc_000952AE: ;
    ecx = edi;
    PUSH32(esp, 0x000952B5u); RECOMP_ABI_CALL(0x00095090u, sub_00095090); /* call 0x00095090 */

loc_000952B5: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x468)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000952E8; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x2DC098)) */

loc_000952D3: ;
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x2DC8AC)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    goto loc_000952F0;

loc_000952E8: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */

loc_000952F0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x20); /* comiss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DD414); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x2DC3CC); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC3C4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x1C); /* addss */
    MEMF(esi + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DDC40)); /* movss */
    if ((_fca > _fcb)) goto loc_00095339; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x20)) */

loc_00095331: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */

loc_00095339: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x20); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E6C5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x20); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x28); /* subss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm7.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000953B5; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm5.f[0]) */

loc_000953A4: ;
    xmm5 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000953B5; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm6.f[0]) */

loc_000953B1: ;
    SET_LO8(ebx, 1);
    goto loc_000953B7;

loc_000953B5: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000953B7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095454; /* je: equal / zero */

loc_000953BF: ;
    SET_LO8(eax, MEM8(edi + 0x3B0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095454; /* jne: not equal / not zero */

loc_000953CD: ;
    edx = MEM32(edi);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000953D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000953D6u); } /* indirect call */
    }

loc_000953D9: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x413F9C)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */

loc_00095454: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(0x413FA0); /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEMF(esi + 0x2C) = xmm6.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000954FC; /* je: equal / zero */

loc_00095474: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000954FC; /* je: equal / zero */

loc_0009547C: ;
    ecx = ebp;
    PUSH32(esp, 0x00095483u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_00095483: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095492; /* jne: not equal / not zero */

loc_00095487: ;
    ecx = ebp;
    PUSH32(esp, 0x0009548Eu); RECOMP_ABI_CALL(0x000115C0u, sub_000115C0); /* call 0x000115C0 */

loc_0009548E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000954D8; /* je: equal / zero */

loc_00095492: ;
    ecx = edi;
    PUSH32(esp, 0x00095499u); RECOMP_ABI_CALL(0x00092450u, sub_00092450); /* call 0x00092450 */

loc_00095499: ;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000954AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000954A7u); } /* indirect call */
    }

loc_000954AA: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000954C3u); RECOMP_ABI_CALL(0x000938B0u, sub_000938B0); /* call 0x000938B0 */

loc_000954C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x3C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000954D8: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */

loc_000954FC: ;
    xmm6 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    _fca = xmm6.f[0]; _fcb = MEMF(esi + 0x1C); /* comiss */
    SET_LO8(eax, MEM8(esi + 0x34));
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00095521; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(esi + 0x1C)) */

loc_0009550A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009553B; /* je: equal / zero */

loc_0009550E: ;
    xmm6 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(0x2DC8AC); /* subss */
    MEM8(esi + 0x34) = 0;
    goto loc_00095536;

loc_00095521: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009553B; /* jne: not equal / not zero */

loc_00095525: ;
    xmm6 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(0x2DC8AC); /* addss */
    MEM8(esi + 0x34) = 1;

loc_00095536: ;
    MEMF(esi + 0x1C) = xmm6.f[0]; /* movss */

loc_0009553B: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095655; /* je: equal / zero */

loc_00095546: ;
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = MEMF(esi + 0x2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009563A; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(esi + 0x2C)) */

loc_00095553: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm5 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEMF(esi + 0x2C) = xmm5.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00095589; /* je: equal / zero */

loc_00095567: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */

loc_00095589: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2DC3CC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x10) = 0x2E6AC8;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x45C80000);
    PUSH32(esp, 4);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x68) = 0;
    PUSH32(esp, 0x000955FBu); RECOMP_ABI_CALL(0x0006B8E0u, sub_0006B8E0); /* call 0x0006B8E0 */

loc_000955FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00095634; /* je: equal / zero */

loc_0009560A: ;
    ecx = eax;
    PUSH32(esp, 0x00095611u); RECOMP_ABI_CALL(0x00122410u, sub_00122410); /* call 0x00122410 */

loc_00095611: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax + 4);
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00095634u); RECOMP_ABI_CALL(0x00093010u, sub_00093010); /* call 0x00093010 */

loc_00095634: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */

loc_0009563A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00095723;

loc_00095655: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000956E7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x2C)) */

loc_00095662: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0009567A; /* je: equal / zero */

loc_00095676: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0009567A: ;
    MEM32(esp + 0x10) = 0x2E6AD0;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x45C80000);
    PUSH32(esp, 5);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x68) = 1;
    PUSH32(esp, 0x000956A8u); RECOMP_ABI_CALL(0x0006B8E0u, sub_0006B8E0); /* call 0x0006B8E0 */

loc_000956A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_000956E1; /* je: equal / zero */

loc_000956B7: ;
    ecx = eax;
    PUSH32(esp, 0x000956BEu); RECOMP_ABI_CALL(0x00122410u, sub_00122410); /* call 0x00122410 */

loc_000956BE: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 4);
    ecx = esp + 0x34;
    MEM32(esp + 0x38) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x000956E1u); RECOMP_ABI_CALL(0x00093010u, sub_00093010); /* call 0x00093010 */

loc_000956E1: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */

loc_000956E7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x470); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00095711; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x470)) */

loc_000956F3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC090); /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x1C); /* addss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */

loc_00095711: ;
    xmm5.f[0] = xmm5.f[0] * MEMF(0x2DC884); /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esi + 0x1C); /* addss */
    MEMF(esi + 0x1C) = xmm5.f[0]; /* movss */

loc_00095723: ;
    esi = MEM32(edi);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00095731u); RECOMP_ABI_CALL(0x00093040u, sub_00093040); /* call 0x00093040 */

loc_00095731: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0x88); PUSH32(esp, 0x0009573Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095734u); } /* indirect call */
    }

loc_0009573A: ;
    ecx = MEM32(esp + 0x4C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00095750
 * Original: 0x00095750 - 0x0009593A (490 bytes, 138 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095750(void)
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

loc_00095750: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009577A; /* je: equal / zero */

loc_00095761: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00095768u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095765u); } /* indirect call */
    }

loc_00095768: ;
    edx = MEM32(0x30D8B8);
    ecx = MEM32(0x30D8B4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009577C; /* je: equal / zero */

loc_0009577A: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009577C: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00095784u); RECOMP_ABI_CALL(0x00095090u, sub_00095090); /* call 0x00095090 */

loc_00095784: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00095923; /* je: equal / zero */

loc_0009578F: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0009579Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095799u); } /* indirect call */
    }

loc_0009579C: ;
    eax = MEM32(edi);
    ecx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000957A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000957A5u); } /* indirect call */
    }

loc_000957A8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    edx = esp + 0x1C;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000957EDu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000957ED: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000957FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000957F9u); } /* indirect call */
    }

loc_000957FC: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC38C)); /* fadd dword ptr [0x2dc38c] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); fp_pop(); /* fdivp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00095883; /* jbe: below or equal (unsigned <=) */

loc_0009586C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00095879u); RECOMP_ABI_CALL(0x000940F0u, sub_000940F0); /* call 0x000940F0 */

loc_00095879: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00095883: ;
    ecx = MEM32(esi + 0x18);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095895u); RECOMP_ABI_CALL(0x00068450u, sub_00068450); /* call 0x00068450 */

loc_00095895: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00095932; /* je: equal / zero */

loc_0009589D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E4250)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000958C8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000958BE: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    goto loc_000958D8;

loc_000958C8: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_000958D8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    POP32(esp, edi);
    MEM8(esi + 0x1C) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00095923: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00095932u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009592Cu); } /* indirect call */
    }

loc_00095932: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00095940
 * Original: 0x00095940 - 0x000959C8 (136 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00095940(void)
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

loc_00095940: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0009594Eu); RECOMP_ABI_CALL(0x00095090u, sub_00095090); /* call 0x00095090 */

loc_0009594E: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0009595Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095958u); } /* indirect call */
    }

loc_0009595B: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00095968u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095965u); } /* indirect call */
    }

loc_00095968: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = MEM32(esi + 0xC);
    eax = esp + 0x1C;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x18); /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x000959BFu); RECOMP_ABI_CALL(0x000940F0u, sub_000940F0); /* call 0x000940F0 */

loc_000959BF: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000959D0
 * Original: 0x000959D0 - 0x00095A3C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000959D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000959D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000959D8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000959D8: ;
    MEM32(esi) = 0x2E6C60;
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
    PUSH32(esp, 0x00095A35u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00095A35: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00095A40
 * Original: 0x00095A40 - 0x00095A4C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095A40: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00095A50(); return; /* tail jmp 0x00095A50 */

}

/**
 * sub_00095A50
 * Original: 0x00095A50 - 0x00095ABD (109 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095AB8; /* je: equal / zero */

loc_00095A62: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x67C);
    edx = MEM32(ecx + 0x680);
    MEM32(ecx + 0x684) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x680);
    edx = MEM32(ecx + 0x67C);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00095A9B; /* je: equal / zero */

loc_00095A94: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00095A9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00095A98u); } /* indirect call */
    }

loc_00095A9B: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF978u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF978u;
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
    if (CMP_NE(_fa, _fb)) goto loc_00095A62; /* jne: not equal / not zero */

loc_00095AB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095AC0
 * Original: 0x00095AC0 - 0x00095B0A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095AC0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x67C;
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
 * sub_00095B10
 * Original: 0x00095B10 - 0x00095B25 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095B10(void)
{

loc_00095B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00095B18u); RECOMP_ABI_CALL(0x000920B0u, sub_000920B0); /* call 0x000920B0 */

loc_00095B18: ;
    PUSH32(esp, esi);
    ecx = 0x3232B0;
    PUSH32(esp, 0x00095B23u); RECOMP_ABI_CALL(0x00095AC0u, sub_00095AC0); /* call 0x00095AC0 */

loc_00095B23: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00095B30
 * Original: 0x00095B30 - 0x00095B35 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095B30: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_00095B40
 * Original: 0x00095B40 - 0x00095B45 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095B40: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_00095B50
 * Original: 0x00095B50 - 0x00095B6A (26 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095B50(void)
{

loc_00095B50: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = eax + edx * 8;
    MEMF(ecx + eax * 4 + 0x1C) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00095B70
 * Original: 0x00095B70 - 0x00095B95 (37 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095B70(void)
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

loc_00095B70: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00095B8C; /* jae: above or equal (unsigned >=) */

loc_00095B79: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00095B8C; /* jae: above or equal (unsigned >=) */

loc_00095B82: ;
    eax = eax + edx * 8;
    fp_push(MEMF(ecx + eax * 4 + 0x1C)); /* fld float */
    esp += 12; return; /* ret 8 */

loc_00095B8C: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00095BA0
 * Original: 0x00095BA0 - 0x00095BDC (60 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095BA0(void)
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

loc_00095BA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00095BD8; /* jae: above or equal (unsigned >=) */

loc_00095BAA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEMF(ecx + esi * 4 + 0x13C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00095BC1u); RECOMP_ABI_CALL(0x00095B70u, sub_00095B70); /* call 0x00095B70 */

loc_00095BC1: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00095BD8; /* jbe: below or equal (unsigned <=) */

loc_00095BCB: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095BD8u); RECOMP_ABI_CALL(0x00095B50u, sub_00095B50); /* call 0x00095B50 */

loc_00095BD8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00095BE0
 * Original: 0x00095BE0 - 0x00095BF8 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095BE0(void)
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

loc_00095BE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00095BEE; /* jle: less or equal (signed <=) */

loc_00095BE9: ;
    eax = 4;

loc_00095BEE: ;
    fp_push(MEMF(eax * 4 + 0x2E6C78)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00095C00
 * Original: 0x00095C00 - 0x00095C18 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095C00(void)
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

loc_00095C00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00095C0E; /* jle: less or equal (signed <=) */

loc_00095C09: ;
    eax = 4;

loc_00095C0E: ;
    fp_push(MEMF(eax * 4 + 0x2E6C7C)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00095C20
 * Original: 0x00095C20 - 0x00095C99 (121 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095C20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DA8B911) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DA8B911 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00095C60; /* ja: above (unsigned >) */

loc_00095C2B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00095C5A; /* je: equal / zero */

loc_00095C2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E520DCB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E520DCB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00095C4D; /* ja: above (unsigned >) */

loc_00095C34: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00095C47; /* je: equal / zero */

loc_00095C36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48CD164) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x48CD164 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095C77; /* je: equal / zero */

loc_00095C3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23E9891F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23E9891F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095C54; /* je: equal / zero */

loc_00095C44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00095C47: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_00095C4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4124F2E6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4124F2E6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095C90; /* jne: not equal / not zero */

loc_00095C54: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_00095C5A: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00095C60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xECA4A890u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xECA4A890u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00095C89; /* ja: above (unsigned >) */

loc_00095C67: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00095C83; /* je: equal / zero */

loc_00095C69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E3669AE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5E3669AE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095C7D; /* je: equal / zero */

loc_00095C70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFEF0234u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBFEF0234u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095C90; /* jne: not equal / not zero */

loc_00095C77: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00095C7D: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00095C83: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_00095C89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF887CDB5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF887CDB5u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095C93; /* je: equal / zero */

loc_00095C90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00095C93: ;
    eax = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_00095CA0
 * Original: 0x00095CA0 - 0x00095CE1 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095CA0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00095CDB; /* ja: above (unsigned >) */

loc_00095CAA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x95CE4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00095CB1u) goto loc_00095CB1;
    if (_jt == 0x00095CB7u) goto loc_00095CB7;
    if (_jt == 0x00095CBDu) goto loc_00095CBD;
    if (_jt == 0x00095CC3u) goto loc_00095CC3;
    if (_jt == 0x00095CC9u) goto loc_00095CC9;
    if (_jt == 0x00095CCFu) goto loc_00095CCF;
    if (_jt == 0x00095CD5u) goto loc_00095CD5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00095CB1: ;
    eax = 0x2E6CCC;
    esp += 4; return; /* ret */

loc_00095CB7: ;
    eax = 0x2E6CC8;
    esp += 4; return; /* ret */

loc_00095CBD: ;
    eax = 0x2E6CC4;
    esp += 4; return; /* ret */

loc_00095CC3: ;
    eax = 0x2E6CBC;
    esp += 4; return; /* ret */

loc_00095CC9: ;
    eax = 0x2E6CB4;
    esp += 4; return; /* ret */

loc_00095CCF: ;
    eax = 0x2E6CAC;
    esp += 4; return; /* ret */

loc_00095CD5: ;
    eax = 0x2E6CA8;
    esp += 4; return; /* ret */

loc_00095CDB: ;
    eax = 0x2E6C90;
    esp += 4; return; /* ret */

}

/**
 * sub_00095D00
 * Original: 0x00095D00 - 0x00095D0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095D00: ;
    MEM32(ecx) = 0x2E6CD4;
    g_seh_ebp = ebp; sub_001FA0A0(); return; /* tail jmp 0x001FA0A0 */

}

/**
 * sub_00095D10
 * Original: 0x00095D10 - 0x00095D22 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095D10(void)
{

loc_00095D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00095D18u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00095D18: ;
    MEM32(esi) = 0x2E6CD4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00095D30
 * Original: 0x00095D30 - 0x00095D4E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00095D38u); RECOMP_ABI_CALL(0x00095D00u, sub_00095D00); /* call 0x00095D00 */

loc_00095D38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00095D48; /* je: equal / zero */

loc_00095D3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095D45u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00095D45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095D48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095D50
 * Original: 0x00095D50 - 0x00095DD0 (128 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095D50(void)
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

loc_00095D50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00095D5Au); RECOMP_ABI_CALL(0x00095C00u, sub_00095C00); /* call 0x00095C00 */

loc_00095D5A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC09C)); /* fadd dword ptr [0x2dc09c] */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    esi = 1;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edi = ecx + 0x120;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    goto loc_00095D80;

    /* nop */

loc_00095D80: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095D88u); RECOMP_ABI_CALL(0x00095B70u, sub_00095B70); /* call 0x00095B70 */

loc_00095D88: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00095DC1; /* jbe: below or equal (unsigned <=) */

loc_00095D96: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00095DB4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00095DAE: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_00095DB4: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095DC1u); RECOMP_ABI_CALL(0x00095B50u, sub_00095B50); /* call 0x00095B50 */

loc_00095DC1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00095D80; /* jb: below (unsigned <) */

loc_00095DCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00095DD0
 * Original: 0x00095DD0 - 0x00095E64 (148 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00095DD0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095E61; /* je: equal / zero */

loc_00095DE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095E61; /* je: equal / zero */

loc_00095DE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095DF6; /* jne: not equal / not zero */

loc_00095DEA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00095E61; /* jne: not equal / not zero */

loc_00095DF6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00095E61; /* jae: above or equal (unsigned >=) */

loc_00095DFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00095E61; /* jae: above or equal (unsigned >=) */

loc_00095E00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095E10; /* jne: not equal / not zero */

loc_00095E05: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + edx * 4 + 0x13C)); /* movss */
    goto loc_00095E18;

loc_00095E10: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */

loc_00095E18: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00095E3A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00095E23: ;
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095E36u); RECOMP_ABI_CALL(0x00095B50u, sub_00095B50); /* call 0x00095B50 */

loc_00095E36: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00095E3A: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00095E53; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00095E4D: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00095E53: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095E60u); RECOMP_ABI_CALL(0x00095B50u, sub_00095B50); /* call 0x00095B50 */

loc_00095E60: ;
    POP32(esp, esi);

loc_00095E61: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00095E70
 * Original: 0x00095E70 - 0x00095E99 (41 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095E70(void)
{

loc_00095E70: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax + edx * 8;
    xmm0 = XMM_SCALAR(MEMF(ecx + esi * 4 + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095E95u); RECOMP_ABI_CALL(0x00095DD0u, sub_00095DD0); /* call 0x00095DD0 */

loc_00095E95: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00095EA0
 * Original: 0x00095EA0 - 0x00095ED3 (51 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00095EA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00095ED0; /* jae: above or equal (unsigned >=) */

loc_00095EA9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00095EC7; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00095EB7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DFE78)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00095EC7; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00095EC4: ;
    xmm0 = xmm1; /* movaps */

loc_00095EC7: ;
    MEMF(ecx + eax * 4 + 0x11C) = xmm0.f[0]; /* movss */

loc_00095ED0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00095EE0
 * Original: 0x00095EE0 - 0x00095F1E (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00095EE0: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00095F1B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00095EF5: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00095F07; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00095F02: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00095F10;

loc_00095F07: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E6CE8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00095F1B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E6CE8)) */

loc_00095F10: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fca = xmm0.f[0]; _fcb = MEMF(eax * 4 + 0x2E6C7C); /* comiss */
    if ((_fca > _fcb)) goto loc_00095F10; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax * 4 + 0x2E6C7C)) */

loc_00095F1B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095F20
 * Original: 0x00095F20 - 0x00095F93 (115 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095F20: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x1C;
    /* nop */

loc_00095F30: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00095F32: ;
    eax = MEM32(ebp);
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 0x14) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0x15;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    ecx = esp + 0x1C;
    PUSH32(esp, 0x2E6CEC);
    PUSH32(esp, ecx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x00095F5Fu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00095F5F: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095F69u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00095F69: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x00095F7Cu); RECOMP_ABI_CALL(0x00121DA0u, sub_00121DA0); /* call 0x00121DA0 */

loc_00095F7C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095F32; /* jl: less (signed <) */

loc_00095F85: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095F30; /* jl: less (signed <) */

loc_00095F8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00095FA0
 * Original: 0x00095FA0 - 0x00096028 (136 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095FA0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00095FB0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00095FB2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x18) = LO8(ebx);
    ecx = 0xF;
    edi = esp + 0x19;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x20;
    PUSH32(esp, 0x2E6CEC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095FD7u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00095FD7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00095FEAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00095FEA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x00095FFDu); RECOMP_ABI_CALL(0x00122000u, sub_00122000); /* call 0x00122000 */

loc_00095FFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096014; /* je: equal / zero */

loc_00096001: ;
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = esi + ebp * 8;
    MEMF(ecx + eax * 4 + 0x1C) = xmm0.f[0]; /* movss */

loc_00096014: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095FB2; /* jl: less (signed <) */

loc_0009601A: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095FB0; /* jl: less (signed <) */

loc_00096020: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00096030
 * Original: 0x00096030 - 0x000960B9 (137 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096030: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx + 0x13C;
    esi = ecx + 0x20;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00096050;

    /* nop */

loc_00096050: ;
    eax = MEM32(edx + 0x30DA78);
    MEM32(esi + -4) = eax;
    eax = MEM32(edx + 0x30DA7C);
    MEM32(esi) = eax;
    eax = MEM32(edx + 0x30DA80);
    MEM32(esi + 4) = eax;
    eax = MEM32(edx + 0x30DA84);
    MEM32(esi + 8) = eax;
    eax = MEM32(edx + 0x30DA88);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edx + 0x30DA8C);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edx + 0x30DA90);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(edx + 0x30DA94);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0009609Fu); RECOMP_ABI_CALL(0x00095EA0u, sub_00095EA0); /* call 0x00095EA0 */

loc_0009609F: ;
    MEMF(ebx) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00096050; /* jb: below (unsigned <) */

loc_000960B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000960C0
 * Original: 0x000960C0 - 0x000960C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000960C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000960C0: ;
    g_seh_ebp = ebp; sub_00096030(); return; /* tail jmp 0x00096030 */

}

/**
 * sub_000960D0
 * Original: 0x000960D0 - 0x000961BD (237 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000960D0(void)
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

loc_000960D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0xC9604343u);
    ecx = esi;
    PUSH32(esp, 0x000960EBu); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_000960EB: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFE910656u);
    ecx = esi;
    PUSH32(esp, 0x000960FAu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000960FA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096146; /* je: equal / zero */

loc_000960FE: ;
    edi = edi;

loc_00096100: ;
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00096108u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_00096108: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009610Eu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0009610E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096114u); RECOMP_ABI_CALL(0x00095C20u, sub_00095C20); /* call 0x00095C20 */

loc_00096114: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30DA7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30DA7C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    ebx = 7;

loc_00096126: ;
    ecx = esi;
    PUSH32(esp, 0x0009612Du); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0009612D: ;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00096126; /* jne: not equal / not zero */

loc_00096135: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFE910656u);
    ecx = esi;
    PUSH32(esp, 0x00096142u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00096142: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096100; /* jne: not equal / not zero */

loc_00096146: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0009614Fu); RECOMP_ABI_CALL(0x00096030u, sub_00096030); /* call 0x00096030 */

loc_0009614F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0xE04995DCu);
    ecx = esi;
    PUSH32(esp, 0x0009615Eu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0009615E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000961AA; /* je: equal / zero */

loc_00096162: ;
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0009616Au); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0009616A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096170u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00096170: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0009617Cu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0009617C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E6D04)); /* fmul dword ptr [0x2e6d04] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009618Cu); RECOMP_ABI_CALL(0x00095C20u, sub_00095C20); /* call 0x00095C20 */

loc_0009618C: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096199u); RECOMP_ABI_CALL(0x00095EA0u, sub_00095EA0); /* call 0x00095EA0 */

loc_00096199: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xE04995DCu);
    ecx = esi;
    PUSH32(esp, 0x000961A6u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000961A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096162; /* jne: not equal / not zero */

loc_000961AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000961B5u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_000961B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000961C0
 * Original: 0x000961C0 - 0x000961CE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000961C0(void)
{

loc_000961C0: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000961D0
 * Original: 0x000961D0 - 0x0009628C (188 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000961D0(void)
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

loc_000961D0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x2DC09C); /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC084)); /* movss */
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00096252; /* je: equal / zero */

loc_000961FE: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00096226; /* jbe: below or equal (unsigned <=) */

loc_00096218: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_00096226: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0xC0800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096235u); RECOMP_ABI_CALL(0x0004C310u, sub_0004C310); /* call 0x0004C310 */

loc_00096235: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    if ((_fca > _fcb)) goto loc_00096252; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_0009624C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00096252: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009626C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009625F: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp += 16; return; /* ret 12 */

loc_0009626C: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00096285; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009627F: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_00096285: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00096290
 * Original: 0x00096290 - 0x000962B0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00096290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00096290: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000962AD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0009629E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E6D08); /* comiss */
    if ((_fca > _fcb)) goto loc_000962AD; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2E6D08)) */

loc_000962A7: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000962AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000962B0
 * Original: 0x000962B0 - 0x000962C1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000962B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000962B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000962D0
 * Original: 0x000962D0 - 0x0009635D (141 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000962D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000962D0: ;
    SET_LO8(edx, MEM8(ecx + 0x30));
    xmm0 = XMM_SCALAR(MEMF(0x2E0A24)); /* movss */
    eax = MEM32(esp + 4);
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E6D10)); /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    SET_LO8(edx, LO8(edx) & 0xF9);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    SET_LO8(edx, LO8(edx) | 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x30) = LO8(edx);
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DBED4)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x38) = 0x4140CC;
    edx = MEM32(0x4140CC);
    MEM32(ecx + 0x34) = edx;
    _fb = (uint32_t)(0xFFFD40E0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFD40E0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x34) = edx;
    MEM8(ecx + 0x30) = MEM8(ecx + 0x30) & 0xF7;
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ecx + 0x54) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096360
 * Original: 0x00096360 - 0x00096445 (229 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096360(void)
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

loc_00096360: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000963CB; /* jne: not equal / not zero */

loc_0009636C: ;
    edx = MEM32(esp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = 0;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x000963A7u); RECOMP_ABI_CALL(0x0003C830u, sub_0003C830); /* call 0x0003C830 */

loc_000963A7: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DC09C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000963D4; /* jbe: below or equal (unsigned <=) */

loc_000963B9: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DC09C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000963D4; /* jbe: below or equal (unsigned <=) */

loc_000963CB: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000963D4: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000963F4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000963EF: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000963FC;

loc_000963F4: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000963FC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000963F9: ;
    xmm0 = xmm4; /* movaps */

loc_000963FC: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    if ((_fca > _fcb)) goto loc_0009641C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_00096411: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm1 = xmm4; /* movaps */
    if ((_fca > _fcb)) goto loc_0009641C; /* ja: above (unsigned >) (xmm2.f[0] vs xmm4.f[0]) */

loc_00096419: ;
    xmm1 = xmm2; /* movaps */

loc_0009641C: ;
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 0x44) = xmm1.f[0]; /* movss */
    esi = MEM32(esi);
    MEMF(esi + 0x248) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x22C) = xmm1.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00096450
 * Original: 0x00096450 - 0x00096468 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096450(void)
{

loc_00096450: ;
    eax = MEM32(ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x22C) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx);
    MEMF(ecx + 0x248) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00096470
 * Original: 0x00096470 - 0x00096632 (450 bytes, 115 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00096470: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24200B);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x9C));
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    _fa = (uint32_t)(MEM8(ebp + 0x30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x30), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000964AE; /* je: equal / zero */

loc_00096494: ;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x9C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xA8)) >> 32) & 1);
    esp = esp + 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000964AE: ;
    eax = MEM32(esp + 0xB4);
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xB4);
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E6D14); /* comiss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096515; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E6D14)) */

loc_0009650E: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00096619;

loc_00096515: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096529; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00096522: ;
    SET_LO8(eax, 1);
    goto loc_00096619;

loc_00096529: ;
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x278);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0009653Du); RECOMP_ABI_CALL(0x000186F0u, sub_000186F0); /* call 0x000186F0 */

loc_0009653D: ;
    MEM32(esp + 0x38) = edi;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0xB8) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00096558u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096552u); } /* indirect call */
    }

loc_00096558: ;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00096562u); RECOMP_ABI_CALL(0x00015CE0u, sub_00015CE0); /* call 0x00015CE0 */

loc_00096562: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0B9C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, esi);
    ecx = esp + 0x2C;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000965C3u); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_000965C3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x102);
    ecx = esp + 0x30;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000965D8u); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_000965D8: ;
    ecx = MEM32(esp + 0x6C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096601; /* je: equal / zero */

loc_000965EB: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000965FF; /* je: equal / zero */

loc_000965F6: ;
    PUSH32(esp, 0x000965FBu); RECOMP_ABI_CALL(0x00015000u, sub_00015000); /* call 0x00015000 */

loc_000965FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096601; /* je: equal / zero */

loc_000965FF: ;
    SET_LO8(ebx, 1);

loc_00096601: ;
    ecx = esp + 0x24;
    MEM32(esp + 0xB4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00096615u); RECOMP_ABI_CALL(0x00018AD0u, sub_00018AD0); /* call 0x00018AD0 */

loc_00096615: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);

loc_00096619: ;
    ecx = MEM32(esp + 0xA4);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xA8)) >> 32) & 1);
    esp = esp + 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00096640
 * Original: 0x00096640 - 0x000966A0 (96 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00096640: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0009666C; /* jne: not equal / not zero */

loc_0009664B: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00096694; /* je: equal / zero */

loc_00096652: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6921A0); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC340); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096694; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC340)) */

loc_0009666C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0009667Du); RECOMP_ABI_CALL(0x00096470u, sub_00096470); /* call 0x00096470 */

loc_0009667D: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    SET_LO8(eax, LO8(eax) << 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x30) = LO8(ecx);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax);
    MEM32(esi + 0x34) = ecx;

loc_00096694: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000966A0
 * Original: 0x000966A0 - 0x00096E8F (2031 bytes, 527 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000966A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000966A0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x54));
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    PUSH32(esp, ebp);
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00096E85; /* jnp: not parity */

loc_000966BF: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    eax = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x30) = LO8(ecx);
    edi = MEM32(eax + 0x27C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x12) = 0;
    MEM8(esp + 0x11) = 0;
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00096E5D; /* je: equal / zero */

loc_00096700: ;
    eax = MEM32(0x6459E8);
    ecx = MEM32(0x6459EC);
    edx = MEM32(0x6459F0);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(edi + 0x1C8);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x44) = ecx;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0xB421904);
    ecx = edi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x4C) = edx;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x2C) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    PUSH32(esp, 0x00096755u); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_00096755: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00096762u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_00096762: ;
    ebp = eax;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00096788; /* je: equal / zero */

loc_0009676E: ;
    ecx = MEM32(esi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009677Fu); RECOMP_ABI_CALL(0x0003AEC0u, sub_0003AEC0); /* call 0x0003AEC0 */

loc_0009677F: ;
    SET_LO8(ebx, 1);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00096A5B;

loc_00096788: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096A4D; /* je: equal / zero */

loc_00096790: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x98)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096A4D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_000967A5: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    eax = esp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000967B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000967AEu); } /* indirect call */
    }

loc_000967B1: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(ebp);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DBED0); /* comiss */
    ecx = ebp;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000967EF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DBED0)) */

loc_000967E5: ;
    eax = esp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000967EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000967EAu); } /* indirect call */
    }

loc_000967ED: ;
    goto loc_000967FA;

loc_000967EF: ;
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x000967FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000967F4u); } /* indirect call */
    }

loc_000967FA: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, ebp);
    ecx = edi;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00096822u); RECOMP_ABI_CALL(0x00032900u, sub_00032900); /* call 0x00032900 */

loc_00096822: ;
    _fa = (uint32_t)(MEM32(edi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1A0), 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x11) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x12) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0009695C; /* jne: not equal / not zero */

loc_0009683A: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009695C; /* jne: not equal / not zero */

loc_00096846: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC); /* subss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x10); /* subss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x14); /* subss */
    PUSH32(esp, 0x4CBE183D);
    ecx = edi;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00096885u); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_00096885: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000968F0; /* jbe: below or equal (unsigned <=) */

loc_0009689D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x48); /* subss */
    edx = esp + 0x58;
    PUSH32(esp, edx);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000968DDu); RECOMP_ABI_CALL(0x00011220u, sub_00011220); /* call 0x00011220 */

loc_000968DD: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    goto loc_000968F3;

loc_000968F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000968F3: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x68); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x1C); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x18); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x20); /* subss */
    xmm3 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x1C); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x20); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm2.f[0]; /* movss */
    goto loc_00096984;

loc_0009695C: ;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */

loc_00096984: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x30DB78)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC880); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x3C); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096A05; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000969FC: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */

loc_00096A05: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00096A0Eu); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_00096A0E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi);
    PUSH32(esp, 0x00096A49u); RECOMP_ABI_CALL(0x0003C830u, sub_0003C830); /* call 0x0003C830 */

loc_00096A49: ;
    SET_LO8(ebx, 1);
    goto loc_00096A5B;

loc_00096A4D: ;
    MEM32(esi + 8) = 0;
    _fb = (uint32_t)(0xFFFD40E0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x34)) + (uint64_t)(0xFFFD40E0u)) >> 32) & 1);
    MEM32(esi + 0x34) = MEM32(esi + 0x34) + 0xFFFD40E0u;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096A5B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E6D08); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096A81; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E6D08)) */

loc_00096A71: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_00096A87;

loc_00096A81: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_00096A87: ;
    SET_LO8(ecx, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096AB3; /* je: equal / zero */

loc_00096A8F: ;
    eax = MEM32(edi + 0x1E8);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00096AB3; /* jne: not equal / not zero */

loc_00096A9B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E6D0C)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_00096AB3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096AE1; /* je: equal / zero */

loc_00096AB7: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00096AE1; /* jbe: below or equal (unsigned <=) */

loc_00096ACA: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x28)); /* fmul dword ptr [esi + 0x28] */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00096AE1; /* jbe: below or equal (unsigned <=) */

loc_00096ADD: ;
    SET_LO8(eax, 1);
    goto loc_00096AE3;

loc_00096AE1: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00096AE3: ;
    SET_LO8(edx, MEM8(esi + 0x30));
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    if (2) _cf = (int)(((LO8(eax)) >> (8 - (2))) & 1);
    SET_LO8(eax, LO8(eax) << 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x30) = LO8(edx);
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E6D08); /* comiss */
    SET_LO8(eax, LO8(edx));
    MEM8(esp + 0x13) = 1;
    if ((_fca > _fcb)) goto loc_00096B0C; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2E6D08)) */

loc_00096B07: ;
    MEM8(esp + 0x13) = 0;

loc_00096B0C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00096D5B; /* je: equal / zero */

loc_00096B14: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00096B8D; /* jne: not equal / not zero */

loc_00096B1C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096B8D; /* je: equal / zero */

loc_00096B20: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x00096B2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096B24u); } /* indirect call */
    }

loc_00096B2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096B8D; /* je: equal / zero */

loc_00096B2E: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x204); PUSH32(esp, 0x00096B38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096B32u); } /* indirect call */
    }

loc_00096B38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096B8D; /* je: equal / zero */

loc_00096B3C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x68); /* addss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x5C;
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x00096B5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096B58u); } /* indirect call */
    }

loc_00096B5E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00096B6Bu); RECOMP_ABI_CALL(0x00096640u, sub_00096640); /* call 0x00096640 */

loc_00096B6B: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00096B83; /* jne: not equal / not zero */

loc_00096B7B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */

loc_00096B83: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    goto loc_00096B95;

loc_00096B8D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */

loc_00096B95: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096BB0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00096BA3: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E6D08); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096D38; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E6D08)) */

loc_00096BB0: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00096D38; /* je: equal / zero */

loc_00096BBA: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x4C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096C66; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x4C)) */

loc_00096BC9: ;
    PUSH32(esp, 0x00096BCEu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_00096BCE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD418)); /* fmul dword ptr [0x2dd418] */
    eax = MEM32(edi + 0x1C8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC3CC)); /* fadd dword ptr [0x2dc3cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    if ((_fa == 0)) goto loc_00096C2A; /* je: equal / zero */

loc_00096BF0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00096C0D; /* je: equal / zero */

loc_00096BF3: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DBED0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDC40)); /* movss */
    goto loc_00096C4D;

loc_00096C0D: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC3C4); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3CC); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC880); /* mulss */
    goto loc_00096C45;

loc_00096C2A: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC340); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD418); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DDC40); /* mulss */

loc_00096C45: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */

loc_00096C4D: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x4C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x50) = xmm2.f[0]; /* movss */

loc_00096C66: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096D38; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00096C78: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    if (1) _cf = (int)(((LO8(eax)) >> ((1) - 1)) & 1);
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x10) = LO8(eax);
    if ((_fa != 0)) goto loc_00096CC7; /* jne: not equal / not zero */

loc_00096C85: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00096CB7; /* jne: not equal / not zero */

loc_00096C8D: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x00096C9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096C99u); } /* indirect call */
    }

loc_00096C9F: ;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00096CACu); RECOMP_ABI_CALL(0x00096640u, sub_00096640); /* call 0x00096640 */

loc_00096CAC: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;

loc_00096CB7: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00096D38; /* je: equal / zero */

loc_00096CC7: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00096D38; /* jne: not equal / not zero */

loc_00096CCD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC340); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096D38; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC340)) */

loc_00096CDC: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x278);
    eax = MEM32(eax + 0x150);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096CF7u); RECOMP_ABI_CALL(0x0015EB30u, sub_0015EB30); /* call 0x0015EB30 */

loc_00096CF7: ;
    fp_push(MEMF(0x2DC38C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00096D38; /* jbe: below or equal (unsigned <=) */

loc_00096D08: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x278);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00096D18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096D12u); } /* indirect call */
    }

loc_00096D18: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3CC); /* mulss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00096D34u); RECOMP_ABI_CALL(0x00034280u, sub_00034280); /* call 0x00034280 */

loc_00096D34: ;
    MEM8(esp + 0x10) = LO8(eax);

loc_00096D38: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x4C); /* comiss */
    if ((_fca >= _fcb)) goto loc_00096D49; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0x4C)) */

loc_00096D41: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096D63; /* je: equal / zero */

loc_00096D49: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x68); /* subss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    goto loc_00096D63;

loc_00096D5B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */

loc_00096D63: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096D9D; /* je: equal / zero */

loc_00096D67: ;
    edi = MEM32(esi);
    ebx = MEM32(esp + 0x28);
    eax = MEM32(edi + 0x238);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00096D81u); RECOMP_ABI_CALL(0x000961D0u, sub_000961D0); /* call 0x000961D0 */

loc_00096D81: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi + 0x21C);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00096D99u); RECOMP_ABI_CALL(0x000961D0u, sub_000961D0); /* call 0x000961D0 */

loc_00096D99: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */

loc_00096D9D: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DEF; /* je: equal / zero */

loc_00096DA5: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00096DC7; /* jne: not equal / not zero */

loc_00096DAD: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DC3; /* je: equal / zero */

loc_00096DB5: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E6D08); /* comiss */
    if ((_fca > _fcb)) goto loc_00096DC7; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2E6D08)) */

loc_00096DC3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00096DC9;

loc_00096DC7: ;
    eax = ebp;

loc_00096DC9: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096DD3u); RECOMP_ABI_CALL(0x0003D4A0u, sub_0003D4A0); /* call 0x0003D4A0 */

loc_00096DD3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DEF; /* je: equal / zero */

loc_00096DD7: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096DE7; /* je: equal / zero */

loc_00096DDF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */

loc_00096DE7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */

loc_00096DEF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096E5A; /* je: equal / zero */

loc_00096DF3: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00096DFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00096DF8u); } /* indirect call */
    }

loc_00096DFE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096E5A; /* je: equal / zero */

loc_00096E02: ;
    ecx = ebp;
    PUSH32(esp, 0x00096E09u); RECOMP_ABI_CALL(0x00012990u, sub_00012990); /* call 0x00012990 */

loc_00096E09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096E5A; /* je: equal / zero */

loc_00096E0D: ;
    ecx = esi;
    PUSH32(esp, 0x00096E14u); RECOMP_ABI_CALL(0x00096290u, sub_00096290); /* call 0x00096290 */

loc_00096E14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00096E2E; /* je: equal / zero */

loc_00096E18: ;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, 0x7CF9FA72);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096E26u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00096E26: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x54) = eax;
    goto loc_00096E35;

loc_00096E2E: ;
    MEM32(esi + 0x54) = 0;

loc_00096E35: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00096E5A; /* jne: not equal / not zero */

loc_00096E3D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E6D08); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00096E5A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E6D08)) */

loc_00096E4B: ;
    PUSH32(esp, 0x70F7A8F7);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00096E57u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00096E57: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096E5A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00096E5D: ;
    eax = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 0x248) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(eax + 0x22C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */

loc_00096E85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x54)) >> 32) & 1);
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00096E90
 * Original: 0x00096E90 - 0x00096EFC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00096E98u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00096E98: ;
    MEM32(esi) = 0x2E6D18;
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
    PUSH32(esp, 0x00096EF5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00096EF5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00096F00
 * Original: 0x00096F00 - 0x00096F0C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00096F00: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00096F10(); return; /* tail jmp 0x00096F10 */

}

/**
 * sub_00096F10
 * Original: 0x00096F10 - 0x00096F6D (93 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096F10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00096F68; /* je: equal / zero */

loc_00096F22: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    ecx = MEM32(eax + 0x58);
    edx = MEM32(eax + 0x5C);
    MEM32(eax + 0x60) = 0;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 0x5C);
    edx = MEM32(eax + 0x58);
    MEM32(ecx) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00096F4E; /* je: equal / zero */

loc_00096F45: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096F4Bu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00096F4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00096F4E: ;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFF9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF9Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = edx;
    eax = MEM32(edi + 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00096F22; /* jne: not equal / not zero */

loc_00096F68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00096F70
 * Original: 0x00096F70 - 0x00096FB7 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00096F70: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x58;
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
 * sub_00096FC0
 * Original: 0x00096FC0 - 0x00096FDA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096FC0(void)
{

loc_00096FC0: ;
    edx = ecx;
    PUSH32(esp, 0x00096FC7u); RECOMP_ABI_CALL(0x00096450u, sub_00096450); /* call 0x00096450 */

loc_00096FC7: ;
    ecx = edx;
    PUSH32(esp, 0x00096FCEu); RECOMP_ABI_CALL(0x000961C0u, sub_000961C0); /* call 0x000961C0 */

loc_00096FCE: ;
    PUSH32(esp, edx);
    ecx = 0x323498;
    PUSH32(esp, 0x00096FD9u); RECOMP_ABI_CALL(0x00096F70u, sub_00096F70); /* call 0x00096F70 */

loc_00096FD9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00096FE0
 * Original: 0x00096FE0 - 0x00096FF2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00096FE0(void)
{

loc_00096FE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00096FE8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00096FE8: ;
    MEM32(esi) = 0x2E6D38;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097000
 * Original: 0x00097000 - 0x000970A1 (161 bytes, 42 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00097000: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E6D34); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009701A; /* jp: parity */

loc_00097015: ;
    MEM32(ecx + 8) = edx;
    goto loc_00097037;

loc_0009701A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3235D4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00097030; /* jp: parity */

loc_00097027: ;
    MEM32(ecx + 8) = 2;
    goto loc_00097037;

loc_00097030: ;
    MEM32(ecx + 8) = 1;

loc_00097037: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E6D2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00097051; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00097044: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E6D30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00097054; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00097051: ;
    xmm0 = xmm1; /* movaps */

loc_00097054: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, MEM8(ecx + 0x44));
    MEMF(ecx + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = edx;
    edx = MEM32(ecx + 0x40);
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEMF(ecx + 0x30) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x40) = edx;
    MEM8(ecx + 0x44) = LO8(eax);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000970B0
 * Original: 0x000970B0 - 0x000970F5 (69 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000970B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000970B0: ;
    edx = MEM32(ecx + 0x40);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x40) = esi;
    edx = esi;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3F (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = esi; /* cmovne */
    esi = MEM32(esp + 0x10);
    esi = esi & 0xFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF00003Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x40) = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00097100
 * Original: 0x00097100 - 0x0009710D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097100: ;
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097109u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_00097109: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00097110
 * Original: 0x00097110 - 0x0009711D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097110: ;
    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097119u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_00097119: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00097120
 * Original: 0x00097120 - 0x0009712E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097120: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00097130
 * Original: 0x00097130 - 0x000971B8 (136 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097130: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000971B0; /* je: equal / zero */

loc_0009713F: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(edi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00097154u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097151u); } /* indirect call */
    }

loc_00097154: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x44) = MEM8(esi + 0x44) | 2;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00097173u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009716Du); } /* indirect call */
    }

loc_00097173: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009719B; /* je: equal / zero */

loc_00097177: ;
    ecx = MEM32(eax + 0x4A8);
    edx = MEM32(eax + 0x4A4);
    eax = MEM32(edi + 0xF4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00097193u); RECOMP_ABI_CALL(0x000970B0u, sub_000970B0); /* call 0x000970B0 */

loc_00097193: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009719B: ;
    ecx = MEM32(edi + 0xF4);
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0x3F);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000971B0u); RECOMP_ABI_CALL(0x000970B0u, sub_000970B0); /* call 0x000970B0 */

loc_000971B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000971C0
 * Original: 0x000971C0 - 0x00097262 (162 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000971C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000971C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2E6D4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x000971CFu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000971CF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000971E1; /* je: equal / zero */

loc_000971D6: ;
    ecx = eax;
    PUSH32(esp, 0x000971DDu); RECOMP_ABI_CALL(0x00097120u, sub_00097120); /* call 0x00097120 */

loc_000971DD: ;
    esi = eax;
    goto loc_000971E3;

loc_000971E1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000971E3: ;
    ecx = MEM32(0x323544);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esi + 0x48;
    MEM32(0x323544) = ecx;
    PUSH32(esp, eax);
    ecx = 0x323590;
    PUSH32(esp, 0x00097207u); RECOMP_ABI_CALL(0x0004D110u, sub_0004D110); /* call 0x0004D110 */

loc_00097207: ;
    eax = MEM32(0x323548);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(0x323548) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0009722Eu); RECOMP_ABI_CALL(0x00097000u, sub_00097000); /* call 0x00097000 */

loc_0009722E: ;
    _fa = (uint32_t)(MEM32(0x3235A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3235A0), 1 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0009725E; /* jne: not equal / not zero */

loc_00097238: ;
    eax = MEM32(0x3235CC);
    ecx = MEM32(0x323520);
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3235B8;
    MEM32(0x3235CC) = eax;
    PUSH32(esp, 0x0009725Eu); RECOMP_ABI_CALL(0x001FA170u, sub_001FA170); /* call 0x001FA170 */

loc_0009725E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097270
 * Original: 0x00097270 - 0x000972A4 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097270: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009728Fu); RECOMP_ABI_CALL(0x000971C0u, sub_000971C0); /* call 0x000971C0 */

loc_0009728F: ;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000972A0u); RECOMP_ABI_CALL(0x00097130u, sub_00097130); /* call 0x00097130 */

loc_000972A0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000972B0
 * Original: 0x000972B0 - 0x000972F0 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000972B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000972B0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000972CEu); RECOMP_ABI_CALL(0x000971C0u, sub_000971C0); /* call 0x000971C0 */

loc_000972CE: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x18) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x44));
    SET_LO8(ecx, LO8(ecx) | 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x44) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000972F0
 * Original: 0x000972F0 - 0x0009735C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000972F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000972F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000972F8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000972F8: ;
    MEM32(esi) = 0x2E6D80;
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
    PUSH32(esp, 0x00097355u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00097355: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097360
 * Original: 0x00097360 - 0x000973CC (108 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097360: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ecx + 0x78) = MEM32(ecx + 0x78) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = MEM32(edx + 0x48);
    ebx = MEM32(edx + 0x4C);
    eax = edx + 0x48;
    MEM32(eax + 8) = 0;
    MEM32(edi + 4) = ebx;
    ebx = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(edi) = ebx;
    MEM32(ecx + 0x8C) = MEM32(ecx + 0x8C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x88) = 0x7FFFFFFF;
    ecx = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000973AD; /* je: equal / zero */

loc_0009739A: ;
    /* nop */

loc_000973A0: ;
    edi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000973AD; /* jge: greater or equal (signed >=) */

loc_000973A7: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000973A0; /* jne: not equal / not zero */

loc_000973AD: ;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000973D0
 * Original: 0x000973D0 - 0x000973DC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000973D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000973D0: ;
    eax = ecx + 0x7C;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000973E0(); return; /* tail jmp 0x000973E0 */

}

/**
 * sub_000973E0
 * Original: 0x000973E0 - 0x0009743D (93 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000973E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000973E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00097438; /* je: equal / zero */

loc_000973F2: ;
    edx = MEM32(edi + 0x10);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x48);
    edx = MEM32(eax + 0x4C);
    MEM32(eax + 0x50) = 0;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(eax + 0x48);
    MEM32(ecx) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0009741E; /* je: equal / zero */

loc_00097415: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009741Bu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0009741B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009741E: ;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFFA8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFA8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = edx;
    eax = MEM32(edi + 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000973F2; /* jne: not equal / not zero */

loc_00097438: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097440
 * Original: 0x00097440 - 0x00097452 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097440(void)
{

loc_00097440: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00097448u); RECOMP_ABI_CALL(0x000972F0u, sub_000972F0); /* call 0x000972F0 */

loc_00097448: ;
    MEM32(esi) = 0x2E6D80;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097460
 * Original: 0x00097460 - 0x0009747F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097460: ;
    PUSH32(esp, ecx);
    ecx = 0x323528;
    PUSH32(esp, 0x0009746Bu); RECOMP_ABI_CALL(0x00097360u, sub_00097360); /* call 0x00097360 */

loc_0009746B: ;
    eax = MEM32(0x3235A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009747E; /* jne: not equal / not zero */

loc_00097474: ;
    ecx = 0x3235B8;
    g_seh_ebp = ebp; sub_001FA1D0(); return; /* tail jmp 0x001FA1D0 */

loc_0009747E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00097480
 * Original: 0x00097480 - 0x00097518 (152 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00097480: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */
    PUSH32(esp, edi);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009749Cu); RECOMP_ABI_CALL(0x00097100u, sub_00097100); /* call 0x00097100 */

loc_0009749C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000974F8; /* je: equal / zero */

loc_000974A2: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000974F8; /* je: equal / zero */

loc_000974A9: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000974C1; /* je: equal / zero */

loc_000974AF: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0x24) = edx;

loc_000974C1: ;
    eax = MEM32(edi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x000974D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000974CAu); } /* indirect call */
    }

loc_000974D0: ;
    edx = MEM32(eax);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x18) = edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000974F8; /* jne: not equal / not zero */

loc_000974E6: ;
    eax = MEM32(edi + 0x104);
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(edi + 0x108);
    MEM32(esi + 0x2C) = ecx;

loc_000974F8: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097510; /* je: equal / zero */

loc_000974FE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00097510; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x34)) */

loc_00097509: ;
    ecx = esi;
    PUSH32(esp, 0x00097510u); RECOMP_ABI_CALL(0x00097460u, sub_00097460); /* call 0x00097460 */

loc_00097510: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097520
 * Original: 0x00097520 - 0x00097547 (39 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097520: ;
    PUSH32(esp, esi);
    esi = MEM32(0x323590);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097543; /* je: equal / zero */

loc_0009752E: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_00097533: ;
    esi = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009753Bu); RECOMP_ABI_CALL(0x00097480u, sub_00097480); /* call 0x00097480 */

loc_0009753B: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097533; /* jne: not equal / not zero */

loc_00097542: ;
    POP32(esp, edi);

loc_00097543: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097550
 * Original: 0x00097550 - 0x00097582 (50 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097550: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0009756F; /* je: equal / zero */

loc_0009756A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009756Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009756Cu); } /* indirect call */
    }

loc_0009756F: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x24) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009757F; /* je: equal / zero */

loc_0009757B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0009757Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009757Du); } /* indirect call */
    }

loc_0009757F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00097590
 * Original: 0x00097590 - 0x000975A0 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097590(void)
{

loc_00097590: ;
    eax = MEM32(ecx + 0x38);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x17C) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000975A0
 * Original: 0x000975A0 - 0x000975E1 (65 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000975A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000975A0: ;
    eax = MEM32(ecx + 0x34);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0xC8));
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000975C2; /* jne: not equal / not zero */

loc_000975B1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEM8(eax + 0xC0) = LO8(edx);

loc_000975C2: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(MEM8(eax + 0xC8)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC8), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000975DE; /* jne: not equal / not zero */

loc_000975CD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEM8(eax + 0xC0) = LO8(edx);

loc_000975DE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000975F0
 * Original: 0x000975F0 - 0x000975F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000975F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000975F0: ;
    ecx = MEM32(ecx + 0x34);
    g_seh_ebp = ebp; sub_000A0710(); return; /* tail jmp 0x000A0710 */

}

/**
 * sub_00097600
 * Original: 0x00097600 - 0x00097608 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097600: ;
    ecx = MEM32(ecx + 0x34);
    g_seh_ebp = ebp; sub_000A08A0(); return; /* tail jmp 0x000A08A0 */

}

/**
 * sub_00097610
 * Original: 0x00097610 - 0x00097617 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097610(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00097610: ;
    eax = MEM32(ecx + 0x34);
    fp_push(MEMF(eax + 0x70)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097620
 * Original: 0x00097620 - 0x00097627 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097620(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00097620: ;
    eax = MEM32(ecx + 0x34);
    fp_push(MEMF(eax + 0x6C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097630
 * Original: 0x00097630 - 0x00097637 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097630(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00097630: ;
    eax = MEM32(ecx + 0x34);
    fp_push(MEMF(eax + 0x74)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097640
 * Original: 0x00097640 - 0x00097647 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097640(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00097640: ;
    eax = MEM32(ecx + 0x34);
    fp_push(MEMF(eax + 0x64)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097650
 * Original: 0x00097650 - 0x00097657 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097650(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00097650: ;
    eax = MEM32(ecx + 0x34);
    fp_push(MEMF(eax + 0x60)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097660
 * Original: 0x00097660 - 0x0009766C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00097660: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x28)));
    eax = eax - MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00097670
 * Original: 0x00097670 - 0x0009767C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00097670: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x2C)));
    eax = eax - MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00097680
 * Original: 0x00097680 - 0x0009768C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00097680: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x30)));
    eax = eax - MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00097690
 * Original: 0x00097690 - 0x0009769C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00097690: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x38)));
    eax = eax - MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000976A0
 * Original: 0x000976A0 - 0x000976AC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000976A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000976A0: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x34)));
    eax = eax - MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000976B0
 * Original: 0x000976B0 - 0x000976BC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000976B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000976B0: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x3C)));
    eax = eax - MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000976C0
 * Original: 0x000976C0 - 0x000976CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000976C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000976C0: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x40)));
    eax = eax - MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000976D0
 * Original: 0x000976D0 - 0x000976DC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000976D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000976D0: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x44)));
    eax = eax - MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000976E0
 * Original: 0x000976E0 - 0x000976F8 (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000976E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000976E0: ;
    SET_LO8(eax, MEM8(ecx + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000976F5; /* jne: not equal / not zero */

loc_000976E7: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000976F5u); RECOMP_ABI_CALL(0x00097550u, sub_00097550); /* call 0x00097550 */

loc_000976F5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097700
 * Original: 0x00097700 - 0x00097735 (53 bytes, 21 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097700: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097731; /* jne: not equal / not zero */

loc_0009770A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00097721u); RECOMP_ABI_CALL(0x000A1A60u, sub_000A1A60); /* call 0x000A1A60 */

loc_00097721: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00097731u); RECOMP_ABI_CALL(0x00097550u, sub_00097550); /* call 0x00097550 */

loc_00097731: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00097740
 * Original: 0x00097740 - 0x00097758 (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097740: ;
    SET_LO8(eax, MEM8(ecx + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097755; /* jne: not equal / not zero */

loc_00097747: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00097755u); RECOMP_ABI_CALL(0x00097550u, sub_00097550); /* call 0x00097550 */

loc_00097755: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097760
 * Original: 0x00097760 - 0x0009778B (43 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097760: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097787; /* jne: not equal / not zero */

loc_0009776A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097777u); RECOMP_ABI_CALL(0x000A0EF0u, sub_000A0EF0); /* call 0x000A0EF0 */

loc_00097777: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00097787u); RECOMP_ABI_CALL(0x00097550u, sub_00097550); /* call 0x00097550 */

loc_00097787: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00097790
 * Original: 0x00097790 - 0x000977A8 (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097790: ;
    SET_LO8(eax, MEM8(ecx + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000977A5; /* jne: not equal / not zero */

loc_00097797: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000977A5u); RECOMP_ABI_CALL(0x00097550u, sub_00097550); /* call 0x00097550 */

loc_000977A5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000977B0
 * Original: 0x000977B0 - 0x000977C8 (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000977B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000977B0: ;
    SET_LO8(eax, MEM8(ecx + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000977C5; /* jne: not equal / not zero */

loc_000977B7: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000977C5u); RECOMP_ABI_CALL(0x00097550u, sub_00097550); /* call 0x00097550 */

loc_000977C5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000977D0
 * Original: 0x000977D0 - 0x000977E8 (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000977D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000977D0: ;
    SET_LO8(eax, MEM8(ecx + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000977E5; /* jne: not equal / not zero */

loc_000977D7: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000977E5u); RECOMP_ABI_CALL(0x00097550u, sub_00097550); /* call 0x00097550 */

loc_000977E5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000977F0
 * Original: 0x000977F0 - 0x000977F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000977F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000977F0: ;
    ecx = MEM32(ecx + 0x38);
    g_seh_ebp = ebp; sub_0009B160(); return; /* tail jmp 0x0009B160 */

}

/**
 * sub_00097800
 * Original: 0x00097800 - 0x00097808 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097800: ;
    ecx = MEM32(ecx + 0x38);
    g_seh_ebp = ebp; sub_0009B140(); return; /* tail jmp 0x0009B140 */

}

/**
 * sub_00097810
 * Original: 0x00097810 - 0x00097818 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097810: ;
    ecx = MEM32(ecx + 0x38);
    g_seh_ebp = ebp; sub_0009B1A0(); return; /* tail jmp 0x0009B1A0 */

}

/**
 * sub_00097820
 * Original: 0x00097820 - 0x00097828 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097820: ;
    ecx = MEM32(ecx + 0x38);
    g_seh_ebp = ebp; sub_0009B180(); return; /* tail jmp 0x0009B180 */

}

/**
 * sub_00097830
 * Original: 0x00097830 - 0x00097857 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097830(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00097830: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097842u); RECOMP_ABI_CALL(0x0009B200u, sub_0009B200); /* call 0x0009B200 */

loc_00097842: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0x00097853u); RECOMP_ABI_CALL(0x0009B140u, sub_0009B140); /* call 0x0009B140 */

loc_00097853: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097860
 * Original: 0x00097860 - 0x00097870 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097860(void)
{

loc_00097860: ;
    eax = MEM32(ecx + 0x38);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x15D) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097870
 * Original: 0x00097870 - 0x0009787A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097870(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00097870: ;
    eax = MEM32(ecx + 0x38);
    fp_push(MEMF(eax + 0x114)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097880
 * Original: 0x00097880 - 0x0009788A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097880(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00097880: ;
    eax = MEM32(ecx + 0x38);
    fp_push(MEMF(eax + 0x108)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097890
 * Original: 0x00097890 - 0x0009789A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097890(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00097890: ;
    eax = MEM32(ecx + 0x38);
    fp_push(MEMF(eax + 0x10C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000978A0
 * Original: 0x000978A0 - 0x000978B0 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000978A0(void)
{

loc_000978A0: ;
    eax = MEM32(ecx + 0x38);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x154) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000978B0
 * Original: 0x000978B0 - 0x000978BA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000978B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000978B0: ;
    eax = MEM32(ecx + 0x38);
    fp_push(MEMF(eax + 0x180)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000978C0
 * Original: 0x000978C0 - 0x000978E4 (36 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000978C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000978C0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x40);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x000978E1u); RECOMP_ABI_CALL(0x0009A600u, sub_0009A600); /* call 0x0009A600 */

loc_000978E1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000978F0
 * Original: 0x000978F0 - 0x000978F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000978F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000978F0: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_0009F6F0(); return; /* tail jmp 0x0009F6F0 */

}

/**
 * sub_00097900
 * Original: 0x00097900 - 0x00097908 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097900: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_0009F690(); return; /* tail jmp 0x0009F690 */

}

/**
 * sub_00097910
 * Original: 0x00097910 - 0x00097934 (36 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097910: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x00097931u); RECOMP_ABI_CALL(0x0009F650u, sub_0009F650); /* call 0x0009F650 */

loc_00097931: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00097940
 * Original: 0x00097940 - 0x0009796E (46 bytes, 15 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097940: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0009796Bu); RECOMP_ABI_CALL(0x0009F800u, sub_0009F800); /* call 0x0009F800 */

loc_0009796B: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00097970
 * Original: 0x00097970 - 0x00097978 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097970: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_0009F880(); return; /* tail jmp 0x0009F880 */

}

/**
 * sub_00097980
 * Original: 0x00097980 - 0x000979A2 (34 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097980(void)
{

loc_00097980: ;
    eax = MEM32(ecx + 0x30);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x114) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x118) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000979B0
 * Original: 0x000979B0 - 0x000979B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000979B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000979B0: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_0009F600(); return; /* tail jmp 0x0009F600 */

}

/**
 * sub_000979C0
 * Original: 0x000979C0 - 0x000979C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000979C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000979C0: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_0009F760(); return; /* tail jmp 0x0009F760 */

}

/**
 * sub_000979D0
 * Original: 0x000979D0 - 0x000979E0 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000979D0(void)
{

loc_000979D0: ;
    eax = MEM32(ecx + 0x30);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x138) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000979E0
 * Original: 0x000979E0 - 0x000979E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000979E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000979E0: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_0009FDB0(); return; /* tail jmp 0x0009FDB0 */

}

/**
 * sub_000979F0
 * Original: 0x000979F0 - 0x000979F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000979F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000979F0: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_0009F950(); return; /* tail jmp 0x0009F950 */

}

/**
 * sub_00097A00
 * Original: 0x00097A00 - 0x00097A08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097A00: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_0009F990(); return; /* tail jmp 0x0009F990 */

}

/**
 * sub_00097A10
 * Original: 0x00097A10 - 0x00097A1A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A10(void)
{

loc_00097A10: ;
    eax = MEM32(ecx + 0x28);
    SET_LO8(eax, MEM8(eax + 0xAC));
    esp += 4; return; /* ret */

}

/**
 * sub_00097A20
 * Original: 0x00097A20 - 0x00097A2A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A20(void)
{

loc_00097A20: ;
    eax = MEM32(ecx + 0x2C);
    SET_LO8(eax, MEM8(eax + 0xAC));
    esp += 4; return; /* ret */

}

/**
 * sub_00097A30
 * Original: 0x00097A30 - 0x00097A46 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A30(void)
{

loc_00097A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0x00097A3Bu); RECOMP_ABI_CALL(0x0009CA60u, sub_0009CA60); /* call 0x0009CA60 */

loc_00097A3B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00097A44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097A41u); } /* indirect call */
    }

loc_00097A44: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097A50
 * Original: 0x00097A50 - 0x00097A58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00097A50: ;
    ecx = MEM32(ecx + 0x38);
    g_seh_ebp = ebp; sub_0009AF30(); return; /* tail jmp 0x0009AF30 */

}

/**
 * sub_00097A60
 * Original: 0x00097A60 - 0x00097A82 (34 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097A60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097A7E; /* je: equal / zero */

loc_00097A6A: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00097A77u); RECOMP_ABI_CALL(0x00097550u, sub_00097550); /* call 0x00097550 */

loc_00097A77: ;
    MEM32(esi + 0x48) = 0;

loc_00097A7E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097A90
 * Original: 0x00097A90 - 0x00097ACD (61 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097A90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67BA7642) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67BA7642 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00097AB2; /* ja: above (unsigned >) */

loc_00097A9B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00097ACC; /* je: equal / zero */

loc_00097A9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47458E1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47458E1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097ACC; /* je: equal / zero */

loc_00097AA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20E0A19F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20E0A19F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097ACC; /* je: equal / zero */

loc_00097AAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A54D90F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A54D90F (32-bit) */
    goto loc_00097AC5;

loc_00097AB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x714DAA7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x714DAA7A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097ACC; /* je: equal / zero */

loc_00097AB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D4DC7FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D4DC7FE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097ACC; /* je: equal / zero */

loc_00097AC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7DBFE007) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7DBFE007 (32-bit) */

loc_00097AC5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00097ACC; /* je: equal / zero */

loc_00097AC7: ;
    eax = 0x933B5BDEu;

loc_00097ACC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00097AD0
 * Original: 0x00097AD0 - 0x00097B1B (75 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00097AD8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00097AD8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E6D9C;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM8(esi + 0x54) = LO8(eax);
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097B20
 * Original: 0x00097B20 - 0x00097B26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097B20(void)
{

loc_00097B20: ;
    eax = MEM32(0x3235DC);
    esp += 4; return; /* ret */

}

/**
 * sub_00097B30
 * Original: 0x00097B30 - 0x00097D22 (498 bytes, 162 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097B61; /* jne: not equal / not zero */

loc_00097B3A: ;
    PUSH32(esp, 0x2E6E90);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x00097B4Bu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00097B4B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097B5C; /* je: equal / zero */

loc_00097B52: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00097B5Au); RECOMP_ABI_CALL(0x00099EF0u, sub_00099EF0); /* call 0x00099EF0 */

loc_00097B5A: ;
    goto loc_00097B5E;

loc_00097B5C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097B5E: ;
    MEM32(esi + 0x28) = eax;

loc_00097B61: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097B8F; /* jne: not equal / not zero */

loc_00097B68: ;
    PUSH32(esp, 0x2E6E74);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x00097B79u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00097B79: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097B8A; /* je: equal / zero */

loc_00097B80: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00097B88u); RECOMP_ABI_CALL(0x0009F120u, sub_0009F120); /* call 0x0009F120 */

loc_00097B88: ;
    goto loc_00097B8C;

loc_00097B8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097B8C: ;
    MEM32(esi + 0x2C) = eax;

loc_00097B8F: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097BBD; /* jne: not equal / not zero */

loc_00097B96: ;
    PUSH32(esp, 0x2E6E58);
    PUSH32(esp, 0);
    PUSH32(esp, 0x150);
    PUSH32(esp, 0x00097BA7u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00097BA7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097BB8; /* je: equal / zero */

loc_00097BAE: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00097BB6u); RECOMP_ABI_CALL(0x0009FBD0u, sub_0009FBD0); /* call 0x0009FBD0 */

loc_00097BB6: ;
    goto loc_00097BBA;

loc_00097BB8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097BBA: ;
    MEM32(esi + 0x30) = eax;

loc_00097BBD: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097BEB; /* jne: not equal / not zero */

loc_00097BC4: ;
    PUSH32(esp, 0x2E6E3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x00097BD5u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00097BD5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097BE6; /* je: equal / zero */

loc_00097BDC: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00097BE4u); RECOMP_ABI_CALL(0x000A0760u, sub_000A0760); /* call 0x000A0760 */

loc_00097BE4: ;
    goto loc_00097BE8;

loc_00097BE6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097BE8: ;
    MEM32(esi + 0x34) = eax;

loc_00097BEB: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097C19; /* jne: not equal / not zero */

loc_00097BF2: ;
    PUSH32(esp, 0x2E6E20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D0);
    PUSH32(esp, 0x00097C03u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00097C03: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097C14; /* je: equal / zero */

loc_00097C0A: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00097C12u); RECOMP_ABI_CALL(0x0009B3D0u, sub_0009B3D0); /* call 0x0009B3D0 */

loc_00097C12: ;
    goto loc_00097C16;

loc_00097C14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097C16: ;
    MEM32(esi + 0x38) = eax;

loc_00097C19: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097C47; /* jne: not equal / not zero */

loc_00097C20: ;
    PUSH32(esp, 0x2E6E04);
    PUSH32(esp, 0);
    PUSH32(esp, 0x290);
    PUSH32(esp, 0x00097C31u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00097C31: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097C42; /* je: equal / zero */

loc_00097C38: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00097C40u); RECOMP_ABI_CALL(0x000A1C70u, sub_000A1C70); /* call 0x000A1C70 */

loc_00097C40: ;
    goto loc_00097C44;

loc_00097C42: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097C44: ;
    MEM32(esi + 0x3C) = eax;

loc_00097C47: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097C75; /* jne: not equal / not zero */

loc_00097C4E: ;
    PUSH32(esp, 0x2E6DE8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x00097C5Fu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00097C5F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097C70; /* je: equal / zero */

loc_00097C66: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00097C6Eu); RECOMP_ABI_CALL(0x0009A580u, sub_0009A580); /* call 0x0009A580 */

loc_00097C6E: ;
    goto loc_00097C72;

loc_00097C70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097C72: ;
    MEM32(esi + 0x40) = eax;

loc_00097C75: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00097CA3; /* jne: not equal / not zero */

loc_00097C7C: ;
    PUSH32(esp, 0x2E6DCC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x00097C8Du); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00097C8D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097C9E; /* je: equal / zero */

loc_00097C94: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00097C9Cu); RECOMP_ABI_CALL(0x000A0E90u, sub_000A0E90); /* call 0x000A0E90 */

loc_00097C9C: ;
    goto loc_00097CA0;

loc_00097C9E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097CA0: ;
    MEM32(esi + 0x44) = eax;

loc_00097CA3: ;
    PUSH32(esp, 0x2E6DB0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x00097CB4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00097CB4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097CC4; /* je: equal / zero */

loc_00097CBB: ;
    ecx = eax;
    PUSH32(esp, 0x00097CC2u); RECOMP_ABI_CALL(0x001F9CD0u, sub_001F9CD0); /* call 0x001F9CD0 */

loc_00097CC2: ;
    goto loc_00097CC6;

loc_00097CC4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00097CC6: ;
    PUSH32(esp, 0x6438E0);
    ecx = eax;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00097CD5u); RECOMP_ABI_CALL(0x001F8A70u, sub_001F8A70); /* call 0x001F8A70 */

loc_00097CD5: ;
    eax = MEM32(esi + 0x1C);
    MEM32(0x6437B4) = eax;
    MEM32(0x6437B8) = 0x4140CC;
    MEM32(0x30F008) = 0xA0A0A0;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00097CFEu); RECOMP_ABI_CALL(0x00097550u, sub_00097550); /* call 0x00097550 */

loc_00097CFE: ;
    MEM32(esi + 0x5C) = 0x4140D8;
    edx = MEM32(0x4140D8);
    MEM32(esi + 0x58) = edx;
    MEM32(esi + 0x48) = 0;
    MEM8(esi + 0x55) = 0;
    MEM8(0x3235D8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097D30
 * Original: 0x00097D30 - 0x00097DDA (170 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097D30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00097D3Du); RECOMP_ABI_CALL(0x00097550u, sub_00097550); /* call 0x00097550 */

loc_00097D3D: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097D4E; /* je: equal / zero */

loc_00097D44: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00097D4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097D48u); } /* indirect call */
    }

loc_00097D4B: ;
    MEM32(esi + 0x44) = edi;

loc_00097D4E: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097D5F; /* je: equal / zero */

loc_00097D55: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00097D5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097D59u); } /* indirect call */
    }

loc_00097D5C: ;
    MEM32(esi + 0x40) = edi;

loc_00097D5F: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097D70; /* je: equal / zero */

loc_00097D66: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00097D6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097D6Au); } /* indirect call */
    }

loc_00097D6D: ;
    MEM32(esi + 0x3C) = edi;

loc_00097D70: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097D81; /* je: equal / zero */

loc_00097D77: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00097D7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097D7Bu); } /* indirect call */
    }

loc_00097D7E: ;
    MEM32(esi + 0x38) = edi;

loc_00097D81: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097D94; /* je: equal / zero */

loc_00097D88: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097D8Eu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00097D8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = edi;

loc_00097D94: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097DA5; /* je: equal / zero */

loc_00097D9B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00097DA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097D9Fu); } /* indirect call */
    }

loc_00097DA2: ;
    MEM32(esi + 0x30) = edi;

loc_00097DA5: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097DB6; /* je: equal / zero */

loc_00097DAC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00097DB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097DB0u); } /* indirect call */
    }

loc_00097DB3: ;
    MEM32(esi + 0x2C) = edi;

loc_00097DB6: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097DC7; /* je: equal / zero */

loc_00097DBD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00097DC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097DC1u); } /* indirect call */
    }

loc_00097DC4: ;
    MEM32(esi + 0x28) = edi;

loc_00097DC7: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097DD7; /* je: equal / zero */

loc_00097DCE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00097DD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097DD2u); } /* indirect call */
    }

loc_00097DD4: ;
    MEM32(esi + 0x1C) = edi;

loc_00097DD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097DE0
 * Original: 0x00097DE0 - 0x00097DFF (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097DE0(void)
{

loc_00097DE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    PUSH32(esp, eax);
    ecx = esi + 0x80;
    PUSH32(esp, 0x00097DF4u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00097DF4: ;
    MEM8(esi + 0xC0) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097E00
 * Original: 0x00097E00 - 0x00097E1F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097E00: ;
    eax = MEM32(ecx + 0x38);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00097E17; /* je: equal / zero */

loc_00097E0B: ;
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 0x60) = ecx;
    esp += 8; return; /* ret 4 */

loc_00097E17: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x60) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097E20
 * Original: 0x00097E20 - 0x00097E5B (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00097E20: ;
    ecx = MEM32(ecx + 0x38);
    eax = MEM32(ecx + 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00097E2Du); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_00097E2D: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00097E57; /* je: equal / zero */

loc_00097E36: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00097E3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00097E3Au); } /* indirect call */
    }

loc_00097E3D: ;
    ecx = MEM32(0x30D358);
    edx = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
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
    esp += 4; return; /* ret */

loc_00097E57: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00097E60
 * Original: 0x00097E60 - 0x00097EA7 (71 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097E60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx + 0x30);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xAC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(esp + 4) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00097EB0
 * Original: 0x00097EB0 - 0x00097EBA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097EB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00097EB0: ;
    eax = MEM32(ecx + 0x1C);
    fp_push(MEMF(eax + 0x90)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00097EC0
 * Original: 0x00097EC0 - 0x00097EF5 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00097EC0(void)
{

loc_00097EC0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x6438E0);
    ecx = esi + 0x10;
    MEM32(esi) = 0x2E6EAC;
    MEM32(esi + 0x50) = eax;
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00097EEFu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00097EEF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00097F00
 * Original: 0x00097F00 - 0x0009819D (669 bytes, 168 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00097F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00097F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24202B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0xB0); /* divss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    PUSH32(esp, esi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00097F79u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00097F79: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x40); /* mulss */
    eax = esp + 0xD0;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x4C); /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00097FD8u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_00097FD8: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x24;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00097FFFu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00097FFF: ;
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    ecx = MEM32(esp + 0x110);
    edx = MEM32(esp + 0x108);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = MEM32(esp + 0x10C);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x34) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x30) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    edi = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x48;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x3C) = eax;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098091u); RECOMP_ABI_CALL(0x000186F0u, sub_000186F0); /* call 0x000186F0 */

loc_00098091: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x11C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000980D8; /* je: equal / zero */

loc_000980A3: ;
    PUSH32(esp, 0x660E4490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000980ADu); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_000980AD: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000980BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000980B4u); } /* indirect call */
    }

loc_000980BA: ;
    ecx = MEM32(esp + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000980C9; /* je: equal / zero */

loc_000980C4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000980C9u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_000980C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x4C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000980D8; /* je: equal / zero */

loc_000980D1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000980D8u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_000980D8: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000980EBu); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_000980EB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x102);
    edx = esp + 0x54;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098100u); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_00098100: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098131; /* je: equal / zero */

loc_00098107: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    edi = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    SET_LO8(ebx, 1);

loc_00098131: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009813A; /* je: equal / zero */

loc_00098138: ;
    MEM8(eax) = LO8(ebx);

loc_0009813A: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098147; /* je: equal / zero */

loc_00098141: ;
    ecx = MEM32(esp + 0x7C);
    MEM32(eax) = ecx;

loc_00098147: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x3C);
    edx = ebx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = ecx;
    MEM32(esp + 0x11C) = 0xFFFFFFFFu;
    MEM32(esp + 0x48) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00098171: ;
    ecx = MEM32(esp + esi * 4 + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009817E; /* je: equal / zero */

loc_00098179: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009817Eu); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0009817E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098171; /* jl: less (signed <) */

loc_00098184: ;
    ecx = MEM32(esp + 0x114);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000981A0
 * Original: 0x000981A0 - 0x0009844C (684 bytes, 165 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000981A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000981A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24202B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1C);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0xB0); /* divss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009821Bu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009821B: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x34); /* mulss */
    eax = esp + 0xC0;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x38); /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009827Au); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0009827A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000982A1u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000982A1: ;
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    ecx = MEM32(esp + 0x100);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = MEM32(esp + 0xFC);
    edx = MEM32(esp + 0xF8);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x30) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x2C) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x28) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x38;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009831Fu); RECOMP_ABI_CALL(0x000186F0u, sub_000186F0); /* call 0x000186F0 */

loc_0009831F: ;
    SET_LO8(eax, MEM8(ebp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x10C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00098362; /* je: equal / zero */

loc_0009832D: ;
    PUSH32(esp, 0x660E4490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098337u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_00098337: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00098344u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009833Eu); } /* indirect call */
    }

loc_00098344: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00098353; /* je: equal / zero */

loc_0009834E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098353u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00098353: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x3C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098362; /* je: equal / zero */

loc_0009835B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098362u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_00098362: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098375u); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_00098375: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x106);
    edx = esp + 0x44;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009838Au); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_0009838A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000983B9; /* je: equal / zero */

loc_00098391: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    ebx = MEM32(esp + 0x6C);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_000983B9: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000983C0u); RECOMP_ABI_CALL(0x00097690u, sub_00097690); /* call 0x00097690 */

loc_000983C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098406; /* je: equal / zero */

loc_000983C4: ;
    PUSH32(esp, 0x660E4490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000983CEu); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_000983CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098406; /* je: equal / zero */

loc_000983D5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0xC70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax + 0xC74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0xC78) = xmm0.f[0]; /* movss */
    MEM8(eax + 0xC7C) = 1;

loc_00098406: ;
    MEM32(esp + 0x10C) = 0xFFFFFFFFu;
    MEM32(esp + 0x38) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00098420;

    /* nop */

loc_00098420: ;
    ecx = MEM32(esp + esi * 4 + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009842D; /* je: equal / zero */

loc_00098428: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009842Du); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0009842D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098420; /* jl: less (signed <) */

loc_00098433: ;
    ecx = MEM32(esp + 0x104);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00098450
 * Original: 0x00098450 - 0x00098732 (738 bytes, 200 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00098450(void)
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

loc_00098450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x242059);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x188) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x188));
    esp = esp - 0x188;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00098719; /* je: equal / zero */

loc_0009847F: ;
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009848Fu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009848F: ;
    eax = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x78);
    PUSH32(esp, 0x660E4490);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000984B1u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_000984B1: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000984BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000984B8u); } /* indirect call */
    }

loc_000984BE: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000984C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000984C4u); } /* indirect call */
    }

loc_000984C7: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    esi = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x18AD0);
    PUSH32(esp, 0x186F0);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, 2);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 0x88);
    ecx = esp + 0x90;
    esi = ~esi;
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000984FFu); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_000984FF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(edi);
    MEM32(esp + 0x19C) = 0;
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009863B; /* je: equal / zero */

loc_00098516: ;
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0009851Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009851Bu); } /* indirect call */
    }

loc_0009851E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098525u); RECOMP_ABI_CALL(0x00050800u, sub_00050800); /* call 0x00050800 */

loc_00098525: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0x88;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098569u); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_00098569: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098570u); RECOMP_ABI_CALL(0x000507E0u, sub_000507E0); /* call 0x000507E0 */

loc_00098570: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esp + 0x110;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000985B4u); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_000985B4: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x128); PUSH32(esp, 0x000985BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000985B8u); } /* indirect call */
    }

loc_000985BE: ;
    ecx = MEM32(esp + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000985D0; /* je: equal / zero */

loc_000985CB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000985D0u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_000985D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x84) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000985E2; /* je: equal / zero */

loc_000985DB: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000985E2u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_000985E2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x128); PUSH32(esp, 0x000985ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000985E6u); } /* indirect call */
    }

loc_000985EC: ;
    ecx = MEM32(esp + 0x10C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000985FE; /* je: equal / zero */

loc_000985F9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000985FEu); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_000985FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098610; /* je: equal / zero */

loc_00098609: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098610u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_00098610: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00098634; /* jne: not equal / not zero */

loc_00098616: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esp + 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098625u); RECOMP_ABI_CALL(0x00015CE0u, sub_00015CE0); /* call 0x00015CE0 */

loc_00098625: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esp + 0x110;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098634u); RECOMP_ABI_CALL(0x00015CE0u, sub_00015CE0); /* call 0x00015CE0 */

loc_00098634: ;
    eax = 2;
    goto loc_000986B1;

loc_0009863B: ;
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x00098646u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098640u); } /* indirect call */
    }

loc_00098646: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009865Cu); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_0009865C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x128); PUSH32(esp, 0x00098666u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00098660u); } /* indirect call */
    }

loc_00098666: ;
    ecx = MEM32(esp + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00098678; /* je: equal / zero */

loc_00098673: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098678u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00098678: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x84) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009868A; /* je: equal / zero */

loc_00098683: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009868Au); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_0009868A: ;
    ecx = MEM32(esp + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009869A; /* je: equal / zero */

loc_00098695: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009869Au); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0009869A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x88) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000986AC; /* je: equal / zero */

loc_000986A5: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000986ACu); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_000986AC: ;
    eax = 1;

loc_000986B1: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x104);
    ecx = esp + 0x8C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000986C8u); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_000986C8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0x18AD0);
    PUSH32(esp, 2);
    MEM32(esp + 0x1A4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x88);
    if (CMP_NE(_fa, _fb)) goto loc_0009870C; /* jne: not equal / not zero */

loc_000986E6: ;
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000986F3u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_000986F3: ;
    SET_LO8(eax, 1);
    ecx = MEM32(esp + 0x194);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0009870C: ;
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098719u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00098719: ;
    ecx = MEM32(esp + 0x194);
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00098740
 * Original: 0x00098740 - 0x00098F0F (1999 bytes, 453 insns)
 * Category: game_vtable
 * CC: thiscall, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00098740(void)
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

loc_00098740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x242091);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x358) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x358;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    PUSH32(esp, ebx);
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000987CE; /* jp: parity */

loc_00098785: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000987CE; /* jp: parity */

loc_00098793: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000987CE; /* jp: parity */

loc_000987A1: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(ecx + 4) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x364);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 48; return; /* ret 44 */

loc_000987CE: ;
    ecx = MEM32(ebp + 0x2C);
    eax = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000987DD; /* jle: less or equal (signed <=) */

loc_000987DA: ;
    MEM32(ebp + 0x2C) = eax;

loc_000987DD: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    edx = MEM32(ebp + 0x20);
    MEM32(esp + 0x18) = eax;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = esp + 0x34;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098829u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00098829: ;
    eax = MEM32(ebp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098948; /* je: equal / zero */

loc_00098838: ;
    ecx = esp + 0x108;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098844u); RECOMP_ABI_CALL(0x000186F0u, sub_000186F0); /* call 0x000186F0 */

loc_00098844: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = ebp + 0xC;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esp + 0x110;
    MEM32(esp + 0x374) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098862u); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_00098862: ;
    ebx = MEM32(ebp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000988C2; /* je: equal / zero */

loc_00098869: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000988C2; /* jle: less or equal (signed <=) */

loc_0009886E: ;
    ecx = esp + 0x10C;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00098880;

    /* nop */

loc_00098880: ;
    ecx = MEM32(esp + esi * 4 + 0x10C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ebx + esi * 4;
    edi = MEM32(esp + edx + 0x10C);
    if (CMP_EQ(_fa, _fb)) goto loc_000988A5; /* je: equal / zero */

loc_00098895: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009889Au); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0009889A: ;
    MEM32(esp + esi * 4 + 0x10C) = 0;

loc_000988A5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + esi * 4 + 0x10C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000988B7; /* je: equal / zero */

loc_000988B0: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000988B7u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_000988B7: ;
    eax = MEM32(ebp + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098880; /* jl: less (signed <) */

loc_000988BF: ;
    ebx = MEM32(ebp + 0x28);

loc_000988C2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x107);
    eax = esp + 0x114;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000988DAu); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_000988DA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009890E; /* jle: less or equal (signed <=) */

loc_000988E1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x120)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x124)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x128)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_0009890E: ;
    MEM32(esp + 0x36C) = 0xFFFFFFFFu;
    MEM32(esp + 0x108) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00098930;

    /* nop */
    /* nop */

loc_00098930: ;
    ecx = MEM32(esp + esi * 4 + 0x10C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098940; /* je: equal / zero */

loc_0009893B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098940u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00098940: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098930; /* jl: less (signed <) */

loc_00098946: ;
    goto loc_0009894B;

loc_00098948: ;
    ebx = MEM32(ebp + 0x28);

loc_0009894B: ;
    ecx = MEM32(esp + 0x24);
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    edx = MEM32(ecx + 0x50);
    eax = MEM32(edx + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(eax + 0xB0); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = esp + 0x44;
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    MEMF(esp + 0xDC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xEC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xF0) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098A93u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_00098A93: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 4) = eax;
    eax = esp + 0xBC;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x1A0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098AC0u); RECOMP_ABI_CALL(0x00023C40u, sub_00023C40); /* call 0x00023C40 */

loc_00098AC0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x36C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00098B23; /* je: equal / zero */

loc_00098ACF: ;
    eax = MEM32(ebp + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00098B23; /* jle: less or equal (signed <=) */

loc_00098AD8: ;
    ecx = esp + 0x194;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00098AE1: ;
    ecx = MEM32(esp + esi * 4 + 0x194);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ebx + esi * 4;
    edi = MEM32(esp + edx + 0x194);
    if (CMP_EQ(_fa, _fb)) goto loc_00098B06; /* je: equal / zero */

loc_00098AF6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098AFBu); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00098AFB: ;
    MEM32(esp + esi * 4 + 0x194) = 0;

loc_00098B06: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + esi * 4 + 0x194) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098B18; /* je: equal / zero */

loc_00098B11: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098B18u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_00098B18: ;
    eax = MEM32(ebp + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098AE1; /* jl: less (signed <) */

loc_00098B20: ;
    ebx = MEM32(ebp + 0x28);

loc_00098B23: ;
    PUSH32(esp, 0x107);
    eax = esp + 0x194;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098B37u); RECOMP_ABI_CALL(0x0012E8C0u, sub_0012E8C0); /* call 0x0012E8C0 */

loc_00098B37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00098E0B; /* jle: less or equal (signed <=) */

loc_00098B42: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0x28);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x30); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x2C); /* subss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x64) = ecx;
    ecx = esp + 0x44;
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    MEM32(esp + 0x6C) = edx;
    MEM32(esp + 0x70) = eax;
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098C3Cu); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_00098C3C: ;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = esp + 0xFC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098C4Du); RECOMP_ABI_CALL(0x001F7D90u, sub_001F7D90); /* call 0x001F7D90 */

loc_00098C4D: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm4 = xmm3; /* movaps */
    xmm0 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x100;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esp + 0x254;
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098D1Fu); RECOMP_ABI_CALL(0x00018B00u, sub_00018B00); /* call 0x00018B00 */

loc_00098D1F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(esp + 0x36C) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00098D7F; /* je: equal / zero */

loc_00098D2B: ;
    eax = MEM32(ebp + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00098D7F; /* jle: less or equal (signed <=) */

loc_00098D34: ;
    ecx = esp + 0x244;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00098D40: ;
    ecx = MEM32(esp + esi * 4 + 0x244);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ebx + esi * 4;
    edi = MEM32(esp + edx + 0x244);
    if (CMP_EQ(_fa, _fb)) goto loc_00098D65; /* je: equal / zero */

loc_00098D55: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098D5Au); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00098D5A: ;
    MEM32(esp + esi * 4 + 0x244) = 0;

loc_00098D65: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + esi * 4 + 0x244) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00098D77; /* je: equal / zero */

loc_00098D70: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098D77u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_00098D77: ;
    eax = MEM32(ebp + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098D40; /* jl: less (signed <) */

loc_00098D7F: ;
    eax = esp + 0x240;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098D8Eu); RECOMP_ABI_CALL(0x0012CF60u, sub_0012CF60); /* call 0x0012CF60 */

loc_00098D8E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098DF7; /* je: equal / zero */

loc_00098D95: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x378F00)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */

loc_00098DF7: ;
    ecx = esp + 0x240;
    MEM8(esp + 0x36C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098E0Bu); RECOMP_ABI_CALL(0x00018DF0u, sub_00018DF0); /* call 0x00018DF0 */

loc_00098E0B: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00098EAB; /* jbe: below or equal (unsigned <=) */

loc_00098E6A: ;
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */

loc_00098EAB: ;
    edi = MEM32(ebp + 8);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = edi;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(esp + 0x36C) = 0xFFFFFFFFu;
    MEM32(esp + 0x190) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00098EE0: ;
    ecx = MEM32(esp + esi * 4 + 0x194);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00098EF0; /* je: equal / zero */

loc_00098EEB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098EF0u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00098EF0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00098EE0; /* jl: less (signed <) */

loc_00098EF6: ;
    ecx = MEM32(esp + 0x364);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
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
 * sub_00098F10
 * Original: 0x00098F10 - 0x00098FE9 (217 bytes, 58 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00098F10(void)
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

loc_00098F10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xC); /* divss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00098F38u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00098F38: ;
    eax = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEM32(esp + 0x18) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x14) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E6EC8); /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00098FB0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00098FAB: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00098FB8;

loc_00098FB0: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00098FB8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00098FB5: ;
    xmm0 = xmm1; /* movaps */

loc_00098FB8: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm0 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    MEMF(esi + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E6EC4)); /* fmul dword ptr [0x2e6ec4] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00098FF0
 * Original: 0x00098FF0 - 0x000990CE (222 bytes, 63 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00098FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00098FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x54)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009901B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009900A: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xC); /* subss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0009901B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x58)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000990C7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00099029: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x5C); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x5C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x14;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099063u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00099063: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E42A8); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009908Cu); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_0009908C: ;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009909Au); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009909A: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000990ADu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_000990AD: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000990BBu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000990BB: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000990C7u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000990C7: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000990D0
 * Original: 0x000990D0 - 0x000992F8 (552 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000990D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000990D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000990FA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000990F3: ;
    MEMF(ebp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_00099104;

loc_000990FA: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00099104; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000990FF: ;
    MEMF(ebp + 0x14) = xmm1.f[0]; /* movss */

loc_00099104: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099129u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_00099129: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    edi = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, edi);
    edx = esp + 0x3C;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099171u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_00099171: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi);
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 4);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 8);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(edi);
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(edi + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    MEM32(esp + 0x40) = eax;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x2C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x4C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    ecx = esp + 0x44;
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    ecx = esp + 0x54;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000992A3u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_000992A3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    esi = MEM32(ebp + 8);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    edx = esp + 0x50;
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000992F0u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000992F0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00099300
 * Original: 0x00099300 - 0x000994E3 (483 bytes, 155 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00099300(void)
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

loc_00099300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000994DB; /* je: equal / zero */

loc_0009931B: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00099338; /* je: equal / zero */

loc_00099325: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6921A0); /* mulss */
    goto loc_0009933B;

loc_00099338: ;
    xmm0 = xmm1; /* movaps */

loc_0009933B: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(ecx);
    MEM32(esi + 0x58) = edx;
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_00099352; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009934D: ;
    MEMF(ebp + 8) = xmm1.f[0]; /* movss */

loc_00099352: ;
    SET_LO8(eax, MEM8(0x413FBC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000994DB; /* jne: not equal / not zero */

loc_0009935F: ;
    ecx = MEM32(esi + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099367u); RECOMP_ABI_CALL(0x001F8F60u, sub_001F8F60); /* call 0x001F8F60 */

loc_00099367: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00099377; /* je: equal / zero */

loc_00099371: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00099377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099374u); } /* indirect call */
    }

loc_00099377: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099436; /* je: equal / zero */

loc_00099382: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009938Fu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009938F: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00099419; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009939C: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00099419; /* jnp: not parity */

loc_000993AA: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2E6D98); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000993D2u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_000993D2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    eax = MEM32(esi + 0x1C);
    edx = esp + 0x24;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC340) - fp_top()); /* fsubr dword ptr [0x2dc340] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000993FDu); RECOMP_ABI_CALL(0x000990D0u, sub_000990D0); /* call 0x000990D0 */

loc_000993FD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009940Au); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009940A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */

loc_00099419: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099429u); RECOMP_ABI_CALL(0x00098FF0u, sub_00098FF0); /* call 0x00098FF0 */

loc_00099429: ;
    ecx = MEM32(esi + 0x1C);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099436u); RECOMP_ABI_CALL(0x001F8A70u, sub_001F8A70); /* call 0x001F8A70 */

loc_00099436: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00099443; /* je: equal / zero */

loc_0009943D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00099443u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00099440u); } /* indirect call */
    }

loc_00099443: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00099451; /* jne: not equal / not zero */

loc_0009944A: ;
    eax = 0x6438E0;
    goto loc_00099454;

loc_00099451: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00099454: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099477u); RECOMP_ABI_CALL(0x00201C70u, sub_00201C70); /* call 0x00201C70 */

loc_00099477: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000994CC; /* je: equal / zero */

loc_00099480: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009948Cu); RECOMP_ABI_CALL(0x00012440u, sub_00012440); /* call 0x00012440 */

loc_0009948C: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099494u); RECOMP_ABI_CALL(0x00201880u, sub_00201880); /* call 0x00201880 */

loc_00099494: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000994A4u); RECOMP_ABI_CALL(0x00012440u, sub_00012440); /* call 0x00012440 */

loc_000994A4: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000994CC; /* jbe: below or equal (unsigned <=) */

loc_000994B1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20705000);
    ecx = 0x35CFF0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000994C4u); RECOMP_ABI_CALL(0x000F26A0u, sub_000F26A0); /* call 0x000F26A0 */

loc_000994C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000994CC: ;
    PUSH32(esp, 0x20705000);
    ecx = 0x35CFF0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000994DBu); RECOMP_ABI_CALL(0x000F26D0u, sub_000F26D0); /* call 0x000F26D0 */

loc_000994DB: ;
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
 * sub_000994F0
 * Original: 0x000994F0 - 0x000994F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000994F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000994F0: ;
    ecx = MEM32(ecx + 0x24);
    g_seh_ebp = ebp; sub_00098F10(); return; /* tail jmp 0x00098F10 */

}

/**
 * sub_00099500
 * Original: 0x00099500 - 0x00099709 (521 bytes, 147 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00099500(void)
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

loc_00099500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F28F5C3);
    PUSH32(esp, 0xD10EAF0Au);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009951Du); RECOMP_ABI_CALL(0x0020BAD0u, sub_0020BAD0); /* call 0x0020BAD0 */

loc_0009951D: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F28F5C3);
    PUSH32(esp, 0xD10EAF0Au);
    PUSH32(esp, 0x2E6EF4);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099537u); RECOMP_ABI_CALL(0x0020BA60u, sub_0020BA60); /* call 0x0020BA60 */

loc_00099537: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E6EF0)); /* fadd dword ptr [0x2e6ef0] */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x20000000);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099555u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_00099555: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC084)); /* fmul dword ptr [0x2dc084] */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(0x2DD3E4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009958Du); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_0009958D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F28F5C3);
    PUSH32(esp, 0x3F28F5C3);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0xD10EAF0Au);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000995AAu); RECOMP_ABI_CALL(0x0020E5E0u, sub_0020E5E0); /* call 0x0020E5E0 */

loc_000995AA: ;
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000995C0u); RECOMP_ABI_CALL(0x0020CF20u, sub_0020CF20); /* call 0x0020CF20 */

loc_000995C0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x43160000);
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000995E2u); RECOMP_ABI_CALL(0x0020A260u, sub_0020A260); /* call 0x0020A260 */

loc_000995E2: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x41;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x2E6EDC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000995F7u); RECOMP_ABI_CALL(0x0020A130u, sub_0020A130); /* call 0x0020A130 */

loc_000995F7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E6ED8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DD3E4); /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00099618: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F28F5C3);
    PUSH32(esp, 0x3F28F5C3);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFF800000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80808080u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80808080u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD10EAF0Au);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009964Du); RECOMP_ABI_CALL(0x0020E5E0u, sub_0020E5E0); /* call 0x0020E5E0 */

loc_0009964D: ;
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099663u); RECOMP_ABI_CALL(0x0020CF20u, sub_0020CF20); /* call 0x0020CF20 */

loc_00099663: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x420C0000);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00099676u); RECOMP_ABI_CALL(0x0020A260u, sub_0020A260); /* call 0x0020A260 */

loc_00099676: ;
    eax = MEM32(esi + 0x28);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    ecx = edx + eax + 0xCC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009968Cu); RECOMP_ABI_CALL(0x0020A130u, sub_0020A130); /* call 0x0020A130 */

loc_0009968C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43230000);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009969Eu); RECOMP_ABI_CALL(0x0020A260u, sub_0020A260); /* call 0x0020A260 */

loc_0009969E: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 4);
    edx = ecx + ecx * 2;
    ecx = edi + edx * 4;
    fp_push(MEMF(eax + ecx * 4 + 0xC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2E6ECC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000996BFu); RECOMP_ABI_CALL(0x0020A130u, sub_0020A130); /* call 0x0020A130 */

loc_000996BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000996CC; /* je: equal / zero */

loc_000996C7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000996E6; /* jne: not equal / not zero */

loc_000996CC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000996E6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00099618; /* jl: less (signed <) */

loc_00099702: ;
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
 * sub_00099710
 * Original: 0x00099710 - 0x00099EE9 (2009 bytes, 381 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099710: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E6F7C);
    esi = ecx;
    eax = esp + 0xC;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, eax);
    MEM8(esi) = 0;
    MEM32(esi + 4) = 3;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x0009973Cu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0009973C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0xCC;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099777u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099777: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    PUSH32(esp, 0x2E6F70);
    edx = esp + 0x24;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edx);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000997ACu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000997AC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0x118;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000997EAu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000997EA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    PUSH32(esp, 0x2E0C40);
    ecx = esp + 0x3C;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, ecx);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099822u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099822: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x44;
    PUSH32(esp, edx);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E6F6C)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0x164;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099866u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099866: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    PUSH32(esp, 0x2E6F60);
    eax = esp + 0xC;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, eax);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000998A1u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000998A1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E6F6C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0x1B0;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000998DCu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000998DC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    PUSH32(esp, 0x2E6F50);
    edx = esp + 0x24;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edx);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099911u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099911: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E6F6C)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0x1FC;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009994Fu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0009994F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    PUSH32(esp, 0x2E6F40);
    ecx = esp + 0x3C;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, ecx);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099987u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099987: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x44;
    PUSH32(esp, edx);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E6F6C)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0x248;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000999CBu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000999CB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    PUSH32(esp, 0x2E6F40);
    eax = esp + 0xC;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, eax);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099A06u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099A06: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E6F6C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099A3Bu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099A3B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    PUSH32(esp, 0x2E6F34);
    edx = esp + 0x24;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edx);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099A70u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099A70: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0x294;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099AAEu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099AAE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    PUSH32(esp, 0x2E6F24);
    ecx = esp + 0x3C;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, ecx);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099AE6u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099AE6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x44;
    PUSH32(esp, edx);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0x2E0;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099B2Au); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099B2A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    PUSH32(esp, 0x2E6F18);
    eax = esp + 0xC;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, eax);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099B65u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099B65: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0x32C;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099BA0u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099BA0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    PUSH32(esp, 0x2E6F0C);
    edx = esp + 0x24;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edx);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099BD5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099BD5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0x378;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099C13u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099C13: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    PUSH32(esp, 0x2E0C18);
    ecx = esp + 0x3C;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, ecx);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099C4Bu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099C4B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x44;
    PUSH32(esp, edx);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E6F6C)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    edi = esi + 0x3C4;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099C8Fu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099C8F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    PUSH32(esp, 0x2E6F00);
    eax = esp + 0xC;
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, eax);
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099CCAu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099CCA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    edi = esi + 0x410;
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00099D05u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00099D05: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC3CC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DD440)); /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0xC) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DC3E0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC394)); /* movss */
    MEMF(esi + 0x34) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DC3F0)); /* movss */
    MEMF(esi + 0x44) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    MEMF(esi + 0x50) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DD440)); /* movss */
    MEMF(esi + 0x60) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E646C)); /* movss */
    MEMF(esi + 0x64) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DD418)); /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DC3E0)); /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DDA44)); /* movss */
    MEMF(esi + 0x7C) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E0F44)); /* movss */
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xA8) = xmm6.f[0]; /* movss */
    MEMF(esi + 0xAC) = xmm4.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm5.f[0]; /* movss */
    MEMF(esi + 0xB8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC4) = xmm3.f[0]; /* movss */
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x484) = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00099EF0
 * Original: 0x00099EF0 - 0x00099F9D (173 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099EF0(void)
{

loc_00099EF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00099EFDu); RECOMP_ABI_CALL(0x00097EC0u, sub_00097EC0); /* call 0x00097EC0 */

loc_00099EFD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(esi) = 0x2E6F8C;
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x60) = 0;
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0xAC) = 1;
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00099FA0
 * Original: 0x00099FA0 - 0x00099FBF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00099FA0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E6F8C;
    if (TEST_Z(_fa, _fb)) goto loc_00099FB9; /* je: equal / zero */

loc_00099FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00099FB6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00099FB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00099FB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00099FC0
 * Original: 0x00099FC0 - 0x0009A112 (338 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00099FC0(void)
{
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

loc_00099FC0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x00099FD6u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_00099FD6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00099FDDu); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_00099FDD: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x00099FE7u); RECOMP_ABI_CALL(0x001F3290u, sub_001F3290); /* call 0x001F3290 */

loc_00099FE7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00099FEEu); RECOMP_ABI_CALL(0x00159260u, sub_00159260); /* call 0x00159260 */

loc_00099FEE: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00099FF8u); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_00099FF8: ;
    ecx = MEM32(esi + 0x50);
    MEM32(esi + 0x60) = eax;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 0x40);
    xmm0 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEM32(esi + 0x70) = edx;
    ecx = MEM32(eax + 0x44);
    MEM32(esi + 0x74) = ecx;
    edx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x78) = edx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x6C) = edx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0x78) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x78);
    ecx = MEM32(esi + 0x70);
    edx = eax;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x0009A077u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_0009A077: ;
    fp_push(MEMF(esi + 0x74)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009A0A9; /* jbe: below or equal (unsigned <=) */

loc_0009A085: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DDC40)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x78) = xmm1.f[0]; /* movss */

loc_0009A0A9: ;
    ecx = MEM32(esi + 0x60);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0009A0B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A0B3u); } /* indirect call */
    }

loc_0009A0B6: ;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(esi + 0x7C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x80) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x84) = eax;
    ecx = MEM32(esi + 0x70);
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(esi + 0x74);
    MEM32(esi + 0x44) = edx;
    eax = MEM32(esi + 0x78);
    MEM32(esi + 0x48) = eax;
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xA8) = eax;
    MEM8(esi + 0xAC) = LO8(eax);
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
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
 * sub_0009A120
 * Original: 0x0009A120 - 0x0009A166 (70 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0009A12Au); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_0009A12A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009A131u); RECOMP_ABI_CALL(0x001F3290u, sub_001F3290); /* call 0x001F3290 */

loc_0009A131: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    ecx = 0x4140CC;
    PUSH32(esp, 0x0009A143u); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_0009A143: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0009A153u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_0009A153: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009A15Au); RECOMP_ABI_CALL(0x00159260u, sub_00159260); /* call 0x00159260 */

loc_0009A15A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x60) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009A170
 * Original: 0x0009A170 - 0x0009A217 (167 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009A170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A1C0u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0009A1C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A1F2u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_0009A1F2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A1FFu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009A1FF: ;
    esi = MEM32(ebp + 8);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A20Eu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009A20E: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0009A220
 * Original: 0x0009A220 - 0x0009A541 (801 bytes, 185 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009A220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0009A220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0009A538; /* jne: not equal / not zero */

loc_0009A23D: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A265; /* je: equal / zero */

loc_0009A244: ;
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0009A24Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A24Bu); } /* indirect call */
    }

loc_0009A24E: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x7C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x80) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x84) = eax;

loc_0009A265: ;
    ecx = esi + 0x7C;
    PUSH32(esp, ecx);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esi;
    ebx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A27Cu); RECOMP_ABI_CALL(0x0009A170u, sub_0009A170); /* call 0x0009A170 */

loc_0009A27C: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A284u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009A284: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x9C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009A306; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009A294: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xA0); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x9C); /* comiss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009A2C8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x9C)) */

loc_0009A2B2: ;
    eax = MEM32(esi + 0x98);
    MEMF(esi + 0x9C) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x90) = eax;
    goto loc_0009A2F4;

loc_0009A2C8: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / MEMF(esi + 0x9C); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x90) = xmm2.f[0]; /* movss */

loc_0009A2F4: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A306u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_0009A306: ;
    ecx = MEM32(esi + 0x50);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A30Eu); RECOMP_ABI_CALL(0x00097660u, sub_00097660); /* call 0x00097660 */

loc_0009A30E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009A538; /* je: equal / zero */

loc_0009A316: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0009A523; /* ja: above (unsigned >) */

loc_0009A325: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x9A544); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0009A32Cu) goto loc_0009A32C;
    if (_jt == 0x0009A3A1u) goto loc_0009A3A1;
    if (_jt == 0x0009A3D4u) goto loc_0009A3D4;
    if (_jt == 0x0009A409u) goto loc_0009A409;
    if (_jt == 0x0009A4C7u) goto loc_0009A4C7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0009A32C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009A35F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0009A357: ;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    goto loc_0009A370;

loc_0009A35F: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0009A370; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009A36A: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0009A370: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = 0x4140CC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A37Fu); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_0009A37F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009A523; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_0009A392: ;
    MEM32(esi + 0xA8) = 1;
    goto loc_0009A523;

loc_0009A3A1: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = 0x4140CC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A3B0u); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_0009A3B0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009A523; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0009A3C5: ;
    MEM32(esi + 0xA8) = 2;
    goto loc_0009A523;

loc_0009A3D4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC090); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009A523; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC090)) */

loc_0009A3E9: ;
    ecx = MEM32(edi);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0xA8) = 3;
    goto loc_0009A523;

loc_0009A409: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC090); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDA48); /* mulss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = esi + 0x64;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x2DC350); /* addss */
    MEM32(esp + 0x1C) = ecx;
    if ((_fca > _fcb)) goto loc_0009A460; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_0009A450: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009A460; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_0009A45D: ;
    xmm3 = xmm0; /* movaps */

loc_0009A460: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm3.f[0]; /* movss */
    MEMF(edi + 8) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC34C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009A523; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC34C)) */

loc_0009A4BB: ;
    MEM32(esi + 0xA8) = 4;
    goto loc_0009A523;

loc_0009A4C7: ;
    PUSH32(esp, 0);
    ecx = 0x4140CC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A4D3u); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_0009A4D3: ;
    edx = MEM32(esi + 0xB0);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM8(esi + 0xAC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A4EBu); RECOMP_ABI_CALL(0x0022F841u, sub_0022F841); /* call 0x0022F841 */

loc_0009A4EB: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A4FBu); RECOMP_ABI_CALL(0x00018610u, sub_00018610); /* call 0x00018610 */

loc_0009A4FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A506u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009A506: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E5194); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xB0); /* addss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */

loc_0009A523: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xA4); /* addss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */

loc_0009A538: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A560
 * Original: 0x0009A560 - 0x0009A571 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A560(void)
{

loc_0009A560: ;
    eax = MEM32(ecx + 0x50);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0009A570u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_0009A570: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0009A580
 * Original: 0x0009A580 - 0x0009A5DB (91 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A580(void)
{

loc_0009A580: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0009A58Du); RECOMP_ABI_CALL(0x00097EC0u, sub_00097EC0); /* call 0x00097EC0 */

loc_0009A58D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DD3E4)); /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEM32(esi) = 0x2E6FB0;
    MEMF(esi + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esi + 0x90) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A5E0
 * Original: 0x0009A5E0 - 0x0009A5FF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A5E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E6FB0;
    if (TEST_Z(_fa, _fb)) goto loc_0009A5F9; /* je: equal / zero */

loc_0009A5F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009A5F6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0009A5F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009A5F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009A600
 * Original: 0x0009A600 - 0x0009A654 (84 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009A600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009A600: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = ecx + 0x88;
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEMF(ecx + 0x8C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009A63Du); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0009A63D: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0009A660
 * Original: 0x0009A660 - 0x0009A79B (315 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009A660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0009A660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A677u); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_0009A677: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0009A691u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A68Eu); } /* indirect call */
    }

loc_0009A691: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(edi + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(edi + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x78) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x84) = xmm0.f[0]; /* movss */
    esi = edi + 0x10;
    MEMF(esi + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30DB7C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x2E6FAC); /* subss */
    PUSH32(esp, ecx);
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A746u); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_0009A746: ;
    ecx = edi + 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A751u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009A751: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A764u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0009A764: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A76Cu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009A76C: ;
    ecx = MEM32(edi + 0x70);
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(edi + 0x74);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(edi + 0x78);
    MEM32(esi + 0x38) = eax;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x94) = 0;
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
 * sub_0009A7A0
 * Original: 0x0009A7A0 - 0x0009AD8E (1518 bytes, 359 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009A7A0(void)
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

loc_0009A7A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xB4));
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x413FA0)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0009AD85; /* jne: not equal / not zero */

loc_0009A7CA: ;
    PUSH32(esp, 0x660E4490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A7D4u); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_0009A7D4: ;
    ebx = MEM32(0x413F90);
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0009A7E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A7E3u); } /* indirect call */
    }

loc_0009A7E9: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x0009A7F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A7F1u); } /* indirect call */
    }

loc_0009A7F7: ;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0009A805u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A7FFu); } /* indirect call */
    }

loc_0009A805: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x0009A811u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A80Bu); } /* indirect call */
    }

loc_0009A811: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(edi);
    eax = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0009A81Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A81Cu); } /* indirect call */
    }

loc_0009A81F: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x70)); /* fsub dword ptr [esi + 0x70] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x78)); /* fsub dword ptr [esi + 0x78] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x60)); /* fdiv dword ptr [esi + 0x60] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009A852; /* jbe: below or equal (unsigned <=) */

loc_0009A84D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0009A86B;

loc_0009A852: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0009A871; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009A86B: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0009A871: ;
    ecx = MEM32(0x30DB7C);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ebx = esi + 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A88Du); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009A88D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E6FCC); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A8F4u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009A8F4: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E6ED8); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A90Fu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009A90F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E6860); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3D0)); /* fmul dword ptr [0x2dc3d0] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A934u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009A934: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3F4); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009A94Fu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009A94F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    xmm2 = XMM_SCALAR(MEMF(0x2DC8AC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    edx = MEM32(edi);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3D0)); /* fmul dword ptr [0x2dc3d0] */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x68;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0009A9E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009A9E1u); } /* indirect call */
    }

loc_0009A9E4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009AA26u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0009AA26: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009AA2Du); RECOMP_ABI_CALL(0x001F8750u, sub_001F8750); /* call 0x001F8750 */

loc_0009AA2D: ;
    PUSH32(esp, eax);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009AA38u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0009AA38: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x58); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x60); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x48); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x4C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x50); /* addss */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009AA89u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0009AA89: ;
    xmm4 = XMM_SCALAR(MEMF(0x2DC3E0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009AB49; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_0009AAA3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x5C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009AB49; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0009AAD8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x38); /* addss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC3D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm3; /* movaps */
    goto loc_0009AB5B;

loc_0009AB49: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_0009AB5B: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 0x7C) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 0x80) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(esi + 0x84) = xmm4.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    MEMF(esi + 0x7C) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x74); /* addss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x78); /* addss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x78);
    ecx = MEM32(esi + 0x70);
    edx = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009AC2Bu); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_0009AC2B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x68)); /* fadd dword ptr [esi + 0x68] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = esi + 0x10;
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x30DB7C)); /* fld float */
    edx = esp + 0x80;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2E6FAC)); /* fsub dword ptr [0x2e6fac] */
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009ACB5u); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_0009ACB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009ACBDu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009ACBD: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009ACC4u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009ACC4: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009ACDCu); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0009ACDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009ACE4u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009ACE4: ;
    edx = MEM32(esi + 0x70);
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E1644)); /* movss */
    MEM32(edi + 0x30) = edx;
    eax = MEM32(esi + 0x74);
    MEM32(edi + 0x34) = eax;
    ecx = MEM32(esi + 0x78);
    MEM32(edi + 0x38) = ecx;
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009AD6B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009AD25: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC3D0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009AD6B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0009AD32: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009AD6B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009AD3D: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009AD6B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0009AD42: ;
    edx = MEM32(0x300E80);
    eax = MEM32(esi + 0x94);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009AD55u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0009AD55: ;
    MEM32(esi + 0x94) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0009AD6B: ;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 0x65E8BDE9);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009AD7Cu); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_0009AD7C: ;
    MEM32(esi + 0x94) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009AD85: ;
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
 * sub_0009AD90
 * Original: 0x0009AD90 - 0x0009AD9E (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AD90(void)
{

loc_0009AD90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009AD98u); RECOMP_ABI_CALL(0x0009A660u, sub_0009A660); /* call 0x0009A660 */

loc_0009AD98: ;
    MEM8(esi + 0x6C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009ADA0
 * Original: 0x0009ADA0 - 0x0009AF2E (398 bytes, 106 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009ADA0(void)
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

loc_0009ADA0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x114)); /* fld float */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DC3B4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x1C) = eax;
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009AE4B; /* jbe: below or equal (unsigned <=) */

loc_0009ADCE: ;
    ecx = MEM32(esi + 0x10C);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0x38;
    PUSH32(esp, 0x0009ADE1u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009ADE1: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) - fp_top()); /* fsubr dword ptr [esp + 0xc] */
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x114)); /* fadd dword ptr [esi + 0x114] */
    eax = esp + 0x14;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009ADFEu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009ADFE: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    ebx = MEM32(esp + 0x24);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009AE4B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x108)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x100); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009AE70; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009AE63: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009AE73; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009AE70: ;
    xmm0 = xmm1; /* movaps */

loc_0009AE73: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009AE89u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0009AE89: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x100)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm2 = XMM_SCALAR(MEMF(0x30DB88)); /* movss */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009AEEEu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009AEEE: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = MEM32(esp + 0x40);
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    ecx = eax;
    MEM32(ecx) = ebx;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009AF30
 * Original: 0x0009AF30 - 0x0009AF38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AF30(void)
{

loc_0009AF30: ;
    MEM8(ecx + 0x15C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0009AF40
 * Original: 0x0009AF40 - 0x0009B083 (323 bytes, 88 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009AF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0009AF40: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009AF73; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009AF52: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(ecx);
    eax = MEM32(esp + 0x14);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0009AF73: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009AF9D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0009AF7C: ;
    edx = MEM32(esp + 0x24);
    esi = MEM32(edx);
    eax = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0009AF9D: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    ecx = MEM32(esp + 0x24);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(esp + 0x14);
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 4);
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = eax;
    MEM32(ecx) = edx;
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0009B090
 * Original: 0x0009B090 - 0x0009B0C1 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B090(void)
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

loc_0009B090: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 0xC8;
    PUSH32(esp, eax);
    edx = ecx + 0xBC;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x100);
    eax = ecx + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B0B9u); RECOMP_ABI_CALL(0x0009AF40u, sub_0009AF40); /* call 0x0009AF40 */

loc_0009B0B9: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009B0D0
 * Original: 0x0009B0D0 - 0x0009B101 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B0D0(void)
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

loc_0009B0D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 0xC8;
    PUSH32(esp, eax);
    edx = ecx + 0xBC;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x100);
    eax = ecx + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B0F9u); RECOMP_ABI_CALL(0x0009AF40u, sub_0009AF40); /* call 0x0009AF40 */

loc_0009B0F9: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009B110
 * Original: 0x0009B110 - 0x0009B13D (45 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B110(void)
{

loc_0009B110: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx + 0xEC;
    PUSH32(esp, eax);
    edx = ecx + 0xE0;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x100);
    eax = ecx + 0xD4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B137u); RECOMP_ABI_CALL(0x0009AF40u, sub_0009AF40); /* call 0x0009AF40 */

loc_0009B137: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B140
 * Original: 0x0009B140 - 0x0009B151 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B140(void)
{

loc_0009B140: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x100) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B160
 * Original: 0x0009B160 - 0x0009B171 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B160(void)
{

loc_0009B160: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x10C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B180
 * Original: 0x0009B180 - 0x0009B191 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B180(void)
{

loc_0009B180: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x108) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B1A0
 * Original: 0x0009B1A0 - 0x0009B1B1 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B1A0(void)
{

loc_0009B1A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x114) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B1C0
 * Original: 0x0009B1C0 - 0x0009B1F5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B1C0(void)
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

loc_0009B1C0: ;
    fp_push(MEMF(ecx + 0x108)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DC3B4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0009B1EF; /* ja: above (unsigned >) */

loc_0009B1D6: ;
    fp_push(MEMF(ecx + 0x114)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DC3B4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0009B1EF; /* ja: above (unsigned >) */

loc_0009B1EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0009B1EF: ;
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009B200
 * Original: 0x0009B200 - 0x0009B3A5 (421 bytes, 118 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009B200: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB4)); /* fsub dword ptr [esi + 0xb4] */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esi + 0xDC)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_top() = -fp_top(); /* fchs */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xCC)); /* fsub dword ptr [esi + 0xcc] */
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xD0)); /* fsub dword ptr [esi + 0xd0] */
    fp_top() = -fp_top(); /* fchs */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009B273; /* jbe: below or equal (unsigned <=) */

loc_0009B26B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    goto loc_0009B284;

loc_0009B273: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009B28A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009B284: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_0009B28A: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0009B39A; /* jle: less or equal (signed <=) */

loc_0009B2A4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = esi + 0xC8;
    ebp = esi + 0xBC;
    goto loc_0009B2C0;

loc_0009B2B5: ;
    fp_pop(); /* fstp st(0) */
    goto loc_0009B2C0;

    /* nop */

loc_0009B2C0: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    eax = MEM32(esp + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, ebp);
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    eax = esp + 0x40;
    ecx = esi;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B307u); RECOMP_ABI_CALL(0x0009AF40u, sub_0009AF40); /* call 0x0009AF40 */

loc_0009B307: ;
    eax = esi + 0xEC;
    PUSH32(esp, eax);
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    eax = esi + 0xD4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0009B329u); RECOMP_ABI_CALL(0x0009AF40u, sub_0009AF40); /* call 0x0009AF40 */

loc_0009B329: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_top() = -fp_top(); /* fchs */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0009B390; /* jnp: not parity */

loc_0009B353: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009B378; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009B36A: ;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0009B384;

loc_0009B378: ;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0009B384: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0009B2B5; /* jg: greater (signed >) */

loc_0009B390: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0009B39A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009B3B0
 * Original: 0x0009B3B0 - 0x0009B3CD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0009B3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B3B0: ;
    SET_LO8(eax, MEM8(ecx + 0x3A9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B3CA; /* je: equal / zero */

loc_0009B3BA: ;
    SET_LO8(eax, MEM8(ecx + 0x3AA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B3CA; /* je: equal / zero */

loc_0009B3C4: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0009B3CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0009B3D0
 * Original: 0x0009B3D0 - 0x0009B44D (125 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B3D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B3D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0009B3DDu); RECOMP_ABI_CALL(0x00097EC0u, sub_00097EC0); /* call 0x00097EC0 */

loc_0009B3DD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x100) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x104) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DD440)); /* movss */
    MEM8(esi + 0x170) = LO8(eax);
    MEM8(esi + 0x17C) = LO8(eax);
    MEM32(esi + 0x60) = eax;
    MEM32(esi) = 0x2E6FD4;
    MEMF(esi + 0x114) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xFC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x174) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B450
 * Original: 0x0009B450 - 0x0009B454 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B450(void)
{

loc_0009B450: ;
    eax = ecx + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_0009B460
 * Original: 0x0009B460 - 0x0009B47F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B460: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E6FD4;
    if (TEST_Z(_fa, _fb)) goto loc_0009B479; /* je: equal / zero */

loc_0009B470: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009B476u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0009B476: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009B479: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009B480
 * Original: 0x0009B480 - 0x0009B4B4 (52 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B480(void)
{

loc_0009B480: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x164) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x168) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x16C) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x170) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0009B4C0
 * Original: 0x0009B4C0 - 0x0009B633 (371 bytes, 102 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B4C0(void)
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

loc_0009B4C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009B4D0u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009B4D0: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009B4FA; /* je: equal / zero */

loc_0009B4D9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009B4E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B4DDu); } /* indirect call */
    }

loc_0009B4E0: ;
    ecx = MEM32(0x30D358);
    edx = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009B4FC;

loc_0009B4FA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009B4FC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0A1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009B53B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x10C)) */

loc_0009B50D: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    goto loc_0009B520;

    /* nop */
    edi = edi;

loc_0009B520: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x2DD3D8); /* addss */
    xmm2 = xmm1; /* movaps */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009B520; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0009B533: ;
    MEMF(esi + 0x10C) = xmm2.f[0]; /* movss */

loc_0009B53B: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E6FD0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009B57B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009B550: ;
    xmm2 = xmm1; /* movaps */
    goto loc_0009B560;

    /* nop */
    /* nop */

loc_0009B560: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x2DD3D8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_0009B560; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009B573: ;
    MEMF(esi + 0x10C) = xmm2.f[0]; /* movss */

loc_0009B57B: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0009B587u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009B584u); } /* indirect call */
    }

loc_0009B587: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x10C); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E6FD0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009B5B7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E6FD0)) */

loc_0009B5AD: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DD3D8); /* subss */
    goto loc_0009B5CC;

loc_0009B5B7: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E0A1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009B5CC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009B5C4: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DD3D8); /* addss */

loc_0009B5CC: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009B5E9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0009B5E4: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0009B5F1;

loc_0009B5E9: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009B5F1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009B5EE: ;
    xmm0 = xmm1; /* movaps */

loc_0009B5F1: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(esi + 0x10C) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2E0FF0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009B62B; /* jbe: below or equal (unsigned <=) */

loc_0009B623: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0009B62B: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009B640
 * Original: 0x0009B640 - 0x0009BE2C (2028 bytes, 269 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009B640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009B640: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7DBFE007) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7DBFE007 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009B74B; /* jne: not equal / not zero */

loc_0009B652: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DD6F0)); /* movss */
    MEMF(ecx + 0xB4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(ecx + 0xB8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E7044)); /* movss */
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E7040)); /* movss */
    MEMF(ecx + 0xC4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDA34)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    MEMF(ecx + 0xD0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DD6C0)); /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E515C)); /* movss */
    MEMF(ecx + 0xDC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3F4)); /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E703C)); /* movss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xEC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A4)); /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x158) = eax;
    esp += 8; return; /* ret 4 */

loc_0009B74B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A54D90F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A54D90F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B847; /* jne: not equal / not zero */

loc_0009B756: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC38C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC390)); /* movss */
    MEMF(ecx + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xB8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E7038)); /* movss */
    MEMF(ecx + 0xC4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E7034)); /* movss */
    MEMF(ecx + 0xD0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDC44)); /* movss */
    MEMF(ecx + 0xDC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E169C)); /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDE24)); /* movss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xEC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DDC40)); /* movss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD3E0)); /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x158) = eax;
    esp += 8; return; /* ret 4 */

loc_0009B847: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D4DC7FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D4DC7FE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009B943; /* jne: not equal / not zero */

loc_0009B852: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E7034)); /* movss */
    MEMF(ecx + 0xB4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDE28)); /* movss */
    MEMF(ecx + 0xB8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E7030)); /* movss */
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    MEMF(ecx + 0xC4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDE2C)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E5680)); /* movss */
    MEMF(ecx + 0xD0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC8A4)); /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xDC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E702C)); /* movss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xEC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E169C)); /* movss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E7028)); /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x158) = eax;
    esp += 8; return; /* ret 4 */

loc_0009B943: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20E0A19F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20E0A19F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BA47; /* jne: not equal / not zero */

loc_0009B94E: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    MEMF(ecx + 0xB4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E7030)); /* movss */
    MEMF(ecx + 0xB8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E55DC)); /* movss */
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E7024)); /* movss */
    MEMF(ecx + 0xC4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDE28)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E7020)); /* movss */
    MEMF(ecx + 0xD0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC8A8)); /* movss */
    MEMF(ecx + 0xDC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E701C)); /* movss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xEC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E7018)); /* movss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E7014)); /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x158) = eax;
    esp += 8; return; /* ret 4 */

loc_0009BA47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x714DAA7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x714DAA7A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BAF7; /* jne: not equal / not zero */

loc_0009BA52: ;
    xmm2 = XMM_SCALAR(MEMF(0x2E6ED8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    MEMF(ecx + 0xB8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    MEMF(ecx + 0xC4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E5CA8)); /* movss */
    MEMF(ecx + 0xD0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC3CC)); /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E7010)); /* movss */
    MEMF(ecx + 0xDC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E700C)); /* movss */
    goto loc_0009BD2E;

loc_0009BAF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE063CBAAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE063CBAAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BBD3; /* jne: not equal / not zero */

loc_0009BB02: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E7008)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(ecx + 0xB4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E7004)); /* movss */
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xD0) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD8) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DBED4)); /* movss */
    MEMF(ecx + 0xE8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E7000)); /* movss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xF0) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x158) = eax;
    esp += 8; return; /* ret 4 */

loc_0009BBD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47458E1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47458E1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BC33; /* jne: not equal / not zero */

loc_0009BBDA: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3F4)); /* movss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E6FFC)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD6C0)); /* movss */
    MEMF(ecx + 0xE4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E6FF8)); /* movss */
    MEMF(ecx + 0xE8) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x158) = eax;
    esp += 8; return; /* ret 4 */

loc_0009BC33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67BA7642) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67BA7642 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009BC93; /* jne: not equal / not zero */

loc_0009BC3A: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E169C)); /* movss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E6FF4)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(ecx + 0xE4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A8)); /* movss */
    MEMF(ecx + 0xE8) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x158) = eax;
    esp += 8; return; /* ret 4 */

loc_0009BC93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21C08419) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21C08419 (32-bit) */
    MEMF(ecx + 0xB0) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0009BD4B; /* jne: not equal / not zero */

loc_0009BCA6: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC3F4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E5CA8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2E2198)); /* movss */
    MEMF(ecx + 0xB4) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xB8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD0) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xD8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E7010)); /* movss */
    MEMF(ecx + 0xDC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC3F0)); /* movss */

loc_0009BD2E: ;
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E6FF0)); /* movss */
    goto loc_0009BDFB;

loc_0009BD4B: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC8AC)); /* movss */
    MEMF(ecx + 0xB4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DD3E0)); /* movss */
    MEMF(ecx + 0xB8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDA34)); /* movss */
    MEMF(ecx + 0xC0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    MEMF(ecx + 0xC4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC390)); /* movss */
    MEMF(ecx + 0xD0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC8A8)); /* movss */
    MEMF(ecx + 0xDC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm1.f[0]; /* movss */

loc_0009BDFB: ;
    MEMF(ecx + 0xE8) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xF0) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xF4) = xmm2.f[0]; /* movss */
    MEM32(ecx + 0x158) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009BE30
 * Original: 0x0009BE30 - 0x0009BF5B (299 bytes, 93 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0009BE30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009BE41u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009BE41: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BE6C; /* je: equal / zero */

loc_0009BE4A: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009BE51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009BE4Eu); } /* indirect call */
    }

loc_0009BE51: ;
    ecx = MEM32(0x30D358);
    esi = eax;
    eax = MEM32(0x30D354);
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
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009BE6E;

loc_0009BE6C: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009BE6E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x0009BE78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009BE72u); } /* indirect call */
    }

loc_0009BE78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BE92; /* je: equal / zero */

loc_0009BE7C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x0009BE86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009BE80u); } /* indirect call */
    }

loc_0009BE86: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009BE92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009BE8Fu); } /* indirect call */
    }

loc_0009BE92: ;
    _fa = (uint32_t)(MEM8(edi + 0x148)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x148), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009BF47; /* jne: not equal / not zero */

loc_0009BE9F: ;
    ecx = esi;
    PUSH32(esp, 0x0009BEA6u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_0009BEA6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009BF47; /* jne: not equal / not zero */

loc_0009BEAE: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x114)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009BF4A; /* jp: parity */

loc_0009BEC6: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x108)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009BF4A; /* jp: parity */

loc_0009BED7: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x144); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(edi + 0x144) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009BF0F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0009BEF9: ;
    ecx = edi;
    PUSH32(esp, 0x0009BF00u); RECOMP_ABI_CALL(0x0009AF30u, sub_0009AF30); /* call 0x0009AF30 */

loc_0009BF00: ;
    MEM8(edi + 0x148) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009BF0F: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009BF52; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009BF1C: ;
    PUSH32(esp, 0x40F00000);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009BF3Eu); RECOMP_ABI_CALL(0x0009B4C0u, sub_0009B4C0); /* call 0x0009B4C0 */

loc_0009BF3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009BF47: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0009BF4A: ;
    MEMF(edi + 0x144) = xmm0.f[0]; /* movss */

loc_0009BF52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009BF60
 * Original: 0x0009BF60 - 0x0009C2BD (861 bytes, 180 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009BF60(void)
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

loc_0009BF60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009BF71u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009BF71: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009BF9C; /* je: equal / zero */

loc_0009BF7A: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009BF81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009BF7Eu); } /* indirect call */
    }

loc_0009BF81: ;
    ecx = MEM32(0x30D358);
    edi = eax;
    eax = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ~edi;
    _cf = 0; /* logical op clears CF */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009BF9E;

loc_0009BF9C: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009BF9E: ;
    SET_LO8(eax, MEM8(esi + 0x17C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C2B4; /* je: equal / zero */

loc_0009BFAC: ;
    PUSH32(esp, 0x0009BFB1u); RECOMP_ABI_CALL(0x00178950u, sub_00178950); /* call 0x00178950 */

loc_0009BFB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7084D38D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7084D38D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009BFC8; /* je: equal / zero */

loc_0009BFB8: ;
    PUSH32(esp, 0x0009BFBDu); RECOMP_ABI_CALL(0x00178950u, sub_00178950); /* call 0x00178950 */

loc_0009BFBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53ACCC57) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x53ACCC57 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009BFC8; /* je: equal / zero */

loc_0009BFC4: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0009BFCA;

loc_0009BFC8: ;
    SET_LO8(eax, 1);

loc_0009BFCA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD414); /* comiss */
    if ((_fca > _fcb)) goto loc_0009C2A9; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DD414)) */

loc_0009BFDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009C2A9; /* jne: not equal / not zero */

loc_0009BFE5: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E6FD0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x14C); /* addss */
    MEMF(esi + 0x14C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E705C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E7058); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C018u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009C018: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC884); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC090); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C03Eu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009C03E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD6D0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E7054); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7050)); /* fmul dword ptr [0x2e7050] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009C06Eu); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009C06E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC904); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E5CA8); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C094u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009C094: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E2C30); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E704C)); /* fmul dword ptr [0x2e704c] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009C0C4u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009C0C4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC884); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DDA4C); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C0EAu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009C0EA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E3D30)); /* fmul dword ptr [0x2e3d30] */
    ecx = 0x30D4B0;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009C106u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0009C106: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C237; /* je: equal / zero */

loc_0009C10E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C131u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009C131: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3F0); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C14Fu); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009C14F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009C165u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0009C165: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC904)); /* fsub dword ptr [0x2dc904] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009C17Eu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0009C17E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DD440)); /* fadd dword ptr [0x2dd440] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009C197u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0009C197: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    xmm0 = XMM_SCALAR(MEMF(0x2E7048)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x28); /* divss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC904)); /* fadd dword ptr [0x2dc904] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x128)); /* fadd dword ptr [esi + 0x128] */
    MEMF(esi + 0x128) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x12C)); /* fadd dword ptr [esi + 0x12c] */
    MEMF(esi + 0x12C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x130)); /* fadd dword ptr [esi + 0x130] */
    MEMF(esi + 0x130) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca > _fcb)) goto loc_0009C1F6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009C1E9: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E5CDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009C1F9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009C1F6: ;
    xmm0 = xmm1; /* movaps */

loc_0009C1F9: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x128)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x128) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x12C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x12C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x130)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x130) = xmm1.f[0]; /* movss */
    goto loc_0009C252;

loc_0009C237: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x128) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x12C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x130) = xmm0.f[0]; /* movss */

loc_0009C252: ;
    eax = MEM32(esp + 0x2C);
    xmm2 = XMM_SCALAR(MEMF(esi + 0x128)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x12C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x130)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x18); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 8); /* addss */
    POP32(esp, edi);
    POP32(esp, esi);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0009C2A9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x14C) = xmm0.f[0]; /* movss */

loc_0009C2B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009C2C0
 * Original: 0x0009C2C0 - 0x0009C4DA (538 bytes, 119 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C2C0(void)
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

loc_0009C2C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C2D1u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009C2D1: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C2FC; /* je: equal / zero */

loc_0009C2DA: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009C2E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C2DEu); } /* indirect call */
    }

loc_0009C2E1: ;
    ecx = MEM32(0x30D358);
    edi = eax;
    eax = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ~edi;
    _cf = 0; /* logical op clears CF */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009C2FE;

loc_0009C2FC: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009C2FE: ;
    xmm0 = XMM_SCALAR(MEMF(0x413FA0)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E6FD0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x14C); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC884); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC090); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C345u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009C345: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E705C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E7058); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C369u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009C369: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD6D0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E7054); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7050)); /* fmul dword ptr [0x2e7050] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009C399u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009C399: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC904); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E5CA8); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C3BFu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009C3BF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E2C30); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E704C)); /* fmul dword ptr [0x2e704c] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009C3EFu); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009C3EF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC884); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DDA4C); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C415u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009C415: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E3D30)); /* fmul dword ptr [0x2e3d30] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C431; /* je: equal / zero */

loc_0009C42A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009C431u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C42Eu); } /* indirect call */
    }

loc_0009C431: ;
    SET_LO8(eax, MEM8(esi + 0x154));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C453; /* je: equal / zero */

loc_0009C43B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x150); /* addss */
    goto loc_0009C46D;

loc_0009C453: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x150)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0009C46D: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009C482; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009C475: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009C485; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009C482: ;
    xmm0 = xmm1; /* movaps */

loc_0009C485: ;
    eax = MEM32(esp + 0x20);
    MEMF(esi + 0x150) = xmm0.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    POP32(esp, edi);
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    POP32(esp, esi);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009C4E0
 * Original: 0x0009C4E0 - 0x0009C606 (294 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C4E0(void)
{
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

loc_0009C4E0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C4F1u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009C4F1: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C51C; /* je: equal / zero */

loc_0009C4FA: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009C501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C4FEu); } /* indirect call */
    }

loc_0009C501: ;
    ecx = MEM32(0x30D358);
    esi = eax;
    eax = MEM32(0x30D354);
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
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009C51E;

loc_0009C51C: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009C51E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C5FF; /* je: equal / zero */

loc_0009C526: ;
    ecx = edi;
    PUSH32(esp, 0x0009C52Du); RECOMP_ABI_CALL(0x0009B0D0u, sub_0009B0D0); /* call 0x0009B0D0 */

loc_0009C52D: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x0009C538u); RECOMP_ABI_CALL(0x0009B090u, sub_0009B090); /* call 0x0009B090 */

loc_0009C538: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0009C548u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C545u); } /* indirect call */
    }

loc_0009C548: ;
    ecx = eax;
    PUSH32(esp, 0x0009C54Fu); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009C54F: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009C567u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009C567: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm3; /* movaps */
    eax = esp + 0x30;
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0009C5B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C5B2u); } /* indirect call */
    }

loc_0009C5B5: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(edi + 0x44) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x48) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(edi + 0x10C) = xmm0.f[0]; /* movss */

loc_0009C5FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009C610
 * Original: 0x0009C610 - 0x0009C7C0 (432 bytes, 119 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C610(void)
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

loc_0009C610: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009C620u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009C620: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C64A; /* je: equal / zero */

loc_0009C629: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009C630u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C62Du); } /* indirect call */
    }

loc_0009C630: ;
    ecx = MEM32(0x30D358);
    edx = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009C64C;

loc_0009C64A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009C64C: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x2C) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x15C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x28) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0009C79E; /* je: equal / zero */

loc_0009C672: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD6FC); /* mulss */
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0009C697u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C694u); } /* indirect call */
    }

loc_0009C697: ;
    ecx = eax;
    PUSH32(esp, 0x0009C69Eu); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0009C69E: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x0009C6A7u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009C6A7: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    ecx = esp + 0x10;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C6D2u); RECOMP_ABI_CALL(0x001F8730u, sub_001F8730); /* call 0x001F8730 */

loc_0009C6D2: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009C6DFu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_0009C6DF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009C706; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0009C6FE: ;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    goto loc_0009C711;

loc_0009C706: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009C711; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0009C70B: ;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */

loc_0009C711: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009C725u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009C725: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    fp_push(MEMF(0x2E0FF0)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009C79E; /* jbe: below or equal (unsigned <=) */

loc_0009C788: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009C79E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0009C797: ;
    MEM8(esi + 0x15C) = 0;

loc_0009C79E: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x24);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009C7C0
 * Original: 0x0009C7C0 - 0x0009CA51 (657 bytes, 167 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009C7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009C7C0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 0x60);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x0009C7E6u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009C7E6: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009C811; /* je: equal / zero */

loc_0009C7EF: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009C7F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C7F3u); } /* indirect call */
    }

loc_0009C7F6: ;
    ecx = MEM32(0x30D358);
    esi = eax;
    eax = MEM32(0x30D354);
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
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009C813;

loc_0009C811: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009C813: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0009C81Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C817u); } /* indirect call */
    }

loc_0009C81A: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DC340)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009C82C; /* jbe: below or equal (unsigned <=) */

loc_0009C828: ;
    SET_LO8(ebx, 1);
    goto loc_0009C82E;

loc_0009C82C: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0009C82E: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0009C83Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009C837u); } /* indirect call */
    }

loc_0009C83A: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    ecx = esp + 0x24;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C86Cu); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009C86C: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x44;
    PUSH32(esp, 0x0009C879u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009C879: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x0009C884u); RECOMP_ABI_CALL(0x0009B1C0u, sub_0009B1C0); /* call 0x0009B1C0 */

loc_0009C884: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0009C8B3; /* jne: not equal / not zero */

loc_0009C890: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x1A0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(edi + 0x1A4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    goto loc_0009C8E6;

loc_0009C8B3: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    MEMF(edi + 0x1A0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x184)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3E0)); /* movss */
    if ((_fca > _fcb)) goto loc_0009C8E6; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009C8DE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0B9C)); /* movss */

loc_0009C8E6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009C909; /* jne: not equal / not zero */

loc_0009C8EB: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(edi + 0x1A8) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1A4) = xmm2.f[0]; /* movss */

loc_0009C909: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x1A8); /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x1A8); /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009C920; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x1A8)) */

loc_0009C91A: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_0009C928;

loc_0009C920: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC09C); /* mulss */

loc_0009C928: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x1A8); /* addss */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    MEMF(edi + 0x1A8) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x1A8)); /* fsub dword ptr [edi + 0x1a8] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C95Fu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_0009C95F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1A0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009C98E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0009C986: ;
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    goto loc_0009C99F;

loc_0009C98E: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0009C99F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009C999: ;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */

loc_0009C99F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1A4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009C9B8u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_0009C9B8: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    edx = esp + 0x54;
    eax = esp + 0x18;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3CC)); /* fmul dword ptr [0x2dc3cc] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0009C9ECu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009C9EC: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = MEM32(esp + 0x4C);
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm2; /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    ecx = eax;
    MEM32(ecx) = edx;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    POP32(esp, esi);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEM32(ecx + 4) = ebp;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(ecx + 8) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009CA60
 * Original: 0x0009CA60 - 0x0009CB70 (272 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CA60(void)
{
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

loc_0009CA60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CA6Eu); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009CA6E: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CA99; /* je: equal / zero */

loc_0009CA77: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009CA7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CA7Bu); } /* indirect call */
    }

loc_0009CA7E: ;
    ecx = MEM32(0x30D358);
    edi = eax;
    eax = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ~edi;
    _cf = 0; /* logical op clears CF */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009CA9B;

loc_0009CA99: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009CA9B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CB6C; /* je: equal / zero */

loc_0009CAA3: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x22C); PUSH32(esp, 0x0009CAADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CAA7u); } /* indirect call */
    }

loc_0009CAAD: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x158) = eax;
    PUSH32(esp, 0x0009CABBu); RECOMP_ABI_CALL(0x0009B640u, sub_0009B640); /* call 0x0009B640 */

loc_0009CABB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009CAC2u); RECOMP_ABI_CALL(0x0009B180u, sub_0009B180); /* call 0x0009B180 */

loc_0009CAC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009CAC9u); RECOMP_ABI_CALL(0x0009B1A0u, sub_0009B1A0); /* call 0x0009B1A0 */

loc_0009CAC9: ;
    _fa = (uint32_t)(MEM32(esi + 0x158)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x714DAA7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x158), 0x714DAA7A (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0009CAE5; /* jne: not equal / not zero */

loc_0009CADD: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E7060)); /* movss */

loc_0009CAE5: ;
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009CAFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CAFCu); } /* indirect call */
    }

loc_0009CAFF: ;
    MEMF(esi + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM32(esi + 0x158)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47458E1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x158), 0x47458E1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009CB18; /* jne: not equal / not zero */

loc_0009CB11: ;
    ecx = esi;
    PUSH32(esp, 0x0009CB18u); RECOMP_ABI_CALL(0x0009C4E0u, sub_0009C4E0); /* call 0x0009C4E0 */

loc_0009CB18: ;
    eax = MEM32(esi + 0x100);
    ecx = MEM32(esi + 0x10C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x15C) = 1;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x110) = ecx;
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x11C) = edx;
    eax = MEM32(esi + 0x44);
    MEM32(esi + 0x120) = eax;
    ecx = MEM32(esi + 0x48);
    MEM32(esi + 0x124) = ecx;
    MEM8(esi + 0x148) = 0;
    MEMF(esi + 0x118) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x160) = xmm0.f[0]; /* movss */

loc_0009CB6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
