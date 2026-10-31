/**
 * Mercenaries - Recompiled code chunk 5
 * Functions: 250 (0x000451C0 - 0x0004D820)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000451C0
 * Original: 0x000451C0 - 0x000451DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000451C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000451C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000451C8u); RECOMP_ABI_CALL(0x000451B0u, sub_000451B0); /* call 0x000451B0 */

loc_000451C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000451D8; /* je: equal / zero */

loc_000451CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000451D5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000451D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000451D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000451E0
 * Original: 0x000451E0 - 0x000452BC (220 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000451E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000451E0: ;
    eax = ecx;
    MEM32(eax) = 0x2E1670;
    MEM32(eax + 0x14) = 0x2E15E4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x20) = 0x2E15F4;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x2C) = 0x2E1604;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x38) = 0x2E1614;
    edx = eax + 0x38;
    MEM32(edx + 0x20) = ecx;
    MEM32(edx + 0x24) = ecx;
    MEM32(edx + 0x1C) = 0x2E1614;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x20) = ecx;
    MEM32(edx + 0x24) = ecx;
    MEM32(edx + 0x1C) = 0x2E1614;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEM32(eax + 0x8C) = 0x2E1624;
    MEM32(eax + 0xA8) = ecx;
    MEM32(eax + 0xAC) = ecx;
    MEM32(eax + 0xA4) = 0x2E1634;
    MEM8(eax + 0x104) = LO8(ecx);
    MEM32(eax + 0x108) = ecx;
    MEM32(eax + 0x10C) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x110) = ecx;
    MEM32(eax + 0x114) = ecx;
    MEM32(eax + 0x118) = ecx;
    MEM32(eax + 0x11C) = ecx;
    MEM32(eax + 0x120) = ecx;
    MEM32(eax + 0x124) = ecx;
    MEM32(eax + 0x128) = ecx;
    MEM32(eax + 0x12C) = ecx;
    MEM32(eax + 0x130) = ecx;
    MEM32(eax + 0x134) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000452C0
 * Original: 0x000452C0 - 0x00045604 (836 bytes, 228 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000452C0(void)
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

loc_000452C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x000452D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000452D0u); } /* indirect call */
    }

loc_000452D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000455FB; /* je: equal / zero */

loc_000452DE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x000452E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000452E2u); } /* indirect call */
    }

loc_000452E8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000452EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000452ECu); } /* indirect call */
    }

loc_000452EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000455FB; /* je: equal / zero */

loc_000452F7: ;
    edx = MEM32(esi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00045306u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045300u); } /* indirect call */
    }

loc_00045306: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004530Du); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0004530D: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
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
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DD8EC)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0004534F; /* jbe: below or equal (unsigned <=) */

loc_00045341: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD8EC)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0004534F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC34C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC87C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC098); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x2DD414); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E1698); /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edi = 0x2E15A8;
    ebx = esi + 0x6B8;
    goto loc_000453A0;

    /* nop */

loc_000453A0: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2DC34C); /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004547D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x2DC34C)) */

loc_000453C0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004547D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000453CC: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000453DBu); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_000453DB: ;
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = esi + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000453F9u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_000453F9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    edx = MEM32(esi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DD418); /* subss */
    eax = esp + 0x1C;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00045434u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004542Eu); } /* indirect call */
    }

loc_00045434: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004543Bu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0004543B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00045454; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004544E: ;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_00045454: ;
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045465u); RECOMP_ABI_CALL(0x000B0350u, sub_000B0350); /* call 0x000B0350 */

loc_00045465: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004546Du); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0004546D: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2E15A0)); /* fsub dword ptr [0x2e15a0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004547D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E15B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2E15B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000453A0; /* jl: less (signed <) */

loc_0004548F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00045499u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045493u); } /* indirect call */
    }

loc_00045499: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000454A0u); RECOMP_ABI_CALL(0x00133170u, sub_00133170); /* call 0x00133170 */

loc_000454A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000455FB; /* je: equal / zero */

loc_000454A8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x000454B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000454ACu); } /* indirect call */
    }

loc_000454B2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000454B9u); RECOMP_ABI_CALL(0x001345D0u, sub_001345D0); /* call 0x001345D0 */

loc_000454B9: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000455FB; /* jbe: below or equal (unsigned <=) */

loc_000454CB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x6C8;

loc_000454D3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0004551B; /* jle: less or equal (signed <=) */

loc_000454E5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x000454EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000454E9u); } /* indirect call */
    }

loc_000454EF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x334)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca > _fcb)) goto loc_00045534; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00045500: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x0004550Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045504u); } /* indirect call */
    }

loc_0004550A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x33C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca > _fcb)) goto loc_00045534; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0004551B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00045526u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045520u); } /* indirect call */
    }

loc_00045526: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004552Du); RECOMP_ABI_CALL(0x00132B70u, sub_00132B70); /* call 0x00132B70 */

loc_0004552D: ;
    fp_pop(); /* fstp st(0) */
    goto loc_000455EE;

loc_00045534: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000455EE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx)) */

loc_00045540: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004554Fu); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_0004554F: ;
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    ecx = MEM32(edi * 4 + 0x2E15A8);
    edx = esi + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045572u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00045572: ;
    eax = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x78);
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x38;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x0004559Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045594u); } /* indirect call */
    }

loc_0004559A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000455A1u); RECOMP_ABI_CALL(0x00132B80u, sub_00132B80); /* call 0x00132B80 */

loc_000455A1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000455D2u); RECOMP_ABI_CALL(0x000A6D70u, sub_000A6D70); /* call 0x000A6D70 */

loc_000455D2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000455DAu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_000455DA: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2E15A0)); /* fsub dword ptr [0x2e15a0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC09C)); /* fmul dword ptr [0x2dc09c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC3D0)); /* fadd dword ptr [0x2dc3d0] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */

loc_000455EE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000454D3; /* jl: less (signed <) */

loc_000455FB: ;
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
 * sub_00045610
 * Original: 0x00045610 - 0x0004568B (123 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00045610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00045610: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B6EF5D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B6EF5D2 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00045649; /* je: equal / zero */

loc_0004561E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB229EE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB229EE0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004562F; /* je: equal / zero */

loc_00045625: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004562Bu); RECOMP_ABI_CALL(0x000403B0u, sub_000403B0); /* call 0x000403B0 */

loc_0004562B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0004562F: ;
    eax = MEM32(esi + 0x1AC0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1ACD);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

loc_00045649: ;
    ecx = MEM32(esi + 0x1AC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00045675; /* je: equal / zero */

loc_00045653: ;
    PUSH32(esp, 0x00045658u); RECOMP_ABI_CALL(0x001624B0u, sub_001624B0); /* call 0x001624B0 */

loc_00045658: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00045675; /* jne: not equal / not zero */

loc_0004565C: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1ACC);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

loc_00045675: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1ACC);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00045690
 * Original: 0x00045690 - 0x000457F0 (352 bytes, 120 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00045690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00045690: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(0x643844);
    eax = MEM32(ebp + 0x58);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    esi = ecx;
    ecx = MEM32(0x6438A8);
    PUSH32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x000456BCu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000456BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000456CA; /* jge: greater or equal (signed >=) */

loc_000456C3: ;
    eax = 0x6438B8;
    goto loc_000456D3;

loc_000456CA: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000456D3: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    MEM32(esi + 4) = ebx;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x60;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x2E15A8;

loc_000456E5: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000456F7u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_000456F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E15B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2E15B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000456E5; /* jl: less (signed <) */

loc_00045705: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8B41F631u);
    eax = ebp + 0x100;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00045723u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00045723: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000457AE; /* jl: less (signed <) */

loc_00045731: ;
    ecx = MEM32(esp + 0x10);
    esi = eax + -4;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xFF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFF8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ebp + 0x38;
    edi = esi * 4;
    /* nop */

loc_00045750: ;
    ebx = MEM32(edx + -8);
    MEM32(ecx + -8) = ebx;
    ebx = MEM32(edx + -4);
    MEM32(ecx + -4) = ebx;
    ebx = MEM32(edx);
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 0x38);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 0x3C);
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(edx + 0x40);
    MEM32(ecx + 0xC) = ebx;
    ebx = MEM32(edx + 0x78);
    MEM32(ecx + 0x10) = ebx;
    ebx = MEM32(edx + 0x7C);
    MEM32(ecx + 0x14) = ebx;
    ebx = MEM32(edx + 0x80);
    MEM32(ecx + 0x18) = ebx;
    ebx = MEM32(edx + 0xB8);
    MEM32(ecx + 0x1C) = ebx;
    ebx = MEM32(edx + 0xBC);
    MEM32(ecx + 0x20) = ebx;
    ebx = MEM32(edx + 0xC0);
    MEM32(ecx + 0x24) = ebx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00045750; /* jne: not equal / not zero */

loc_000457AE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_000457E9; /* jge: greater or equal (signed >=) */

loc_000457B3: ;
    edx = MEM32(esp + 0xC);
    ecx = edi + edi * 2;
    ecx = edx + ecx * 4 + 0xFF8;
    edx = edi;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    edx = edx + ebp + 0x38;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_000457D0: ;
    edi = MEM32(edx + -8);
    MEM32(ecx + -8) = edi;
    edi = MEM32(edx + -4);
    MEM32(ecx + -4) = edi;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000457D0; /* jne: not equal / not zero */

loc_000457E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000457F0
 * Original: 0x000457F0 - 0x00045955 (357 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000457F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000457F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0x10A0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x10D4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x10AC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10E0) = xmm0.f[0]; /* movss */
    eax = 0x40607080;
    MEM32(esi + 0x10A4) = eax;
    MEM32(esi + 0x10D8) = eax;
    MEMF(esi + 0x1108) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x113C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E0C7C)); /* movss */
    MEMF(esi + 0x1114) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1148) = xmm0.f[0]; /* movss */
    ecx = 0x20101080;
    MEM32(esi + 0x110C) = ecx;
    MEM32(esi + 0x1140) = ecx;
    MEM32(esi + 0x1174) = eax;
    MEMF(esi + 0x1170) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x117C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x11A8) = eax;
    MEMF(esi + 0x11A4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x11B0) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x58);
    PUSH32(esp, edi);
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
    PUSH32(esp, 0x000458C6u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000458C6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000458D4; /* jge: greater or equal (signed >=) */

loc_000458CD: ;
    eax = 0x6438B8;
    goto loc_000458DD;

loc_000458D4: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000458DD: ;
    ebx = MEM32(eax);
    edx = esi + 0x60;
    MEM32(edi + 4) = ebx;
    MEM32(esp + 0xC) = edx;
    edi = 0x2E15B8;
    _fb = (uint32_t)(0x11C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x11C0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000458F4: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004590Eu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0004590E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004592F; /* jle: less or equal (signed <=) */

loc_00045912: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    goto loc_0004593B;

loc_0004592F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */

loc_0004593B: ;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E15D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2E15D0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000458F4; /* jl: less (signed <) */

loc_0004594E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00045960
 * Original: 0x00045960 - 0x00045A68 (264 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00045960(void)
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

loc_00045960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x94));
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = MEM32(edi);
    esi = ecx;
    eax = edi + 8;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    ecx = edi + 0x20;
    edx = MEM32(ecx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x3C) = edx;
    edx = esp + 0x60;
    MEM32(esp + 0x44) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0xB0;
    MEM32(esp + 0x44) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000459B4u); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_000459B4: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000459BCu); RECOMP_ABI_CALL(0x0003FC40u, sub_0003FC40); /* call 0x0003FC40 */

loc_000459BC: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x000459CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000459C4u); } /* indirect call */
    }

loc_000459CA: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3DC)); /* fmul dword ptr [0x2dc3dc] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_00045A5B; /* jb: below (unsigned <) */

loc_000459E8: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000459FCu); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_000459FC: ;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x60;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045A28u); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_00045A28: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x48) = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0x50) = edx;
    edx = esp + 0x4C;
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0x1CE0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045A5Bu); RECOMP_ABI_CALL(0x0005FF90u, sub_0005FF90); /* call 0x0005FF90 */

loc_00045A5B: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
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
 * sub_00045A70
 * Original: 0x00045A70 - 0x00045C4C (476 bytes, 121 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00045A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00045A70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240F7B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1078)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E169C); /* addss */
    eax = MEM32(esi);
    ecx = esp + 0x84;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00045AB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045AB1u); } /* indirect call */
    }

loc_00045AB4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = esp + 0x90;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00045AF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045AF2u); } /* indirect call */
    }

loc_00045AF5: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0xC); /* addss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(0x2E169C)); /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM8(esp + 0x58) = LO8(ebx);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x1C) = 0x2E25F0;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = edx;
    MEM32(esp + 0x7C) = eax;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0xA4) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x128); PUSH32(esp, 0x00045BA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045B9Du); } /* indirect call */
    }

loc_00045BA3: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00045BB2; /* je: equal / zero */

loc_00045BAD: ;
    PUSH32(esp, 0x00045BB2u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00045BB2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00045BC1; /* je: equal / zero */

loc_00045BBA: ;
    ecx = esi;
    PUSH32(esp, 0x00045BC1u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_00045BC1: ;
    PUSH32(esp, 2);
    eax = esp + 0x20;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00045BCFu); RECOMP_ABI_CALL(0x0012E690u, sub_0012E690); /* call 0x0012E690 */

loc_00045BCF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = 0x2DC928;
    MEM32(esp + 0xA4) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00045C20; /* je: equal / zero */

loc_00045BEB: ;
    goto loc_00045BF0;

    /* nop */

loc_00045BF0: ;
    ecx = MEM32(esp + esi * 4 + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00045BFD; /* je: equal / zero */

loc_00045BF8: ;
    PUSH32(esp, 0x00045BFDu); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00045BFD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00045BF0; /* jl: less (signed <) */

loc_00045C03: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x94);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00045C20: ;
    ecx = MEM32(esp + esi * 4 + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00045C2D; /* je: equal / zero */

loc_00045C28: ;
    PUSH32(esp, 0x00045C2Du); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00045C2D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00045C20; /* jl: less (signed <) */

loc_00045C33: ;
    ecx = MEM32(esp + 0x9C);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00045C50
 * Original: 0x00045C50 - 0x000465E1 (2449 bytes, 560 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00045C50(void)
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

loc_00045C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240F9B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1D8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1D8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00045CC7; /* jne: not equal / not zero */

loc_00045C7F: ;
    eax = MEM32(esi + 0x107C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000465CA; /* jle: less or equal (signed <=) */

loc_00045C8F: ;
    edi = esi + 0xB04;

loc_00045C95: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00045CA2; /* je: equal / zero */

loc_00045C9B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00045CA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045C9Fu); } /* indirect call */
    }

loc_00045CA2: ;
    eax = MEM32(esi + 0x107C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00045C95; /* jl: less (signed <) */

loc_00045CB0: ;
    ecx = MEM32(esp + 0x1E4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00045CC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00045E63; /* jne: not equal / not zero */

loc_00045CD0: ;
    _fa = (uint32_t)(MEM32(esi + 0x107C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x107C), edi (32-bit) */
    MEM32(esp + 0x30) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000465CA; /* jle: less or equal (signed <=) */

loc_00045CE0: ;
    ecx = esi + 0xDF0;
    edi = esi + 0xB04;
    MEM32(esp + 0x18) = ecx;
    ebx = esi + 0xFF8;
    goto loc_00045D00;

    /* nop */
    /* nop */

loc_00045D00: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DE084)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ebx + -8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + -4)); /* movss */
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x50;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x48;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045D6Eu); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_00045D6E: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x3C) = eax;
    eax = esi + 0xB0;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    MEM32(esp + 0x3C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045D99u); RECOMP_ABI_CALL(0x001F7D90u, sub_001F7D90); /* call 0x001F7D90 */

loc_00045D99: ;
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045DAEu); RECOMP_ABI_CALL(0x0022FA9Eu, sub_0022FA9E); /* call 0x0022FA9E */

loc_00045DAE: ;
    PUSH32(esp, eax);
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045DBCu); RECOMP_ABI_CALL(0x0022F9BCu, sub_0022F9BC); /* call 0x0022F9BC */

loc_00045DBC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x104) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    ecx = esp + 0xD0;
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x110) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045E0Bu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00045E0B: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00045E18; /* jne: not equal / not zero */

loc_00045E11: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00045E18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045E15u); } /* indirect call */
    }

loc_00045E18: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045E24u); RECOMP_ABI_CALL(0x002035D0u, sub_002035D0); /* call 0x002035D0 */

loc_00045E24: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x107C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x5C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00045D00; /* jl: less (signed <) */

loc_00045E4C: ;
    ecx = MEM32(esp + 0x1E4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00045E63: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00045E6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045E67u); } /* indirect call */
    }

loc_00045E6D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045E74u); RECOMP_ABI_CALL(0x00133170u, sub_00133170); /* call 0x00133170 */

loc_00045E74: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0x107C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1F) = LO8(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_000465CA; /* jle: less or equal (signed <=) */

loc_00045E88: ;
    goto loc_00045E90;

loc_00045E8A: ;
    SET_LO8(ebx, MEM8(esp + 0x1F));
    edi = edi;

loc_00045E90: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00045E9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045E94u); } /* indirect call */
    }

loc_00045E9A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045EA1u); RECOMP_ABI_CALL(0x00133980u, sub_00133980); /* call 0x00133980 */

loc_00045EA1: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00045F6E; /* jne: not equal / not zero */

loc_00045EAD: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    edx = MEM32(esi);
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    eax = esp + 0x11C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x114) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00045EFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045EFAu); } /* indirect call */
    }

loc_00045EFD: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x74); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x84); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x110)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2E0848)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00045F45; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00045F38: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00045F48; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00045F45: ;
    xmm0 = xmm1; /* movaps */

loc_00045F48: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x30); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1070)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045F65u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00045F65: ;
    MEMF(esi + 0x1070) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00045F6E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_00045FD4; /* jge: greater or equal (signed >=) */

loc_00045F96: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00045FD4; /* je: equal / zero */

loc_00045F9A: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00045FB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045FADu); } /* indirect call */
    }

loc_00045FB3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045FBAu); RECOMP_ABI_CALL(0x00132E50u, sub_00132E50); /* call 0x00132E50 */

loc_00045FBA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00045FD4; /* je: equal / zero */

loc_00045FBE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esi + edi * 4 + 0x1050) = xmm0.f[0]; /* movss */
    goto loc_00046514;

loc_00045FD4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00045FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045FD8u); } /* indirect call */
    }

loc_00045FDE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00045FE5u); RECOMP_ABI_CALL(0x00133990u, sub_00133990); /* call 0x00133990 */

loc_00045FE5: ;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    eax = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00045FF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00045FF2u); } /* indirect call */
    }

loc_00045FF5: ;
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    edx = edi + edi * 2 + 0x3FC;
    eax = esi + edx * 4;
    PUSH32(esp, eax);
    ecx = esp + 0xCC;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046014u); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_00046014: ;
    edx = MEM32(esp + 0xC4);
    eax = MEM32(esp + 0xC8);
    ecx = MEM32(esp + 0xCC);
    xmm1 = XMM_SCALAR(MEMF(esi + edi * 4 + 0x1050)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    if ((_fca > _fcb)) goto loc_0004604E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00046046: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000461CC; /* je: equal / zero */

loc_0004604E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    edx = esp + 0xAC;
    PUSH32(esp, edx);
    eax = esp + 0xBC;
    MEMF(esp + 0xBC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x160;
    MEMF(esp + 0xB4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046109u); RECOMP_ABI_CALL(0x000187A0u, sub_000187A0); /* call 0x000187A0 */

loc_00046109: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x1EC) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x0004611Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046118u); } /* indirect call */
    }

loc_0004611E: ;
    ecx = MEM32(esp + 0x15C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = MEM32(eax + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_00046131; /* je: equal / zero */

loc_0004612C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046131u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00046131: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x15C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00046143; /* je: equal / zero */

loc_0004613C: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046143u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_00046143: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x101);
    eax = esp + 0x164;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004615Bu); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_0004615B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3E0); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0004618C; /* je: equal / zero */

loc_00046179: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x190)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0004618C: ;
    MEMF(esi + edi * 4 + 0x1050) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1EC) = 0xFFFFFFFFu;
    MEM32(esp + 0x158) = 0x2DC928;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000461B0: ;
    ecx = MEM32(esp + ebx * 4 + 0x15C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000461C0; /* je: equal / zero */

loc_000461BB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000461C0u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_000461C0: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000461B0; /* jl: less (signed <) */

loc_000461C6: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_000461CC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    edx = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x38); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x3C); /* addss */
    ecx = esi;
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm3.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x0004621Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046218u); } /* indirect call */
    }

loc_0004621E: ;
    _fb = (uint32_t)(0x2C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000463B7; /* jge: greater or equal (signed >=) */

loc_00046247: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00046251u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004624Bu); } /* indirect call */
    }

loc_00046251: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm7; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E16A0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD6C0); /* mulss */
    PUSH32(esp, ecx);
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm6.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = esp + 0x8C;
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x2DC08C); /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004632Bu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0004632B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    eax = esp + 0x2C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    MEMF(esp + 0xB0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x13C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0xBC) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046399u); RECOMP_ABI_CALL(0x001F8210u, sub_001F8210); /* call 0x001F8210 */

loc_00046399: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x38) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x3C) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = edx;

loc_000463B7: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm5.f[0]; /* divss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] - MEMF(0x2DC08C); /* subss */
    MEMF(esp + 0x4C) = xmm6.f[0]; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x1070); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E15A0); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = esp + 0x7C;
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm4.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046488u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00046488: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    edx = esp + 0x2C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x14C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0xAC) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000464F6u); RECOMP_ABI_CALL(0x001F8210u, sub_001F8210); /* call 0x001F8210 */

loc_000464F6: ;
    edx = MEM32(eax);
    MEM32(esp + 0x38) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x40) = edx;
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;

loc_00046514: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x14C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046526u); RECOMP_ABI_CALL(0x0022FA9Eu, sub_0022FA9E); /* call 0x0022FA9E */

loc_00046526: ;
    PUSH32(esp, eax);
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046534u); RECOMP_ABI_CALL(0x0022F9BCu, sub_0022F9BC); /* call 0x0022F9BC */

loc_00046534: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEMF(esp + 0x100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0x104) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    ecx = esp + 0xD0;
    edx = edi;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ecx);
    ecx = edx + esi + 0xDF0;
    MEMF(esp + 0x110) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004658Bu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0004658B: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    ebx = eax + esi;
    _fa = (uint32_t)(MEM8(ebx + 0xB18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xB18), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000465AB; /* jne: not equal / not zero */

loc_0004659C: ;
    edx = MEM32(ebx + 0xB04);
    ecx = ebx + 0xB04;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000465ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000465A8u); } /* indirect call */
    }

loc_000465AB: ;
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = ebx + 0xB04;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000465BBu); RECOMP_ABI_CALL(0x002035D0u, sub_002035D0); /* call 0x002035D0 */

loc_000465BB: ;
    eax = MEM32(esi + 0x107C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00045E8A; /* jl: less (signed <) */

loc_000465CA: ;
    ecx = MEM32(esp + 0x1E4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_000465F0
 * Original: 0x000465F0 - 0x00046D3C (1868 bytes, 496 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000465F0(void)
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

loc_000465F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xAB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xAB4));
    esp = esp - 0xAB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004660Au); RECOMP_ABI_CALL(0x0003F130u, sub_0003F130); /* call 0x0003F130 */

loc_0004660A: ;
    ebx = MEM32(esi);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046618u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00046618: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x30); PUSH32(esp, 0x0004661Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004661Bu); } /* indirect call */
    }

loc_0004661E: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0004662Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046627u); } /* indirect call */
    }

loc_0004662A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00046682; /* je: equal / zero */

loc_00046632: ;
    edx = MEM32(esi + 0x3C);
    ebx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0004663Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004663Bu); } /* indirect call */
    }

loc_0004663E: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004664Cu); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_0004664C: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00046653u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046650u); } /* indirect call */
    }

loc_00046653: ;
    ecx = MEM32(esp + 0x10);
    ebx = esi + 0x1D8;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046665u); RECOMP_ABI_CALL(0x001F5200u, sub_001F5200); /* call 0x001F5200 */

loc_00046665: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046673u); RECOMP_ABI_CALL(0x001F3CE0u, sub_001F3CE0); /* call 0x001F3CE0 */

loc_00046673: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0004667Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046677u); } /* indirect call */
    }

loc_0004667A: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x24) = MEM8(ebx + 0x24) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0x24)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esp + 0x10);

loc_00046682: ;
    ecx = MEM32(0x643844);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000466A3u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000466A3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000466B1; /* jge: greater or equal (signed >=) */

loc_000466AA: ;
    eax = 0x6438B8;
    goto loc_000466BA;

loc_000466B1: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000466BA: ;
    ebx = MEM32(eax);
    edx = MEM32(esp + 0x14);
    xmm3 = XMM_SCALAR(MEMF(0x2E15A0)); /* movss */
    MEM32(edx + 4) = ebx;
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x74)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + 0x68); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x64); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x60); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = esp + 0xB4;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    ecx = esi;
    MEM32(esp + 0x30) = ebx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esi + 0x1078) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046740u); RECOMP_ABI_CALL(0x00045690u, sub_00045690); /* call 0x00045690 */

loc_00046740: ;
    MEM32(esi + 0x107C) = eax;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7D7C0B21);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00046752u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004674Fu); } /* indirect call */
    }

loc_00046752: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x1070) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E15A0)); /* movss */
    MEM32(esi + 0x1080) = eax;
    ecx = MEM32(0x643844);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046796u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00046796: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000467A4; /* jge: greater or equal (signed >=) */

loc_0004679D: ;
    eax = 0x6438B8;
    goto loc_000467AD;

loc_000467A4: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000467AD: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = eax;
    MEM32(edx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00046930; /* je: equal / zero */

loc_000467C2: ;
    ecx = MEM32(esi + 0x107C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000468CC; /* jle: less or equal (signed <=) */

loc_000467D8: ;
    ecx = esi + 0xB04;
    eax = esi + 0x1050;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x10) = eax;
    edi = esp + 0xB8;
    ebx = esi + 0xDF8;
    goto loc_00046800;

loc_000467FB: ;
    ecx = MEM32(esp + 0x24);
    /* nop */

loc_00046800: ;
    edx = MEM32(edi + -8);
    eax = MEM32(edi + -4);
    MEM32(ebx + -8) = edx;
    edx = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEM32(ebx + -4) = eax;
    eax = MEM32(edi + 4);
    MEM32(ebx) = edx;
    edx = MEM32(edi + 8);
    MEM32(ebx + 4) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(ebx + 8) = edx;
    edx = MEM32(edi + 0x10);
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(ebx + 0x10) = edx;
    edx = MEM32(edi + 0x18);
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(edi + 0x1C);
    MEM32(ebx + 0x18) = edx;
    edx = MEM32(edi + 0x20);
    MEM32(ebx + 0x1C) = eax;
    eax = MEM32(edi + 0x24);
    MEM32(ebx + 0x20) = edx;
    edx = MEM32(edi + 0x28);
    MEM32(ebx + 0x24) = eax;
    eax = MEM32(edi + 0x2C);
    MEM32(ebx + 0x28) = edx;
    edx = MEM32(edi + 0x30);
    MEM32(ebx + 0x2C) = eax;
    eax = MEM32(edi + 0x34);
    MEM32(ebx + 0x30) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ebx + 0x34) = eax;
    eax = MEM32(ecx);
    MEMF(edx) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00046878u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046875u); } /* indirect call */
    }

loc_00046878: ;
    ecx = MEM32(esp + 0x24);
    eax = ebx + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046885u); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_00046885: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0004688Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004688Bu); } /* indirect call */
    }

loc_0004688E: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x107C);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x5C)) >> 32) & 1);
    edx = edx + 0x5C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x40)) >> 32) & 1);
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x40)) >> 32) & 1);
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x24) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000467FB; /* jl: less (signed <) */

loc_000468C1: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x28);
    edi = MEM32(ebp + 8);

loc_000468CC: ;
    fp_push(MEMF(eax + 0x70)); /* fld float */
    ecx = esp + 0x2B8;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000468E1u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_000468E1: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x78;
    PUSH32(esp, 0x2DE28C);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000468FAu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000468FA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2E16A4);
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046910u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00046910: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x2BC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046921u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00046921: ;
    ecx = esp + 0x2B8;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046930u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_00046930: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xFF4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DDA40); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 4);
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x60)) >> 32) & 1);
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x0004696Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046964u); } /* indirect call */
    }

loc_0004696A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046971u); RECOMP_ABI_CALL(0x00133AD0u, sub_00133AD0); /* call 0x00133AD0 */

loc_00046971: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x0004697Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046977u); } /* indirect call */
    }

loc_0004697D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046984u); RECOMP_ABI_CALL(0x00132D30u, sub_00132D30); /* call 0x00132D30 */

loc_00046984: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00046993u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004698Du); } /* indirect call */
    }

loc_00046993: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004699Au); RECOMP_ABI_CALL(0x00132DA0u, sub_00132DA0); /* call 0x00132DA0 */

loc_0004699A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x000469A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000469A0u); } /* indirect call */
    }

loc_000469A6: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000469ADu); RECOMP_ABI_CALL(0x00132E20u, sub_00132E20); /* call 0x00132E20 */

loc_000469AD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x000469B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000469B1u); } /* indirect call */
    }

loc_000469B7: ;
    MEM8(eax + 0x2EE) = 0;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x000469CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000469C4u); } /* indirect call */
    }

loc_000469CA: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000469D1u); RECOMP_ABI_CALL(0x00132DE0u, sub_00132DE0); /* call 0x00132DE0 */

loc_000469D1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC890)); /* movss */
    MEMF(esi + 0x2200) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x94A30D22u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000469EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000469EAu); } /* indirect call */
    }

loc_000469ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00046A00; /* je: equal / zero */

loc_000469F1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000469F7u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_000469F7: ;
    MEMF(esi + 0x2200) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00046A00: ;
    ebx = MEM32(esi);
    ecx = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = ebx;
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00046A11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046A0Bu); } /* indirect call */
    }

loc_00046A11: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046A18u); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_00046A18: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x30); PUSH32(esp, 0x00046A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046A1Bu); } /* indirect call */
    }

loc_00046A1E: ;
    eax = MEM32(esi + 0x9C);
    ecx = esi + 0x654;
    PUSH32(esp, ecx);
    ecx = 0x37E158;
    MEM32(esi + 0x6B0) = esi;
    MEM32(esi + 0x668) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046A41u); RECOMP_ABI_CALL(0x001543C0u, sub_001543C0); /* call 0x001543C0 */

loc_00046A41: ;
    ebx = esi + 0x6D8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x5C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00046A57; /* je: equal / zero */

loc_00046A4E: ;
    edx = esi + 0x60;
    MEM32(ebx + 0x2D0) = edx;

loc_00046A57: ;
    edx = MEM32(esi);
    eax = esi + 0x60;
    MEM32(esi + 0x9A8) = eax;
    eax = esi + 0x1AD8;
    ecx = esi;
    MEM32(esi + 0x70) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00046A73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046A6Du); } /* indirect call */
    }

loc_00046A73: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAB6EE97Du);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00046A83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046A80u); } /* indirect call */
    }

loc_00046A83: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x2C)) >> 32) & 1);
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = esi + 0x1AD8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x1CE0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046A9Fu); RECOMP_ABI_CALL(0x00060290u, sub_00060290); /* call 0x00060290 */

loc_00046A9F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x00046AA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046AA3u); } /* indirect call */
    }

loc_00046AA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00046ABF; /* je: equal / zero */

loc_00046AAD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x00046AB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046AB2u); } /* indirect call */
    }

loc_00046AB8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046ABFu); RECOMP_ABI_CALL(0x00041050u, sub_00041050); /* call 0x00041050 */

loc_00046ABF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi + 0x1F20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046ACCu); RECOMP_ABI_CALL(0x0016CC20u, sub_0016CC20); /* call 0x0016CC20 */

loc_00046ACC: ;
    ecx = esi + 0x1204;
    PUSH32(esp, edi);
    MEM32(esi + 0x1F24) = esi;
    MEM32(ecx) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046AE0u); RECOMP_ABI_CALL(0x00168030u, sub_00168030); /* call 0x00168030 */

loc_00046AE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x6B8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6C8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6BC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6CC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6C0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6D0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6C4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x6D4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x933B5BDEu);
    MEMF(esi + 0xAF8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAFC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAF4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046B45u); RECOMP_ABI_CALL(0x00202D40u, sub_00202D40); /* call 0x00202D40 */

loc_00046B45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x2230) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046B55u); RECOMP_ABI_CALL(0x000457F0u, sub_000457F0); /* call 0x000457F0 */

loc_00046B55: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046B5Du); RECOMP_ABI_CALL(0x00041F70u, sub_00041F70); /* call 0x00041F70 */

loc_00046B5D: ;
    edx = MEM32(esi + 0x9AC);
    ebx = esi + 0x9AC;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00046B6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046B6Bu); } /* indirect call */
    }

loc_00046B6D: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046B75u); RECOMP_ABI_CALL(0x0014EF60u, sub_0014EF60); /* call 0x0014EF60 */

loc_00046B75: ;
    eax = MEM32(ebx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F260A9C);
    ecx = edi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00046B87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046B84u); } /* indirect call */
    }

loc_00046B87: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00046B91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046B8Eu); } /* indirect call */
    }

loc_00046B91: ;
    MEM32(esi + 0x1074) = 2;
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(esi + 0x2214) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    eax = MEM32(esi + 0x2214);
    MEMF(esi + 0x2218) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    MEMF(esi + 0x221C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x2208) = eax;
    ecx = MEM32(esi + 0x2218);
    MEM32(esi + 0x220C) = ecx;
    edx = MEM32(esi + 0x221C);
    MEM32(esi + 0x2210) = edx;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x2220) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00046C00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046BFAu); } /* indirect call */
    }

loc_00046C00: ;
    edi = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x911429FAu);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046C1Fu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00046C1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00046C54; /* jle: less or equal (signed <=) */

loc_00046C23: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEM8(esi + 0x2220) = 1;
    MEMF(esi + 0x2208) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(esi + 0x220C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esi + 0x2210) = xmm0.f[0]; /* movss */

loc_00046C54: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00046C5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046C58u); } /* indirect call */
    }

loc_00046C5E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7B278F10);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046C77u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00046C77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00046CAC; /* jle: less or equal (signed <=) */

loc_00046C7B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEM8(esi + 0x2220) = 1;
    MEMF(esi + 0x2214) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(esi + 0x2218) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esi + 0x221C) = xmm0.f[0]; /* movss */

loc_00046CAC: ;
    ecx = esi;
    MEM32(esi + 0x2224) = ebx;
    MEM32(esi + 0x2228) = ebx;
    MEM32(esi + 0x222C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046CC5u); RECOMP_ABI_CALL(0x00041F90u, sub_00041F90); /* call 0x00041F90 */

loc_00046CC5: ;
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
    POP32(esp, edi);
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
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC34C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DBED0); /* addss */
    MEM32(0x30EFF0) = ecx;
    MEMF(esi + 0xB00) = xmm0.f[0]; /* movss */
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
 * sub_00046D40
 * Original: 0x00046D40 - 0x0004753F (2047 bytes, 568 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00046D40(void)
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

loc_00046D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240FBB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x158));
    esp = esp - 0x158;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046D6Fu); RECOMP_ABI_CALL(0x000420F0u, sub_000420F0); /* call 0x000420F0 */

loc_00046D6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00046D8A; /* jne: not equal / not zero */

loc_00046D73: ;
    ecx = MEM32(esp + 0x164);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00046D8A: ;
    eax = MEM32(esi);
    ecx = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00046D96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046D93u); } /* indirect call */
    }

loc_00046D96: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x260); PUSH32(esp, 0x00046DA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046D9Au); } /* indirect call */
    }

loc_00046DA0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00046DBE; /* je: equal / zero */

loc_00046DA4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00046DAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046DA9u); } /* indirect call */
    }

loc_00046DAF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046DB6u); RECOMP_ABI_CALL(0x001331F0u, sub_001331F0); /* call 0x001331F0 */

loc_00046DB6: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046DBEu); RECOMP_ABI_CALL(0x00044780u, sub_00044780); /* call 0x00044780 */

loc_00046DBE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046DC5u); RECOMP_ABI_CALL(0x000150A0u, sub_000150A0); /* call 0x000150A0 */

loc_00046DC5: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x154)); /* movss */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC3C4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00046DE1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC3C4)) */

loc_00046DDA: ;
    edi = 2;
    goto loc_00046DF7;

loc_00046DE1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x154)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E165C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00046DF7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E165C)) */

loc_00046DF2: ;
    edi = 1;

loc_00046DF7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1074)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1074) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00046E0D; /* jne: not equal / not zero */

loc_00046DFF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x260); PUSH32(esp, 0x00046E09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046E03u); } /* indirect call */
    }

loc_00046E09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00046E1B; /* je: equal / zero */

loc_00046E0D: ;
    PUSH32(esp, ebx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046E1Bu); RECOMP_ABI_CALL(0x00045C50u, sub_00045C50); /* call 0x00045C50 */

loc_00046E1B: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x1074) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x260); PUSH32(esp, 0x00046E2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046E25u); } /* indirect call */
    }

loc_00046E2B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00046E3A; /* je: equal / zero */

loc_00046E2F: ;
    ecx = esi + 0x1D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046E3Au); RECOMP_ABI_CALL(0x001F3D00u, sub_001F3D00); /* call 0x001F3D00 */

loc_00046E3A: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xAF8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0xAF8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xAFC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, ebx);
    ecx = esi;
    MEMF(esi + 0xAFC) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046E6Fu); RECOMP_ABI_CALL(0x000452C0u, sub_000452C0); /* call 0x000452C0 */

loc_00046E6F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00046E79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046E73u); } /* indirect call */
    }

loc_00046E79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00046F64; /* je: equal / zero */

loc_00046E81: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00046E8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046E85u); } /* indirect call */
    }

loc_00046E8B: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00046F64; /* je: equal / zero */

loc_00046E96: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00046EA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046E9Au); } /* indirect call */
    }

loc_00046EA0: ;
    eax = MEM32(eax + 0x1C);
    ecx = esp + 0x23;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046EAFu); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_00046EAF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00046F64; /* je: equal / zero */

loc_00046EB8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00046EC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046EBCu); } /* indirect call */
    }

loc_00046EC2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046EC9u); RECOMP_ABI_CALL(0x00134450u, sub_00134450); /* call 0x00134450 */

loc_00046EC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00046F64; /* jne: not equal / not zero */

loc_00046ED1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00046EDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046ED5u); } /* indirect call */
    }

loc_00046EDB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046EE2u); RECOMP_ABI_CALL(0x00132B50u, sub_00132B50); /* call 0x00132B50 */

loc_00046EE2: ;
    fp_push(MEMF(0x2DC884)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00046F64; /* jbe: below or equal (unsigned <=) */

loc_00046EF0: ;
    edx = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00046EFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046EF9u); } /* indirect call */
    }

loc_00046EFF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046F06u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00046F06: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046F0Cu); RECOMP_ABI_CALL(0x00015420u, sub_00015420); /* call 0x00015420 */

loc_00046F0C: ;
    fp_push(MEMF(0x2E15A0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00046F64; /* jbe: below or equal (unsigned <=) */

loc_00046F1D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00046F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046F28u); } /* indirect call */
    }

loc_00046F2E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046F35u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00046F35: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00046F42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046F3Fu); } /* indirect call */
    }

loc_00046F42: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xDB64A225u);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046F53u); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_00046F53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xDB64A225u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046F61u); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_00046F61: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00046F64: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00046F6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046F68u); } /* indirect call */
    }

loc_00046F6E: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x00046F7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046F74u); } /* indirect call */
    }

loc_00046F7A: ;
    SET_LO8(ecx, MEM8(eax + 0x8D0));
    edi = esi + 0x9AC;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00046FCC; /* je: equal / zero */

loc_00046F8D: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00046F94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046F91u); } /* indirect call */
    }

loc_00046F94: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x00046FA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046F9Au); } /* indirect call */
    }

loc_00046FA0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046FA7u); RECOMP_ABI_CALL(0x00041800u, sub_00041800); /* call 0x00041800 */

loc_00046FA7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00046FC1; /* je: equal / zero */

loc_00046FAB: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00046FB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046FAFu); } /* indirect call */
    }

loc_00046FB2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00046FC1; /* je: equal / zero */

loc_00046FB6: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046FBFu); RECOMP_ABI_CALL(0x0014EF70u, sub_0014EF70); /* call 0x0014EF70 */

loc_00046FBF: ;
    goto loc_00046FEE;

loc_00046FC1: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046FCAu); RECOMP_ABI_CALL(0x0014EF70u, sub_0014EF70); /* call 0x0014EF70 */

loc_00046FCA: ;
    goto loc_00046FEE;

loc_00046FCC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00046FD6; /* je: equal / zero */

loc_00046FD2: ;
    PUSH32(esp, 1);
    goto loc_00046FD8;

loc_00046FD6: ;
    PUSH32(esp, 0);

loc_00046FD8: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00046FDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046FD8u); } /* indirect call */
    }

loc_00046FDB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x00046FE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046FE1u); } /* indirect call */
    }

loc_00046FE7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00046FEEu); RECOMP_ABI_CALL(0x00041800u, sub_00041800); /* call 0x00041800 */

loc_00046FEE: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00046FF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046FF6u); } /* indirect call */
    }

loc_00046FF9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00047003u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00046FFDu); } /* indirect call */
    }

loc_00047003: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C3AFCBB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2C3AFCBB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00047066; /* jne: not equal / not zero */

loc_0004700A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB00)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xB00) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00047066; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00047027: ;
    PUSH32(esp, 0xB5D84BA4u);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00047036u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_00047036: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004704F; /* je: equal / zero */

loc_0004703A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00047040u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00047040: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x37B2C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004704Fu); RECOMP_ABI_CALL(0x0014E7A0u, sub_0014E7A0); /* call 0x0014E7A0 */

loc_0004704F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00047054u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_00047054: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC34C)); /* fmul dword ptr [0x2dc34c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DBED0)); /* fadd dword ptr [0x2dbed0] */
    MEMF(esi + 0xB00) = (float)fp_top(); fp_pop(); /* fstp */

loc_00047066: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004706Eu); RECOMP_ABI_CALL(0x00044BE0u, sub_00044BE0); /* call 0x00044BE0 */

loc_0004706E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00047078u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047072u); } /* indirect call */
    }

loc_00047078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(esi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000470F9; /* jne: not equal / not zero */

loc_00047080: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00047086u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047080u); } /* indirect call */
    }

loc_00047086: ;
    SET_LO8(ecx, MEM8(eax + 0x2EE));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000471B4; /* je: equal / zero */

loc_00047094: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x000470A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004709Au); } /* indirect call */
    }

loc_000470A0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000470A7u); RECOMP_ABI_CALL(0x00132D30u, sub_00132D30); /* call 0x00132D30 */

loc_000470A7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x000470B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000470B0u); } /* indirect call */
    }

loc_000470B6: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000470BDu); RECOMP_ABI_CALL(0x00132DA0u, sub_00132DA0); /* call 0x00132DA0 */

loc_000470BD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x000470C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000470C3u); } /* indirect call */
    }

loc_000470C9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000470D0u); RECOMP_ABI_CALL(0x00132E20u, sub_00132E20); /* call 0x00132E20 */

loc_000470D0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x000470DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000470D4u); } /* indirect call */
    }

loc_000470DA: ;
    MEM8(eax + 0x2EE) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x000470EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000470E7u); } /* indirect call */
    }

loc_000470ED: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000470F4u); RECOMP_ABI_CALL(0x00132DE0u, sub_00132DE0); /* call 0x00132DE0 */

loc_000470F4: ;
    goto loc_000471B4;

loc_000470F9: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x000470FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000470F9u); } /* indirect call */
    }

loc_000470FF: ;
    SET_LO8(ecx, MEM8(eax + 0x2EE));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00047153; /* jne: not equal / not zero */

loc_00047109: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00047115u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004710Fu); } /* indirect call */
    }

loc_00047115: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004711Cu); RECOMP_ABI_CALL(0x00132D30u, sub_00132D30); /* call 0x00132D30 */

loc_0004711C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00047128u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047122u); } /* indirect call */
    }

loc_00047128: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004712Fu); RECOMP_ABI_CALL(0x00132DA0u, sub_00132DA0); /* call 0x00132DA0 */

loc_0004712F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x0004713Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047135u); } /* indirect call */
    }

loc_0004713B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00047142u); RECOMP_ABI_CALL(0x00132E20u, sub_00132E20); /* call 0x00132E20 */

loc_00047142: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x0004714Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047146u); } /* indirect call */
    }

loc_0004714C: ;
    MEM8(eax + 0x2EE) = 1;

loc_00047153: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0004715Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047157u); } /* indirect call */
    }

loc_0004715D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00047164u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047161u); } /* indirect call */
    }

loc_00047164: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000471B4; /* je: equal / zero */

loc_00047168: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00047174u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004716Eu); } /* indirect call */
    }

loc_00047174: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004717Bu); RECOMP_ABI_CALL(0x00132DE0u, sub_00132DE0); /* call 0x00132DE0 */

loc_0004717B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00047187u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047181u); } /* indirect call */
    }

loc_00047187: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004718Eu); RECOMP_ABI_CALL(0x00132D30u, sub_00132D30); /* call 0x00132D30 */

loc_0004718E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x0004719Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047194u); } /* indirect call */
    }

loc_0004719A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000471A1u); RECOMP_ABI_CALL(0x00132DA0u, sub_00132DA0); /* call 0x00132DA0 */

loc_000471A1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x000471ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000471A7u); } /* indirect call */
    }

loc_000471AD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000471B4u); RECOMP_ABI_CALL(0x00132E20u, sub_00132E20); /* call 0x00132E20 */

loc_000471B4: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x1204;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000471C0u); RECOMP_ABI_CALL(0x00168A10u, sub_00168A10); /* call 0x00168A10 */

loc_000471C0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x234); PUSH32(esp, 0x000471CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000471C4u); } /* indirect call */
    }

loc_000471CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000471D9; /* je: equal / zero */

loc_000471CE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x274); PUSH32(esp, 0x000471D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000471D3u); } /* indirect call */
    }

loc_000471D9: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x1F20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000471E5u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_000471E5: ;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    ecx = esi + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000471F1u); RECOMP_ABI_CALL(0x002049A0u, sub_002049A0); /* call 0x002049A0 */

loc_000471F1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x260); PUSH32(esp, 0x000471FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000471F5u); } /* indirect call */
    }

loc_000471FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00047219; /* je: equal / zero */

loc_000471FF: ;
    edx = MEM32(esi);
    ecx = esi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00047210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004720Au); } /* indirect call */
    }

loc_00047210: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00047216u); RECOMP_ABI_CALL(0x0012C200u, sub_0012C200); /* call 0x0012C200 */

loc_00047216: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00047219: ;
    SET_LO8(eax, MEM8(esi + 0x2220));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00047526; /* je: equal / zero */

loc_00047227: ;
    xmm3 = XMM_SCALAR(MEMF(0x2E15A0)); /* movss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2224) = eax;
    MEM32(esi + 0x2228) = eax;
    MEM32(esi + 0x222C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2210)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x221C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x220C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x2208)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x2218); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x2214); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    ebx = esi + 0x2224;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x221C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2218)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2214)); /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    edi = esi + 0xB0;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esp + 0x64;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x3C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00047303u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00047303: ;
    PUSH32(esp, edi);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00047313u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_00047313: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEM32(esp + 0x3C) = eax;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x3C); /* addss */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x30);
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x40); /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x40);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 4) = edx;
    edx = esp + 0x6C;
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(eax + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0xC0;
    MEMF(esp + 0xA0) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000473AEu); RECOMP_ABI_CALL(0x00023C40u, sub_00023C40); /* call 0x00023C40 */

loc_000473AE: ;
    eax = MEM32(esi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esp + 0x16C) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000473C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000473BBu); } /* indirect call */
    }

loc_000473C1: ;
    ecx = MEM32(esp + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000473D3; /* je: equal / zero */

loc_000473CE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000473D3u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_000473D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xB4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000473E5; /* je: equal / zero */

loc_000473DE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000473E5u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_000473E5: ;
    PUSH32(esp, 1);
    ecx = esp + 0xB4;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000473F6u); RECOMP_ABI_CALL(0x0012E8C0u, sub_0012E8C0); /* call 0x0012E8C0 */

loc_000473F6: ;
    esi = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000473FEu); RECOMP_ABI_CALL(0x0012BD30u, sub_0012BD30); /* call 0x0012BD30 */

loc_000473FE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000474EF; /* jle: less or equal (signed <=) */

loc_0004740D: ;
    edi = 0x378EF8;
    MEM32(esp + 0x14) = esi;

loc_00047416: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000474DD; /* je: equal / zero */

loc_00047420: ;
    ecx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000474DD; /* je: equal / zero */

loc_0004742E: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004744E; /* je: equal / zero */

loc_00047435: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0004744E; /* jge: greater or equal (signed >=) */

loc_0004743E: ;
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x28);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    MEM32(esp + 0x1C) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004744E: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00047470; /* jnp: not parity */

loc_00047464: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */

loc_00047470: ;
    esi = MEM32(ecx + 0xA8);
    edx = esp + 0xA4;
    ecx = esi;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004748Bu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_0004748B: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2E16C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = esp + 0x24;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000474DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000474DAu); } /* indirect call */
    }

loc_000474DD: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x28)) >> 32) & 1);
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00047416; /* jne: not equal / not zero */

loc_000474EF: ;
    MEM32(esp + 0x16C) = 0xFFFFFFFFu;
    MEM32(esp + 0xB0) = 0x2DC928;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00047510;

    /* nop */

loc_00047510: ;
    ecx = MEM32(esp + esi * 4 + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00047520; /* je: equal / zero */

loc_0004751B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00047520u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00047520: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00047510; /* jl: less (signed <) */

loc_00047526: ;
    ecx = MEM32(esp + 0x164);
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
 * sub_00047540
 * Original: 0x00047540 - 0x00047670 (304 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00047540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00047540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x58));
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1080);
    PUSH32(esp, eax);
    ecx = 0x30E854;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004755Eu); RECOMP_ABI_CALL(0x00022E60u, sub_00022E60); /* call 0x00022E60 */

loc_0004755E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0004766A; /* jl: less (signed <) */

loc_00047566: ;
    ecx = MEM32(0x30E854);
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004766A; /* je: equal / zero */

loc_00047577: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00047585u); RECOMP_ABI_CALL(0x0012BB40u, sub_0012BB40); /* call 0x0012BB40 */

loc_00047585: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0004766A; /* jl: less (signed <) */

loc_00047590: ;
    edx = MEM32(edi + 0x1080);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000475A3u); RECOMP_ABI_CALL(0x00038AA0u, sub_00038AA0); /* call 0x00038AA0 */

loc_000475A3: ;
    ecx = MEM32(0x30EFF0);
    esi = eax;
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
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    MEM32(0x30EFF0) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (6) _cf = (int)(((ecx) >> (32 - (6))) & 1);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + edi + 0xDF0;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000475F4u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000475F4: ;
    edx = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00047603u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000475FDu); } /* indirect call */
    }

loc_00047603: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004760Au); RECOMP_ABI_CALL(0x00130B10u, sub_00130B10); /* call 0x00130B10 */

loc_0004760A: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00047619u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047613u); } /* indirect call */
    }

loc_00047619: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00047620u); RECOMP_ABI_CALL(0x00130270u, sub_00130270); /* call 0x00130270 */

loc_00047620: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E16C8)); /* movss */
    edx = MEM32(esi);
    eax = esp + 8;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00047663u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004765Du); } /* indirect call */
    }

loc_00047663: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004766Au); RECOMP_ABI_CALL(0x00130E80u, sub_00130E80); /* call 0x00130E80 */

loc_0004766A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00047670
 * Original: 0x00047670 - 0x00047692 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00047670: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047691; /* js: sign (negative) */

loc_00047679: ;
    ecx = MEM32(0x4409AC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00047690u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004768Du); } /* indirect call */
    }

loc_00047690: ;
    POP32(esp, esi);

loc_00047691: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000476A0
 * Original: 0x000476A0 - 0x000476C3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000476A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000476A0: ;
    edx = ecx;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000476C2; /* js: sign (negative) */

loc_000476A9: ;
    ecx = MEM32(0x4409AC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x000476C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000476BEu); } /* indirect call */
    }

loc_000476C1: ;
    POP32(esp, esi);

loc_000476C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000476D0
 * Original: 0x000476D0 - 0x00047751 (129 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000476D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000476D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x240FDB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047718; /* js: sign (negative) */

loc_000476FC: ;
    edx = MEM32(esi + 0x24);
    ecx = MEM32(0x4409AC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00047717u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047714u); } /* indirect call */
    }

loc_00047717: ;
    POP32(esp, edi);

loc_00047718: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047741; /* js: sign (negative) */

loc_00047727: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00047741u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004773Eu); } /* indirect call */
    }

loc_00047741: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00047760
 * Original: 0x00047760 - 0x00047804 (164 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00047760: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241006);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000477A4; /* js: sign (negative) */

loc_0004778D: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x000477A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000477A1u); } /* indirect call */
    }

loc_000477A4: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000477CA; /* js: sign (negative) */

loc_000477B0: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x000477CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000477C7u); } /* indirect call */
    }

loc_000477CA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000477F3; /* js: sign (negative) */

loc_000477D9: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000477F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000477F0u); } /* indirect call */
    }

loc_000477F3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00047810
 * Original: 0x00047810 - 0x00047836 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00047810: ;
    edx = ecx;
    eax = MEM32(edx + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047835; /* js: sign (negative) */

loc_00047819: ;
    ecx = MEM32(0x4409AC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x50);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00047834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047831u); } /* indirect call */
    }

loc_00047834: ;
    POP32(esp, esi);

loc_00047835: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00047840
 * Original: 0x00047840 - 0x000479A5 (357 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00047840: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24105D);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 6;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047887; /* js: sign (negative) */

loc_0004786D: ;
    edx = MEM32(esi + 0x58);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00047887u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047884u); } /* indirect call */
    }

loc_00047887: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 5;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000478AD; /* js: sign (negative) */

loc_00047893: ;
    edx = MEM32(esi + 0x4C);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x000478ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000478AAu); } /* indirect call */
    }

loc_000478AD: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 4;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000478D3; /* js: sign (negative) */

loc_000478B9: ;
    edx = MEM32(esi + 0x40);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x000478D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000478D0u); } /* indirect call */
    }

loc_000478D3: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 3;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000478F9; /* js: sign (negative) */

loc_000478DF: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x000478F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000478F6u); } /* indirect call */
    }

loc_000478F9: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0004791F; /* js: sign (negative) */

loc_00047905: ;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x0004791Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004791Cu); } /* indirect call */
    }

loc_0004791F: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047945; /* js: sign (negative) */

loc_0004792B: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00047945u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047942u); } /* indirect call */
    }

loc_00047945: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0004796B; /* js: sign (negative) */

loc_00047951: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x0004796Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047968u); } /* indirect call */
    }

loc_0004796B: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047994; /* js: sign (negative) */

loc_0004797A: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00047994u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047991u); } /* indirect call */
    }

loc_00047994: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000479B0
 * Original: 0x000479B0 - 0x00047A56 (166 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000479B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000479B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241083);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000479F7; /* js: sign (negative) */

loc_000479DD: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x000479F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000479F4u); } /* indirect call */
    }

loc_000479F7: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047A1D; /* js: sign (negative) */

loc_00047A03: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00047A1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047A1Au); } /* indirect call */
    }

loc_00047A1D: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047A45; /* js: sign (negative) */

loc_00047A2C: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00047A45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047A42u); } /* indirect call */
    }

loc_00047A45: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00047A60
 * Original: 0x00047A60 - 0x00047F2B (1227 bytes, 332 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047A60(void)
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

loc_00047A60: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edx = MEM32(ebx);
    eax = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00047A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047A6Fu); } /* indirect call */
    }

loc_00047A75: ;
    ecx = eax;
    PUSH32(esp, 0x00047A7Cu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00047A7C: ;
    edx = MEM32(ebx);
    eax = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00047A8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047A85u); } /* indirect call */
    }

loc_00047A8B: ;
    ecx = eax;
    PUSH32(esp, 0x00047A92u); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_00047A92: ;
    esi = ebx + 0x1084;
    edi = 6;
    /* nop */

loc_00047AA0: ;
    ecx = esi;
    PUSH32(esp, 0x00047AA7u); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_00047AA7: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x34)) >> 32) & 1);
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00047AA0; /* jne: not equal / not zero */

loc_00047AAD: ;
    ecx = ebx;
    PUSH32(esp, 0x00047AB4u); RECOMP_ABI_CALL(0x0003E960u, sub_0003E960); /* call 0x0003E960 */

loc_00047AB4: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x00047ABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047AB8u); } /* indirect call */
    }

loc_00047ABE: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00047ACBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047AC8u); } /* indirect call */
    }

loc_00047ACB: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00047AD3u); RECOMP_ABI_CALL(0x00011BD0u, sub_00011BD0); /* call 0x00011BD0 */

loc_00047AD3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    ecx = ebx;
    PUSH32(esp, 0x00047ADEu); RECOMP_ABI_CALL(0x000130A0u, sub_000130A0); /* call 0x000130A0 */

loc_00047ADE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00047AECu); RECOMP_ABI_CALL(0x00038AA0u, sub_00038AA0); /* call 0x00038AA0 */

loc_00047AEC: ;
    esi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00047B07; /* je: equal / zero */

loc_00047AF5: ;
    edi = MEM32(esi);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x34); PUSH32(esp, 0x00047B01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047AFEu); } /* indirect call */
    }

loc_00047B01: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x64); PUSH32(esp, 0x00047B07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047B04u); } /* indirect call */
    }

loc_00047B07: ;
    eax = MEM32(esi);
    edx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00047B16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047B10u); } /* indirect call */
    }

loc_00047B16: ;
    ecx = eax;
    PUSH32(esp, 0x00047B1Du); RECOMP_ABI_CALL(0x00130EF0u, sub_00130EF0); /* call 0x00130EF0 */

loc_00047B1D: ;
    edx = MEM32(esi);
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00047B2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047B26u); } /* indirect call */
    }

loc_00047B2C: ;
    ecx = eax;
    PUSH32(esp, 0x00047B33u); RECOMP_ABI_CALL(0x00130E80u, sub_00130E80); /* call 0x00130E80 */

loc_00047B33: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = 0x30EFF0;
    PUSH32(esp, 0x00047B42u); RECOMP_ABI_CALL(0x00011ED0u, sub_00011ED0); /* call 0x00011ED0 */

loc_00047B42: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00047B59; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00047B50: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    goto loc_00047B5C;

loc_00047B59: ;
    xmm1 = xmm2; /* movaps */

loc_00047B5C: ;
    xmm2 = XMM_SCALAR(MEMF(0x2E15A0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00047B78; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00047B6F: ;
    xmm1 = xmm2; /* movaps */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */

loc_00047B78: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00047BE7; /* jnp: not parity */

loc_00047BAE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_00047BF9;

loc_00047BE7: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00047BF9: ;
    edi = MEM32(0x30EFF0);
    eax = edi;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
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
    MEM32(0x30EFF0) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((8) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DBED0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC34C); /* addss */
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00047C71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047C6Bu); } /* indirect call */
    }

loc_00047C71: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esi;
    edi = eax;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00047CB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047CADu); } /* indirect call */
    }

loc_00047CB3: ;
    ecx = eax;
    PUSH32(esp, 0x00047CBAu); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00047CBA: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = esp + 0x2C;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00047D00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047CFDu); } /* indirect call */
    }

loc_00047D00: ;
    edi = MEM32(0x30EFF0);
    eax = edi;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ edi;
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
    MEM32(0x30EFF0) = ecx;
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((8) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC880); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x00047D76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047D70u); } /* indirect call */
    }

loc_00047D76: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x30F068)); /* fmul dword ptr [0x30f068] */
    edi = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x30F06C)); /* fmul dword ptr [0x30f06c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x30F06C)); /* fmul dword ptr [0x30f06c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x30F064)); /* fmul dword ptr [0x30f064] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x30F064)); /* fmul dword ptr [0x30f064] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x30F068)); /* fmul dword ptr [0x30f068] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00047E25; /* jnp: not parity */

loc_00047DF8: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    goto loc_00047E2E;

loc_00047E25: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */

loc_00047E2E: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    edx = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00047E5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047E56u); } /* indirect call */
    }

loc_00047E5C: ;
    ecx = eax;
    PUSH32(esp, 0x00047E63u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00047E63: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = esp + 0x2C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00047EA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047EA6u); } /* indirect call */
    }

loc_00047EA9: ;
    esi = MEM32(0x30EFF0);
    eax = esi;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    xmm1 = XMM_SCALAR(MEMF(0x2E16CC)); /* movss */
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
    MEM32(esp + 0x10) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(0x30EFF0) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00047F13; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00047F0C: ;
    ecx = ebx;
    PUSH32(esp, 0x00047F13u); RECOMP_ABI_CALL(0x00047540u, sub_00047540); /* call 0x00047540 */

loc_00047F13: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x00047F1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047F17u); } /* indirect call */
    }

loc_00047F1D: ;
    ecx = eax;
    PUSH32(esp, 0x00047F24u); RECOMP_ABI_CALL(0x00168390u, sub_00168390); /* call 0x00168390 */

loc_00047F24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00047F30
 * Original: 0x00047F30 - 0x00047F35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00047F30: ;
    g_seh_ebp = ebp; sub_00047840(); return; /* tail jmp 0x00047840 */

}

/**
 * sub_00047F40
 * Original: 0x00047F40 - 0x00047FF3 (179 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00047F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00047F40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2410AE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047F87; /* js: sign (negative) */

loc_00047F6D: ;
    edx = MEM32(esi + 0x3C);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00047F87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047F84u); } /* indirect call */
    }

loc_00047F87: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047FAD; /* js: sign (negative) */

loc_00047F93: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00047FADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047FAAu); } /* indirect call */
    }

loc_00047FAD: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00047FD3; /* js: sign (negative) */

loc_00047FB9: ;
    edx = MEM32(esi + 0x24);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00047FD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00047FD0u); } /* indirect call */
    }

loc_00047FD3: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00047FE2u); RECOMP_ABI_CALL(0x000479B0u, sub_000479B0); /* call 0x000479B0 */

loc_00047FE2: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00048000
 * Original: 0x00048000 - 0x000480C3 (195 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048000: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2410FD);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x1D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 4;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0004804D; /* js: sign (negative) */

loc_00048030: ;
    edx = MEM32(esi + 0x1CC);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x0004804Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004804Au); } /* indirect call */
    }

loc_0004804D: ;
    ecx = esi + 0x108;
    MEM8(esp + 0x14) = 3;
    PUSH32(esp, 0x0004805Du); RECOMP_ABI_CALL(0x00047F40u, sub_00047F40); /* call 0x00047F40 */

loc_0004805D: ;
    ecx = esi + 0xDC;
    MEM8(esp + 0x14) = 2;
    PUSH32(esp, 0x0004806Du); RECOMP_ABI_CALL(0x00047760u, sub_00047760); /* call 0x00047760 */

loc_0004806D: ;
    ecx = esi + 0xAC;
    MEM8(esp + 0x14) = 1;
    PUSH32(esp, 0x0004807Du); RECOMP_ABI_CALL(0x000476D0u, sub_000476D0); /* call 0x000476D0 */

loc_0004807D: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000480A3; /* js: sign (negative) */

loc_0004808C: ;
    edx = MEM32(esi + 0x78);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x000480A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000480A0u); } /* indirect call */
    }

loc_000480A3: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000480B2u); RECOMP_ABI_CALL(0x00047840u, sub_00047840); /* call 0x00047840 */

loc_000480B2: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000480D0
 * Original: 0x000480D0 - 0x0004811F (79 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000480D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000480D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241118);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0xA0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00048100u); RECOMP_ABI_CALL(0x00048000u, sub_00048000); /* call 0x00048000 */

loc_00048100: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0004810Fu); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_0004810F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00048120
 * Original: 0x00048120 - 0x000481F3 (211 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048120: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2411AE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2E16D0;
    ecx = esi + 0x1F20;
    MEM32(esp + 0x10) = 7;
    PUSH32(esp, 0x00048156u); RECOMP_ABI_CALL(0x0016D2D0u, sub_0016D2D0); /* call 0x0016D2D0 */

loc_00048156: ;
    ecx = esi + 0x1204;
    MEM8(esp + 0x10) = 6;
    PUSH32(esp, 0x00048166u); RECOMP_ABI_CALL(0x00165CC0u, sub_00165CC0); /* call 0x00165CC0 */

loc_00048166: ;
    PUSH32(esp, 0x443A0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x34);
    eax = esi + 0x1084;
    PUSH32(esp, eax);
    MEM8(esp + 0x20) = 5;
    PUSH32(esp, 0x00048180u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00048180: ;
    PUSH32(esp, 0x1F3C60);
    PUSH32(esp, 8);
    PUSH32(esp, 0x5C);
    ecx = esi + 0xB04;
    PUSH32(esp, ecx);
    MEM8(esp + 0x20) = 4;
    PUSH32(esp, 0x0004819Au); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_0004819A: ;
    ecx = esi + 0x6D8;
    MEM32(esi + 0x9AC) = 0x2E1670;
    MEM8(esp + 0x10) = 2;
    PUSH32(esp, 0x000481B4u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_000481B4: ;
    ecx = esi + 0x654;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x000481C4u); RECOMP_ABI_CALL(0x001539C0u, sub_001539C0); /* call 0x001539C0 */

loc_000481C4: ;
    ecx = esi + 0x2C0;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000481D4u); RECOMP_ABI_CALL(0x000480D0u, sub_000480D0); /* call 0x000480D0 */

loc_000481D4: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000481E3u); RECOMP_ABI_CALL(0x0003F0D0u, sub_0003F0D0); /* call 0x0003F0D0 */

loc_000481E3: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00048200
 * Original: 0x00048200 - 0x00048206 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048200(void)
{

loc_00048200: ;
    eax = 0x2240;
    esp += 4; return; /* ret */

}

/**
 * sub_00048210
 * Original: 0x00048210 - 0x0004822B (27 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048210(void)
{

loc_00048210: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x28C); PUSH32(esp, 0x0004821Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048218u); } /* indirect call */
    }

loc_0004821E: ;
    ecx = eax;
    PUSH32(esp, 0x00048225u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00048225: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048230
 * Original: 0x00048230 - 0x0004823F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048230: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28C); PUSH32(esp, 0x00048238u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048232u); } /* indirect call */
    }

loc_00048238: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_001303D0(); return; /* tail jmp 0x001303D0 */

}

/**
 * sub_00048240
 * Original: 0x00048240 - 0x00048247 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048240(void)
{

loc_00048240: ;
    eax = ecx + 0x1204;
    esp += 4; return; /* ret */

}

/**
 * sub_00048250
 * Original: 0x00048250 - 0x00048257 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048250(void)
{

loc_00048250: ;
    eax = ecx + 0x1F20;
    esp += 4; return; /* ret */

}

/**
 * sub_00048260
 * Original: 0x00048260 - 0x00048266 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048260(void)
{

loc_00048260: ;
    eax = MEM32(0x320090);
    esp += 4; return; /* ret */

}

/**
 * sub_00048270
 * Original: 0x00048270 - 0x00048277 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048270(void)
{

loc_00048270: ;
    eax = MEM32(ecx + 0x2230);
    esp += 4; return; /* ret */

}

/**
 * sub_00048280
 * Original: 0x00048280 - 0x00048287 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048280(void)
{

loc_00048280: ;
    eax = ecx + 0x6D8;
    esp += 4; return; /* ret */

}

/**
 * sub_00048286
 * Original: 0x00048286 - 0x00048287 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048286(void)
{

loc_00048286: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00048290
 * Original: 0x00048290 - 0x00048297 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048290(void)
{

loc_00048290: ;
    eax = ecx + 0x1AD8;
    esp += 4; return; /* ret */

}

/**
 * sub_000482A0
 * Original: 0x000482A0 - 0x000482A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000482A0(void)
{

loc_000482A0: ;
    eax = ecx + 0x2C0;
    esp += 4; return; /* ret */

}

/**
 * sub_000482B0
 * Original: 0x000482B0 - 0x000482BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000482B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000482B0: ;
    _fb = (uint32_t)(0x2C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00130B10(); return; /* tail jmp 0x00130B10 */

}

/**
 * sub_000482C0
 * Original: 0x000482C0 - 0x000482DA (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000482C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000482C0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x340)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC394); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000482D7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC394)) */

loc_000482D1: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000482D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000482E0
 * Original: 0x000482E0 - 0x000482E7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000482E0(void)
{

loc_000482E0: ;
    eax = ecx + 0x654;
    esp += 4; return; /* ret */

}

/**
 * sub_000482F0
 * Original: 0x000482F0 - 0x000482F3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000482F0(void)
{

loc_000482F0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00048300
 * Original: 0x00048300 - 0x00048307 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048300(void)
{

loc_00048300: ;
    eax = ecx + 0x9AC;
    esp += 4; return; /* ret */

}

/**
 * sub_00048310
 * Original: 0x00048310 - 0x00048317 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048310(void)
{

loc_00048310: ;
    eax = MEM32(ecx + 0x2DC);
    esp += 4; return; /* ret */

}

/**
 * sub_00048320
 * Original: 0x00048320 - 0x00048326 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048320(void)
{

loc_00048320: ;
    eax = 0x47458E1;
    esp += 4; return; /* ret */

}

/**
 * sub_00048330
 * Original: 0x00048330 - 0x00048336 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048330(void)
{

loc_00048330: ;
    eax = MEM32(0x30D390);
    esp += 4; return; /* ret */

}

/**
 * sub_00048340
 * Original: 0x00048340 - 0x00048515 (469 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048340: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2411AE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00048363u); RECOMP_ABI_CALL(0x0003ED40u, sub_0003ED40); /* call 0x0003ED40 */

loc_00048363: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E16D0;
    MEM32(esi + 0x280) = ebx;
    MEM32(esi + 0x284) = ebx;
    MEM32(esi + 0x288) = ebx;
    MEM32(esi + 0x28C) = ebx;
    MEM32(esi + 0x290) = ebx;
    MEM32(esi + 0x2BC) = esi;
    MEM32(esi + 0x294) = ebx;
    MEM32(esi + 0x298) = ebx;
    MEM32(esi + 0x29C) = ebx;
    MEM32(esi + 0x2A0) = ebx;
    MEM32(esi + 0x2A4) = ebx;
    ecx = esi + 0x2C0;
    MEM32(esp + 0x14) = ebx;
    MEM32(esi + 0x2A8) = ebx;
    MEM32(esi + 0x2AC) = ebx;
    MEM32(esi + 0x2B0) = ebx;
    MEM32(esi + 0x2B4) = ebx;
    MEM32(esi + 0x2B8) = ebx;
    PUSH32(esp, 0x000483DAu); RECOMP_ABI_CALL(0x00136130u, sub_00136130); /* call 0x00136130 */

loc_000483DA: ;
    ecx = esi + 0x654;
    MEM8(esp + 0x14) = 1;
    PUSH32(esp, 0x000483EAu); RECOMP_ABI_CALL(0x00153A10u, sub_00153A10); /* call 0x00153A10 */

loc_000483EA: ;
    ecx = esi + 0x6D8;
    MEM8(esp + 0x14) = 2;
    PUSH32(esp, 0x000483FAu); RECOMP_ABI_CALL(0x00203D00u, sub_00203D00); /* call 0x00203D00 */

loc_000483FA: ;
    ecx = esi + 0x9AC;
    PUSH32(esp, 0x00048405u); RECOMP_ABI_CALL(0x000451E0u, sub_000451E0); /* call 0x000451E0 */

loc_00048405: ;
    PUSH32(esp, 0x1F3C60);
    PUSH32(esp, 0x1F3BE0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x5C);
    eax = esi + 0xB04;
    PUSH32(esp, eax);
    MEM8(esp + 0x28) = 4;
    PUSH32(esp, 0x00048424u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00048424: ;
    PUSH32(esp, 0x443A0);
    PUSH32(esp, 0x45130);
    PUSH32(esp, 6);
    PUSH32(esp, 0x34);
    ecx = esi + 0x1084;
    PUSH32(esp, ecx);
    MEM8(esp + 0x28) = 5;
    PUSH32(esp, 0x00048443u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00048443: ;
    ecx = esi + 0x1204;
    MEM8(esp + 0x14) = 6;
    PUSH32(esp, 0x00048453u); RECOMP_ABI_CALL(0x00166F10u, sub_00166F10); /* call 0x00166F10 */

loc_00048453: ;
    edx = esi + 0x1BE0;
    PUSH32(esp, 0x40);
    MEM32(esi + 0x1AD8) = ebx;
    PUSH32(esp, edx);
    MEM8(esp + 0x1C) = 7;
    MEM32(esi + 0x1ADC) = ebx;
    PUSH32(esp, 0x00048472u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_00048472: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x1CE0;
    PUSH32(esp, 0x00048480u); RECOMP_ABI_CALL(0x0005FE90u, sub_0005FE90); /* call 0x0005FE90 */

loc_00048480: ;
    ecx = esi + 0x1F20;
    PUSH32(esp, 0x0004848Bu); RECOMP_ABI_CALL(0x0016D490u, sub_0016D490); /* call 0x0016D490 */

loc_0004848B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x2200) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(esi + 0x2214) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(esi + 0x2218) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    MEMF(esi + 0x221C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x2214);
    MEM32(esi + 0x2208) = eax;
    ecx = MEM32(esi + 0x2218);
    MEM32(esi + 0x220C) = ecx;
    edx = MEM32(esi + 0x221C);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x2210) = edx;
    MEM32(esi + 0x2224) = ebx;
    MEM32(esi + 0x2228) = ebx;
    MEM32(esi + 0x222C) = ebx;
    MEM8(esi + 0x2220) = LO8(ebx);
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
 * sub_00048520
 * Original: 0x00048520 - 0x0004853E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048520: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00048528u); RECOMP_ABI_CALL(0x00048120u, sub_00048120); /* call 0x00048120 */

loc_00048528: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00048538; /* je: equal / zero */

loc_0004852F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00048535u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00048535: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00048538: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048540
 * Original: 0x00048540 - 0x00048550 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048540: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00048548u); RECOMP_ABI_CALL(0x00047A60u, sub_00047A60); /* call 0x00047A60 */

loc_00048548: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_00048550
 * Original: 0x00048550 - 0x00048560 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048550: ;
    g_seh_ebp = ebp; sub_00044240(); return; /* tail jmp 0x00044240 */

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
 * sub_00048560
 * Original: 0x00048560 - 0x0004858A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048560: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0004856Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048565u); } /* indirect call */
    }

loc_0004856B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048588; /* je: equal / zero */

loc_0004856F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00048579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048573u); } /* indirect call */
    }

loc_00048579: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF3273DD9u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x00048588u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048582u); } /* indirect call */
    }

loc_00048588: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00048590
 * Original: 0x00048590 - 0x00048595 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048590: ;
    g_seh_ebp = ebp; sub_00045610(); return; /* tail jmp 0x00045610 */

}

/**
 * sub_000485A0
 * Original: 0x000485A0 - 0x000485A5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000485A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000485A0: ;
    g_seh_ebp = ebp; sub_000444C0(); return; /* tail jmp 0x000444C0 */

}

/**
 * sub_000485B0
 * Original: 0x000485B0 - 0x000485B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000485B0(void)
{

loc_000485B0: ;
    eax = 0x2988;
    esp += 4; return; /* ret */

}

/**
 * sub_000485C0
 * Original: 0x000485C0 - 0x00048649 (137 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000485C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000485C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00048645; /* je: equal / zero */

loc_000485CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F);
    ebx = esi + 0x108;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000485DBu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000485DB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00048644; /* jl: less (signed <) */

loc_000485E2: ;
    MEM32(esi + eax * 4 + 0x108) = 0;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = eax + 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048643; /* je: equal / zero */

loc_00048604: ;
    eax = MEM32(esi + edi * 4 + 0x108);
    MEM32(esi + edi * 4 + 0x108) = 0;
    ecx = MEM32(esi);
    PUSH32(esp, 0x3F);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x00048624u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00048624: ;
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
    edi = edi & 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048604; /* jne: not equal / not zero */

loc_00048643: ;
    POP32(esp, edi);

loc_00048644: ;
    POP32(esp, ebx);

loc_00048645: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048650
 * Original: 0x00048650 - 0x000486B7 (103 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048650: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2411C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00048673u); RECOMP_ABI_CALL(0x00048340u, sub_00048340); /* call 0x00048340 */

loc_00048673: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E1968;
    edi = esi + 0x224C;
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x2240) = eax;
    MEM32(esi + 0x2244) = eax;
    MEM32(esi + 0x2248) = eax;
    PUSH32(esp, 0x0004869Eu); RECOMP_ABI_CALL(0x00203740u, sub_00203740); /* call 0x00203740 */

loc_0004869E: ;
    ecx = MEM32(esp + 0xC);
    MEM32(edi) = 0x2DD908;
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
 * sub_000486C0
 * Original: 0x000486C0 - 0x000486C7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000486C0(void)
{

loc_000486C0: ;
    eax = ecx + 0x224C;
    esp += 4; return; /* ret */

}

/**
 * sub_000486D0
 * Original: 0x000486D0 - 0x000486E5 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000486D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000486D0: ;
    MEM32(ecx) = 0x2E1968;
    MEM32(ecx + 0x224C) = 0x2DD8F0;
    g_seh_ebp = ebp; sub_00048120(); return; /* tail jmp 0x00048120 */

}

/**
 * sub_000486F0
 * Original: 0x000486F0 - 0x0004874F (95 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000486F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000486F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2411F0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = 0x2E1580;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 4) = 0x2E1C04;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    SET_LO8(eax, 1);
    MEM8(esp + 0x10) = LO8(eax);
    if ((_fca >= _fcb)) goto loc_0004873E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_0004872F: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00048739u); RECOMP_ABI_CALL(0x00046D40u, sub_00046D40); /* call 0x00046D40 */

loc_00048739: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_0004873E: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048750
 * Original: 0x00048750 - 0x0004876E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048750: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00048758u); RECOMP_ABI_CALL(0x000486D0u, sub_000486D0); /* call 0x000486D0 */

loc_00048758: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00048768; /* je: equal / zero */

loc_0004875F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00048765u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00048765: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00048768: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048770
 * Original: 0x00048770 - 0x0004883D (205 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048770: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00048780u); RECOMP_ABI_CALL(0x000465F0u, sub_000465F0); /* call 0x000465F0 */

loc_00048780: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000487A9; /* je: equal / zero */

loc_00048787: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x320228);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00048794u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00048794: ;
    MEM32(eax * 4 + 0x320128) = esi;
    eax = MEM32(0x320120);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x320120) = eax;

loc_000487A9: ;
    eax = MEM32(esi + 0x58);
    MEM32(esi + 0x204) = 0x19;
    ecx = MEM32(0x643844);
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
    PUSH32(esp, 0x000487D5u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000487D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000487E3; /* jge: greater or equal (signed >=) */

loc_000487DC: ;
    eax = 0x6438B8;
    goto loc_000487EC;

loc_000487E3: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000487EC: ;
    eax = MEM32(eax);
    MEM32(edi + 4) = eax;
    ebx = MEM32(eax + 0x88);
    eax = MEM32(esi);
    ebp = MEM32(esi + 0x224C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    edx = esi + 0x22DC;
    edi = esi + 0x224C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00048816u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048810u); } /* indirect call */
    }

loc_00048816: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00048828u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048822u); } /* indirect call */
    }

loc_00048828: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x0004882Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004882Cu); } /* indirect call */
    }

loc_0004882F: ;
    ecx = edi;
    PUSH32(esp, 0x00048836u); RECOMP_ABI_CALL(0x00203920u, sub_00203920); /* call 0x00203920 */

loc_00048836: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048840
 * Original: 0x00048840 - 0x000488AC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00048848u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00048848: ;
    MEM32(esi) = 0x2E1C08;
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
    PUSH32(esp, 0x000488A5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000488A5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000488B0
 * Original: 0x000488B0 - 0x000488BC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000488B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000488B0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000488C0(); return; /* tail jmp 0x000488C0 */

}

/**
 * sub_000488C0
 * Original: 0x000488C0 - 0x0004892C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000488C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000488C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048927; /* je: equal / zero */

loc_000488D2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x2240);
    edx = MEM32(ecx + 0x2244);
    MEM32(ecx + 0x2248) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x2244);
    edx = MEM32(ecx + 0x2240);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0004890A; /* je: equal / zero */

loc_00048904: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004890Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048908u); } /* indirect call */
    }

loc_0004890A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFDCE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFDCE0u;
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
    if (CMP_NE(_fa, _fb)) goto loc_000488D2; /* jne: not equal / not zero */

loc_00048927: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048930
 * Original: 0x00048930 - 0x0004898F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2320);
    PUSH32(esp, 0x00048944u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00048944: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048954; /* je: equal / zero */

loc_0004894B: ;
    ecx = eax;
    PUSH32(esp, 0x00048952u); RECOMP_ABI_CALL(0x00048650u, sub_00048650); /* call 0x00048650 */

loc_00048952: ;
    goto loc_00048956;

loc_00048954: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00048956: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x2240;
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
    _fb = (uint32_t)(0x2320) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2320;
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
 * sub_00048990
 * Original: 0x00048990 - 0x000489DA (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048990: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x2240;
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
 * sub_000489E0
 * Original: 0x000489E0 - 0x00048A3F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000489E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000489E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x668);
    PUSH32(esp, 0x000489F4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000489F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048A04; /* je: equal / zero */

loc_000489FB: ;
    ecx = eax;
    PUSH32(esp, 0x00048A02u); RECOMP_ABI_CALL(0x00075BF0u, sub_00075BF0); /* call 0x00075BF0 */

loc_00048A02: ;
    goto loc_00048A06;

loc_00048A04: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00048A06: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x658;
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
    _fb = (uint32_t)(0x668) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x668;
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
 * sub_00048A40
 * Original: 0x00048A40 - 0x00048A7D (61 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048A40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00048A49u); RECOMP_ABI_CALL(0x000443F0u, sub_000443F0); /* call 0x000443F0 */

loc_00048A49: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048A5B; /* je: equal / zero */

loc_00048A50: ;
    PUSH32(esp, eax);
    ecx = 0x320120;
    PUSH32(esp, 0x00048A5Bu); RECOMP_ABI_CALL(0x000485C0u, sub_000485C0); /* call 0x000485C0 */

loc_00048A5B: ;
    edi = esi + 0x224C;
    ecx = edi;
    PUSH32(esp, 0x00048A68u); RECOMP_ABI_CALL(0x002038C0u, sub_002038C0); /* call 0x002038C0 */

loc_00048A68: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00048A6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048A6Cu); } /* indirect call */
    }

loc_00048A6F: ;
    PUSH32(esp, esi);
    ecx = 0x320098;
    PUSH32(esp, 0x00048A7Au); RECOMP_ABI_CALL(0x00048990u, sub_00048990); /* call 0x00048990 */

loc_00048A7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00048A80
 * Original: 0x00048A80 - 0x00048AE5 (101 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048A80: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00048A8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048A85u); } /* indirect call */
    }

loc_00048A8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048AD2; /* jne: not equal / not zero */

loc_00048A8F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048AD1; /* je: equal / zero */

loc_00048A98: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE5023CE7u);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00048AA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048AA1u); } /* indirect call */
    }

loc_00048AA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048AD6; /* je: equal / zero */

loc_00048AAB: ;
    PUSH32(esp, esi);
    ecx = 0x3229C8;
    PUSH32(esp, 0x00048AB6u); RECOMP_ABI_CALL(0x000489E0u, sub_000489E0); /* call 0x000489E0 */

loc_00048AB6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048AD0; /* je: equal / zero */

loc_00048ABC: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00048AC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048AC2u); } /* indirect call */
    }

loc_00048AC5: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00048AD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048ACAu); } /* indirect call */
    }

loc_00048AD0: ;
    POP32(esp, esi);

loc_00048AD1: ;
    POP32(esp, ebx);

loc_00048AD2: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00048AD6: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x284); PUSH32(esp, 0x00048AE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048ADAu); } /* indirect call */
    }

loc_00048AE0: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048AF0
 * Original: 0x00048AF0 - 0x00048B30 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048AF0: ;
    PUSH32(esp, esi);
    ecx = 0x320098;
    PUSH32(esp, 0x00048AFBu); RECOMP_ABI_CALL(0x00048930u, sub_00048930); /* call 0x00048930 */

loc_00048AFB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048B2C; /* je: equal / zero */

loc_00048B01: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00048B0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048B0Bu); } /* indirect call */
    }

loc_00048B0E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00048B18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048B12u); } /* indirect call */
    }

loc_00048B18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048B27; /* jne: not equal / not zero */

loc_00048B1C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1BC); PUSH32(esp, 0x00048B27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048B21u); } /* indirect call */
    }

loc_00048B27: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00048B2C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00048B30
 * Original: 0x00048B30 - 0x00048B58 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x00048B3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048B35u); } /* indirect call */
    }

loc_00048B3B: ;
    ecx = eax;
    PUSH32(esp, 0x00048B42u); RECOMP_ABI_CALL(0x00165CE0u, sub_00165CE0); /* call 0x00165CE0 */

loc_00048B42: ;
    ecx = esi;
    PUSH32(esp, 0x00048B49u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00048B49: ;
    ecx = eax;
    PUSH32(esp, 0x00048B50u); RECOMP_ABI_CALL(0x001EE0E0u, sub_001EE0E0); /* call 0x001EE0E0 */

loc_00048B50: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_00048B60
 * Original: 0x00048B60 - 0x00048B7D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B60(void)
{

loc_00048B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00048B68u); RECOMP_ABI_CALL(0x00041990u, sub_00041990); /* call 0x00041990 */

loc_00048B68: ;
    ecx = esi;
    PUSH32(esp, 0x00048B6Fu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00048B6F: ;
    PUSH32(esp, eax);
    ecx = esi + 0x92C;
    PUSH32(esp, 0x00048B7Bu); RECOMP_ABI_CALL(0x00165D20u, sub_00165D20); /* call 0x00165D20 */

loc_00048B7B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00048B80
 * Original: 0x00048B80 - 0x00048BBD (61 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048B80(void)
{

loc_00048B80: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DFC98)); /* movss */
    MEMF(ecx + 0x15C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC38C)); /* movss */
    MEMF(ecx + 0x158) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x160) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x168) = 0x9B54B57Fu;
    MEM32(ecx + 0x164) = 9;
    esp += 4; return; /* ret */

}

/**
 * sub_00048BC0
 * Original: 0x00048BC0 - 0x00048C4F (143 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048BC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241240);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2E1C20;
    ecx = esi + 0x1200;
    MEM32(esp + 0x10) = 4;
    PUSH32(esp, 0x00048BF6u); RECOMP_ABI_CALL(0x0016D2D0u, sub_0016D2D0); /* call 0x0016D2D0 */

loc_00048BF6: ;
    ecx = esi + 0x92C;
    MEM8(esp + 0x10) = 3;
    PUSH32(esp, 0x00048C06u); RECOMP_ABI_CALL(0x00165CC0u, sub_00165CC0); /* call 0x00165CC0 */

loc_00048C06: ;
    ecx = esi + 0x328;
    MEM32(esi + 0x670) = 0x2DD8F0;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x00048C20u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00048C20: ;
    ecx = esi + 0x2C4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00048C30u); RECOMP_ABI_CALL(0x001539C0u, sub_001539C0); /* call 0x001539C0 */

loc_00048C30: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00048C3Fu); RECOMP_ABI_CALL(0x0003F0D0u, sub_0003F0D0); /* call 0x0003F0D0 */

loc_00048C3F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00048C50
 * Original: 0x00048C50 - 0x00048C56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048C50(void)
{

loc_00048C50: ;
    eax = 0x14E0;
    esp += 4; return; /* ret */

}

/**
 * sub_00048C60
 * Original: 0x00048C60 - 0x00048C67 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048C60(void)
{

loc_00048C60: ;
    eax = ecx + 0x328;
    esp += 4; return; /* ret */

}

/**
 * sub_00048C70
 * Original: 0x00048C70 - 0x00048C81 (17 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048C70(void)
{

loc_00048C70: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00048C7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048C78u); } /* indirect call */
    }

loc_00048C7B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00048C90
 * Original: 0x00048C90 - 0x00048C97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048C90(void)
{

loc_00048C90: ;
    eax = ecx + 0x92C;
    esp += 4; return; /* ret */

}

/**
 * sub_00048CA0
 * Original: 0x00048CA0 - 0x00048CA7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048CA0(void)
{

loc_00048CA0: ;
    eax = ecx + 0x1200;
    esp += 4; return; /* ret */

}

/**
 * sub_00048CB0
 * Original: 0x00048CB0 - 0x00048CB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048CB0(void)
{

loc_00048CB0: ;
    eax = MEM32(0x320328);
    esp += 4; return; /* ret */

}

/**
 * sub_00048CC0
 * Original: 0x00048CC0 - 0x00048CC7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048CC0(void)
{

loc_00048CC0: ;
    eax = ecx + 0x670;
    esp += 4; return; /* ret */

}

/**
 * sub_00048CD0
 * Original: 0x00048CD0 - 0x00048CD7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048CD0(void)
{

loc_00048CD0: ;
    eax = ecx + 0x720;
    esp += 4; return; /* ret */

}

/**
 * sub_00048CE0
 * Original: 0x00048CE0 - 0x00048CE7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048CE0(void)
{

loc_00048CE0: ;
    eax = MEM32(ecx + 0x2C0);
    esp += 4; return; /* ret */

}

/**
 * sub_00048CF0
 * Original: 0x00048CF0 - 0x00048CF7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048CF0(void)
{

loc_00048CF0: ;
    eax = ecx + 0x2C4;
    esp += 4; return; /* ret */

}

/**
 * sub_00048D00
 * Original: 0x00048D00 - 0x00048D06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D00(void)
{

loc_00048D00: ;
    eax = MEM32(0x30D3A0);
    esp += 4; return; /* ret */

}

/**
 * sub_00048D10
 * Original: 0x00048D10 - 0x00048D6C (92 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048D10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00048D20;

    /* nop */

loc_00048D20: ;
    edi = ZX8(LO8(ebx));
    eax = MEM32(esi + edi * 4 + 0x654);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048D66; /* je: equal / zero */

loc_00048D2E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00048D38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00048D32u); } /* indirect call */
    }

loc_00048D38: ;
    edx = MEM32(esi + edi * 4 + 0x660);
    PUSH32(esp, eax);
    eax = MEM32(esi + edi * 4 + 0x654);
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x66C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00048D5Cu); RECOMP_ABI_CALL(0x00038CD0u, sub_00038CD0); /* call 0x00038CD0 */

loc_00048D5C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 3 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00048D20; /* jb: below (unsigned <) */

loc_00048D66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00048D70
 * Original: 0x00048D70 - 0x00048E63 (243 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00048D70(void)
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

loc_00048D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E1570); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x5FC); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00048D9Du); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00048D9D: ;
    MEMF(edi + 0x5FC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = edi + 0x600;
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
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x5FC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00048E1Du); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_00048E1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00048E25u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00048E25: ;
    ecx = MEM32(edi + 0x640);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00048E3C; /* jl: less (signed <) */

loc_00048E2F: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x3EC) = MEM32(edi + 0x3EC) | eax;
    _fa = (uint32_t)(MEM32(edi + 0x3EC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00048E3C: ;
    ecx = MEM32(edi + 0x644);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00048E5B; /* jl: less (signed <) */

loc_00048E46: ;
    eax = MEM32(edi + 0x3EC);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x3EC) = eax;

loc_00048E5B: ;
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
 * sub_00048E70
 * Original: 0x00048E70 - 0x0004903E (462 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00048E70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241240);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00048E94u); RECOMP_ABI_CALL(0x0003ED40u, sub_0003ED40); /* call 0x0003ED40 */

loc_00048E94: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E1C20;
    MEM32(esi + 0x280) = ebx;
    MEM32(esi + 0x284) = ebx;
    MEM32(esi + 0x288) = ebx;
    MEM32(esi + 0x28C) = ebx;
    MEM32(esi + 0x290) = ebx;
    MEM32(esi + 0x2BC) = esi;
    MEM32(esi + 0x294) = ebx;
    MEM32(esi + 0x298) = ebx;
    MEM32(esi + 0x29C) = ebx;
    MEM32(esi + 0x2A0) = ebx;
    MEM32(esi + 0x2A4) = ebx;
    ecx = esi + 0x2C4;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x2A8) = ebx;
    MEM32(esi + 0x2AC) = ebx;
    MEM32(esi + 0x2B0) = ebx;
    MEM32(esi + 0x2B4) = ebx;
    MEM32(esi + 0x2B8) = ebx;
    PUSH32(esp, 0x00048F0Bu); RECOMP_ABI_CALL(0x00153A10u, sub_00153A10); /* call 0x00153A10 */

loc_00048F0B: ;
    ecx = esi + 0x328;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x00048F1Bu); RECOMP_ABI_CALL(0x00203D00u, sub_00203D00); /* call 0x00203D00 */

loc_00048F1B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x640) = eax;
    MEM32(esi + 0x644) = eax;
    edi = esi + 0x670;
    ecx = edi;
    MEM8(esp + 0x18) = 2;
    MEM32(esi + 0x648) = ebx;
    MEM32(esi + 0x64C) = ebx;
    MEM32(esi + 0x650) = ebx;
    PUSH32(esp, 0x00048F4Eu); RECOMP_ABI_CALL(0x00203740u, sub_00203740); /* call 0x00203740 */

loc_00048F4E: ;
    MEM32(edi) = 0x2DD908;
    eax = esi + 0x828;
    PUSH32(esp, 0x40);
    MEM32(esi + 0x720) = ebx;
    PUSH32(esp, eax);
    MEM8(esp + 0x20) = 3;
    MEM32(esi + 0x724) = ebx;
    PUSH32(esp, 0x00048F73u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_00048F73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x92C;
    MEM8(esi + 0x928) = LO8(ebx);
    PUSH32(esp, 0x00048F87u); RECOMP_ABI_CALL(0x00166F10u, sub_00166F10); /* call 0x00166F10 */

loc_00048F87: ;
    ecx = esi + 0x1200;
    MEM8(esp + 0x18) = 4;
    PUSH32(esp, 0x00048F97u); RECOMP_ABI_CALL(0x0016D490u, sub_0016D490); /* call 0x0016D490 */

loc_00048F97: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x638) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x634) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x630) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x62C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x624) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x620) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x61C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x618) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x610) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x60C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x608) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x604) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x63C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x628) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x614) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x600) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5FC) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, edi);
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00049040
 * Original: 0x00049040 - 0x0004905E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049040: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00049048u); RECOMP_ABI_CALL(0x00048BC0u, sub_00048BC0); /* call 0x00048BC0 */

loc_00049048: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00049058; /* je: equal / zero */

loc_0004904F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00049055u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00049055: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00049058: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049060
 * Original: 0x00049060 - 0x000490FB (155 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049060: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241260);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 8) = 0x2E1580;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0xC) = 0x2E1EA8;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x000490A3u); RECOMP_ABI_CALL(0x000420F0u, sub_000420F0); /* call 0x000420F0 */

loc_000490A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000490BA; /* jne: not equal / not zero */

loc_000490A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000490BA: ;
    PUSH32(esp, edi);
    ecx = esi + 0x92C;
    PUSH32(esp, 0x000490C6u); RECOMP_ABI_CALL(0x00168A10u, sub_00168A10); /* call 0x00168A10 */

loc_000490C6: ;
    PUSH32(esp, edi);
    ecx = esi + 0x1200;
    PUSH32(esp, 0x000490D2u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_000490D2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000490DAu); RECOMP_ABI_CALL(0x00048D70u, sub_00048D70); /* call 0x00048D70 */

loc_000490DA: ;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    ecx = esi + 0x60;
    PUSH32(esp, 0x000490E6u); RECOMP_ABI_CALL(0x002049A0u, sub_002049A0); /* call 0x002049A0 */

loc_000490E6: ;
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
 * sub_00049100
 * Original: 0x00049100 - 0x000491E5 (229 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049100: ;
    _fb = (uint32_t)(0x810) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x810;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x11C); PUSH32(esp, 0x00049111u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004910Bu); } /* indirect call */
    }

loc_00049111: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004916F; /* je: equal / zero */

loc_00049115: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0004911Eu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0004911E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x00049128u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049122u); } /* indirect call */
    }

loc_00049128: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x134603D7);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00049137u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_00049137: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00049145u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00049145: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x412FA544);
    ecx = 0x4031B0;
    PUSH32(esp, 0x00049164u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_00049164: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004916F; /* je: equal / zero */

loc_00049168: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0004916Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004916Cu); } /* indirect call */
    }

loc_0004916F: ;
    _fa = (uint32_t)(MEM32(esi + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x298304B4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA0), 0x298304B4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000491A5; /* jne: not equal / not zero */

loc_0004917B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x00049185u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004917Fu); } /* indirect call */
    }

loc_00049185: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00049192u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004918Fu); } /* indirect call */
    }

loc_00049192: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0004919Au); RECOMP_ABI_CALL(0x00011BD0u, sub_00011BD0); /* call 0x00011BD0 */

loc_0004919A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    ecx = esi;
    PUSH32(esp, 0x000491A5u); RECOMP_ABI_CALL(0x000130A0u, sub_000130A0); /* call 0x000130A0 */

loc_000491A5: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000491B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000491AEu); } /* indirect call */
    }

loc_000491B1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6459E8);
    ecx = esi;
    PUSH32(esp, 0x000491BEu); RECOMP_ABI_CALL(0x00048D10u, sub_00048D10); /* call 0x00048D10 */

loc_000491BE: ;
    ecx = esi;
    PUSH32(esp, 0x000491C5u); RECOMP_ABI_CALL(0x0003E960u, sub_0003E960); /* call 0x0003E960 */

loc_000491C5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000491CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000491C9u); } /* indirect call */
    }

loc_000491CF: ;
    ecx = eax;
    PUSH32(esp, 0x000491D6u); RECOMP_ABI_CALL(0x00168390u, sub_00168390); /* call 0x00168390 */

loc_000491D6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000491DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000491DAu); } /* indirect call */
    }

loc_000491DD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x810) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x810;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000491F0
 * Original: 0x000491F0 - 0x0004920A (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000491F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000491F0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x98)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00049207; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00049201: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00049207: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00049210
 * Original: 0x00049210 - 0x0004928B (123 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049210: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B6EF5D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B6EF5D2 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00049249; /* je: equal / zero */

loc_0004921E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB229EE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB229EE0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004922F; /* je: equal / zero */

loc_00049225: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004922Bu); RECOMP_ABI_CALL(0x000403B0u, sub_000403B0); /* call 0x000403B0 */

loc_0004922B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0004922F: ;
    eax = MEM32(esi + 0x11E8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x11F5);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

loc_00049249: ;
    ecx = MEM32(esi + 0x11E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049275; /* je: equal / zero */

loc_00049253: ;
    PUSH32(esp, 0x00049258u); RECOMP_ABI_CALL(0x001624B0u, sub_001624B0); /* call 0x001624B0 */

loc_00049258: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049275; /* jne: not equal / not zero */

loc_0004925C: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x11F4);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

loc_00049275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x11F4);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049290
 * Original: 0x00049290 - 0x000492FC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00049298u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00049298: ;
    MEM32(esi) = 0x2E1EB4;
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
    PUSH32(esp, 0x000492F5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000492F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00049300
 * Original: 0x00049300 - 0x0004930C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00049300: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00049310(); return; /* tail jmp 0x00049310 */

}

/**
 * sub_00049310
 * Original: 0x00049310 - 0x0004937C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049377; /* je: equal / zero */

loc_00049322: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x648);
    edx = MEM32(ecx + 0x64C);
    MEM32(ecx + 0x650) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x64C);
    edx = MEM32(ecx + 0x648);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0004935A; /* je: equal / zero */

loc_00049354: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004935Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049358u); } /* indirect call */
    }

loc_0004935A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFEB20u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFEB20u;
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
    if (CMP_NE(_fa, _fb)) goto loc_00049322; /* jne: not equal / not zero */

loc_00049377: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049380
 * Original: 0x00049380 - 0x000493DF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049380: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14E0);
    PUSH32(esp, 0x00049394u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00049394: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000493A4; /* je: equal / zero */

loc_0004939B: ;
    ecx = eax;
    PUSH32(esp, 0x000493A2u); RECOMP_ABI_CALL(0x00048E70u, sub_00048E70); /* call 0x00048E70 */

loc_000493A2: ;
    goto loc_000493A6;

loc_000493A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000493A6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x648;
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
    _fb = (uint32_t)(0x14E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14E0;
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
 * sub_000493E0
 * Original: 0x000493E0 - 0x0004942A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000493E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000493E0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x648;
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
 * sub_00049430
 * Original: 0x00049430 - 0x000498B7 (1159 bytes, 329 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00049430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004944Au); RECOMP_ABI_CALL(0x0003F130u, sub_0003F130); /* call 0x0003F130 */

loc_0004944A: ;
    edi = MEM32(ebx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebx + 0x204) = 0x1A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049462u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00049462: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x00049468u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049465u); } /* indirect call */
    }

loc_00049468: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00049474u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049471u); } /* indirect call */
    }

loc_00049474: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004947Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0004947A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x66C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000494F8; /* je: equal / zero */

loc_00049487: ;
    edx = MEM32(ebx + 0x3C);
    edi = ebx + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00049493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049490u); } /* indirect call */
    }

loc_00049493: ;
    eax = ebx + 0xB0;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000494A1u); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_000494A1: ;
    eax = ebx + 0x720;
    MEM32(ebx + 0x70) = eax;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x108;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000494B7u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_000494B7: ;
    MEM32(ebx + 0x720) = 0;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000494CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000494C8u); } /* indirect call */
    }

loc_000494CB: ;
    ecx = MEM32(ebx + 0x66C);
    edi = ebx + 0x1D8;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000494DFu); RECOMP_ABI_CALL(0x001F5200u, sub_001F5200); /* call 0x001F5200 */

loc_000494DF: ;
    eax = ebx + 0xB0;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000494EDu); RECOMP_ABI_CALL(0x001F3CE0u, sub_001F3CE0); /* call 0x001F3CE0 */

loc_000494ED: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000494F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000494F1u); } /* indirect call */
    }

loc_000494F4: ;
    MEM8(edi + 0x24) = MEM8(edi + 0x24) | 1;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_000494F8: ;
    eax = MEM32(ebx + 0x66C);
    PUSH32(esp, eax);
    ecx = 0x30E854;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049509u); RECOMP_ABI_CALL(0x00022E60u, sub_00022E60); /* call 0x00022E60 */

loc_00049509: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049549; /* jl: less (signed <) */

loc_0004950D: ;
    ecx = MEM32(0x30E854);
    edi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049549; /* je: equal / zero */

loc_0004951A: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0004952Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049524u); } /* indirect call */
    }

loc_0004952A: ;
    eax = eax | 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = ebx + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004953Eu); RECOMP_ABI_CALL(0x0012FCC0u, sub_0012FCC0); /* call 0x0012FCC0 */

loc_0004953E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x2C0) = eax;
    goto loc_00049553;

loc_00049549: ;
    MEM32(ebx + 0x2C0) = 0;

loc_00049553: ;
    ecx = ebx + 0x328;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebx + 0x5C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00049569; /* je: equal / zero */

loc_00049560: ;
    edx = ebx + 0x60;
    MEM32(ecx + 0x2D0) = edx;

loc_00049569: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    edi = ebx + 0x600;
    eax = ebx + 0x60;
    MEM32(ebx + 0x5F8) = eax;
    PUSH32(esp, edi);
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x30658228);
    MEMF(ebx + 0x5FC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000495E5u); RECOMP_ABI_CALL(0x00204640u, sub_00204640); /* call 0x00204640 */

loc_000495E5: ;
    PUSH32(esp, edi);
    edi = ebx + 0x328;
    PUSH32(esp, 0x336586E1);
    ecx = edi;
    MEM32(ebx + 0x640) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000495FEu); RECOMP_ABI_CALL(0x00204640u, sub_00204640); /* call 0x00204640 */

loc_000495FE: ;
    edx = MEM32(ebx);
    ecx = ebx;
    MEM32(ebx + 0x644) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0004960Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049608u); } /* indirect call */
    }

loc_0004960E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049624; /* je: equal / zero */

loc_00049612: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004961Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049617u); } /* indirect call */
    }

loc_0004961D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049624u); RECOMP_ABI_CALL(0x00041050u, sub_00041050); /* call 0x00041050 */

loc_00049624: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx + 0x1200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049631u); RECOMP_ABI_CALL(0x0016CC20u, sub_0016CC20); /* call 0x0016CC20 */

loc_00049631: ;
    ecx = ebx + 0x92C;
    PUSH32(esp, esi);
    MEM32(ebx + 0x1204) = ebx;
    MEM32(ecx) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049645u); RECOMP_ABI_CALL(0x00168030u, sub_00168030); /* call 0x00168030 */

loc_00049645: ;
    edx = MEM32(0x2E1ECC);
    eax = MEM32(0x2E1ED0);
    ecx = MEM32(0x2E1EC8);
    MEM32(esp + 0x24) = edx;
    SET_LO16(edx, MEM16(0x2E1ED8));
    MEM16(esp + 0x30) = LO16(edx);
    edx = MEM32(0x2DDC08);
    MEM32(esp + 0x28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x44) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x2E1ED4);
    MEM32(esp + 0x32) = eax;
    MEM32(esp + 0x4E) = edx;
    MEM32(esp + 0x36) = eax;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(0x2DDC04);
    MEM32(esp + 0x52) = edx;
    MEM32(esp + 0x3A) = eax;
    MEM32(esp + 0x56) = edx;
    MEM16(esp + 0x3E) = LO16(eax);
    eax = MEM32(0x2DDC0C);
    MEM32(esp + 0x40) = ecx;
    SET_LO16(ecx, MEM16(0x2DDC10));
    MEM32(esp + 0x5A) = edx;
    edi = ebx + 0x654;
    MEM32(esp + 0x48) = eax;
    MEM16(esp + 0x4C) = LO16(ecx);
    MEM16(esp + 0x5E) = LO16(edx);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = 3;
    /* nop */

loc_000496E0: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000496EAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000496EA: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000496F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000496F2u); } /* indirect call */
    }

loc_000496F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049762; /* je: equal / zero */

loc_000496F9: ;
    ecx = MEM32(0x2DC380);
    edx = MEM32(0x2DC384);
    MEM32(esp + 0x60) = ecx;
    SET_LO16(ecx, MEM16(0x2DC388));
    MEM32(esp + 0x64) = edx;
    MEM16(esp + 0x68) = LO16(ecx);
    edx = eax;
    goto loc_00049720;

    /* nop */

loc_00049720: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049720; /* jne: not equal / not zero */

loc_00049727: ;
    edi = esp + 0x60;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00049730: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049730; /* jne: not equal / not zero */

loc_00049738: ;
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
    edx = esp + 0x60;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049752u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00049752: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    edi = ecx;
    goto loc_00049768;

loc_00049762: ;
    MEM32(edi) = 0;

loc_00049768: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049772u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00049772: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0004977Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004977Au); } /* indirect call */
    }

loc_0004977D: ;
    SET_LO8(edx, MEM8(esp + 0x4C));
    MEM32(edi + 0xC) = eax;
    MEM8(esp + 0x30) = MEM8(esp + 0x30) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x1C);
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + 0x4C) = LO8(edx);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_000496E0; /* jne: not equal / not zero */

loc_000497A4: ;
    eax = MEM32(ebx + 0x66C);
    edi = MEM32(0x643844);
    MEM32(edi) = eax;
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
    PUSH32(esp, 0x000497C7u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000497C7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000497D5; /* jge: greater or equal (signed >=) */

loc_000497CE: ;
    eax = 0x6438B8;
    goto loc_000497DE;

loc_000497D5: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000497DE: ;
    eax = MEM32(eax);
    MEM32(edi + 4) = eax;
    edx = MEM32(eax + 0x88);
    eax = MEM32(ebx + 0x670);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = ebx + 0x700;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0);
    edx = ebx + 0xB0;
    PUSH32(esp, edx);
    edx = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00049813u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004980Du); } /* indirect call */
    }

loc_00049813: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    edi = ebx + 0x670;
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00049828u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049825u); } /* indirect call */
    }

loc_00049828: ;
    ecx = ebx + 0x720;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049837u); RECOMP_ABI_CALL(0x000B35F0u, sub_000B35F0); /* call 0x000B35F0 */

loc_00049837: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004983Eu); RECOMP_ABI_CALL(0x00203920u, sub_00203920); /* call 0x00203920 */

loc_0004983E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2A75B9B0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0004984Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049847u); } /* indirect call */
    }

loc_0004984A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049850u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00049850: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004987D; /* jne: not equal / not zero */

loc_0004985A: ;
    eax = MEM32(ebx + 0x9C);
    ecx = ebx + 0x2C4;
    PUSH32(esp, ecx);
    ecx = 0x37E158;
    MEM32(ebx + 0x320) = ebx;
    MEM32(ebx + 0x2D8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004987Du); RECOMP_ABI_CALL(0x001543C0u, sub_001543C0); /* call 0x001543C0 */

loc_0004987D: ;
    MEM8(ebx + 0x928) = 0;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6B2BC1FB);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00049890u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004988Du); } /* indirect call */
    }

loc_00049890: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049896u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00049896: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000498A7; /* jne: not equal / not zero */

loc_000498A0: ;
    MEM8(ebx + 0x928) = 1;

loc_000498A7: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000498AEu); RECOMP_ABI_CALL(0x00041F90u, sub_00041F90); /* call 0x00041F90 */

loc_000498AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000498C0
 * Original: 0x000498C0 - 0x0004995B (155 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000498C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000498C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000498C9u); RECOMP_ABI_CALL(0x00041A70u, sub_00041A70); /* call 0x00041A70 */

loc_000498C9: ;
    edi = esi + 0x670;
    ecx = edi;
    PUSH32(esp, 0x000498D6u); RECOMP_ABI_CALL(0x002038C0u, sub_002038C0); /* call 0x002038C0 */

loc_000498D6: ;
    ecx = edi;
    PUSH32(esp, 0x000498DDu); RECOMP_ABI_CALL(0x000B2A10u, sub_000B2A10); /* call 0x000B2A10 */

loc_000498DD: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000498E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000498E1u); } /* indirect call */
    }

loc_000498E4: ;
    edx = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000498EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000498EAu); } /* indirect call */
    }

loc_000498ED: ;
    eax = MEM32(esi + 0x1D8);
    ecx = esi + 0x1D8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000498FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000498F9u); } /* indirect call */
    }

loc_000498FC: ;
    eax = MEM32(esi + 0x2C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004991B; /* je: equal / zero */

loc_00049906: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004990Eu); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_0004990E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C0) = 0;

loc_0004991B: ;
    ecx = esi + 0x2C4;
    PUSH32(esp, ecx);
    ecx = 0x37E158;
    PUSH32(esp, 0x0004992Cu); RECOMP_ABI_CALL(0x00153D10u, sub_00153D10); /* call 0x00153D10 */

loc_0004992C: ;
    ecx = esi + 0x328;
    PUSH32(esp, 0x00049937u); RECOMP_ABI_CALL(0x00203C10u, sub_00203C10); /* call 0x00203C10 */

loc_00049937: ;
    ecx = esi + 0x92C;
    PUSH32(esp, 0x00049942u); RECOMP_ABI_CALL(0x00161E90u, sub_00161E90); /* call 0x00161E90 */

loc_00049942: ;
    ecx = esi + 0x1200;
    PUSH32(esp, 0x0004994Du); RECOMP_ABI_CALL(0x0016CE80u, sub_0016CE80); /* call 0x0016CE80 */

loc_0004994D: ;
    PUSH32(esp, esi);
    ecx = 0x320330;
    PUSH32(esp, 0x00049958u); RECOMP_ABI_CALL(0x000493E0u, sub_000493E0); /* call 0x000493E0 */

loc_00049958: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00049960
 * Original: 0x00049960 - 0x00049981 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049960: ;
    PUSH32(esp, esi);
    ecx = 0x320330;
    PUSH32(esp, 0x0004996Bu); RECOMP_ABI_CALL(0x00049380u, sub_00049380); /* call 0x00049380 */

loc_0004996B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004997D; /* je: equal / zero */

loc_00049971: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0004997Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004997Au); } /* indirect call */
    }

loc_0004997D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00049990
 * Original: 0x00049990 - 0x000499BA (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049990: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0004999Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049995u); } /* indirect call */
    }

loc_0004999B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000499B8; /* je: equal / zero */

loc_0004999F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x000499A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000499A3u); } /* indirect call */
    }

loc_000499A9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x913C758);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x000499B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000499B2u); } /* indirect call */
    }

loc_000499B8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000499C0
 * Original: 0x000499C0 - 0x000499CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000499C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000499C0: ;
    _fb = (uint32_t)(0x2C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00139230(); return; /* tail jmp 0x00139230 */

}

/**
 * sub_000499D0
 * Original: 0x000499D0 - 0x000499D5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000499D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000499D0: ;
    g_seh_ebp = ebp; sub_00040270(); return; /* tail jmp 0x00040270 */

}

/**
 * sub_000499E0
 * Original: 0x000499E0 - 0x000499E5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000499E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000499E0: ;
    g_seh_ebp = ebp; sub_00040340(); return; /* tail jmp 0x00040340 */

}

/**
 * sub_000499F0
 * Original: 0x000499F0 - 0x000499FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000499F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000499F0: ;
    _fb = (uint32_t)(0x3F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00145D50(); return; /* tail jmp 0x00145D50 */

}

/**
 * sub_00049A00
 * Original: 0x00049A00 - 0x00049A32 (50 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049A00: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x1CEC) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00049A2E; /* jne: not equal / not zero */

loc_00049A11: ;
    eax = MEM32(esi + 0x288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049A2E; /* je: equal / zero */

loc_00049A1B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00049A21u); RECOMP_ABI_CALL(0x000A6960u, sub_000A6960); /* call 0x000A6960 */

loc_00049A21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x288) = 0;

loc_00049A2E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049A40
 * Original: 0x00049A40 - 0x00049AC4 (132 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049A40: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3F0)); /* movss */
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8AC)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E1EDC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = MEM32(esp);
    xmm0 = XMM_SCALAR(MEMF(0x2DBED4)); /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0xC);
    ecx = eax + 0xC;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049AD0
 * Original: 0x00049AD0 - 0x00049AEF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049AD0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E1EE0;
    if (TEST_Z(_fa, _fb)) goto loc_00049AE9; /* je: equal / zero */

loc_00049AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00049AE6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00049AE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00049AE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049AF0
 * Original: 0x00049AF0 - 0x00049BA4 (180 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00049AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00049AF8u); RECOMP_ABI_CALL(0x00041A70u, sub_00041A70); /* call 0x00041A70 */

loc_00049AF8: ;
    ecx = esi + 0x3F0;
    PUSH32(esp, 0x00049B03u); RECOMP_ABI_CALL(0x001453E0u, sub_001453E0); /* call 0x001453E0 */

loc_00049B03: ;
    ecx = esi + 0x2C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049B12; /* je: equal / zero */

loc_00049B0D: ;
    PUSH32(esp, 0x00049B12u); RECOMP_ABI_CALL(0x00139930u, sub_00139930); /* call 0x00139930 */

loc_00049B12: ;
    PUSH32(esp, edi);
    edi = esi + 0x1CF0;
    ecx = edi;
    PUSH32(esp, 0x00049B20u); RECOMP_ABI_CALL(0x002038C0u, sub_002038C0); /* call 0x002038C0 */

loc_00049B20: ;
    ecx = edi;
    PUSH32(esp, 0x00049B27u); RECOMP_ABI_CALL(0x000B2A10u, sub_000B2A10); /* call 0x000B2A10 */

loc_00049B27: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00049B2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049B2Bu); } /* indirect call */
    }

loc_00049B2E: ;
    edx = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00049B37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049B34u); } /* indirect call */
    }

loc_00049B37: ;
    eax = MEM32(esi + 0x1D8);
    ecx = esi + 0x1D8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00049B46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049B43u); } /* indirect call */
    }

loc_00049B46: ;
    ecx = esi + 0x1768;
    PUSH32(esp, ecx);
    ecx = 0x37E158;
    PUSH32(esp, 0x00049B57u); RECOMP_ABI_CALL(0x00153D10u, sub_00153D10); /* call 0x00153D10 */

loc_00049B57: ;
    ecx = esi + 0x19D4;
    PUSH32(esp, 0x00049B62u); RECOMP_ABI_CALL(0x00203C10u, sub_00203C10); /* call 0x00203C10 */

loc_00049B62: ;
    ecx = esi + 0xBA4;
    PUSH32(esp, 0x00049B6Du); RECOMP_ABI_CALL(0x00161E90u, sub_00161E90); /* call 0x00161E90 */

loc_00049B6D: ;
    ecx = esi + 0x1480;
    PUSH32(esp, 0x00049B78u); RECOMP_ABI_CALL(0x0016CE80u, sub_0016CE80); /* call 0x0016CE80 */

loc_00049B78: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00049B81u); RECOMP_ABI_CALL(0x00049A00u, sub_00049A00); /* call 0x00049A00 */

loc_00049B81: ;
    _fa = (uint32_t)(MEM32(0x31BDF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x31BDF0), esi (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00049B94; /* jne: not equal / not zero */

loc_00049B8A: ;
    MEM32(0x31BDF0) = 0;

loc_00049B94: ;
    edx = MEM32(esi + 0x1DC8);
    ecx = esi + 0x1DC8;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00049BB0
 * Original: 0x00049BB0 - 0x00049C1B (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00049BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049BB0: ;
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
    PUSH32(esp, eax);
    ecx = esi + 0x2C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049BCFu); RECOMP_ABI_CALL(0x0013A670u, sub_0013A670); /* call 0x0013A670 */

loc_00049BCF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x00049BD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049BD2u); } /* indirect call */
    }

loc_00049BD5: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00049BE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049BDEu); } /* indirect call */
    }

loc_00049BE1: ;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049BEAu); RECOMP_ABI_CALL(0x002035D0u, sub_002035D0); /* call 0x002035D0 */

loc_00049BEA: ;
    ecx = esi + 0x1768;
    PUSH32(esp, ecx);
    ecx = 0x37E158;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049BFBu); RECOMP_ABI_CALL(0x00154460u, sub_00154460); /* call 0x00154460 */

loc_00049BFB: ;
    eax = MEM32(esi);
    edx = esi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x00049C0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049C06u); } /* indirect call */
    }

loc_00049C0C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00049C12u); RECOMP_ABI_CALL(0x0012C200u, sub_0012C200); /* call 0x0012C200 */

loc_00049C12: ;
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
 * sub_00049C20
 * Original: 0x00049C20 - 0x00049C2F (15 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00049C20: ;
    eax = MEM32(ecx + 0x2C8);
    _fb = (uint32_t)(0x2C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_00049C30
 * Original: 0x00049C30 - 0x00049C38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049C30: ;
    MEM8(ecx + 0x1FC) = MEM8(ecx + 0x1FC) & 0xFB;
    _fa = (uint32_t)(MEM8(ecx + 0x1FC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00049C40
 * Original: 0x00049C40 - 0x00049C81 (65 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00049C48u); RECOMP_ABI_CALL(0x00041990u, sub_00041990); /* call 0x00041990 */

loc_00049C48: ;
    ecx = esi;
    PUSH32(esp, 0x00049C4Fu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00049C4F: ;
    SET_LO8(eax, MEM8(eax + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00049C6E; /* jne: not equal / not zero */

loc_00049C5B: ;
    PUSH32(esp, 0x00049C60u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00049C60: ;
    PUSH32(esp, eax);
    ecx = esi + 0xBA4;
    PUSH32(esp, 0x00049C6Cu); RECOMP_ABI_CALL(0x001634B0u, sub_001634B0); /* call 0x001634B0 */

loc_00049C6C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00049C6E: ;
    PUSH32(esp, 0x00049C73u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00049C73: ;
    PUSH32(esp, eax);
    ecx = esi + 0xBA4;
    PUSH32(esp, 0x00049C7Fu); RECOMP_ABI_CALL(0x00165D20u, sub_00165D20); /* call 0x00165D20 */

loc_00049C7F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00049C90
 * Original: 0x00049C90 - 0x00049CCA (58 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00049C90: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x98); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00049CA3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x98)) */

loc_00049C9F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00049CA3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x230); PUSH32(esp, 0x00049CADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049CA7u); } /* indirect call */
    }

loc_00049CAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049CC6; /* je: equal / zero */

loc_00049CB1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x234); PUSH32(esp, 0x00049CBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049CB5u); } /* indirect call */
    }

loc_00049CBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049CC6; /* jne: not equal / not zero */

loc_00049CBF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00049CC6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00049CD0
 * Original: 0x00049CD0 - 0x00049D91 (193 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049CD0(void)
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

loc_00049CD0: ;
    SET_LO8(eax, MEM8(ecx + 0x375));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00049CE3; /* jne: not equal / not zero */

loc_00049CDD: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00049CE3: ;
    PUSH32(esp, esi);
    esi = ecx + 0x2C8;
    ecx = esi;
    PUSH32(esp, 0x00049CF1u); RECOMP_ABI_CALL(0x001391E0u, sub_001391E0); /* call 0x001391E0 */

loc_00049CF1: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00049D06; /* jbe: below or equal (unsigned <=) */

loc_00049CFF: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00049D06: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00049D12u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00049D12: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DC38C); /* comiss */
    if ((_fca > _fcb)) goto loc_00049CFF; /* ja: above (unsigned >) (xmm3.f[0] vs MEMF(0x2DC38C)) */

loc_00049D46: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00049D52u); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_00049D52: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DC38C); /* comiss */
    if ((_fca > _fcb)) goto loc_00049CFF; /* ja: above (unsigned >) (xmm3.f[0] vs MEMF(0x2DC38C)) */

loc_00049D8A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_00049DA0
 * Original: 0x00049DA0 - 0x00049E59 (185 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00049DA0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x36C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca > _fcb)) goto loc_00049DBE; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00049DB4: ;
    SET_LO8(eax, MEM8(ecx + 0x375));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049DC4; /* jne: not equal / not zero */

loc_00049DBE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00049DC4: ;
    PUSH32(esp, esi);
    esi = ecx + 0x2C8;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00049DD7u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00049DD7: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DC880); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00049E12; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x2DC880)) */

loc_00049E0B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00049E12: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00049E1Eu); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_00049E1E: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DC880); /* comiss */
    if ((_fca > _fcb)) goto loc_00049E0B; /* ja: above (unsigned >) (xmm3.f[0] vs MEMF(0x2DC880)) */

loc_00049E52: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00049E60
 * Original: 0x00049E60 - 0x00049F29 (201 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049E60: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x14;
    ebx = edi + 0x3F0;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00049E79u); RECOMP_ABI_CALL(0x00143970u, sub_00143970); /* call 0x00143970 */

loc_00049E79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00049E85; /* jne: not equal / not zero */

loc_00049E7D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00049E85: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    ecx = esi + 0x48;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xC) = edx;
    edx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00049EB7u); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_00049EB7: ;
    ecx = eax;
    PUSH32(esp, 0x00049EBEu); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_00049EBE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00049F00u); RECOMP_ABI_CALL(0x00130A90u, sub_00130A90); /* call 0x00130A90 */

loc_00049F00: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = edi + 0x2C8;
    PUSH32(esp, 0x00049F10u); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_00049F10: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00049F18u); RECOMP_ABI_CALL(0x00130A10u, sub_00130A10); /* call 0x00130A10 */

loc_00049F18: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00049F20u); RECOMP_ABI_CALL(0x00145420u, sub_00145420); /* call 0x00145420 */

loc_00049F20: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00049F30
 * Original: 0x00049F30 - 0x00049F8C (92 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00049F40;

    /* nop */

loc_00049F40: ;
    edi = ZX8(LO8(ebx));
    eax = MEM32(esi + edi * 4 + 0x298);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049F86; /* je: equal / zero */

loc_00049F4E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00049F58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049F52u); } /* indirect call */
    }

loc_00049F58: ;
    edx = MEM32(esi + edi * 4 + 0x2B0);
    PUSH32(esp, eax);
    eax = MEM32(esi + edi * 4 + 0x298);
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x280);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00049F7Cu); RECOMP_ABI_CALL(0x00038CD0u, sub_00038CD0); /* call 0x00038CD0 */

loc_00049F7C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 6 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00049F40; /* jb: below (unsigned <) */

loc_00049F86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00049F90
 * Original: 0x00049F90 - 0x00049FA9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049F90(void)
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

loc_00049F90: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00049F9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00049F99u); } /* indirect call */
    }

loc_00049F9C: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x64328C)); /* fsub dword ptr [0x64328c] */
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
 * sub_00049FB0
 * Original: 0x00049FB0 - 0x0004A080 (208 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00049FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00049FB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2412C6);
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
    MEM32(esi) = 0x2E1F08;
    ecx = esi + 0x19D4;
    MEM32(esp + 0x18) = 5;
    MEM32(esi + 0x1DC8) = 0x2E1EE0;
    MEM32(esi + 0x1CF0) = 0x2DD8F0;
    PUSH32(esp, 0x00049FFDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00049FFD: ;
    ecx = esi + 0x1768;
    MEM8(esp + 0x18) = 4;
    PUSH32(esp, 0x0004A00Du); RECOMP_ABI_CALL(0x001539C0u, sub_001539C0); /* call 0x001539C0 */

loc_0004A00D: ;
    ecx = esi + 0x1480;
    MEM8(esp + 0x18) = 3;
    PUSH32(esp, 0x0004A01Du); RECOMP_ABI_CALL(0x0016D2D0u, sub_0016D2D0); /* call 0x0016D2D0 */

loc_0004A01D: ;
    ecx = esi + 0xBA4;
    MEM8(esp + 0x18) = 2;
    PUSH32(esp, 0x0004A02Du); RECOMP_ABI_CALL(0x00165CC0u, sub_00165CC0); /* call 0x00165CC0 */

loc_0004A02D: ;
    edi = esi + 0x3F0;
    MEM32(esp + 0xC) = edi;
    ecx = edi + 0x20;
    MEM8(esp + 0x18) = 6;
    PUSH32(esp, 0x0004A044u); RECOMP_ABI_CALL(0x00029C60u, sub_00029C60); /* call 0x00029C60 */

loc_0004A044: ;
    ecx = edi;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x0004A050u); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_0004A050: ;
    ecx = esi + 0x2C8;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0004A060u); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_0004A060: ;
    ecx = esi;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0004A06Fu); RECOMP_ABI_CALL(0x0003F0D0u, sub_0003F0D0); /* call 0x0003F0D0 */

loc_0004A06F: ;
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
 * sub_0004A080
 * Original: 0x0004A080 - 0x0004A086 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A080(void)
{

loc_0004A080: ;
    eax = 0x1DF0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A090
 * Original: 0x0004A090 - 0x0004A097 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A090(void)
{

loc_0004A090: ;
    eax = MEM32(ecx + 0x1CE8);
    esp += 4; return; /* ret */

}

/**
 * sub_0004A0A0
 * Original: 0x0004A0A0 - 0x0004A0A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A0A0(void)
{

loc_0004A0A0: ;
    eax = ecx + 0x19D4;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A0B0
 * Original: 0x0004A0B0 - 0x0004A0B7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A0B0(void)
{

loc_0004A0B0: ;
    eax = ecx + 0x17CC;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A0C0
 * Original: 0x0004A0C0 - 0x0004A0DA (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004A0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0004A0C0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x348)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC394); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004A0D7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC394)) */

loc_0004A0D1: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0004A0D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004A0E0
 * Original: 0x0004A0E0 - 0x0004A0E7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A0E0(void)
{

loc_0004A0E0: ;
    eax = MEM32(ecx + 0x2E4);
    esp += 4; return; /* ret */

}

/**
 * sub_0004A0F0
 * Original: 0x0004A0F0 - 0x0004A0FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004A0F0: ;
    _fb = (uint32_t)(0x2C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00130B10(); return; /* tail jmp 0x00130B10 */

}

/**
 * sub_0004A100
 * Original: 0x0004A100 - 0x0004A10D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A100(void)
{

loc_0004A100: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1764) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004A110
 * Original: 0x0004A110 - 0x0004A117 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A110(void)
{

loc_0004A110: ;
    eax = ecx + 0xBA4;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A120
 * Original: 0x0004A120 - 0x0004A127 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A120(void)
{

loc_0004A120: ;
    eax = ecx + 0x1480;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A130
 * Original: 0x0004A130 - 0x0004A136 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A130(void)
{

loc_0004A130: ;
    eax = MEM32(0x3205C0);
    esp += 4; return; /* ret */

}

/**
 * sub_0004A140
 * Original: 0x0004A140 - 0x0004A147 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A140(void)
{

loc_0004A140: ;
    eax = ecx + 0x1768;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A150
 * Original: 0x0004A150 - 0x0004A157 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A150(void)
{

loc_0004A150: ;
    eax = ecx + 0x1CA8;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A160
 * Original: 0x0004A160 - 0x0004A167 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A160(void)
{

loc_0004A160: ;
    eax = ecx + 0x2C8;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A170
 * Original: 0x0004A170 - 0x0004A177 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A170(void)
{

loc_0004A170: ;
    eax = ecx + 0x1CF0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A180
 * Original: 0x0004A180 - 0x0004A187 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A180(void)
{

loc_0004A180: ;
    eax = ecx + 0x1DC8;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A190
 * Original: 0x0004A190 - 0x0004A196 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A190(void)
{

loc_0004A190: ;
    eax = 0x5A54D90F;
    esp += 4; return; /* ret */

}

/**
 * sub_0004A1A0
 * Original: 0x0004A1A0 - 0x0004A1A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A1A0(void)
{

loc_0004A1A0: ;
    eax = MEM32(0x30D3B0);
    esp += 4; return; /* ret */

}

/**
 * sub_0004A1B0
 * Original: 0x0004A1B0 - 0x0004A1BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004A1B0: ;
    _fb = (uint32_t)(0x2C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001303D0(); return; /* tail jmp 0x001303D0 */

}

/**
 * sub_0004A1C0
 * Original: 0x0004A1C0 - 0x0004A1CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004A1C0: ;
    _fb = (uint32_t)(0x2C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00130390(); return; /* tail jmp 0x00130390 */

}

/**
 * sub_0004A1D0
 * Original: 0x0004A1D0 - 0x0004A6D8 (1288 bytes, 363 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004A1D0(void)
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

loc_0004A1D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x954) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x954));
    esp = esp - 0x954;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A1EAu); RECOMP_ABI_CALL(0x0003F130u, sub_0003F130); /* call 0x0003F130 */

loc_0004A1EA: ;
    edi = MEM32(ebx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A1FBu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0004A1FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x0004A201u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A1FEu); } /* indirect call */
    }

loc_0004A201: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0004A20Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A20Au); } /* indirect call */
    }

loc_0004A20D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx + 0x280) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0004A29D; /* je: equal / zero */

loc_0004A21B: ;
    edx = MEM32(ebx + 0x3C);
    edi = ebx + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0004A227u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A224u); } /* indirect call */
    }

loc_0004A227: ;
    eax = ebx + 0xB0;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A235u); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_0004A235: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0004A23Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A239u); } /* indirect call */
    }

loc_0004A23C: ;
    ecx = MEM32(ebx + 0x280);
    edi = ebx + 0x1D8;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A250u); RECOMP_ABI_CALL(0x001F5200u, sub_001F5200); /* call 0x001F5200 */

loc_0004A250: ;
    eax = ebx + 0xB0;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A25Eu); RECOMP_ABI_CALL(0x001F3CE0u, sub_001F3CE0); /* call 0x001F3CE0 */

loc_0004A25E: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0004A265u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A262u); } /* indirect call */
    }

loc_0004A265: ;
    SET_LO8(eax, MEM8(edi + 0x24));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi + 0x24) = LO8(eax);
    SET_LO8(edx, LO8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0xFD);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = ebx + 0x19D4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(edi + 0x24) = LO8(edx);
    MEM32(ebx + 0x5C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0004A28B; /* je: equal / zero */

loc_0004A282: ;
    ecx = ebx + 0x60;
    MEM32(eax + 0x2D0) = ecx;

loc_0004A28B: ;
    edx = ebx + 0x60;
    eax = ebx + 0x17CC;
    MEM32(ebx + 0x1CA4) = edx;
    MEM32(ebx + 0x70) = eax;

loc_0004A29D: ;
    edi = ebx + 0x19D4;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A2AAu); RECOMP_ABI_CALL(0x00203C10u, sub_00203C10); /* call 0x00203C10 */

loc_0004A2AA: ;
    ecx = ebx + 0x18D4;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A2B8u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0004A2B8: ;
    MEM32(ebx + 0x17CC) = 0;
    ecx = MEM32(0x643844);
    eax = MEM32(ebx + 0x58);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438A8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x6438B4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A2E6u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0004A2E6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0004A2F4; /* jge: greater or equal (signed >=) */

loc_0004A2ED: ;
    eax = 0x6438B8;
    goto loc_0004A2FD;

loc_0004A2F4: ;
    edx = MEM32(0x6438B0);
    eax = edx + eax * 4;

loc_0004A2FD: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + 4) = eax;
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60)) >> 32) & 1);
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp + 0x6C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x70) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x74) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x78) = ecx;
    edx = MEM32(eax + 0x10);
    ecx = esp + 0x90;
    MEM32(esp + 0x7C) = edx;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x84) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A348u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0004A348: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    PUSH32(esp, 1);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 8);
    PUSH32(esp, 0);
    eax = esp + 0x2B;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A37Eu); RECOMP_ABI_CALL(0x0012D6A0u, sub_0012D6A0); /* call 0x0012D6A0 */

loc_0004A37E: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x2DC090)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0004A3D6; /* jbe: below or equal (unsigned <=) */

loc_0004A397: ;
    ecx = esp + 0x158;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A3A3u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0004A3A3: ;
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0xC39491E5u);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A3B6u); RECOMP_ABI_CALL(0x001EAFF0u, sub_001EAFF0); /* call 0x001EAFF0 */

loc_0004A3B6: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x15C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A3C7u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0004A3C7: ;
    ecx = esp + 0x158;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A3D6u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_0004A3D6: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebx + 0x2C8;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A3E8u); RECOMP_ABI_CALL(0x0013B0E0u, sub_0013B0E0); /* call 0x0013B0E0 */

loc_0004A3E8: ;
    ecx = ebx + 0x2C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A3F3u); RECOMP_ABI_CALL(0x00139230u, sub_00139230); /* call 0x00139230 */

loc_0004A3F3: ;
    eax = esp + 0x110;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A402u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0004A402: ;
    ecx = MEM32(ebx + 0x9C);
    edx = ebx + 0x1768;
    MEM32(ebx + 0x177C) = ecx;
    PUSH32(esp, edx);
    ecx = 0x37E158;
    MEM32(ebx + 0x17C4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A425u); RECOMP_ABI_CALL(0x001543C0u, sub_001543C0); /* call 0x001543C0 */

loc_0004A425: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx + 0x1480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A432u); RECOMP_ABI_CALL(0x0016CC20u, sub_0016CC20); /* call 0x0016CC20 */

loc_0004A432: ;
    eax = MEM32(ebx);
    ecx = ebx;
    MEM32(ebx + 0x1484) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004A442u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A43Cu); } /* indirect call */
    }

loc_0004A442: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A458; /* je: equal / zero */

loc_0004A446: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0004A451u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A44Bu); } /* indirect call */
    }

loc_0004A451: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A458u); RECOMP_ABI_CALL(0x00041050u, sub_00041050); /* call 0x00041050 */

loc_0004A458: ;
    ecx = ebx + 0xBA4;
    PUSH32(esp, esi);
    MEM32(ecx) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A466u); RECOMP_ABI_CALL(0x00168030u, sub_00168030); /* call 0x00168030 */

loc_0004A466: ;
    PUSH32(esp, 0x933B5BDEu);
    MEM8(ebx + 0x1CED) = 0;
    MEM8(ebx + 0x1CEE) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A47Eu); RECOMP_ABI_CALL(0x00202D40u, sub_00202D40); /* call 0x00202D40 */

loc_0004A47E: ;
    edi = ebx + 0x1DC8;
    MEM32(ebx + 0x1CE8) = eax;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004A493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A491u); } /* indirect call */
    }

loc_0004A493: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A49Bu); RECOMP_ABI_CALL(0x0014F580u, sub_0014F580); /* call 0x0014F580 */

loc_0004A49B: ;
    edx = MEM32(esi);
    edi = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F260A9C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0004A4A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A4A6u); } /* indirect call */
    }

loc_0004A4A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx + 0x1DC8;
    { uint32_t _icall_target = MEM32(edi + 0x10); PUSH32(esp, 0x0004A4B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A4B0u); } /* indirect call */
    }

loc_0004A4B3: ;
    eax = ebx + 0x2C8;
    PUSH32(esp, eax);
    ecx = ebx + 0x3F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A4C5u); RECOMP_ABI_CALL(0x00143840u, sub_00143840); /* call 0x00143840 */

loc_0004A4C5: ;
    ecx = MEM32(0x2E1ECC);
    edx = MEM32(0x2E1ED0);
    eax = MEM32(0x2E1EC8);
    MEM32(esp + 0x30) = ecx;
    SET_LO16(ecx, MEM16(0x2E1ED8));
    MEM16(esp + 0x3C) = LO16(ecx);
    ecx = MEM32(0x2DDC08);
    MEM32(esp + 0x34) = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x50) = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(0x2E1ED4);
    MEM32(esp + 0x3E) = edx;
    MEM32(esp + 0x5A) = ecx;
    MEM32(esp + 0x42) = edx;
    MEM32(esp + 0x38) = eax;
    eax = MEM32(0x2DDC04);
    MEM32(esp + 0x5E) = ecx;
    MEM32(esp + 0x46) = edx;
    MEM32(esp + 0x62) = ecx;
    MEM16(esp + 0x4A) = LO16(edx);
    edx = MEM32(0x2DDC0C);
    MEM32(esp + 0x4C) = eax;
    SET_LO16(eax, MEM16(0x2DDC10));
    MEM32(esp + 0x66) = ecx;
    edi = ebx + 0x298;
    MEM32(esp + 0x54) = edx;
    MEM16(esp + 0x58) = LO16(eax);
    MEM16(esp + 0x6A) = LO16(ecx);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0xC) = 6;
    goto loc_0004A560;

    /* nop */

loc_0004A560: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A56Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0004A56A: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0004A575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A572u); } /* indirect call */
    }

loc_0004A575: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A5EA; /* je: equal / zero */

loc_0004A579: ;
    ecx = MEM32(0x2DC380);
    edx = MEM32(0x2DC384);
    MEM32(esp + 0x90) = ecx;
    SET_LO16(ecx, MEM16(0x2DC388));
    MEM32(esp + 0x94) = edx;
    MEM16(esp + 0x98) = LO16(ecx);
    edx = eax;

loc_0004A5A4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0004A5A4; /* jne: not equal / not zero */

loc_0004A5AB: ;
    edi = esp + 0x90;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0004A5B5: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0004A5B5; /* jne: not equal / not zero */

loc_0004A5BD: ;
    ecx = eax;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    edx = esp + 0x90;
    _cf = 0; /* logical op clears CF */
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A5DAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0004A5DA: ;
    ecx = MEM32(esp + 0x20);
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    edi = ecx;
    goto loc_0004A5F0;

loc_0004A5EA: ;
    MEM32(edi) = 0;

loc_0004A5F0: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A5FAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0004A5FA: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0004A605u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A602u); } /* indirect call */
    }

loc_0004A605: ;
    SET_LO8(edx, MEM8(esp + 0x58));
    MEM32(edi + 0x18) = eax;
    MEM8(esp + 0x3C) = MEM8(esp + 0x3C) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x3C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + 0x58) = LO8(edx);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_0004A560; /* jne: not equal / not zero */

loc_0004A62C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x288) = eax;
    MEM8(ebx + 0x1CEC) = LO8(eax);
    MEM32(ebx + 0x28C) = eax;
    MEM32(ebx + 0x294) = eax;
    MEM32(ebx + 0x1DC0) = eax;
    MEM8(ebx + 0x1DC4) = LO8(eax);
    eax = MEM32(esp + 0x14);
    MEMF(ebx + 0x290) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x88);
    eax = MEM32(ebx + 0x1CF0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    edx = ebx + 0x1D80;
    PUSH32(esp, edx);
    edx = MEM32(ebx);
    MEM32(esp + 0x14) = eax;
    eax = ebx + 0x2C8;
    PUSH32(esp, eax);
    eax = ebx + 0xB0;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0004A696u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A690u); } /* indirect call */
    }

loc_0004A696: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    edi = ebx + 0x1CF0;
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0004A6ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A6A8u); } /* indirect call */
    }

loc_0004A6AB: ;
    eax = ebx + 0x17CC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A6BAu); RECOMP_ABI_CALL(0x000B35F0u, sub_000B35F0); /* call 0x000B35F0 */

loc_0004A6BA: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A6C1u); RECOMP_ABI_CALL(0x00203920u, sub_00203920); /* call 0x00203920 */

loc_0004A6C1: ;
    ecx = ebx;
    MEM8(ebx + 0xBA0) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A6CFu); RECOMP_ABI_CALL(0x00041F90u, sub_00041F90); /* call 0x00041F90 */

loc_0004A6CF: ;
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
 * sub_0004A6E0
 * Original: 0x0004A6E0 - 0x0004A770 (144 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004A6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004A6E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0004A6EFu); RECOMP_ABI_CALL(0x0003FB50u, sub_0003FB50); /* call 0x0003FB50 */

loc_0004A6EF: ;
    ecx = esi;
    PUSH32(esp, 0x0004A6F6u); RECOMP_ABI_CALL(0x00049C30u, sub_00049C30); /* call 0x00049C30 */

loc_0004A6F6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A70F; /* je: equal / zero */

loc_0004A6FC: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0004A703u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A700u); } /* indirect call */
    }

loc_0004A703: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A70F; /* je: equal / zero */

loc_0004A707: ;
    MEM32(0x31BDF0) = esi;
    goto loc_0004A71D;

loc_0004A70F: ;
    _fa = (uint32_t)(MEM32(0x31BDF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x31BDF0), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004A71D; /* jne: not equal / not zero */

loc_0004A717: ;
    MEM32(0x31BDF0) = edi;

loc_0004A71D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A72B; /* je: equal / zero */

loc_0004A721: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x0004A72Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A725u); } /* indirect call */
    }

loc_0004A72B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004A735u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A72Fu); } /* indirect call */
    }

loc_0004A735: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004A76A; /* jle: less or equal (signed <=) */

loc_0004A73A: ;
    /* nop */

loc_0004A740: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0004A74Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A746u); } /* indirect call */
    }

loc_0004A74C: ;
    ecx = eax;
    PUSH32(esp, 0x0004A753u); RECOMP_ABI_CALL(0x0003EAB0u, sub_0003EAB0); /* call 0x0003EAB0 */

loc_0004A753: ;
    ecx = eax;
    PUSH32(esp, 0x0004A75Au); RECOMP_ABI_CALL(0x0003AF10u, sub_0003AF10); /* call 0x0003AF10 */

loc_0004A75A: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004A765u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A75Fu); } /* indirect call */
    }

loc_0004A765: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004A740; /* jl: less (signed <) */

loc_0004A76A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004A770
 * Original: 0x0004A770 - 0x0004AA4B (731 bytes, 211 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004A770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0004A770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x94));
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esp + 0x30;
    edi = esi + 0x2C8;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A793u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0004A793: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A79Fu); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_0004A79F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A7A6u); RECOMP_ABI_CALL(0x0003E960u, sub_0003E960); /* call 0x0003E960 */

loc_0004A7A6: ;
    eax = MEM32(esi + 0x288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A7C3; /* je: equal / zero */

loc_0004A7B0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A7B6u); RECOMP_ABI_CALL(0x000A6960u, sub_000A6960); /* call 0x000A6960 */

loc_0004A7B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x288) = 0;

loc_0004A7C3: ;
    eax = MEM32(esi + 0x294);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A7DD; /* je: equal / zero */

loc_0004A7CD: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A7DAu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0004A7DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004A7DD: ;
    eax = MEM32(esi);
    ecx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0004A7E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A7E6u); } /* indirect call */
    }

loc_0004A7E9: ;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x280);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438A8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ecx;
    ecx = MEM32(0x6438B4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A80Eu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0004A80E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0004A81C; /* jge: greater or equal (signed >=) */

loc_0004A815: ;
    eax = 0x6438B8;
    goto loc_0004A825;

loc_0004A81C: ;
    edx = MEM32(0x6438B0);
    eax = edx + eax * 4;

loc_0004A825: ;
    edi = MEM32(eax);
    ecx = esp + 0x18;
    MEM32(ebx + 4) = edi;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0004A836u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A833u); } /* indirect call */
    }

loc_0004A836: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004A895; /* je: equal / zero */

loc_0004A83A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0004A844u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A83Eu); } /* indirect call */
    }

loc_0004A844: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32E89B1C);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A864u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0004A864: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0004A895; /* jle: less or equal (signed <=) */

loc_0004A868: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_0004A895: ;
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
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
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
    MEM32(0x30EFF0) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((8) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3F4); /* mulss */
    ecx = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0004A90Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A90Au); } /* indirect call */
    }

loc_0004A90D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DD6CC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0004A9A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A9A1u); } /* indirect call */
    }

loc_0004A9A7: ;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A9B4u); RECOMP_ABI_CALL(0x00011BD0u, sub_00011BD0); /* call 0x00011BD0 */

loc_0004A9B4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A9BFu); RECOMP_ABI_CALL(0x000130A0u, sub_000130A0); /* call 0x000130A0 */

loc_0004A9BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A9CDu); RECOMP_ABI_CALL(0x00038AA0u, sub_00038AA0); /* call 0x00038AA0 */

loc_0004A9CD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    edx = MEM32(edi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0004A9E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A9DBu); } /* indirect call */
    }

loc_0004A9E1: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A9E8u); RECOMP_ABI_CALL(0x00130EF0u, sub_00130EF0); /* call 0x00130EF0 */

loc_0004A9E8: ;
    edx = MEM32(edi);
    eax = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0004A9F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004A9F1u); } /* indirect call */
    }

loc_0004A9F7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004A9FEu); RECOMP_ABI_CALL(0x00130E80u, sub_00130E80); /* call 0x00130E80 */

loc_0004A9FE: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B4); PUSH32(esp, 0x0004AA08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AA02u); } /* indirect call */
    }

loc_0004AA08: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0004AA19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AA16u); } /* indirect call */
    }

loc_0004AA19: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004AA2Au); RECOMP_ABI_CALL(0x00049F30u, sub_00049F30); /* call 0x00049F30 */

loc_0004AA2A: ;
    SET_LO8(eax, MEM8(esi + 0x1CED));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AA39; /* je: equal / zero */

loc_0004AA34: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004AA39u); RECOMP_ABI_CALL(0x0010FC10u, sub_0010FC10); /* call 0x0010FC10 */

loc_0004AA39: ;
    ecx = esi + 0xBA4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004AA44u); RECOMP_ABI_CALL(0x00168390u, sub_00168390); /* call 0x00168390 */

loc_0004AA44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0004AA50
 * Original: 0x0004AA50 - 0x0004AC70 (544 bytes, 146 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004AA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0004AA50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    eax = ecx + 8;
    edx = MEM32(eax);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;
    eax = ebx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edx;
    MEM8(esi + 0x1DC4) = 0;
    if (CMP_A(_fa, _fb)) goto loc_0004AC5F; /* ja: above (unsigned >) */

loc_0004AA98: ;
    edx = ZX8(MEM8(eax + 0x4AC78));
    { uint32_t _jt = MEM32(edx * 4 + 0x4AC70); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0004AAA6u) goto loc_0004AAA6;
    if (_jt == 0x0004AC5Fu) goto loc_0004AC5F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0004AAA6: ;
    eax = MEM32(esi + 0x280);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004AAB8u); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_0004AAB8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AB45; /* je: equal / zero */

loc_0004AAC2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0004AACCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AAC6u); } /* indirect call */
    }

loc_0004AACC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xEEB1A84Du);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004AAECu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0004AAEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004AB45; /* jle: less or equal (signed <=) */

loc_0004AAF0: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x78); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x74); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x70); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2E2198)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004AB45; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_0004AB3E: ;
    MEM8(esi + 0x1DC4) = 1;

loc_0004AB45: ;
    SET_LO8(eax, MEM8(esi + 0x1DC4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0004AB65; /* je: equal / zero */

loc_0004AB52: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_0004AB65: ;
    ecx = MEM32(esi + 0x1DC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AB9D; /* je: equal / zero */

loc_0004AB72: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AB98; /* je: equal / zero */

loc_0004AB77: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AB98; /* je: equal / zero */

loc_0004AB7C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AB98; /* je: equal / zero */

loc_0004AB81: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC090); /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    goto loc_0004AB9D;

loc_0004AB98: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_0004AB9D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AC30; /* je: equal / zero */

loc_0004ABA6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AC30; /* je: equal / zero */

loc_0004ABAF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004ABB1: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = 0x30EFF0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004ABC0u); RECOMP_ABI_CALL(0x00011ED0u, sub_00011ED0); /* call 0x00011ED0 */

loc_0004ABC0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004AC19u); RECOMP_ABI_CALL(0x000ADD30u, sub_000ADD30); /* call 0x000ADD30 */

loc_0004AC19: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004ABB1; /* jl: less (signed <) */

loc_0004AC22: ;
    edx = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004AC2Eu); RECOMP_ABI_CALL(0x000B11A0u, sub_000B11A0); /* call 0x000B11A0 */

loc_0004AC2E: ;
    goto loc_0004AC59;

loc_0004AC30: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004AC59u); RECOMP_ABI_CALL(0x000AFFA0u, sub_000AFFA0); /* call 0x000AFFA0 */

loc_0004AC59: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004AC5F: ;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004AC67u); RECOMP_ABI_CALL(0x0003FC40u, sub_0003FC40); /* call 0x0003FC40 */

loc_0004AC67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004AC90
 * Original: 0x0004AC90 - 0x0004AFD0 (832 bytes, 244 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AC90(void)
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

loc_0004AC90: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0004AF3C; /* ja: above (unsigned >) */

loc_0004ACA7: ;
    eax = ZX8(MEM8(eax + 0x4AF8C));
    { uint32_t _jt = MEM32(eax * 4 + 0x4AF54); /* switch: 14 entries, 14 targets */
    if (_jt == 0x0004ACB5u) goto loc_0004ACB5;
    if (_jt == 0x0004ACCDu) goto loc_0004ACCD;
    if (_jt == 0x0004ACE5u) goto loc_0004ACE5;
    if (_jt == 0x0004ACFDu) goto loc_0004ACFD;
    if (_jt == 0x0004AD15u) goto loc_0004AD15;
    if (_jt == 0x0004AD88u) goto loc_0004AD88;
    if (_jt == 0x0004ADFEu) goto loc_0004ADFE;
    if (_jt == 0x0004AE36u) goto loc_0004AE36;
    if (_jt == 0x0004AE6Bu) goto loc_0004AE6B;
    if (_jt == 0x0004AECBu) goto loc_0004AECB;
    if (_jt == 0x0004AEF9u) goto loc_0004AEF9;
    if (_jt == 0x0004AF27u) goto loc_0004AF27;
    if (_jt == 0x0004AF31u) goto loc_0004AF31;
    if (_jt == 0x0004AF3Cu) goto loc_0004AF3C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0004ACB5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x35C) = xmm0.f[0]; /* movss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004ACCD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x360) = xmm0.f[0]; /* movss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004ACE5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x364) = xmm0.f[0]; /* movss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004ACFD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x368) = xmm0.f[0]; /* movss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004AD15: ;
    eax = MEM32(esi + 0xB80);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0004AD73; /* je: equal / zero */

loc_0004AD20: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0004AF27; /* jne: not equal / not zero */

loc_0004AD27: ;
    edi = esi + 0x3F0;
    ecx = edi;
    PUSH32(esp, 0x0004AD34u); RECOMP_ABI_CALL(0x001438F0u, sub_001438F0); /* call 0x001438F0 */

loc_0004AD34: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0004AD40u); RECOMP_ABI_CALL(0x00143970u, sub_00143970); /* call 0x00143970 */

loc_0004AD40: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF27; /* je: equal / zero */

loc_0004AD48: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCF55D505u);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0004AD59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AD56u); } /* indirect call */
    }

loc_0004AD59: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004AD66u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0004AD66: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004AD73: ;
    ecx = esi + 0x3F0;
    PUSH32(esp, 0x0004AD7Eu); RECOMP_ABI_CALL(0x00143940u, sub_00143940); /* call 0x00143940 */

loc_0004AD7E: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004AD88: ;
    eax = MEM32(esi + 0xB80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004ADE7; /* je: equal / zero */

loc_0004AD92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0004AF27; /* jne: not equal / not zero */

loc_0004AD9B: ;
    edi = esi + 0x3F0;
    ecx = edi;
    PUSH32(esp, 0x0004ADA8u); RECOMP_ABI_CALL(0x001438F0u, sub_001438F0); /* call 0x001438F0 */

loc_0004ADA8: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0004ADB4u); RECOMP_ABI_CALL(0x00143970u, sub_00143970); /* call 0x00143970 */

loc_0004ADB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF27; /* je: equal / zero */

loc_0004ADBC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCF55D505u);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0004ADCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004ADCAu); } /* indirect call */
    }

loc_0004ADCD: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004ADDAu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0004ADDA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004ADE7: ;
    PUSH32(esp, 0);
    ecx = esi + 0x3F0;
    PUSH32(esp, 0x0004ADF4u); RECOMP_ABI_CALL(0x00145CC0u, sub_00145CC0); /* call 0x00145CC0 */

loc_0004ADF4: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004ADFE: ;
    ecx = esi;
    PUSH32(esp, 0x0004AE05u); RECOMP_ABI_CALL(0x00049CD0u, sub_00049CD0); /* call 0x00049CD0 */

loc_0004AE05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AE1A; /* je: equal / zero */

loc_0004AE09: ;
    MEM8(esp + 0x34) = 0;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    goto loc_0004AEB0;

loc_0004AE1A: ;
    eax = MEM32(esi + 0x1DC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF27; /* je: equal / zero */

loc_0004AE28: ;
    MEM8(esp + 0x34) = 1;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    goto loc_0004AEB0;

loc_0004AE36: ;
    ecx = esi;
    PUSH32(esp, 0x0004AE3Du); RECOMP_ABI_CALL(0x00049CD0u, sub_00049CD0); /* call 0x00049CD0 */

loc_0004AE3D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AE4F; /* je: equal / zero */

loc_0004AE41: ;
    MEM8(esp + 0x34) = 0;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    goto loc_0004AEB0;

loc_0004AE4F: ;
    eax = MEM32(esi + 0x1DC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF27; /* je: equal / zero */

loc_0004AE5D: ;
    MEM8(esp + 0x34) = 1;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    goto loc_0004AEB0;

loc_0004AE6B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x0004AE75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AE6Fu); } /* indirect call */
    }

loc_0004AE75: ;
    ecx = eax;
    PUSH32(esp, 0x0004AE7Cu); RECOMP_ABI_CALL(0x00162310u, sub_00162310); /* call 0x00162310 */

loc_0004AE7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0004AF27; /* jne: not equal / not zero */

loc_0004AE84: ;
    ecx = esi;
    PUSH32(esp, 0x0004AE8Bu); RECOMP_ABI_CALL(0x00049CD0u, sub_00049CD0); /* call 0x00049CD0 */

loc_0004AE8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AE96; /* je: equal / zero */

loc_0004AE8F: ;
    MEM8(esp + 0x34) = 0;
    goto loc_0004AEA9;

loc_0004AE96: ;
    eax = MEM32(esi + 0x1DC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF27; /* je: equal / zero */

loc_0004AEA4: ;
    MEM8(esp + 0x34) = 1;

loc_0004AEA9: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);

loc_0004AEB0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x0004AEBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AEB4u); } /* indirect call */
    }

loc_0004AEBA: ;
    ecx = eax;
    PUSH32(esp, 0x0004AEC1u); RECOMP_ABI_CALL(0x00167220u, sub_00167220); /* call 0x00167220 */

loc_0004AEC1: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004AECB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004AF27; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0004AEDA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004AEE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AEDEu); } /* indirect call */
    }

loc_0004AEE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF27; /* je: equal / zero */

loc_0004AEE8: ;
    POP32(esp, edi);
    MEM8(esi + 0xBA0) = 1;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004AEF9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004AF27; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0004AF08: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0004AF12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AF0Cu); } /* indirect call */
    }

loc_0004AF12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF27; /* je: equal / zero */

loc_0004AF16: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004AF20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AF1Au); } /* indirect call */
    }

loc_0004AF20: ;
    ecx = eax;
    PUSH32(esp, 0x0004AF27u); RECOMP_ABI_CALL(0x00041570u, sub_00041570); /* call 0x00041570 */

loc_0004AF27: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0004AF31: ;
    ecx = esi + 0x1DC8;
    PUSH32(esp, 0x0004AF3Cu); RECOMP_ABI_CALL(0x0014F500u, sub_0014F500); /* call 0x0014F500 */

loc_0004AF3C: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004AF49u); RECOMP_ABI_CALL(0x00041C50u, sub_00041C50); /* call 0x00041C50 */

loc_0004AF49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    g_seh_ebp = ebp; sub_0004AFD0(); return; /* fallthrough 0x0004AFD0 */

}

/**
 * sub_0004ADE0
 * Original: 0x0004ADE0 - 0x0004AE66 (134 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004ADE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004ADE0: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AE1A; /* je: equal / zero */

loc_0004AE09: ;
    MEM8(esp + 0x34) = 0;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    g_seh_ebp = ebp; sub_0004AEB0(); return; /* tail jmp 0x0004AEB0 */

loc_0004AE1A: ;
    eax = MEM32(esi + 0x1DC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0004AF27(); return; } /* je: equal / zero */

loc_0004AE28: ;
    MEM8(esp + 0x34) = 1;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    g_seh_ebp = ebp; sub_0004AEB0(); return; /* tail jmp 0x0004AEB0 */

    ecx = esi;
    PUSH32(esp, 0x0004AE3Du); RECOMP_ABI_CALL(0x00049CD0u, sub_00049CD0); /* call 0x00049CD0 */

loc_0004AE3D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AE4F; /* je: equal / zero */

loc_0004AE41: ;
    MEM8(esp + 0x34) = 0;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_0004AEB0(); return; /* tail jmp 0x0004AEB0 */

loc_0004AE4F: ;
    eax = MEM32(esi + 0x1DC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0004AF27(); return; } /* je: equal / zero */

loc_0004AE5D: ;
    MEM8(esp + 0x34) = 1;
    eax = MEM32(esp + 0x34);

    g_seh_ebp = ebp; sub_0004AE66(); return; /* fallthrough 0x0004AE66 */

}

/**
 * sub_0004AE66
 * Original: 0x0004AE66 - 0x0004AFD0 (362 bytes, 98 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AE66(void)
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

loc_0004AE66: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    goto loc_0004AEB0;

    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x0004AE75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AE6Fu); } /* indirect call */
    }

loc_0004AE75: ;
    ecx = eax;
    PUSH32(esp, 0x0004AE7Cu); RECOMP_ABI_CALL(0x00162310u, sub_00162310); /* call 0x00162310 */

loc_0004AE7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0004AF27; /* jne: not equal / not zero */

loc_0004AE84: ;
    ecx = esi;
    PUSH32(esp, 0x0004AE8Bu); RECOMP_ABI_CALL(0x00049CD0u, sub_00049CD0); /* call 0x00049CD0 */

loc_0004AE8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AE96; /* je: equal / zero */

loc_0004AE8F: ;
    MEM8(esp + 0x34) = 0;
    goto loc_0004AEA9;

loc_0004AE96: ;
    eax = MEM32(esi + 0x1DC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF27; /* je: equal / zero */

loc_0004AEA4: ;
    MEM8(esp + 0x34) = 1;

loc_0004AEA9: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);

loc_0004AEB0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x0004AEBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AEB4u); } /* indirect call */
    }

loc_0004AEBA: ;
    ecx = eax;
    PUSH32(esp, 0x0004AEC1u); RECOMP_ABI_CALL(0x00167220u, sub_00167220); /* call 0x00167220 */

loc_0004AEC1: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004AEE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AEDEu); } /* indirect call */
    }

loc_0004AEE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF27; /* je: equal / zero */

loc_0004AEE8: ;
    POP32(esp, edi);
    MEM8(esi + 0xBA0) = 1;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0004AF12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AF0Cu); } /* indirect call */
    }

loc_0004AF12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AF27; /* je: equal / zero */

loc_0004AF16: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004AF20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AF1Au); } /* indirect call */
    }

loc_0004AF20: ;
    ecx = eax;
    PUSH32(esp, 0x0004AF27u); RECOMP_ABI_CALL(0x00041570u, sub_00041570); /* call 0x00041570 */

loc_0004AF27: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004AF49u); RECOMP_ABI_CALL(0x00041C50u, sub_00041C50); /* call 0x00041C50 */

loc_0004AF49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    g_seh_ebp = ebp; sub_0004AFD0(); return; /* fallthrough 0x0004AFD0 */

}

/**
 * sub_0004AEB0
 * Original: 0x0004AEB0 - 0x0004AF27 (119 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AEB0(void)
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

loc_0004AEB0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x0004AEBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AEB4u); } /* indirect call */
    }

loc_0004AEBA: ;
    ecx = eax;
    PUSH32(esp, 0x0004AEC1u); RECOMP_ABI_CALL(0x00167220u, sub_00167220); /* call 0x00167220 */

loc_0004AEC1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004AEE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AEDEu); } /* indirect call */
    }

loc_0004AEE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0004AF27(); return; } /* je: equal / zero */

loc_0004AEE8: ;
    POP32(esp, edi);
    MEM8(esi + 0xBA0) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0004AF12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AF0Cu); } /* indirect call */
    }

loc_0004AF12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0004AF27(); return; } /* je: equal / zero */

loc_0004AF16: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004AF20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004AF1Au); } /* indirect call */
    }

loc_0004AF20: ;
    ecx = eax;
    PUSH32(esp, 0x0004AF27u); RECOMP_ABI_CALL(0x00041570u, sub_00041570); /* call 0x00041570 */

    g_seh_ebp = ebp; sub_0004AF27(); return; /* fallthrough 0x0004AF27 */

}

/**
 * sub_0004AF27
 * Original: 0x0004AF27 - 0x0004AFD0 (169 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AF27(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004AF27: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004AF49u); RECOMP_ABI_CALL(0x00041C50u, sub_00041C50); /* call 0x00041C50 */

loc_0004AF49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    g_seh_ebp = ebp; sub_0004AFD0(); return; /* fallthrough 0x0004AFD0 */

}

/**
 * sub_0004AFD0
 * Original: 0x0004AFD0 - 0x0004B058 (136 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004AFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004AFD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B6EF5D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B6EF5D2 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0004B016; /* je: equal / zero */

loc_0004AFDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90F6B599u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x90F6B599u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B010; /* je: equal / zero */

loc_0004AFE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB229EE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB229EE0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004AFF6; /* je: equal / zero */

loc_0004AFEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004AFF2u); RECOMP_ABI_CALL(0x000403B0u, sub_000403B0); /* call 0x000403B0 */

loc_0004AFF2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0004AFF6: ;
    eax = MEM32(esi + 0x1460);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x146D);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

loc_0004B010: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0004B016: ;
    ecx = MEM32(esi + 0x1460);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B042; /* je: equal / zero */

loc_0004B020: ;
    PUSH32(esp, 0x0004B025u); RECOMP_ABI_CALL(0x001624B0u, sub_001624B0); /* call 0x001624B0 */

loc_0004B025: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004B042; /* jne: not equal / not zero */

loc_0004B029: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x146C);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

loc_0004B042: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x146C);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B060
 * Original: 0x0004B060 - 0x0004B1D5 (373 bytes, 107 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004B060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B060: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0004B090; /* je: equal / zero */

loc_0004B075: ;
    MEM32(esi + 0x1DC0) = 1;
    MEM32(esp + 0x14) = 0xEEB1A84Du;
    MEM8(esi + 0x1D49) = 1;
    goto loc_0004B0A9;

loc_0004B090: ;
    MEM32(esi + 0x1DC0) = 2;
    MEM32(esp + 0x14) = 0xC0812ED3u;
    MEM8(esi + 0x1D48) = 1;

loc_0004B0A9: ;
    PUSH32(esp, eax);
    ecx = esi + 0x2C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004B0B5u); RECOMP_ABI_CALL(0x0013A880u, sub_0013A880); /* call 0x0013A880 */

loc_0004B0B5: ;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x280);
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
    PUSH32(esp, 0x0004B0DAu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0004B0DA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004B0E8; /* jge: greater or equal (signed >=) */

loc_0004B0E1: ;
    eax = 0x6438B8;
    goto loc_0004B0F1;

loc_0004B0E8: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0004B0F1: ;
    edi = MEM32(eax);
    eax = esp + 0x24;
    MEM32(ebx + 4) = edi;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0004B102u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B0FFu); } /* indirect call */
    }

loc_0004B102: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(0x30F064);
    edx = MEM32(0x30F068);
    eax = MEM32(0x30F06C);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0004B199; /* je: equal / zero */

loc_0004B123: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0004B12Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B127u); } /* indirect call */
    }

loc_0004B12D: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004B14Du); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0004B14D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004B199; /* jle: less or equal (signed <=) */

loc_0004B151: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_0004B199: ;
    PUSH32(esp, 0x36347749);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004B1A5u); RECOMP_ABI_CALL(0x001EA000u, sub_001EA000); /* call 0x001EA000 */

loc_0004B1A5: ;
    PUSH32(esp, 1);
    edi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004B1BFu); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_0004B1BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004B1C9u); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_0004B1C9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B1E0
 * Original: 0x0004B1E0 - 0x0004B32A (330 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B1E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B1E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24132C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x0004B204u); RECOMP_ABI_CALL(0x0003ED40u, sub_0003ED40); /* call 0x0003ED40 */

loc_0004B204: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x2C8;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi) = 0x2E1F08;
    PUSH32(esp, 0x0004B21Bu); RECOMP_ABI_CALL(0x00139780u, sub_00139780); /* call 0x00139780 */

loc_0004B21B: ;
    ecx = esi + 0x3F0;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x0004B22Bu); RECOMP_ABI_CALL(0x001441A0u, sub_001441A0); /* call 0x001441A0 */

loc_0004B22B: ;
    ecx = esi + 0xBA4;
    MEM8(esp + 0x18) = 2;
    PUSH32(esp, 0x0004B23Bu); RECOMP_ABI_CALL(0x00166F10u, sub_00166F10); /* call 0x00166F10 */

loc_0004B23B: ;
    ecx = esi + 0x1480;
    MEM8(esp + 0x18) = 3;
    PUSH32(esp, 0x0004B24Bu); RECOMP_ABI_CALL(0x0016D490u, sub_0016D490); /* call 0x0016D490 */

loc_0004B24B: ;
    ecx = esi + 0x1768;
    MEM8(esp + 0x18) = 4;
    PUSH32(esp, 0x0004B25Bu); RECOMP_ABI_CALL(0x00153A10u, sub_00153A10); /* call 0x00153A10 */

loc_0004B25B: ;
    eax = esi + 0x18D4;
    PUSH32(esp, 0x40);
    MEM32(esi + 0x17CC) = ebx;
    PUSH32(esp, eax);
    MEM8(esp + 0x20) = 5;
    MEM32(esi + 0x17D0) = ebx;
    PUSH32(esp, 0x0004B27Au); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0004B27A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x19D4;
    PUSH32(esp, 0x0004B288u); RECOMP_ABI_CALL(0x00203D00u, sub_00203D00); /* call 0x00203D00 */

loc_0004B288: ;
    MEM32(esi + 0x1CA8) = ebx;
    MEM32(esi + 0x1CAC) = ebx;
    MEM32(esi + 0x1CB0) = ebx;
    MEM32(esi + 0x1CB4) = ebx;
    MEM32(esi + 0x1CB8) = ebx;
    MEM32(esi + 0x1CE4) = esi;
    MEM32(esi + 0x1CBC) = ebx;
    MEM32(esi + 0x1CC0) = ebx;
    MEM32(esi + 0x1CC4) = ebx;
    MEM32(esi + 0x1CC8) = ebx;
    MEM32(esi + 0x1CCC) = ebx;
    edi = esi + 0x1CF0;
    ecx = edi;
    MEM8(esp + 0x18) = 6;
    MEM32(esi + 0x1CD0) = ebx;
    MEM32(esi + 0x1CD4) = ebx;
    MEM32(esi + 0x1CD8) = ebx;
    MEM32(esi + 0x1CDC) = ebx;
    MEM32(esi + 0x1CE0) = ebx;
    PUSH32(esp, 0x0004B2FAu); RECOMP_ABI_CALL(0x00203740u, sub_00203740); /* call 0x00203740 */

loc_0004B2FA: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi) = 0x2DD908;
    MEM32(esi + 0x1DC8) = 0x2E1EE0;
    MEM32(esi + 0x1764) = ebx;
    MEM8(esi + 0x1CEC) = LO8(ebx);
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
 * sub_0004B330
 * Original: 0x0004B330 - 0x0004B34E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B330: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004B338u); RECOMP_ABI_CALL(0x00049FB0u, sub_00049FB0); /* call 0x00049FB0 */

loc_0004B338: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004B348; /* je: equal / zero */

loc_0004B33F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004B345u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0004B345: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004B348: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B350
 * Original: 0x0004B350 - 0x0004B665 (789 bytes, 231 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B350(void)
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

loc_0004B350: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0004B360u); RECOMP_ABI_CALL(0x000420F0u, sub_000420F0); /* call 0x000420F0 */

loc_0004B360: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004B36B; /* jne: not equal / not zero */

loc_0004B364: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0004B36B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = esi + 0x2C8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004B37F; /* je: equal / zero */

loc_0004B378: ;
    ecx = ebp;
    PUSH32(esp, 0x0004B37Fu); RECOMP_ABI_CALL(0x00130170u, sub_00130170); /* call 0x00130170 */

loc_0004B37F: ;
    ecx = MEM32(esi + 0x98);
    edx = MEM32(esi);
    MEM32(esp + 0x10) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x0004B393u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B38Du); } /* indirect call */
    }

loc_0004B393: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    fp_push(MEMF(0x2DC3C4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0004B3C6; /* jbe: below or equal (unsigned <=) */

loc_0004B3A3: ;
    eax = MEM32(esi + 0x1DC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004B3C6; /* jne: not equal / not zero */

loc_0004B3AD: ;
    _fa = (uint32_t)(MEM8(esi + 0x124)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x124), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0004B3C6; /* jne: not equal / not zero */

loc_0004B3B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x1DC4));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004B3C6u); RECOMP_ABI_CALL(0x0004B060u, sub_0004B060); /* call 0x0004B060 */

loc_0004B3C6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0004B3D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B3CAu); } /* indirect call */
    }

loc_0004B3D0: ;
    edi = eax;
    SET_LO8(eax, MEM8(esi + 0x1CEC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0004B3F5; /* jne: not equal / not zero */

loc_0004B3DE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B4F5; /* je: equal / zero */

loc_0004B3E6: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0004B3EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B3EAu); } /* indirect call */
    }

loc_0004B3ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B4E2; /* je: equal / zero */

loc_0004B3F5: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0004B3FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B3FAu); } /* indirect call */
    }

loc_0004B3FD: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E219C); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004B42A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004B422: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_0004B43B;

loc_0004B42A: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0004B43B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0004B435: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0004B43B: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004B4E2; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0004B444: ;
    eax = MEM32(esi + 0x288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi);
    ecx = esp + 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_0004B46B; /* jne: not equal / not zero */

loc_0004B454: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0004B45Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B457u); } /* indirect call */
    }

loc_0004B45A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004B460u); RECOMP_ABI_CALL(0x000AFF30u, sub_000AFF30); /* call 0x000AFF30 */

loc_0004B460: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x288) = eax;
    goto loc_0004B486;

loc_0004B46B: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0004B476u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B473u); } /* indirect call */
    }

loc_0004B476: ;
    edx = MEM32(esi + 0x288);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004B483u); RECOMP_ABI_CALL(0x000ABC80u, sub_000ABC80); /* call 0x000ABC80 */

loc_0004B483: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004B486: ;
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0004B494u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B491u); } /* indirect call */
    }

loc_0004B494: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC880); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC084); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp + 0x18;
    PUSH32(esp, 0x41200000);
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0004B4DFu); RECOMP_ABI_CALL(0x000AD7A0u, sub_000AD7A0); /* call 0x000AD7A0 */

loc_0004B4DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004B4E2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B4F1; /* je: equal / zero */

loc_0004B4E6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B4F1; /* je: equal / zero */

loc_0004B4EA: ;
    ecx = ebp;
    PUSH32(esp, 0x0004B4F1u); RECOMP_ABI_CALL(0x00130170u, sub_00130170); /* call 0x00130170 */

loc_0004B4F1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B512; /* je: equal / zero */

loc_0004B4F5: ;
    eax = MEM32(esi + 0x288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B512; /* je: equal / zero */

loc_0004B4FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004B505u); RECOMP_ABI_CALL(0x000A6960u, sub_000A6960); /* call 0x000A6960 */

loc_0004B505: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x288) = 0;

loc_0004B512: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B572; /* je: equal / zero */

loc_0004B516: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0004B51Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B51Au); } /* indirect call */
    }

loc_0004B51D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B572; /* je: equal / zero */

loc_0004B521: ;
    eax = MEM32(esi + 0x1DC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B572; /* je: equal / zero */

loc_0004B52B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x290); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004B55C; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x290)) */

loc_0004B537: ;
    PUSH32(esp, 0x510459D3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004B543u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_0004B543: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC394)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x294) = eax;
    MEMF(esi + 0x290) = xmm0.f[0]; /* movss */

loc_0004B55C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x290)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    MEMF(esi + 0x290) = xmm0.f[0]; /* movss */

loc_0004B572: ;
    ecx = esi + 0x1D8;
    PUSH32(esp, 0x0004B57Du); RECOMP_ABI_CALL(0x001F3D00u, sub_001F3D00); /* call 0x001F3D00 */

loc_0004B57D: ;
    ecx = esi;
    PUSH32(esp, 0x0004B584u); RECOMP_ABI_CALL(0x00049BB0u, sub_00049BB0); /* call 0x00049BB0 */

loc_0004B584: ;
    SET_LO8(eax, MEM8(esi + 0xBA0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B5D1; /* je: equal / zero */

loc_0004B58E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0004B598u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B592u); } /* indirect call */
    }

loc_0004B598: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + ecx * 4 + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B5C0; /* je: equal / zero */

loc_0004B5A3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0004B5ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B5A7u); } /* indirect call */
    }

loc_0004B5AD: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + ecx * 4 + 0x14);
    eax = MEM32(esi + 0x1764);
    MEM32(edx + 0x218) = eax;

loc_0004B5C0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0004B5CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B5C4u); } /* indirect call */
    }

loc_0004B5CA: ;
    ecx = eax;
    PUSH32(esp, 0x0004B5D1u); RECOMP_ABI_CALL(0x00041620u, sub_00041620); /* call 0x00041620 */

loc_0004B5D1: ;
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    ecx = esi + 0xBA4;
    MEM8(esi + 0xBA0) = 0;
    PUSH32(esp, 0x0004B5E8u); RECOMP_ABI_CALL(0x00168A10u, sub_00168A10); /* call 0x00168A10 */

loc_0004B5E8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x234); PUSH32(esp, 0x0004B5F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B5ECu); } /* indirect call */
    }

loc_0004B5F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B601; /* je: equal / zero */

loc_0004B5F6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x274); PUSH32(esp, 0x0004B601u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B5FBu); } /* indirect call */
    }

loc_0004B601: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x1480;
    PUSH32(esp, 0x0004B60Du); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0004B60D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x0004B617u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B611u); } /* indirect call */
    }

loc_0004B617: ;
    SET_LO8(ecx, MEM8(eax + 0x8D0));
    edx = MEM32(esi + 0x1DC8);
    edi = esi + 0x1DC8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    ecx = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0004B639; /* je: equal / zero */

loc_0004B630: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0004B635u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B632u); } /* indirect call */
    }

loc_0004B635: ;
    PUSH32(esp, 2);
    goto loc_0004B640;

loc_0004B639: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0004B63Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B63Bu); } /* indirect call */
    }

loc_0004B63E: ;
    PUSH32(esp, 1);

loc_0004B640: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0004B64Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B644u); } /* indirect call */
    }

loc_0004B64A: ;
    ecx = eax;
    PUSH32(esp, 0x0004B651u); RECOMP_ABI_CALL(0x00041800u, sub_00041800); /* call 0x00041800 */

loc_0004B651: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0004B659u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B656u); } /* indirect call */
    }

loc_0004B659: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
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
 * sub_0004B670
 * Original: 0x0004B670 - 0x0004B67B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004B670: ;
    MEM32(ecx) = 0x2E21A8;
    g_seh_ebp = ebp; sub_00049FB0(); return; /* tail jmp 0x00049FB0 */

}

/**
 * sub_0004B680
 * Original: 0x0004B680 - 0x0004B686 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B680(void)
{

loc_0004B680: ;
    eax = 0x1F50;
    esp += 4; return; /* ret */

}

/**
 * sub_0004B690
 * Original: 0x0004B690 - 0x0004B6B1 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B690: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1F14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0004B6C0
 * Original: 0x0004B6C0 - 0x0004B6C7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B6C0(void)
{

loc_0004B6C0: ;
    eax = MEM32(ecx + 0x1F24);
    esp += 4; return; /* ret */

}

/**
 * sub_0004B6D0
 * Original: 0x0004B6D0 - 0x0004B6D5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004B6D0: ;
    g_seh_ebp = ebp; sub_0004A6E0(); return; /* tail jmp 0x0004A6E0 */

}

/**
 * sub_0004B6E0
 * Original: 0x0004B6E0 - 0x0004B708 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004B6E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0004B6EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B6E5u); } /* indirect call */
    }

loc_0004B6EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004B700; /* je: equal / zero */

loc_0004B6EF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0004B6F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B6F3u); } /* indirect call */
    }

loc_0004B6F9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0004B700u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004B6FDu); } /* indirect call */
    }

loc_0004B700: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0005DCE0(); return; /* tail jmp 0x0005DCE0 */

}

/**
 * sub_0004B710
 * Original: 0x0004B710 - 0x0004B757 (71 bytes, 16 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004B710(void)
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

loc_0004B710: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1E10); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004B72Cu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_0004B72C: ;
    MEMF(esi + 0x1E10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1E14); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004B74Au); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_0004B74A: ;
    MEMF(esi + 0x1E14) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004B760
 * Original: 0x0004B760 - 0x0004B777 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004B760: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004B768u); RECOMP_ABI_CALL(0x0004A770u, sub_0004A770); /* call 0x0004A770 */

loc_0004B768: ;
    eax = MEM32(esi);
    MEM8(esi + 0x1F48) = 1;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0004B780
 * Original: 0x0004B780 - 0x0004B785 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004B780: ;
    g_seh_ebp = ebp; sub_00049C40(); return; /* tail jmp 0x00049C40 */

}

/**
 * sub_0004B790
 * Original: 0x0004B790 - 0x0004B796 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B790(void)
{

loc_0004B790: ;
    eax = MEM32(0x30D3C0);
    esp += 4; return; /* ret */

}

/**
 * sub_0004B7A0
 * Original: 0x0004B7A0 - 0x0004B7B7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B7A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B7A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x2C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0004B7B1u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0004B7B1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B7C0
 * Original: 0x0004B7C0 - 0x0004B87B (187 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B7C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004B7C8u); RECOMP_ABI_CALL(0x0004B1E0u, sub_0004B1E0); /* call 0x0004B1E0 */

loc_0004B7C8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x2E21A8;
    SET_LO8(ecx, MEM8(esi + 0x1DFC));
    MEMF(esi + 0x1DF0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1DF4) = xmm0.f[0]; /* movss */
    eax = 0x80808080u;
    MEM32(esi + 0x1DF8) = eax;
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x1DFC) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x1E0C));
    MEM32(esi + 0x1E08) = eax;
    MEMF(esi + 0x1E00) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1E04) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 0xFB);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x1E0C) = LO8(edx);
    MEMF(esi + 0x1E10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1E14) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1F08) = eax;
    MEM32(esi + 0x1F0C) = eax;
    MEM32(esi + 0x1F10) = eax;
    MEM32(esi + 0x1F40) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x1E60) = eax;
    MEM32(esi + 0x1E64) = eax;
    MEM32(esi + 0x1EB0) = eax;
    MEM32(esi + 0x1EB4) = eax;
    MEM32(esi + 0x1F00) = eax;
    MEM32(esi + 0x1F04) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004B880
 * Original: 0x0004B880 - 0x0004B89E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B880: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004B888u); RECOMP_ABI_CALL(0x0004B670u, sub_0004B670); /* call 0x0004B670 */

loc_0004B888: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004B898; /* je: equal / zero */

loc_0004B88F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004B895u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0004B895: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004B898: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004B8A0
 * Original: 0x0004B8A0 - 0x0004BB97 (759 bytes, 166 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004B8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004B8A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0004B8AFu); RECOMP_ABI_CALL(0x0004A1D0u, sub_0004A1D0); /* call 0x0004A1D0 */

loc_0004B8AF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = esi + 0x1E20;
    PUSH32(esp, edi);
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
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
    ebx = esi + 0x19D4;
    PUSH32(esp, 0xC0812ED3u);
    ecx = ebx;
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004B922u); RECOMP_ABI_CALL(0x00204640u, sub_00204640); /* call 0x00204640 */

loc_0004B922: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x712F96AC);
    ecx = ebx;
    MEM32(esi + 0x1E60) = eax;
    PUSH32(esp, 0x0004B935u); RECOMP_ABI_CALL(0x00204640u, sub_00204640); /* call 0x00204640 */

loc_0004B935: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = esi + 0x1E70;
    MEM32(esi + 0x1E64) = eax;
    PUSH32(esp, edi);
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
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
    PUSH32(esp, 0xDA7F6AFAu);
    ecx = ebx;
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004B9A8u); RECOMP_ABI_CALL(0x00204640u, sub_00204640); /* call 0x00204640 */

loc_0004B9A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xE89809A7u);
    ecx = ebx;
    MEM32(esi + 0x1EB0) = eax;
    PUSH32(esp, 0x0004B9BBu); RECOMP_ABI_CALL(0x00204640u, sub_00204640); /* call 0x00204640 */

loc_0004B9BB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = esi + 0x1EC0;
    MEM32(esi + 0x1EB4) = eax;
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
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
    PUSH32(esp, edi);
    PUSH32(esp, 0xEEB1A84Du);
    ecx = ebx;
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004BA2Eu); RECOMP_ABI_CALL(0x00204640u, sub_00204640); /* call 0x00204640 */

loc_0004BA2E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x97DE517Eu);
    ecx = ebx;
    MEM32(esi + 0x1F00) = eax;
    PUSH32(esp, 0x0004BA41u); RECOMP_ABI_CALL(0x00204640u, sub_00204640); /* call 0x00204640 */

loc_0004BA41: ;
    PUSH32(esp, 0x3F);
    ecx = esi + 0x18D4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC0812ED3u);
    MEM32(esi + 0x1F04) = eax;
    edi = esi + 0x1DF0;
    PUSH32(esp, 0x0004BA60u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0004BA60: ;
    MEM32(esi + eax * 4 + 0x17D4) = edi;
    MEM32(esi + 0x17CC) = MEM32(esi + 0x17CC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x17CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3F);
    edx = esi + 0x18D4;
    PUSH32(esp, edx);
    PUSH32(esp, 0xEEB1A84Du);
    PUSH32(esp, 0x0004BA80u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0004BA80: ;
    MEM32(esi + eax * 4 + 0x17D4) = edi;
    ecx = MEM32(esi + 0x17CC);
    PUSH32(esp, 0x3F);
    eax = esi + 0x18D4;
    PUSH32(esp, eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xDA7F6AFAu);
    MEM32(esi + 0x17CC) = ecx;
    PUSH32(esp, 0x0004BAA7u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0004BAA7: ;
    MEM32(esi + eax * 4 + 0x17D4) = edi;
    eax = MEM32(esi + 0x17CC);
    PUSH32(esp, 0x3F);
    ecx = esi + 0x18D4;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x712F96AC);
    MEM32(esi + 0x17CC) = eax;
    edi = esi + 0x1E00;
    PUSH32(esp, 0x0004BAD4u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0004BAD4: ;
    MEM32(esi + eax * 4 + 0x17D4) = edi;
    MEM32(esi + 0x17CC) = MEM32(esi + 0x17CC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x17CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3F);
    edx = esi + 0x18D4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x97DE517Eu);
    PUSH32(esp, 0x0004BAF4u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0004BAF4: ;
    MEM32(esi + eax * 4 + 0x17D4) = edi;
    ecx = MEM32(esi + 0x17CC);
    PUSH32(esp, 0x3F);
    eax = esi + 0x18D4;
    PUSH32(esp, eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xE89809A7u);
    MEM32(esi + 0x17CC) = ecx;
    PUSH32(esp, 0x0004BB1Bu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0004BB1B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD3E4)); /* movss */
    MEM32(esi + eax * 4 + 0x17D4) = edi;
    eax = MEM32(esi + 0x17CC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x17CC) = eax;
    MEMF(esi + 0x1F20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E21A0)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x1F2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x204) = 0x1B;
    MEM32(esi + 0x1F40) = eax;
    MEM32(esi + 0x1F24) = eax;
    MEMF(esi + 0x1F30) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEM8(esi + 0x1F28) = LO8(eax);
    MEMF(esi + 0x1F34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1F38) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1F44) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004BBA0
 * Original: 0x0004BBA0 - 0x0004BDD6 (566 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004BBA0(void)
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

loc_0004BBA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x1E20;
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
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x1E10);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004BC24u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0004BC24: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004BC2Cu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0004BC2C: ;
    ecx = MEM32(edi + 0x1E60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004BC43; /* jl: less (signed <) */

loc_0004BC36: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x1A98) = MEM32(edi + 0x1A98) | eax;
    _fa = (uint32_t)(MEM32(edi + 0x1A98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0004BC43: ;
    ecx = MEM32(edi + 0x1E64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004BC62; /* jl: less (signed <) */

loc_0004BC4D: ;
    eax = MEM32(edi + 0x1A98);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x1A98) = eax;

loc_0004BC62: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = edi + 0x1E70;
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
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    fp_push(MEMF(edi + 0x1E10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 0x10;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004BCDDu); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0004BCDD: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004BCE5u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0004BCE5: ;
    ecx = MEM32(edi + 0x1EB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004BD04; /* jl: less (signed <) */

loc_0004BCEF: ;
    eax = MEM32(edi + 0x1A98);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x1A98) = eax;

loc_0004BD04: ;
    ecx = MEM32(edi + 0x1EB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004BD1B; /* jl: less (signed <) */

loc_0004BD0E: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x1A98) = MEM32(edi + 0x1A98) | eax;
    _fa = (uint32_t)(MEM32(edi + 0x1A98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0004BD1B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = edi + 0x1EC0;
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
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x1E14);
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004BD92u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0004BD92: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004BD9Au); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0004BD9A: ;
    ecx = MEM32(edi + 0x1F00);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004BDB9; /* jl: less (signed <) */

loc_0004BDA4: ;
    eax = MEM32(edi + 0x1A98);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x1A98) = eax;

loc_0004BDB9: ;
    ecx = MEM32(edi + 0x1F04);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004BDD0; /* jl: less (signed <) */

loc_0004BDC3: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x1A98) = MEM32(edi + 0x1A98) | eax;
    _fa = (uint32_t)(MEM32(edi + 0x1A98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0004BDD0: ;
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
 * sub_0004BDE0
 * Original: 0x0004BDE0 - 0x0004BDF0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004BDE0: ;
    g_seh_ebp = ebp; sub_0004AC90(); return; /* tail jmp 0x0004AC90 */

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
 * sub_0004BDF0
 * Original: 0x0004BDF0 - 0x0004BF5B (363 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BDF0(void)
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

loc_0004BDF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241350);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x10) = 0x2E1580;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x14) = 0x2E2444;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    MEM8(esp + 0x24) = 1;
    PUSH32(esp, 0x0004BE32u); RECOMP_ABI_CALL(0x0004B350u, sub_0004B350); /* call 0x0004B350 */

loc_0004BE32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004BE48; /* jne: not equal / not zero */

loc_0004BE36: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0004BE48: ;
    edx = MEM32(esi + 0x2C8);
    PUSH32(esp, edi);
    edi = esi + 0x2C8;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0004BE5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004BE57u); } /* indirect call */
    }

loc_0004BE5A: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x0004BE65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004BE62u); } /* indirect call */
    }

loc_0004BE65: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E219C); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004BE87; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004BE7F: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    goto loc_0004BEA0;

loc_0004BE87: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0004BEA0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0004BE9A: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0004BEA0: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E2440)); /* fmul dword ptr [0x2e2440] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004BEBBu); RECOMP_ABI_CALL(0x00237629u, sub_00237629); /* call 0x00237629 */

loc_0004BEBB: ;
    PUSH32(esp, 0x0004BEC0u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0004BEC0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E2440)); /* fmul dword ptr [0x2e2440] */
    edi = eax;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0004BED4u); RECOMP_ABI_CALL(0x00237629u, sub_00237629); /* call 0x00237629 */

loc_0004BED4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0004BEDCu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0004BEDC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E243C)); /* movss */
    edi = edi << 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | 0x808080;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x808080;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esi + 0x1E08) = edi;
    MEM32(esi + 0x1DF8) = eax;
    POP32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004BF10; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0004BF0D: ;
    xmm0 = xmm1; /* movaps */

loc_0004BF10: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0004BF34u); RECOMP_ABI_CALL(0x0004B710u, sub_0004B710); /* call 0x0004B710 */

loc_0004BF34: ;
    ecx = esi;
    PUSH32(esp, 0x0004BF3Bu); RECOMP_ABI_CALL(0x0004BBA0u, sub_0004BBA0); /* call 0x0004BBA0 */

loc_0004BF3B: ;
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, ecx);
    ecx = esi + 0x60;
    PUSH32(esp, 0x0004BF47u); RECOMP_ABI_CALL(0x002049A0u, sub_002049A0); /* call 0x002049A0 */

loc_0004BF47: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_0004BF60
 * Original: 0x0004BF60 - 0x0004BFCC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BF60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004BF60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004BF68u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0004BF68: ;
    MEM32(esi) = 0x2E2450;
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
    PUSH32(esp, 0x0004BFC5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0004BFC5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004BFD0
 * Original: 0x0004BFD0 - 0x0004BFDC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004BFD0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0004BFE0(); return; /* tail jmp 0x0004BFE0 */

}

/**
 * sub_0004BFE0
 * Original: 0x0004BFE0 - 0x0004C04C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004BFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004BFE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C047; /* je: equal / zero */

loc_0004BFF2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x1F08);
    edx = MEM32(ecx + 0x1F0C);
    MEM32(ecx + 0x1F10) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x1F0C);
    edx = MEM32(ecx + 0x1F08);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0004C02A; /* je: equal / zero */

loc_0004C024: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0004C02Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C028u); } /* indirect call */
    }

loc_0004C02A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFE0B0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFE0B0u;
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
    if (CMP_NE(_fa, _fb)) goto loc_0004BFF2; /* jne: not equal / not zero */

loc_0004C047: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C050
 * Original: 0x0004C050 - 0x0004C0AF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F50);
    PUSH32(esp, 0x0004C064u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0004C064: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C074; /* je: equal / zero */

loc_0004C06B: ;
    ecx = eax;
    PUSH32(esp, 0x0004C072u); RECOMP_ABI_CALL(0x0004B7C0u, sub_0004B7C0); /* call 0x0004B7C0 */

loc_0004C072: ;
    goto loc_0004C076;

loc_0004C074: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004C076: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x1F08;
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
    _fb = (uint32_t)(0x1F50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1F50;
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
 * sub_0004C0B0
 * Original: 0x0004C0B0 - 0x0004C0FA (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C0B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C0B0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x1F08;
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
 * sub_0004C100
 * Original: 0x0004C100 - 0x0004C15F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C100: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E0);
    PUSH32(esp, 0x0004C114u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0004C114: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C124; /* je: equal / zero */

loc_0004C11B: ;
    ecx = eax;
    PUSH32(esp, 0x0004C122u); RECOMP_ABI_CALL(0x0007D820u, sub_0007D820); /* call 0x0007D820 */

loc_0004C122: ;
    goto loc_0004C126;

loc_0004C124: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004C126: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x7D4;
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
    _fb = (uint32_t)(0x7E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7E0;
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
 * sub_0004C160
 * Original: 0x0004C160 - 0x0004C175 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C160(void)
{

loc_0004C160: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004C168u); RECOMP_ABI_CALL(0x00049AF0u, sub_00049AF0); /* call 0x00049AF0 */

loc_0004C168: ;
    PUSH32(esp, esi);
    ecx = 0x3205C8;
    PUSH32(esp, 0x0004C173u); RECOMP_ABI_CALL(0x0004C0B0u, sub_0004C0B0); /* call 0x0004C0B0 */

loc_0004C173: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C180
 * Original: 0x0004C180 - 0x0004C297 (279 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C180: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0004C18Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C185u); } /* indirect call */
    }

loc_0004C18B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004C293; /* jne: not equal / not zero */

loc_0004C193: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C292; /* je: equal / zero */

loc_0004C1A0: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE5023CE7u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0004C1ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C1A9u); } /* indirect call */
    }

loc_0004C1AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C288; /* je: equal / zero */

loc_0004C1B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004C1BAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0004C1BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C288; /* je: equal / zero */

loc_0004C1C8: ;
    PUSH32(esp, ebx);
    ecx = 0x322A50;
    PUSH32(esp, 0x0004C1D3u); RECOMP_ABI_CALL(0x0004C100u, sub_0004C100); /* call 0x0004C100 */

loc_0004C1D3: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C1ED; /* je: equal / zero */

loc_0004C1D9: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0004C1E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C1DFu); } /* indirect call */
    }

loc_0004C1E2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0004C1EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C1E7u); } /* indirect call */
    }

loc_0004C1ED: ;
    PUSH32(esp, 0x2E246C);
    PUSH32(esp, 0x0004C1F7u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0004C1F7: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0004C202u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C1FFu); } /* indirect call */
    }

loc_0004C202: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C245; /* je: equal / zero */

loc_0004C208: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0004C212u); RECOMP_ABI_CALL(0x00011E30u, sub_00011E30); /* call 0x00011E30 */

loc_0004C212: ;
    ebx = MEM32(eax);
    PUSH32(esp, 0x2E2464);
    PUSH32(esp, 0x0004C21Eu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0004C21E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C245; /* je: equal / zero */

loc_0004C225: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0004C22Fu); RECOMP_ABI_CALL(0x00011E30u, sub_00011E30); /* call 0x00011E30 */

loc_0004C22F: ;
    eax = MEM32(eax);
    ecx = MEM32(0x371DD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004C23Du); RECOMP_ABI_CALL(0x001246E0u, sub_001246E0); /* call 0x001246E0 */

loc_0004C23D: ;
    MEM32(esi + 0x1F44) = eax;
    goto loc_0004C24F;

loc_0004C245: ;
    MEM32(esi + 0x1F44) = 0;

loc_0004C24F: ;
    eax = MEM32(esi + 0x1F44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0004C292; /* je: equal / zero */

loc_0004C25A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x0004C264u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C25Eu); } /* indirect call */
    }

loc_0004C264: ;
    ecx = MEM32(esi + 0x1F44);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0004C279u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C273u); } /* indirect call */
    }

loc_0004C279: ;
    POP32(esp, edi);
    MEM32(esi + 0x1F44) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0004C288: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x284); PUSH32(esp, 0x0004C292u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C28Cu); } /* indirect call */
    }

loc_0004C292: ;
    POP32(esp, edi);

loc_0004C293: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C2A0
 * Original: 0x0004C2A0 - 0x0004C2E0 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C2A0: ;
    PUSH32(esp, esi);
    ecx = 0x3205C8;
    PUSH32(esp, 0x0004C2ABu); RECOMP_ABI_CALL(0x0004C050u, sub_0004C050); /* call 0x0004C050 */

loc_0004C2AB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C2DC; /* je: equal / zero */

loc_0004C2B1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0004C2BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C2BBu); } /* indirect call */
    }

loc_0004C2BE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0004C2C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C2C2u); } /* indirect call */
    }

loc_0004C2C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004C2D7; /* jne: not equal / not zero */

loc_0004C2CC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1BC); PUSH32(esp, 0x0004C2D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C2D1u); } /* indirect call */
    }

loc_0004C2D7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004C2DC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C2E0
 * Original: 0x0004C2E0 - 0x0004C30A (42 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C2E0(void)
{

loc_0004C2E0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 1;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x14) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C310
 * Original: 0x0004C310 - 0x0004C37C (108 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C310(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004C310: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C347; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0004C31E: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) / fp_top()); /* fdivr dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    esp += 4; return; /* ret */

loc_0004C347: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004C377; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0004C34C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    esp += 4; return; /* ret */

loc_0004C377: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004C380
 * Original: 0x0004C380 - 0x0004C45D (221 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004C380: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0x0004C39Cu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C39C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C457; /* je: equal / zero */

loc_0004C3A4: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edi);

loc_0004C3B1: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0004C3C1u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C3C1: ;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0004C3D7; /* jbe: below or equal (unsigned <=) */

loc_0004C3D1: ;
    esi = MEM32(esp + 0x28);
    goto loc_0004C3EA;

loc_0004C3D7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0004C43C; /* jge: greater or equal (signed >=) */

loc_0004C3DC: ;
    eax = MEM32(esp + 0x14);
    esi = eax;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;

loc_0004C3EA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = ebx;
    MEMF(esi) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0004C402u); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_0004C402: ;
    ecx = ebx;
    edi = eax;
    PUSH32(esp, 0x0004C40Bu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_0004C40B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 8) = LO8(edx);
    if (CMP_G(_fas, _fbs)) goto loc_0004C420; /* jg: greater (signed >) */

loc_0004C417: ;
    MEM32(esi + 4) = 1;
    goto loc_0004C423;

loc_0004C420: ;
    MEM32(esi + 4) = edi;

loc_0004C423: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0004C434u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C434: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0004C3B1; /* jne: not equal / not zero */

loc_0004C43C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0004C457; /* jle: less or equal (signed <=) */

loc_0004C442: ;
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    edx = ebp + ebp * 2;
    MEMF(eax + edx * 4) = xmm0.f[0]; /* movss */

loc_0004C457: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_0004C460
 * Original: 0x0004C460 - 0x0004C59D (317 bytes, 94 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0004C460(void)
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

loc_0004C460: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xDB0F8F41u);
    ecx = esi;
    PUSH32(esp, 0x0004C473u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C473: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C484; /* je: equal / zero */

loc_0004C477: ;
    ecx = esi;
    PUSH32(esp, 0x0004C47Eu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C47E: ;
    MEMF(0x320664) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C484: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7CD053FA);
    ecx = esi;
    PUSH32(esp, 0x0004C492u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C492: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C4A3; /* je: equal / zero */

loc_0004C496: ;
    ecx = esi;
    PUSH32(esp, 0x0004C49Du); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C49D: ;
    MEMF(0x320668) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C4A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B25D78B);
    ecx = esi;
    PUSH32(esp, 0x0004C4B1u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C4B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C4C2; /* je: equal / zero */

loc_0004C4B5: ;
    ecx = esi;
    PUSH32(esp, 0x0004C4BCu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C4BC: ;
    MEMF(0x32066C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C4C2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x236D387B);
    ecx = esi;
    PUSH32(esp, 0x0004C4D0u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C4D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C4E1; /* je: equal / zero */

loc_0004C4D4: ;
    ecx = esi;
    PUSH32(esp, 0x0004C4DBu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C4DB: ;
    MEMF(0x320670) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C4E1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xCBA8AE44u);
    ecx = esi;
    PUSH32(esp, 0x0004C4EFu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C4EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C500; /* je: equal / zero */

loc_0004C4F3: ;
    ecx = esi;
    PUSH32(esp, 0x0004C4FAu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C4FA: ;
    MEMF(0x320674) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C500: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBE41B520u);
    ecx = esi;
    PUSH32(esp, 0x0004C50Eu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C50E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C51F; /* je: equal / zero */

loc_0004C512: ;
    ecx = esi;
    PUSH32(esp, 0x0004C519u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C519: ;
    MEMF(0x320650) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C51F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4D5769C3);
    ecx = esi;
    PUSH32(esp, 0x0004C52Du); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C52D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C53E; /* je: equal / zero */

loc_0004C531: ;
    ecx = esi;
    PUSH32(esp, 0x0004C538u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C538: ;
    MEMF(0x320654) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C53E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E4305DE);
    ecx = esi;
    PUSH32(esp, 0x0004C54Cu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C54C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C55D; /* je: equal / zero */

loc_0004C550: ;
    ecx = esi;
    PUSH32(esp, 0x0004C557u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C557: ;
    MEMF(0x320658) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C55D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x932E7108u);
    ecx = esi;
    PUSH32(esp, 0x0004C56Bu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C56B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C57C; /* je: equal / zero */

loc_0004C56F: ;
    ecx = esi;
    PUSH32(esp, 0x0004C576u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C576: ;
    MEMF(0x32065C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C57C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x34C57E7B);
    ecx = esi;
    PUSH32(esp, 0x0004C58Au); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C58A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C59B; /* je: equal / zero */

loc_0004C58E: ;
    ecx = esi;
    PUSH32(esp, 0x0004C595u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C595: ;
    MEMF(0x320660) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C59B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004C5A0
 * Original: 0x0004C5A0 - 0x0004C727 (391 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C5A0(void)
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

loc_0004C5A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8EA1A830u);
    ecx = esi;
    PUSH32(esp, 0x0004C5B3u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C5B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C5C3; /* je: equal / zero */

loc_0004C5B7: ;
    ecx = esi;
    PUSH32(esp, 0x0004C5BEu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_0004C5BE: ;
    MEM32(0x30D3D0) = eax;

loc_0004C5C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6642AC2B);
    ecx = esi;
    PUSH32(esp, 0x0004C5D1u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0004C5D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C71A; /* je: equal / zero */

loc_0004C5D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xCABCA775u);
    ecx = esi;
    PUSH32(esp, 0x0004C5E7u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C5E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C5F8; /* je: equal / zero */

loc_0004C5EB: ;
    ecx = esi;
    PUSH32(esp, 0x0004C5F2u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C5F2: ;
    MEMF(0x30D400) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C5F8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9DEB5473u);
    ecx = esi;
    PUSH32(esp, 0x0004C606u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C606: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C617; /* je: equal / zero */

loc_0004C60A: ;
    ecx = esi;
    PUSH32(esp, 0x0004C611u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C611: ;
    MEMF(0x30D404) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C617: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E910F40);
    ecx = esi;
    PUSH32(esp, 0x0004C625u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C625: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C636; /* je: equal / zero */

loc_0004C629: ;
    ecx = esi;
    PUSH32(esp, 0x0004C630u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C630: ;
    MEMF(0x30D408) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C636: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xCF9A0D4Cu);
    ecx = esi;
    PUSH32(esp, 0x0004C644u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C644: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C655; /* je: equal / zero */

loc_0004C648: ;
    ecx = esi;
    PUSH32(esp, 0x0004C64Fu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C64F: ;
    MEMF(0x30D40C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C655: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x542B0332);
    ecx = esi;
    PUSH32(esp, 0x0004C663u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C663: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C674; /* je: equal / zero */

loc_0004C667: ;
    ecx = esi;
    PUSH32(esp, 0x0004C66Eu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C66E: ;
    MEMF(0x30D410) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C674: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x48430F70);
    ecx = esi;
    PUSH32(esp, 0x0004C682u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C682: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C693; /* je: equal / zero */

loc_0004C686: ;
    ecx = esi;
    PUSH32(esp, 0x0004C68Du); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C68D: ;
    MEMF(0x30D414) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C693: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xED970810u);
    ecx = esi;
    PUSH32(esp, 0x0004C6A1u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C6A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C6B2; /* je: equal / zero */

loc_0004C6A5: ;
    ecx = esi;
    PUSH32(esp, 0x0004C6ACu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C6AC: ;
    MEMF(0x30D418) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C6B2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x156750DF);
    ecx = esi;
    PUSH32(esp, 0x0004C6C0u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0004C6C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C6D1; /* je: equal / zero */

loc_0004C6C4: ;
    ecx = esi;
    PUSH32(esp, 0x0004C6CBu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0004C6CB: ;
    MEMF(0x30D41C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0004C6D1: ;
    PUSH32(esp, 0x320678);
    PUSH32(esp, 0x6D688E1D);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004C6E1u); RECOMP_ABI_CALL(0x0004C380u, sub_0004C380); /* call 0x0004C380 */

loc_0004C6E1: ;
    PUSH32(esp, 0x3206B4);
    PUSH32(esp, 0x51F0C12A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004C6F1u); RECOMP_ABI_CALL(0x0004C380u, sub_0004C380); /* call 0x0004C380 */

loc_0004C6F1: ;
    PUSH32(esp, 0x3206F0);
    PUSH32(esp, 0x29DFAA91);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004C701u); RECOMP_ABI_CALL(0x0004C380u, sub_0004C380); /* call 0x0004C380 */

loc_0004C701: ;
    PUSH32(esp, 0x32072C);
    PUSH32(esp, 0x9C530003u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004C711u); RECOMP_ABI_CALL(0x0004C380u, sub_0004C380); /* call 0x0004C380 */

loc_0004C711: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004C717u); RECOMP_ABI_CALL(0x0004C460u, sub_0004C460); /* call 0x0004C460 */

loc_0004C717: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004C71A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0004C725u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0004C725: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004C6D1
 * Original: 0x0004C6D1 - 0x0004C727 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C6D1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C6D1: ;
    PUSH32(esp, 0x320678);
    PUSH32(esp, 0x6D688E1D);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004C6E1u); RECOMP_ABI_CALL(0x0004C380u, sub_0004C380); /* call 0x0004C380 */

loc_0004C6E1: ;
    PUSH32(esp, 0x3206B4);
    PUSH32(esp, 0x51F0C12A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004C6F1u); RECOMP_ABI_CALL(0x0004C380u, sub_0004C380); /* call 0x0004C380 */

loc_0004C6F1: ;
    PUSH32(esp, 0x3206F0);
    PUSH32(esp, 0x29DFAA91);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004C701u); RECOMP_ABI_CALL(0x0004C380u, sub_0004C380); /* call 0x0004C380 */

loc_0004C701: ;
    PUSH32(esp, 0x32072C);
    PUSH32(esp, 0x9C530003u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004C711u); RECOMP_ABI_CALL(0x0004C380u, sub_0004C380); /* call 0x0004C380 */

loc_0004C711: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004C717u); RECOMP_ABI_CALL(0x0004C460u, sub_0004C460); /* call 0x0004C460 */

loc_0004C717: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0004C725u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0004C725: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C730
 * Original: 0x0004C730 - 0x0004C75A (42 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C730: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x6D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6D0), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004C74E; /* jne: not equal / not zero */

loc_0004C73C: ;
    eax = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004C74E; /* jne: not equal / not zero */

loc_0004C746: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C4); PUSH32(esp, 0x0004C74Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C748u); } /* indirect call */
    }

loc_0004C74E: ;
    MEM32(esi + 0x6D0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C760
 * Original: 0x0004C760 - 0x0004C779 (25 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C760(void)
{

loc_0004C760: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x6A8) = eax;
    MEM32(ecx + 0x6AC) = edx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004C780
 * Original: 0x0004C780 - 0x0004C7C4 (68 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C780: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004C791; /* jne: not equal / not zero */

loc_0004C78D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004C791: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004C79Bu); RECOMP_ABI_CALL(0x00060B90u, sub_00060B90); /* call 0x00060B90 */

loc_0004C79B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004C7A6; /* jne: not equal / not zero */

loc_0004C7A1: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004C7A6: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004C7B5u); RECOMP_ABI_CALL(0x000611A0u, sub_000611A0); /* call 0x000611A0 */

loc_0004C7B5: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004C7C1u); RECOMP_ABI_CALL(0x0004C760u, sub_0004C760); /* call 0x0004C760 */

loc_0004C7C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C7D0
 * Original: 0x0004C7D0 - 0x0004C7EF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C7D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x760);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C7ED; /* je: equal / zero */

loc_0004C7DD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0004C7E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C7E0u); } /* indirect call */
    }

loc_0004C7E3: ;
    MEM32(esi + 0x760) = 0;

loc_0004C7ED: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004C7F0
 * Original: 0x0004C7F0 - 0x0004C820 (48 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C7F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004C7F8u); RECOMP_ABI_CALL(0x0004C7D0u, sub_0004C7D0); /* call 0x0004C7D0 */

loc_0004C7F8: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C81C; /* je: equal / zero */

loc_0004C800: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x760) = ecx;
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0004C818; /* je: equal / zero */

loc_0004C80F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0004C814u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C811u); } /* indirect call */
    }

loc_0004C814: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0004C818: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0004C81Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C81Au); } /* indirect call */
    }

loc_0004C81C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004C820
 * Original: 0x0004C820 - 0x0004C840 (32 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C820: ;
    edx = MEM32(ecx + 0x760);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0004C83D; /* je: equal / zero */

loc_0004C82C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = edx;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0004C83Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C839u); } /* indirect call */
    }

loc_0004C83C: ;
    POP32(esp, esi);

loc_0004C83D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C840
 * Original: 0x0004C840 - 0x0004C89D (93 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C840: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0004C851u); RECOMP_ABI_CALL(0x00202CB0u, sub_00202CB0); /* call 0x00202CB0 */

loc_0004C851: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C889; /* je: equal / zero */

loc_0004C858: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0004C866u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C863u); } /* indirect call */
    }

loc_0004C866: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0004C873u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C870u); } /* indirect call */
    }

loc_0004C873: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004C87Eu); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_0004C87E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0004C889: ;
    PUSH32(esp, edi);
    ecx = esi + 0x708;
    PUSH32(esp, 0x0004C895u); RECOMP_ABI_CALL(0x001FDF10u, sub_001FDF10); /* call 0x001FDF10 */

loc_0004C895: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C8A0
 * Original: 0x0004C8A0 - 0x0004C8BF (31 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C8A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x7D0) = eax;
    MEMF(ecx + 0x7D4) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x7D8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0004C8C0
 * Original: 0x0004C8C0 - 0x0004C91D (93 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004C8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C8C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0004C8D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C8CFu); } /* indirect call */
    }

loc_0004C8D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C915; /* je: equal / zero */

loc_0004C8D9: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0004C8E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C8E1u); } /* indirect call */
    }

loc_0004C8E7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004C8EEu); RECOMP_ABI_CALL(0x0013F130u, sub_0013F130); /* call 0x0013F130 */

loc_0004C8EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C915; /* je: equal / zero */

loc_0004C8F2: ;
    edi = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x3BC); PUSH32(esp, 0x0004C901u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C8FBu); } /* indirect call */
    }

loc_0004C901: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004C908u); RECOMP_ABI_CALL(0x0013CE30u, sub_0013CE30); /* call 0x0013CE30 */

loc_0004C908: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x0004C90Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C90Bu); } /* indirect call */
    }

loc_0004C90E: ;
    MEM8(esi + 0x82C) = 1;

loc_0004C915: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C920
 * Original: 0x0004C920 - 0x0004C93B (27 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C920(void)
{

loc_0004C920: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0004C92Eu); RECOMP_ABI_CALL(0x001EA560u, sub_001EA560); /* call 0x001EA560 */

loc_0004C92E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0004C936u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C933u); } /* indirect call */
    }

loc_0004C936: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C940
 * Original: 0x0004C940 - 0x0004C974 (52 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C940: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0004C94Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C945u); } /* indirect call */
    }

loc_0004C94B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C970; /* je: equal / zero */

loc_0004C94F: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0004C95Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C958u); } /* indirect call */
    }

loc_0004C95E: ;
    ecx = eax;
    PUSH32(esp, 0x0004C965u); RECOMP_ABI_CALL(0x0013F440u, sub_0013F440); /* call 0x0013F440 */

loc_0004C965: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C970; /* je: equal / zero */

loc_0004C969: ;
    MEM8(esi + 0x82C) = 1;

loc_0004C970: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C980
 * Original: 0x0004C980 - 0x0004C9D4 (84 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C980: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0004C98Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C986u); } /* indirect call */
    }

loc_0004C98C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0004C9C7; /* je: equal / zero */

loc_0004C994: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0004C9B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C9AFu); } /* indirect call */
    }

loc_0004C9B5: ;
    ecx = eax;
    PUSH32(esp, 0x0004C9BCu); RECOMP_ABI_CALL(0x0013F3A0u, sub_0013F3A0); /* call 0x0013F3A0 */

loc_0004C9BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004C9C7; /* je: equal / zero */

loc_0004C9C0: ;
    MEM8(esi + 0x82C) = 1;

loc_0004C9C7: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0004C9CFu); RECOMP_ABI_CALL(0x001EA510u, sub_001EA510); /* call 0x001EA510 */

loc_0004C9CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004C9E0
 * Original: 0x0004C9E0 - 0x0004CA48 (104 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004C9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004C9E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0004C9ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004C9E6u); } /* indirect call */
    }

loc_0004C9EC: ;
    ecx = eax;
    PUSH32(esp, 0x0004C9F3u); RECOMP_ABI_CALL(0x0013CB70u, sub_0013CB70); /* call 0x0013CB70 */

loc_0004C9F3: ;
    eax = MEM32(esi + 0x76C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 0x6C1) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0004CA16; /* je: equal / zero */

loc_0004CA05: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004CA0Du); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_0004CA0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x76C) = ebx;

loc_0004CA16: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(esi + 0x6B8) = LO8(ebx);
    MEM8(esi + 0x6B9) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x334); PUSH32(esp, 0x0004CA2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CA27u); } /* indirect call */
    }

loc_0004CA2D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28C); PUSH32(esp, 0x0004CA39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CA33u); } /* indirect call */
    }

loc_0004CA39: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x29C); PUSH32(esp, 0x0004CA45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CA3Fu); } /* indirect call */
    }

loc_0004CA45: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CA50
 * Original: 0x0004CA50 - 0x0004CA67 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA50(void)
{

loc_0004CA50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x788) = eax;
    MEM32(ecx + 0x78C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004CA70
 * Original: 0x0004CA70 - 0x0004CA9F (47 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CA70: ;
    edx = MEM32(ecx + 0x7C8);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004CA93; /* jle: less or equal (signed <=) */

loc_0004CA7D: ;
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(0x7C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004CA87: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CA99; /* je: equal / zero */

loc_0004CA8B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CA87; /* jl: less (signed <) */

loc_0004CA93: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0004CA99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CAA0
 * Original: 0x0004CAA0 - 0x0004CAEC (76 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CAA0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x7C8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CAEA; /* je: equal / zero */

loc_0004CAAB: ;
    PUSH32(esp, ebx);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0004CAD2; /* jle: less or equal (signed <=) */

loc_0004CAB6: ;
    edi = MEM32(ecx + 0x7BC);
    edx = ecx + 0x7C0;

loc_0004CAC2: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CAD0; /* je: equal / zero */

loc_0004CAC6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CAC2; /* jl: less (signed <) */

loc_0004CACE: ;
    goto loc_0004CAD2;

loc_0004CAD0: ;
    ebx = eax;

loc_0004CAD2: ;
    eax = ebx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edi = MEM32(ecx);
    eax = MEM32(ecx + edx * 4 + 0x7C0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x3DC); PUSH32(esp, 0x0004CAE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CAE2u); } /* indirect call */
    }

loc_0004CAE8: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0004CAEA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CAF0
 * Original: 0x0004CAF0 - 0x0004CB1B (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CAF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x6E0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0004CB17; /* je: equal / zero */

loc_0004CB07: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004CB0Du); RECOMP_ABI_CALL(0x00061D20u, sub_00061D20); /* call 0x00061D20 */

loc_0004CB0D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3D4); PUSH32(esp, 0x0004CB17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CB11u); } /* indirect call */
    }

loc_0004CB17: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CB20
 * Original: 0x0004CB20 - 0x0004CB89 (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CB31; /* jne: not equal / not zero */

loc_0004CB2D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004CB31: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004CB38u); RECOMP_ABI_CALL(0x000612C0u, sub_000612C0); /* call 0x000612C0 */

loc_0004CB38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CB7C; /* je: equal / zero */

loc_0004CB3C: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0004CB49u); RECOMP_ABI_CALL(0x000612C0u, sub_000612C0); /* call 0x000612C0 */

loc_0004CB49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CB7C; /* je: equal / zero */

loc_0004CB4D: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004CB5Au); RECOMP_ABI_CALL(0x000612F0u, sub_000612F0); /* call 0x000612F0 */

loc_0004CB5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CB7C; /* jne: not equal / not zero */

loc_0004CB5E: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0004CB6Bu); RECOMP_ABI_CALL(0x000612F0u, sub_000612F0); /* call 0x000612F0 */

loc_0004CB6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CB7C; /* jne: not equal / not zero */

loc_0004CB6F: ;
    SET_LO8(eax, 1);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004CB7C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CB90
 * Original: 0x0004CB90 - 0x0004CBB8 (40 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CB90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CBB4; /* je: equal / zero */

loc_0004CB9D: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004CBA7u); RECOMP_ABI_CALL(0x00060E90u, sub_00060E90); /* call 0x00060E90 */

loc_0004CBA7: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004CBB4u); RECOMP_ABI_CALL(0x00060DF0u, sub_00060DF0); /* call 0x00060DF0 */

loc_0004CBB4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CBC0
 * Original: 0x0004CBC0 - 0x0004CBCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CBC0(void)
{

loc_0004CBC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x80C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CBD0
 * Original: 0x0004CBD0 - 0x0004CBD7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CBD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0004CBD0: ;
    fp_push(MEMF(0x2DDA40)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004CBE0
 * Original: 0x0004CBE0 - 0x0004CC05 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CBE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x76C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CC03; /* je: equal / zero */

loc_0004CBED: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x28C); PUSH32(esp, 0x0004CBF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CBF1u); } /* indirect call */
    }

loc_0004CBF7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28C); PUSH32(esp, 0x0004CC03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CBFDu); } /* indirect call */
    }

loc_0004CC03: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CC10
 * Original: 0x0004CC10 - 0x0004CC15 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004CC10: ;
    g_seh_ebp = ebp; sub_0003F950(); return; /* tail jmp 0x0003F950 */

}

/**
 * sub_0004CC20
 * Original: 0x0004CC20 - 0x0004CCB9 (153 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0004CC20: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x170); PUSH32(esp, 0x0004CC34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CC2Eu); } /* indirect call */
    }

loc_0004CC34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CCAF; /* je: equal / zero */

loc_0004CC38: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0004CC44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CC41u); } /* indirect call */
    }

loc_0004CC44: ;
    edx = MEM32(edi);
    esi = eax;
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0004CC52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CC4Fu); } /* indirect call */
    }

loc_0004CC52: ;
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
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0004CCA5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0004CC98: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0004CCA5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0004CCAF: ;
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
 * sub_0004CCC0
 * Original: 0x0004CCC0 - 0x0004CD1E (94 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CCC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xC) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x170); PUSH32(esp, 0x0004CCDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CCD8u); } /* indirect call */
    }

loc_0004CCDE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CD12; /* je: equal / zero */

loc_0004CCE4: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0004CD06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CD03u); } /* indirect call */
    }

loc_0004CD06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004CD0Fu); RECOMP_ABI_CALL(0x00011A30u, sub_00011A30); /* call 0x00011A30 */

loc_0004CD0F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004CD12: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0004CD20
 * Original: 0x0004CD20 - 0x0004CD4C (44 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CD20: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0x796) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0004CD3D; /* je: equal / zero */

loc_0004CD2E: ;
    PUSH32(esp, 0x0004CD33u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0004CD33: ;
    ecx = eax;
    PUSH32(esp, 0x0004CD3Au); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_0004CD3A: ;
    esp += 8; return; /* ret 4 */

loc_0004CD3D: ;
    PUSH32(esp, 0x0004CD42u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0004CD42: ;
    ecx = eax;
    PUSH32(esp, 0x0004CD49u); RECOMP_ABI_CALL(0x001EAAC0u, sub_001EAAC0); /* call 0x001EAAC0 */

loc_0004CD49: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CD50
 * Original: 0x0004CD50 - 0x0004CD5D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CD50(void)
{

loc_0004CD50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x7BC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CD60
 * Original: 0x0004CD60 - 0x0004CD83 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004CD60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CD80; /* jl: less (signed <) */

loc_0004CD68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CD80; /* jge: greater or equal (signed >=) */

loc_0004CD6D: ;
    eax = MEM32(ecx + eax * 4 + 0x7A4);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x3D8)); return; /* indirect tail jmp */

loc_0004CD80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CD90
 * Original: 0x0004CD90 - 0x0004CDB3 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004CD90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CDB0; /* jl: less (signed <) */

loc_0004CD98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CDB0; /* jge: greater or equal (signed >=) */

loc_0004CD9D: ;
    eax = MEM32(ecx + eax * 4 + 0x7C0);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x3DC)); return; /* indirect tail jmp */

loc_0004CDB0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CDC0
 * Original: 0x0004CDC0 - 0x0004CE28 (104 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004CDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CDC0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x7B8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004CE19; /* jle: less or equal (signed <=) */

loc_0004CDD0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    PUSH32(esp, esi);
    esi = edi + 0x7A4;
    /* nop */

loc_0004CDE0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CDFE; /* je: equal / zero */

loc_0004CDE6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0004CDF6; /* je: equal / zero */

loc_0004CDEC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1D0); PUSH32(esp, 0x0004CDF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CDEEu); } /* indirect call */
    }

loc_0004CDF4: ;
    goto loc_0004CDFE;

loc_0004CDF6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1CC); PUSH32(esp, 0x0004CDFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CDF8u); } /* indirect call */
    }

loc_0004CDFE: ;
    eax = MEM32(edi + 0x7B8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CDE0; /* jl: less (signed <) */

loc_0004CE0C: ;
    POP32(esp, esi);
    MEM8(edi + 0x810) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0004CE19: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(edi + 0x810) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CE30
 * Original: 0x0004CE30 - 0x0004CE69 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CE30: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x284); PUSH32(esp, 0x0004CE39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CE33u); } /* indirect call */
    }

loc_0004CE39: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CE65; /* je: equal / zero */

loc_0004CE3F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0004CE4Au); RECOMP_ABI_CALL(0x000611E0u, sub_000611E0); /* call 0x000611E0 */

loc_0004CE4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0004CE65; /* je: equal / zero */

loc_0004CE51: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0004CE5Au); RECOMP_ABI_CALL(0x000612C0u, sub_000612C0); /* call 0x000612C0 */

loc_0004CE5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CE65; /* jne: not equal / not zero */

loc_0004CE5E: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0004CE65: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CE70
 * Original: 0x0004CE70 - 0x0004CEB9 (73 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CE70: ;
    MEM8(ecx + 0x6C0) = MEM8(ecx + 0x6C0) + 1;
    _fa = (uint32_t)(MEM8(ecx + 0x6C0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x6D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CE97; /* jne: not equal / not zero */

loc_0004CE80: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM32(ecx + 0x6D0) = 1;
    MEM8(ecx + 0x6BF) = LO8(eax);
    esp += 8; return; /* ret 4 */

loc_0004CE97: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CEB6; /* je: equal / zero */

loc_0004CE9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004CEB6; /* jne: not equal / not zero */

loc_0004CEA4: ;
    eax = MEM32(ecx + 0x6B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CEB6; /* je: equal / zero */

loc_0004CEAE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C8); PUSH32(esp, 0x0004CEB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CEB0u); } /* indirect call */
    }

loc_0004CEB6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CEC0
 * Original: 0x0004CEC0 - 0x0004CEDD (29 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004CEC0: ;
    SET_LO8(edx, MEM8(ecx + 0x6C0));
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0x6C0) = LO8(edx);
    if (CMP_G(_fas, _fbs)) goto loc_0004CEDC; /* jg: greater (signed >) */

loc_0004CED4: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x3D0)); return; /* indirect tail jmp */

loc_0004CEDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0004CEE0
 * Original: 0x0004CEE0 - 0x0004CF19 (57 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0004CEE0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x0004CEEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CEE5u); } /* indirect call */
    }

loc_0004CEEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0004CEF1; /* jne: not equal / not zero */

loc_0004CEEF: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0004CEF1: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x0004CEFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CEF6u); } /* indirect call */
    }

loc_0004CEFC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0004CF05; /* jne: not equal / not zero */

loc_0004CF02: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0004CF05: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x0004CF10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CF0Au); } /* indirect call */
    }

loc_0004CF10: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF20
 * Original: 0x0004CF20 - 0x0004CF59 (57 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0004CF20: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x0004CF2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CF25u); } /* indirect call */
    }

loc_0004CF2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0004CF31; /* jne: not equal / not zero */

loc_0004CF2F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0004CF31: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x0004CF3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CF36u); } /* indirect call */
    }

loc_0004CF3C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0004CF45; /* jne: not equal / not zero */

loc_0004CF42: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0004CF45: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x0004CF50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CF4Au); } /* indirect call */
    }

loc_0004CF50: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CF60
 * Original: 0x0004CF60 - 0x0004CF7F (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004CF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CF60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CF7A; /* jl: less (signed <) */

loc_0004CF68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x7B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x7B8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CF7A; /* jge: greater or equal (signed >=) */

loc_0004CF70: ;
    eax = MEM32(ecx + eax * 4 + 0x7A4);
    esp += 8; return; /* ret 4 */

loc_0004CF7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CF80
 * Original: 0x0004CF80 - 0x0004CF9F (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0004CF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CF80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004CF9A; /* jl: less (signed <) */

loc_0004CF88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x7C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x7C8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0004CF9A; /* jge: greater or equal (signed >=) */

loc_0004CF90: ;
    eax = MEM32(ecx + eax * 4 + 0x7C0);
    esp += 8; return; /* ret 4 */

loc_0004CF9A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004CFA0
 * Original: 0x0004CFA0 - 0x0004CFC7 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CFA0(void)
{

loc_0004CFA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0004CFA8u); RECOMP_ABI_CALL(0x0004C7D0u, sub_0004C7D0); /* call 0x0004C7D0 */

loc_0004CFA8: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esi + 0x738);
    ecx = esi + 0x738;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esi + 0x760) = ecx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0004CFC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CFC0u); } /* indirect call */
    }

loc_0004CFC3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004CFD0
 * Original: 0x0004CFD0 - 0x0004CFED (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CFD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x320); PUSH32(esp, 0x0004CFDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CFD5u); } /* indirect call */
    }

loc_0004CFDB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004CFEB; /* je: equal / zero */

loc_0004CFDF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x334); PUSH32(esp, 0x0004CFEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004CFE5u); } /* indirect call */
    }

loc_0004CFEB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004CFF0
 * Original: 0x0004CFF0 - 0x0004CFFB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004CFF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004CFF0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx) = LO8(eax);
    MEM8(ecx + 1) = LO8(eax);
    MEM8(ecx + 0xC) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0004D000
 * Original: 0x0004D000 - 0x0004D04A (74 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0004D011u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D00Bu); } /* indirect call */
    }

loc_0004D011: ;
    ecx = eax;
    PUSH32(esp, 0x0004D018u); RECOMP_ABI_CALL(0x0013C540u, sub_0013C540); /* call 0x0013C540 */

loc_0004D018: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0004D024u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D01Eu); } /* indirect call */
    }

loc_0004D024: ;
    ecx = eax;
    PUSH32(esp, 0x0004D02Bu); RECOMP_ABI_CALL(0x0013C570u, sub_0013C570); /* call 0x0013C570 */

loc_0004D02B: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D03C; /* je: equal / zero */

loc_0004D035: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0004D03Cu); RECOMP_ABI_CALL(0x00060DF0u, sub_00060DF0); /* call 0x00060DF0 */

loc_0004D03C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x35C); PUSH32(esp, 0x0004D046u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D040u); } /* indirect call */
    }

loc_0004D046: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004D050
 * Original: 0x0004D050 - 0x0004D084 (52 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D050: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D066; /* je: equal / zero */

loc_0004D05F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0004D066u); RECOMP_ABI_CALL(0x00060DF0u, sub_00060DF0); /* call 0x00060DF0 */

loc_0004D066: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEM8(esi + 0x6B8) = 1;
    MEM8(esi + 0x6B9) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x29C); PUSH32(esp, 0x0004D080u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D07Au); } /* indirect call */
    }

loc_0004D080: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004D090
 * Original: 0x0004D090 - 0x0004D0A5 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D090(void)
{

loc_0004D090: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x6B8) = 1;
    MEM8(eax + 0x6B9) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004D0B0
 * Original: 0x0004D0B0 - 0x0004D0B5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D0B0(void)
{

loc_0004D0B0: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0004D0C0
 * Original: 0x0004D0C0 - 0x0004D0D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D0C0(void)
{

loc_0004D0C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0004D0CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D0C6u); } /* indirect call */
    }

loc_0004D0CC: ;
    ecx = eax;
    PUSH32(esp, 0x0004D0D3u); RECOMP_ABI_CALL(0x0013C5A0u, sub_0013C5A0); /* call 0x0013C5A0 */

loc_0004D0D3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004D0E0
 * Original: 0x0004D0E0 - 0x0004D106 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D0E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D100; /* je: equal / zero */

loc_0004D0E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D100; /* je: equal / zero */

loc_0004D0EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D100; /* je: equal / zero */

loc_0004D0F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D100; /* je: equal / zero */

loc_0004D0F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D100; /* je: equal / zero */

loc_0004D0FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0004D100: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D110
 * Original: 0x0004D110 - 0x0004D154 (68 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D110: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = 0x7FFFFFFF;
    if (CMP_EQ(_fa, _fb)) goto loc_0004D133; /* je: equal / zero */

loc_0004D128: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004D133; /* jle: less or equal (signed <=) */

loc_0004D12D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004D128; /* jne: not equal / not zero */

loc_0004D133: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ecx + 4);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0004D160
 * Original: 0x0004D160 - 0x0004D17F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D160: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E2480;
    if (TEST_Z(_fa, _fb)) goto loc_0004D179; /* je: equal / zero */

loc_0004D170: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D176u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0004D176: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0004D179: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0004D180
 * Original: 0x0004D180 - 0x0004D1A1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D180: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x29C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x29C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0004D1B0
 * Original: 0x0004D1B0 - 0x0004D1C4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D1B0: ;
    SET_LO8(eax, MEM8(ecx + 0x325));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D1C1; /* je: equal / zero */

loc_0004D1BA: ;
    SET_LO8(eax, MEM8(ecx + 0x2E2));
    esp += 4; return; /* ret */

loc_0004D1C1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0004D1D0
 * Original: 0x0004D1D0 - 0x0004D1FF (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D1D0(void)
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

loc_0004D1D0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 0x2E2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D1ED; /* je: equal / zero */

loc_0004D1DB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2D4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0004D1ED: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
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
 * sub_0004D200
 * Original: 0x0004D200 - 0x0004D2E0 (224 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D200: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    MEMF(0x30D400) = xmm0.f[0]; /* movss */
    MEMF(0x30D404) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    MEMF(0x30D408) = xmm0.f[0]; /* movss */
    MEMF(0x30D40C) = xmm0.f[0]; /* movss */
    MEMF(0x30D418) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(0x30D3D0) = 0xA;
    MEMF(0x30D410) = xmm1.f[0]; /* movss */
    MEMF(0x30D414) = xmm1.f[0]; /* movss */
    MEMF(0x30D41C) = xmm0.f[0]; /* movss */
    edx = 0x320678;
    /* nop */

loc_0004D270: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0004D276u); RECOMP_ABI_CALL(0x0004C2E0u, sub_0004C2E0); /* call 0x0004C2E0 */

loc_0004D276: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320768) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x320768 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0004D270; /* jl: less (signed <) */

loc_0004D284: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC424)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x320664) = xmm0.f[0]; /* movss */
    MEMF(0x320668) = xmm0.f[0]; /* movss */
    MEMF(0x32066C) = xmm0.f[0]; /* movss */
    MEMF(0x320670) = xmm1.f[0]; /* movss */
    MEMF(0x320674) = xmm1.f[0]; /* movss */
    MEMF(0x320650) = xmm0.f[0]; /* movss */
    MEMF(0x320654) = xmm0.f[0]; /* movss */
    MEMF(0x320658) = xmm0.f[0]; /* movss */
    MEMF(0x32065C) = xmm1.f[0]; /* movss */
    MEMF(0x320660) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0004D2E0
 * Original: 0x0004D2E0 - 0x0004D31D (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D2E0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004D2ECu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0004D2EC: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x0004D2F8u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0004D2F8: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0xFF);
    edx = esi + 0x408;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004D30Eu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0004D30E: ;
    MEM32(esi + eax * 4 + 8) = edi;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004D320
 * Original: 0x0004D320 - 0x0004D327 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D320(void)
{

loc_0004D320: ;
    MEM32(ecx) = 0x2E2480;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D330
 * Original: 0x0004D330 - 0x0004D336 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D330(void)
{

loc_0004D330: ;
    eax = 0x2E249C;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D340
 * Original: 0x0004D340 - 0x0004D346 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D340(void)
{

loc_0004D340: ;
    eax = 0x2E24BC;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D350
 * Original: 0x0004D350 - 0x0004D356 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D350(void)
{

loc_0004D350: ;
    eax = 0x2E24E0;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D360
 * Original: 0x0004D360 - 0x0004D366 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D360(void)
{

loc_0004D360: ;
    eax = 0x2E2504;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D370
 * Original: 0x0004D370 - 0x0004D376 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D370(void)
{

loc_0004D370: ;
    eax = 0x2E252C;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D380
 * Original: 0x0004D380 - 0x0004D386 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D380(void)
{

loc_0004D380: ;
    eax = 0x2E2554;
    esp += 4; return; /* ret */

}

/**
 * sub_0004D390
 * Original: 0x0004D390 - 0x0004D66E (734 bytes, 218 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004D390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0004D390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x83C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x83C));
    esp = esp - 0x83C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D3A6u); RECOMP_ABI_CALL(0x00041990u, sub_00041990); /* call 0x00041990 */

loc_0004D3A6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C4); PUSH32(esp, 0x0004D3B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D3AAu); } /* indirect call */
    }

loc_0004D3B0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C8); PUSH32(esp, 0x0004D3BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D3B4u); } /* indirect call */
    }

loc_0004D3BA: ;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D3C3u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0004D3C3: ;
    eax = MEM32(esi);
    ecx = esi;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1CC); PUSH32(esp, 0x0004D3CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D3C9u); } /* indirect call */
    }

loc_0004D3CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D3DC; /* je: equal / zero */

loc_0004D3D3: ;
    eax = 0xB5DF2B27u;
    SET_LO8(ebx, 1);
    goto loc_0004D3F8;

loc_0004D3DC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x318); PUSH32(esp, 0x0004D3E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D3E0u); } /* indirect call */
    }

loc_0004D3E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D3F3; /* je: equal / zero */

loc_0004D3EA: ;
    eax = 0x7FB82A73;
    SET_LO8(ebx, 1);
    goto loc_0004D3F8;

loc_0004D3F3: ;
    eax = 0x5B55AA06;

loc_0004D3F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x9B9B84CFu);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D407u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0004D407: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D415u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0004D415: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D420; /* je: equal / zero */

loc_0004D419: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D420u); RECOMP_ABI_CALL(0x0004C780u, sub_0004C780); /* call 0x0004C780 */

loc_0004D420: ;
    ecx = MEM32(esi + 0x6A8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xDA127965u);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D435u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0004D435: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D443u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0004D443: ;
    eax = MEM32(esi + 0x6AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x270A2F14);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D458u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0004D458: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D466u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0004D466: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0004D470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D46Au); } /* indirect call */
    }

loc_0004D470: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D57E; /* je: equal / zero */

loc_0004D47A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0004D481u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D47Eu); } /* indirect call */
    }

loc_0004D481: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D4CC; /* je: equal / zero */

loc_0004D485: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0004D4CC; /* je: equal / zero */

loc_0004D489: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x28);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x2DEA44);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D49Fu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0004D49F: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0004D4A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D4A6u); } /* indirect call */
    }

loc_0004D4A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0004D4B9; /* jne: not equal / not zero */

loc_0004D4AD: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2E25A0);
    goto loc_0004D4C3;

loc_0004D4B9: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2E2588);

loc_0004D4C3: ;
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D4CCu); RECOMP_ABI_CALL(0x00012280u, sub_00012280); /* call 0x00012280 */

loc_0004D4CC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0004D4D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D4D0u); } /* indirect call */
    }

loc_0004D4D2: ;
    edx = MEM32(0x30D9B8);
    ecx = MEM32(0x30D9B4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0004D525; /* jne: not equal / not zero */

loc_0004D4E4: ;
    SET_LO8(eax, MEM8(edi + 0x920));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0004D508; /* je: equal / zero */

loc_0004D4F2: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2E257C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D501u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0004D501: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    goto loc_0004D51C;

loc_0004D508: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2E257C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D517u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0004D517: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);

loc_0004D51C: ;
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D525u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0004D525: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0004D52Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D529u); } /* indirect call */
    }

loc_0004D52B: ;
    edx = MEM32(0x30D994);
    ecx = MEM32(0x30D990);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0004D57E; /* jne: not equal / not zero */

loc_0004D53D: ;
    SET_LO8(eax, MEM8(edi + 0x67D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0004D561; /* je: equal / zero */

loc_0004D54B: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2E2564);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D55Au); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0004D55A: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    goto loc_0004D575;

loc_0004D561: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2E2564);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D570u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0004D570: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);

loc_0004D575: ;
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D57Eu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0004D57E: ;
    _fa = (uint32_t)(MEM8(esi + 0x800)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x800), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0004D5E9; /* jne: not equal / not zero */

loc_0004D587: ;
    PUSH32(esp, 0x4DB211E5);
    PUSH32(esp, 0xCA10AF04u);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D59Au); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0004D59A: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D5A8u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0004D5A8: ;
    eax = MEM32(esi + 0x804);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB293ABF1u);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D5BDu); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0004D5BD: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D5CBu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0004D5CB: ;
    SET_LO8(edx, MEM8(esi + 0x801));
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
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
    goto loc_0004D60A;

loc_0004D5E9: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D5F0u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0004D5F0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCA10AF04u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0004D5FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D5F9u); } /* indirect call */
    }

loc_0004D5FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D621; /* je: equal / zero */

loc_0004D600: ;
    PUSH32(esp, 0xB069958);
    PUSH32(esp, 0xCA10AF04u);

loc_0004D60A: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D613u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0004D613: ;
    eax = esp + 0x10;
    ecx = esp + 0x40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D621u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0004D621: ;
    SET_LO8(ecx, MEM8(esi + 0x808));
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
    PUSH32(esp, 0x84AF673Cu);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D646u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_0004D646: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D654u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0004D654: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D660u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0004D660: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D667u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_0004D667: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0004D670
 * Original: 0x0004D670 - 0x0004D7A5 (309 bytes, 89 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D670(void)
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

loc_0004D670: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0004D67Au); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0004D67A: ;
    PUSH32(esp, 0x2E25B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2990);
    esi = eax;
    PUSH32(esp, 0x0004D68Du); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0004D68D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D69D; /* je: equal / zero */

loc_0004D694: ;
    ecx = eax;
    PUSH32(esp, 0x0004D69Bu); RECOMP_ABI_CALL(0x00060CA0u, sub_00060CA0); /* call 0x00060CA0 */

loc_0004D69B: ;
    goto loc_0004D69F;

loc_0004D69D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0004D69F: ;
    MEM32(edi + 0x6B0) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31F43757);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0004D6B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D6AEu); } /* indirect call */
    }

loc_0004D6B1: ;
    ecx = MEM32(edi + 0x6B0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0004D6BEu); RECOMP_ABI_CALL(0x000621B0u, sub_000621B0); /* call 0x000621B0 */

loc_0004D6BE: ;
    ecx = MEM32(edi + 0x6B0);
    PUSH32(esp, 0x0004D6C9u); RECOMP_ABI_CALL(0x00060F00u, sub_00060F00); /* call 0x00060F00 */

loc_0004D6C9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21CC2EA7);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0004D6D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D6D2u); } /* indirect call */
    }

loc_0004D6D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D735; /* je: equal / zero */

loc_0004D6D9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004D6DFu); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0004D6DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x903A295Au);
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0004D6F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D6F5u); } /* indirect call */
    }

loc_0004D6F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D735; /* je: equal / zero */

loc_0004D6FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004D702u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0004D702: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DD3DC)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(edi + 0x6B0);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 0x2928) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x2924) = xmm0.f[0]; /* movss */

loc_0004D735: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x16B3A26B);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0004D741u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D73Eu); } /* indirect call */
    }

loc_0004D741: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D793; /* je: equal / zero */

loc_0004D745: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004D74Bu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0004D74B: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB8CE0E7Bu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0004D75Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D75Bu); } /* indirect call */
    }

loc_0004D75E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D793; /* je: equal / zero */

loc_0004D762: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0004D768u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0004D768: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    eax = MEM32(edi + 0x6B0);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD3DC); /* mulss */
    MEMF(eax + 0x295C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x2958) = xmm0.f[0]; /* movss */

loc_0004D793: ;
    ecx = MEM32(edi + 0x6E0);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0004D7A1u); RECOMP_ABI_CALL(0x0004CAF0u, sub_0004CAF0); /* call 0x0004CAF0 */

loc_0004D7A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0004D7B0
 * Original: 0x0004D7B0 - 0x0004D7DB (43 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D7B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x6B0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D7D8; /* je: equal / zero */

loc_0004D7BE: ;
    ecx = esi;
    PUSH32(esp, 0x0004D7C5u); RECOMP_ABI_CALL(0x00060D60u, sub_00060D60); /* call 0x00060D60 */

loc_0004D7C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0004D7CBu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0004D7CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x6B0) = 0;

loc_0004D7D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004D7E0
 * Original: 0x0004D7E0 - 0x0004D811 (49 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004D7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0004D7E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x6D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6D0), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D80F; /* je: equal / zero */

loc_0004D7EC: ;
    PUSH32(esp, 0x0004D7F1u); RECOMP_ABI_CALL(0x0004C780u, sub_0004C780); /* call 0x0004C780 */

loc_0004D7F1: ;
    SET_LO8(eax, MEM8(esi + 0x6BF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D805; /* je: equal / zero */

loc_0004D7FB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C8); PUSH32(esp, 0x0004D805u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D7FFu); } /* indirect call */
    }

loc_0004D805: ;
    MEM32(esi + 0x6D0) = 2;

loc_0004D80F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0004D820
 * Original: 0x0004D820 - 0x0004D912 (242 bytes, 73 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0004D820(void)
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

loc_0004D820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0004D83E; /* jne: not equal / not zero */

loc_0004D836: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x0004D83Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D838u); } /* indirect call */
    }

loc_0004D83E: ;
    ecx = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    edx = esp + 0x23;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0004D85Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D85Au); } /* indirect call */
    }

loc_0004D85D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D863u); RECOMP_ABI_CALL(0x0012D6A0u, sub_0012D6A0); /* call 0x0012D6A0 */

loc_0004D863: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xB0;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D87Au); RECOMP_ABI_CALL(0x001F7D90u, sub_001F7D90); /* call 0x001F7D90 */

loc_0004D87A: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D888u); RECOMP_ABI_CALL(0x001F83B0u, sub_001F83B0); /* call 0x001F83B0 */

loc_0004D888: ;
    eax = MEM32(esi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0004D894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D891u); } /* indirect call */
    }

loc_0004D894: ;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004D8A7; /* je: equal / zero */

loc_0004D89B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0004D8A7: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D8B6u); RECOMP_ABI_CALL(0x0022FA9Eu, sub_0022FA9E); /* call 0x0022FA9E */

loc_0004D8B6: ;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0004D8C1u); RECOMP_ABI_CALL(0x0022F9BCu, sub_0022F9BC); /* call 0x0022F9BC */

loc_0004D8C1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = MEM32(esi);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = esp + 0x50;
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0004D90Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0004D908u); } /* indirect call */
    }

loc_0004D90B: ;
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
