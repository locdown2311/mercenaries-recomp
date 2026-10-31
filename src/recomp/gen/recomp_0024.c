/**
 * Mercenaries - Recompiled code chunk 24
 * Functions: 250 (0x00140BA0 - 0x0014C7E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00140BA0
 * Original: 0x00140BA0 - 0x00140DEA (586 bytes, 141 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140BA0(void)
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

loc_00140BA0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00140BB0u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00140BB0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00140C43; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_00140BE5: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E1644); /* mulss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00140C02u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00140C02: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00140C43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140C40u); } /* indirect call */
    }

loc_00140C43: ;
    SET_LO8(eax, MEM8(esi + 0xBD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140CDF; /* je: equal / zero */

loc_00140C51: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00140C5Bu); RECOMP_ABI_CALL(0x00146540u, sub_00146540); /* call 0x00146540 */

loc_00140C5B: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00140C99u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00140C99: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00140CDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140CDCu); } /* indirect call */
    }

loc_00140CDF: ;
    SET_LO8(eax, MEM8(esi + 0xBC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140DCF; /* je: equal / zero */

loc_00140CED: ;
    ecx = esi;
    PUSH32(esp, 0x00140CF4u); RECOMP_ABI_CALL(0x00130390u, sub_00130390); /* call 0x00130390 */

loc_00140CF4: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00140D16; /* jbe: below or equal (unsigned <=) */

loc_00140D0D: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    goto loc_00140D19;

loc_00140D16: ;
    xmm2 = xmm1; /* movaps */

loc_00140D19: ;
    _fca = xmm2.f[0]; _fcb = MEMF(0x2DBED0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00140DCF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x2DBED0)) */

loc_00140D26: ;
    edx = esp + 0x2C;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00140D3Cu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_00140D3C: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x00140D89u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00140D89: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00140DCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140DCCu); } /* indirect call */
    }

loc_00140DCF: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00140DE4; /* je: equal / zero */

loc_00140DDA: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00140DE4u); RECOMP_ABI_CALL(0x001409D0u, sub_001409D0); /* call 0x001409D0 */

loc_00140DE4: ;
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
 * sub_00140DF0
 * Original: 0x00140DF0 - 0x00140E8A (154 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140E0D; /* je: equal / zero */

loc_00140DFD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00140E03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140E01u); } /* indirect call */
    }

loc_00140E03: ;
    MEM32(esi + 0xC0) = 0;

loc_00140E0D: ;
    ecx = MEM32(esi + 0x9C);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140E24; /* jne: not equal / not zero */

loc_00140E1E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00140E24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140E22u); } /* indirect call */
    }

loc_00140E24: ;
    eax = MEM32(esi + 0x9C);
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140E36u); RECOMP_ABI_CALL(0x001BD180u, sub_001BD180); /* call 0x001BD180 */

loc_00140E36: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x9C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00140E4F; /* je: equal / zero */

loc_00140E4A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00140E51;

loc_00140E4F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00140E51: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140E5Au); RECOMP_ABI_CALL(0x001C29E0u, sub_001C29E0); /* call 0x001C29E0 */

loc_00140E5A: ;
    ecx = MEM32(esi + 0x98);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140E71; /* jne: not equal / not zero */

loc_00140E6B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00140E71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140E6Fu); } /* indirect call */
    }

loc_00140E71: ;
    ecx = esi;
    MEM32(esi + 0x98) = 0;
    PUSH32(esp, 0x00140E82u); RECOMP_ABI_CALL(0x0012FF90u, sub_0012FF90); /* call 0x0012FF90 */

loc_00140E82: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_00140E90
 * Original: 0x00140E90 - 0x00140E9E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E90(void)
{

loc_00140E90: ;
    MEM32(ecx + 8) = 0x2F17BC;
    MEM32(ecx) = 0x2DC684;
    esp += 4; return; /* ret */

}

/**
 * sub_00140EA0
 * Original: 0x00140EA0 - 0x00140EC8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00140EA8u); RECOMP_ABI_CALL(0x00140AB0u, sub_00140AB0); /* call 0x00140AB0 */

loc_00140EA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00140EC2; /* je: equal / zero */

loc_00140EAF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00140EC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140EBFu); } /* indirect call */
    }

loc_00140EC2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140ED0
 * Original: 0x00140ED0 - 0x00140EE2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140ED0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(ecx + 0x1C);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00140BA0(); return; /* tail jmp 0x00140BA0 */

}

/**
 * sub_00140EF0
 * Original: 0x00140EF0 - 0x00140F79 (137 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140EF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2432A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM16(esi + 6) = 1;
    ecx = MEM32(esp + 0x18);
    eax = esi + 8;
    MEM32(eax) = 0x2DD93C;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x2F17C8;
    MEM32(eax) = 0x2F17BC;
    PUSH32(esp, 0x00140F3Au); RECOMP_ABI_CALL(0x001C2B40u, sub_001C2B40); /* call 0x001C2B40 */

loc_00140F3A: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0xC) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00140F65; /* je: equal / zero */

loc_00140F45: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi + 0x30;
    eax = esi + 0xE;
    edx = 0x10;

loc_00140F53: ;
    MEM16(eax) = 0;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00140F53; /* jne: not equal / not zero */

loc_00140F65: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00140F80
 * Original: 0x00140F80 - 0x00140FA8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00140F88u); RECOMP_ABI_CALL(0x00140E90u, sub_00140E90); /* call 0x00140E90 */

loc_00140F88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00140FA2; /* je: equal / zero */

loc_00140F8F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00140FA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140F9Fu); } /* indirect call */
    }

loc_00140FA2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140FB0
 * Original: 0x00140FB0 - 0x001410DC (300 bytes, 91 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140FB0: ;
    eax = MEM32(XBOX_FS_BASE);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2432D6);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00140FE8u); RECOMP_ABI_CALL(0x001319F0u, sub_001319F0); /* call 0x001319F0 */

loc_00140FE8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141009; /* je: equal / zero */

loc_00140FEC: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00140FF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00140FF0u); } /* indirect call */
    }

loc_00140FF3: ;
    edx = MEM32(0x30C2A4);
    ecx = MEM32(0x30C2A0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141009; /* jne: not equal / not zero */

loc_00141005: ;
    eax = edi;
    goto loc_0014100B;

loc_00141009: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014100B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x28) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00141020; /* je: equal / zero */

loc_00141013: ;
    _fa = (uint32_t)(MEM8(eax + 0x539)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x539), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141020; /* je: equal / zero */

loc_0014101B: ;
    MEM8(esp + 0x28) = 1;

loc_00141020: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141062; /* je: equal / zero */

loc_00141027: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x70);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00141036u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00141033u); } /* indirect call */
    }

loc_00141036: ;
    MEM16(eax + 4) = 0x70;
    MEM32(esp + 0x24) = eax;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00141054u); RECOMP_ABI_CALL(0x00140EF0u, sub_00140EF0); /* call 0x00140EF0 */

loc_00141054: ;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esi + 0x98) = eax;

loc_00141062: ;
    MEM8(esi + 0xBC) = LO8(ebx);
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0x94) = edi;
    MEM8(esi + 0xBD) = LO8(ebx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00141089u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00141086u); } /* indirect call */
    }

loc_00141089: ;
    MEM16(eax + 4) = 0x20;
    MEM32(esp + 0x28) = eax;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0x001410A7u); RECOMP_ABI_CALL(0x00140A80u, sub_00140A80); /* call 0x00140A80 */

loc_001410A7: ;
    MEM32(esi + 0x9C) = eax;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001410C1u); RECOMP_ABI_CALL(0x001BF080u, sub_001BF080); /* call 0x001BF080 */

loc_001410C1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001410C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001410C5u); } /* indirect call */
    }

loc_001410C8: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001410E0
 * Original: 0x001410E0 - 0x0014156C (1164 bytes, 310 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001410E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001410E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2432EB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00141121; /* je: equal / zero */

loc_0014110B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* nop */

loc_00141110: ;
    edx = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM16(ecx + edx * 2 + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + edx * 2 + 6), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141156; /* je: equal / zero */

loc_0014111B: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00141110; /* jb: below (unsigned <) */

loc_00141121: ;
    edx = MEM32(ebp + 8);

loc_00141124: ;
    ecx = MEM32(edx + 8);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00141149; /* je: equal / zero */

loc_00141139: ;
    /* nop */

loc_00141140: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141140; /* jne: not equal / not zero */

loc_00141149: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014116F; /* jne: not equal / not zero */

loc_00141151: ;
    ebx = MEM32(ecx + 0x20);
    goto loc_00141171;

loc_00141156: ;
    edx = MEM32(ebp + 8);
    SET_LO16(esi, MEM16(edx));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ZX8(LO8(eax));
    MEM16(ecx + eax * 2 + 6) = LO16(esi);
    MEMF(ecx + eax * 4 + 0x28) = xmm0.f[0]; /* movss */
    goto loc_00141124;

loc_0014116F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00141171: ;
    ecx = MEM32(edx + 0xC);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141189; /* je: equal / zero */

loc_0014117B: ;
    goto loc_00141180;

    /* nop */

loc_00141180: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141180; /* jne: not equal / not zero */

loc_00141189: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141194; /* jne: not equal / not zero */

loc_0014118F: ;
    edi = MEM32(ecx + 0x20);
    goto loc_00141196;

loc_00141194: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00141196: ;
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001411A1; /* je: equal / zero */

loc_0014119B: ;
    eax = ebx;
    ebx = edi;
    edi = eax;

loc_001411A1: ;
    eax = MEM32(ebx + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001411C1; /* jnp: not parity */

loc_001411B5: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */

loc_001411C1: ;
    ecx = MEM32(edi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(0x2F178C)); /* movss */
    eax = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001411DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001411DAu); } /* indirect call */
    }

loc_001411DD: ;
    esi = MEM32(ebx + 0xA4);
    ecx = MEM32(edi + 0xA4);
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    eax = MEM32(edx + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEM8(esp + 0x13) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0014135A; /* je: equal / zero */

loc_00141223: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014122Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00141227u); } /* indirect call */
    }

loc_0014122A: ;
    edx = MEM32(0x30C2A4);
    ecx = MEM32(0x30C2A0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014135A; /* jne: not equal / not zero */

loc_00141240: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141247u); RECOMP_ABI_CALL(0x00036830u, sub_00036830); /* call 0x00036830 */

loc_00141247: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014135A; /* je: equal / zero */

loc_0014124F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC094); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014135A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC094)) */

loc_00141262: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D81576Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x9D81576Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014135A; /* je: equal / zero */

loc_0014126F: ;
    xmm6 = XMM_SCALAR(MEMF(0x2DFE78)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    ecx = MEM32(0x4409AC);
    MEMF(esp + 0x4C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm1 = xmm2; /* movaps */
    MEMF(esp + 0x54) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31);
    MEM32(esp + 0x4C) = 0x11;
    MEMF(esp + 0x5C) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x78) = 0;
    MEM32(esp + 0x7C) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, 0x44);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00141316u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00141313u); } /* indirect call */
    }

loc_00141316: ;
    MEM16(eax + 4) = 0x44;
    MEM32(esp + 0x7C) = eax;
    PUSH32(esp, esi);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0xB4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141338u); RECOMP_ABI_CALL(0x00131120u, sub_00131120); /* call 0x00131120 */

loc_00141338: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xAC) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_0014134C; /* je: equal / zero */

loc_00141347: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014134E;

loc_0014134C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014134E: ;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014135Au); RECOMP_ABI_CALL(0x001BD850u, sub_001BD850); /* call 0x001BD850 */

loc_0014135A: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141388; /* jne: not equal / not zero */

loc_00141362: ;
    edx = MEM32(edi + 0x3C);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00141382; /* jnp: not parity */

loc_00141376: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_00141382: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00141388: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC348); /* comiss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141555; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC348)) */

loc_001413B7: ;
    ecx = MEM32(ebx + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    edx = MEM32(edx + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001413CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001413CBu); } /* indirect call */
    }

loc_001413CE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    ecx = MEM32(edi + 0x3C);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    edx = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    edx = MEM32(edx + 0x14);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00141412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014140Fu); } /* indirect call */
    }

loc_00141412: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00141476; /* je: equal / zero */

loc_00141447: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014144Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014144Bu); } /* indirect call */
    }

loc_0014144E: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141476; /* jne: not equal / not zero */

loc_00141460: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014146Eu); RECOMP_ABI_CALL(0x00044300u, sub_00044300); /* call 0x00044300 */

loc_0014146E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141555; /* jne: not equal / not zero */

loc_00141476: ;
    PUSH32(esp, 0xF38C1638u);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141482u); RECOMP_ABI_CALL(0x001EA000u, sub_001EA000); /* call 0x001EA000 */

loc_00141482: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001414B9; /* je: equal / zero */

loc_00141488: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0014148Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014148Cu); } /* indirect call */
    }

loc_0014148F: ;
    edx = MEM32(0x30C2A4);
    ecx = MEM32(0x30C2A0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001414B9; /* jne: not equal / not zero */

loc_001414A1: ;
    SET_LO8(eax, MEM8(esi + 0x539));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001414B9; /* je: equal / zero */

loc_001414AB: ;
    PUSH32(esp, 0x31B06237);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001414B7u); RECOMP_ABI_CALL(0x001EA000u, sub_001EA000); /* call 0x001EA000 */

loc_001414B7: ;
    edi = eax;

loc_001414B9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_001414D6; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001414D0: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_001414D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001414FF; /* je: equal / zero */

loc_001414DA: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001414F2u); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_001414F2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001414FCu); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_001414FC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001414FF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2F17CC); /* comiss */
    PUSH32(esp, 0);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141532; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2F17CC)) */

loc_00141510: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014151Fu); RECOMP_ABI_CALL(0x000A6F80u, sub_000A6F80); /* call 0x000A6F80 */

loc_0014151F: ;
    PUSH32(esp, 0);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141530u); RECOMP_ABI_CALL(0x000A6F80u, sub_000A6F80); /* call 0x000A6F80 */

loc_00141530: ;
    goto loc_00141552;

loc_00141532: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141541u); RECOMP_ABI_CALL(0x000A6CF0u, sub_000A6CF0); /* call 0x000A6CF0 */

loc_00141541: ;
    PUSH32(esp, 0);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00141552u); RECOMP_ABI_CALL(0x000A6CF0u, sub_000A6CF0); /* call 0x000A6CF0 */

loc_00141552: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00141555: ;
    ecx = MEM32(esp + 0xA4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141570
 * Original: 0x00141570 - 0x0014161F (175 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141570: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243308);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x80000000u;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001415BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001415B8u); } /* indirect call */
    }

loc_001415BB: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001415E3; /* jg: greater (signed >) */

loc_001415C3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi + 0x28;
    eax = esi + 6;
    edx = 0x10;

loc_001415D1: ;
    MEM16(eax) = 0;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001415D1; /* jne: not equal / not zero */

loc_001415E3: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0014160D; /* js: sign (negative) */

loc_001415F3: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0014160Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014160Au); } /* indirect call */
    }

loc_0014160D: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141620
 * Original: 0x00141620 - 0x0014168C (108 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141620(void)
{

loc_00141620: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    MEMF(ecx + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xF8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEMF(ecx + 0xFC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0xEC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    MEMF(ecx + 0x100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E2C30)); /* movss */
    MEMF(ecx + 0xF0) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x104) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00141690
 * Original: 0x00141690 - 0x00141742 (178 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141690: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC671B561u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC671B561u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001416FA; /* ja: above (unsigned >) */

loc_0014169B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001416E9; /* je: equal / zero */

loc_0014169D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x995578C1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x995578C1u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001416D8; /* je: equal / zero */

loc_001416A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xACB12D90u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xACB12D90u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001416C7; /* je: equal / zero */

loc_001416AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB8E8391Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB8E8391Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014173F; /* jne: not equal / not zero */

loc_001416B6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xE8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_001416C7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xFC) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_001416D8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xEC) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_001416E9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x104) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_001416FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE4FFDD1Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE4FFDD1Bu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141731; /* je: equal / zero */

loc_00141701: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9C5F623u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9C5F623u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141720; /* je: equal / zero */

loc_00141708: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEAF16F69u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEAF16F69u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014173F; /* jne: not equal / not zero */

loc_0014170F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xF8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_00141720: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_00141731: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */

loc_0014173F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141750
 * Original: 0x00141750 - 0x001417CF (127 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141750(void)
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

loc_00141750: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC671B561u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC671B561u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00141796; /* ja: above (unsigned >) */

loc_0014175B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0014178D; /* je: equal / zero */

loc_0014175D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x995578C1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x995578C1u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141784; /* je: equal / zero */

loc_00141764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xACB12D90u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xACB12D90u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014177B; /* je: equal / zero */

loc_0014176B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB8E8391Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB8E8391Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001417AB; /* jne: not equal / not zero */

loc_00141772: ;
    fp_push(MEMF(ecx + 0xE8)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_0014177B: ;
    fp_push(MEMF(ecx + 0xFC)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00141784: ;
    fp_push(MEMF(ecx + 0xEC)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_0014178D: ;
    fp_push(MEMF(ecx + 0x104)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00141796: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE4FFDD1Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE4FFDD1Bu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001417C6; /* je: equal / zero */

loc_0014179D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9C5F623u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9C5F623u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001417BD; /* je: equal / zero */

loc_001417A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEAF16F69u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEAF16F69u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001417B4; /* je: equal / zero */

loc_001417AB: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_001417B4: ;
    fp_push(MEMF(ecx + 0xF8)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_001417BD: ;
    fp_push(MEMF(ecx + 0xF4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_001417C6: ;
    fp_push(MEMF(ecx + 0xF0)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001417D0
 * Original: 0x001417D0 - 0x001417EA (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001417D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001417D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2F17D0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xE0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001417E7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xE0)) */

loc_001417E1: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001417E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001417F0
 * Original: 0x001417F0 - 0x0014181B (43 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001417F0(void)
{

loc_001417F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x94) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA0) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0xA4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00141820
 * Original: 0x00141820 - 0x00141827 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141820(void)
{

loc_00141820: ;
    SET_LO8(eax, MEM8(ecx + 0x10C));
    esp += 4; return; /* ret */

}

/**
 * sub_00141830
 * Original: 0x00141830 - 0x00141857 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141830(void)
{

loc_00141830: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0014183Du); RECOMP_ABI_CALL(0x001C73E0u, sub_001C73E0); /* call 0x001C73E0 */

loc_0014183D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x2F1804;
    MEM32(esi + 8) = 0x2F17F4;
    MEM32(esi + 0x1C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141860
 * Original: 0x00141860 - 0x00141872 (18 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141860: ;
    MEM32(ecx) = 0x2F1804;
    MEM32(ecx + 8) = 0x2F17F4;
    g_seh_ebp = ebp; sub_001C7360(); return; /* tail jmp 0x001C7360 */

}

/**
 * sub_00141880
 * Original: 0x00141880 - 0x001418A3 (35 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00141880: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(ecx + 0x94) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001418A0; /* jnp: not parity */

loc_0014189B: ;
    PUSH32(esp, 0x001418A0u); RECOMP_ABI_CALL(0x00130170u, sub_00130170); /* call 0x00130170 */

loc_001418A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001418B0
 * Original: 0x001418B0 - 0x001418D3 (35 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001418B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001418B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001418D0; /* jnp: not parity */

loc_001418CB: ;
    PUSH32(esp, 0x001418D0u); RECOMP_ABI_CALL(0x00130170u, sub_00130170); /* call 0x00130170 */

loc_001418D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001418E0
 * Original: 0x001418E0 - 0x00141903 (35 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001418E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001418E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00141900; /* jnp: not parity */

loc_001418FB: ;
    PUSH32(esp, 0x00141900u); RECOMP_ABI_CALL(0x00130170u, sub_00130170); /* call 0x00130170 */

loc_00141900: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141910
 * Original: 0x00141910 - 0x00141918 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141910: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00142070(); return; /* tail jmp 0x00142070 */

}

/**
 * sub_00141920
 * Original: 0x00141920 - 0x00141971 (81 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141920: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00141928u); RECOMP_ABI_CALL(0x00130040u, sub_00130040); /* call 0x00130040 */

loc_00141928: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0xA4) = LO8(eax);
    MEM32(esi + 0xDC) = eax;
    MEM8(esi + 0x10D) = LO8(eax);
    MEM32(esi) = 0x2F1820;
    MEMF(esi + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE0) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00141980
 * Original: 0x00141980 - 0x001419F8 (120 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141980: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xDC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ecx + 6));
    if ((_fa != 0)) goto loc_00141999; /* jne: not equal / not zero */

loc_00141993: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00141999u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00141997u); } /* indirect call */
    }

loc_00141999: ;
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, 0x001419ABu); RECOMP_ABI_CALL(0x001BD180u, sub_001BD180); /* call 0x001BD180 */

loc_001419AB: ;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xDC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001419C4; /* je: equal / zero */

loc_001419BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001419C6;

loc_001419C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001419C6: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001419CFu); RECOMP_ABI_CALL(0x001C29E0u, sub_001C29E0); /* call 0x001C29E0 */

loc_001419CF: ;
    ecx = MEM32(esi + 0xD8);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001419E6; /* jne: not equal / not zero */

loc_001419E0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001419E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001419E4u); } /* indirect call */
    }

loc_001419E6: ;
    MEM32(esi + 0xD8) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0012FF90(); return; /* tail jmp 0x0012FF90 */

}

/**
 * sub_00141A00
 * Original: 0x00141A00 - 0x00141A69 (105 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00141A00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00141A10u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_00141A10: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca > _fcb)) goto loc_00141A57; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00141A1E: ;
    ecx = esi;
    PUSH32(esp, 0x00141A25u); RECOMP_ABI_CALL(0x00132BC0u, sub_00132BC0); /* call 0x00132BC0 */

loc_00141A25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141A3A; /* jne: not equal / not zero */

loc_00141A29: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141A57; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00141A3A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esi + 0xE0) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00141A57: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xE0) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141A70
 * Original: 0x00141A70 - 0x00141E7C (1036 bytes, 258 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00141A70: ;
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x98); /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141A9D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm6.f[0]) */

loc_00141A96: ;
    ecx = 1;
    goto loc_00141A9F;

loc_00141A9D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00141A9F: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141AAB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_00141AA4: ;
    eax = 1;
    goto loc_00141AAD;

loc_00141AAB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00141AAD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141ABE; /* je: equal / zero */

loc_00141AB1: ;
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00141ABE; /* jnp: not parity */

loc_00141ABA: ;
    SET_LO8(eax, 1);
    goto loc_00141AC0;

loc_00141ABE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00141AC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = xmm6; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_00141AD3; /* jne: not equal / not zero */

loc_00141AC7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */

loc_00141AD3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm5 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_00141B00; /* je: equal / zero */

loc_00141AE6: ;
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    if ((_fca > _fcb)) goto loc_00141AF6; /* ja: above (unsigned >) (xmm6.f[0] vs xmm1.f[0]) */

loc_00141AF3: ;
    xmm1 = xmm5; /* movaps */

loc_00141AF6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF0)); /* movss */
    goto loc_00141B08;

loc_00141B00: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xEC)); /* movss */

loc_00141B08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00141B5B; /* je: equal / zero */

loc_00141B2A: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    if ((_fca > _fcb)) goto loc_00141B3A; /* ja: above (unsigned >) (xmm6.f[0] vs xmm0.f[0]) */

loc_00141B37: ;
    xmm1 = xmm5; /* movaps */

loc_00141B3A: ;
    _fca = xmm6.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    if ((_fca > _fcb)) goto loc_00141B4A; /* ja: above (unsigned >) (xmm6.f[0] vs xmm2.f[0]) */

loc_00141B47: ;
    xmm0 = xmm5; /* movaps */

loc_00141B4A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00141B5B; /* jnp: not parity */

loc_00141B53: ;
    MEMF(esi + 0xA0) = xmm6.f[0]; /* movss */

loc_00141B5B: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm1 = xmm3; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141B7F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00141B7A: ;
    xmm7 = xmm1; /* movaps */
    goto loc_00141B8A;

loc_00141B7F: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm7 = xmm4; /* movaps */
    if ((_fca > _fcb)) goto loc_00141B8A; /* ja: above (unsigned >) (xmm0.f[0] vs xmm4.f[0]) */

loc_00141B87: ;
    xmm7 = xmm0; /* movaps */

loc_00141B8A: ;
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esi + 0xE8); /* divss */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0xA0) = xmm7.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141BAB; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm1.f[0]) */

loc_00141BA2: ;
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00141BAE;

loc_00141BAB: ;
    xmm0 = xmm1; /* movaps */

loc_00141BAE: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141BB8; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_00141BB3: ;
    xmm5 = xmm6; /* movaps */
    goto loc_00141BC0;

loc_00141BB8: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00141BC0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_00141BBD: ;
    xmm5 = xmm0; /* movaps */

loc_00141BC0: ;
    _fca = xmm6.f[0]; _fcb = MEMF(esi + 0x9C); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xFC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x9C); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    if ((_fca > _fcb)) goto loc_00141BE9; /* ja: above (unsigned >) (xmm6.f[0] vs MEMF(esi + 0x9C)) */

loc_00141BE1: ;
    xmm4 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */

loc_00141BE9: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x104)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141C07; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm1.f[0]) */

loc_00141BFE: ;
    xmm5 = xmm6; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    goto loc_00141C0A;

loc_00141C07: ;
    xmm5 = xmm1; /* movaps */

loc_00141C0A: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141C18; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_00141C0F: ;
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    goto loc_00141C1B;

loc_00141C18: ;
    xmm4 = xmm0; /* movaps */

loc_00141C1B: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141C24; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm5.f[0]) */

loc_00141C20: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00141C24: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x100); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xF4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x100); /* addss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    xmm1 = xmm7; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141C66; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00141C61: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00141C6E;

loc_00141C66: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141C6E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00141C6B: ;
    xmm1 = xmm4; /* movaps */

loc_00141C6E: ;
    xmm5 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141C84; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00141C7F: ;
    xmm0 = xmm3; /* movaps */
    goto loc_00141C8C;

loc_00141C84: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141C8C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_00141C89: ;
    xmm0 = xmm5; /* movaps */

loc_00141C8C: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x2F17D0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141CB5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x2F17D0)) */

loc_00141C9D: ;
    eax = MEM32(esi + 0xD8);
    MEMF(eax + 0x10) = xmm6.f[0]; /* movss */
    ecx = MEM32(esi + 0xD8);
    MEMF(ecx + 0x14) = xmm6.f[0]; /* movss */
    goto loc_00141CCB;

loc_00141CB5: ;
    edx = MEM32(esi + 0xD8);
    MEMF(edx + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0xD8);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_00141CCB: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00141CD7u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_00141CD7: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00141CE3u); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_00141CE3: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141D22; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00141D19: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_00141D25;

loc_00141D22: ;
    xmm1 = xmm0; /* movaps */

loc_00141D25: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x2E25E4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141DA1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x2E25E4)) */

loc_00141D2E: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00141D3Au); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_00141D3A: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    ecx = esi;
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00141D9Au); RECOMP_ABI_CALL(0x00130E80u, sub_00130E80); /* call 0x00130E80 */

loc_00141D9A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00141DA1: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141DAF; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00141DA6: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    goto loc_00141DB2;

loc_00141DAF: ;
    xmm2 = xmm0; /* movaps */

loc_00141DB2: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3B8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00141E75; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00141DC3: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    if ((_fca > _fcb)) goto loc_00141DD8; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_00141DD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */

loc_00141DD8: ;
    edx = esp + 0x14;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00141DEEu); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_00141DEE: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = esp + 0x14;
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0x00141E75u); RECOMP_ABI_CALL(0x00130E80u, sub_00130E80); /* call 0x00130E80 */

loc_00141E75: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141E80
 * Original: 0x00141E80 - 0x00141E85 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141E80: ;
    g_seh_ebp = ebp; sub_001417F0(); return; /* tail jmp 0x001417F0 */

}

/**
 * sub_00141E90
 * Original: 0x00141E90 - 0x00142060 (464 bytes, 121 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141E90(void)
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

loc_00141E90: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E32B020);
    ebx = ecx;
    PUSH32(esp, 0x00141EA0u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_00141EA0: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F32B020);
    PUSH32(esp, 0x00141EAEu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_00141EAE: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00141EC1u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_00141EC1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00142059; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00141ED9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00141EE7u); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_00141EE7: ;
    edi = MEM32(esp + 0x44);
    esi = MEM32(esp + 0x40);
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 4); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00141F65u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00141F65: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00141FD4u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00141FD4: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00142023; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esp + 0x34)) */

loc_00141FE9: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00142057; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_00141FFA: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00142023; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00142005: ;
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014201B; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00142016: ;
    xmm1 = xmm3; /* movaps */
    goto loc_00142023;

loc_0014201B: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00142023; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00142020: ;
    xmm1 = xmm0; /* movaps */

loc_00142023: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    eax = MEM32(ebx);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00142057u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142054u); } /* indirect call */
    }

loc_00142057: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00142059: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00142060
 * Original: 0x00142060 - 0x0014206E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142060(void)
{

loc_00142060: ;
    MEM32(ecx + 8) = 0x2F1860;
    MEM32(ecx) = 0x2DC684;
    esp += 4; return; /* ret */

}

/**
 * sub_00142070
 * Original: 0x00142070 - 0x00142098 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142070: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00142078u); RECOMP_ABI_CALL(0x00141860u, sub_00141860); /* call 0x00141860 */

loc_00142078: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00142092; /* je: equal / zero */

loc_0014207F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00142092u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014208Fu); } /* indirect call */
    }

loc_00142092: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001420A0
 * Original: 0x001420A0 - 0x001420EC (76 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001420A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001420A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001420B6u); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_001420B6: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    ecx = eax + eax * 2 + 0x2A;
    edx = esi + ecx * 4;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001420CCu); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_001420CC: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001420F0
 * Original: 0x001420F0 - 0x001423F8 (776 bytes, 208 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001420F0(void)
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

loc_001420F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243339);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x26C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x26C));
    esp = esp - 0x26C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18AD0);
    PUSH32(esp, 0x186F0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x88);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x0014212Cu); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_0014212C: ;
    ecx = esp + 0x20;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x288) = ebx;
    PUSH32(esp, 0x00142141u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_00142141: ;
    edi = esp + 0x34;
    esi = esp + 0xC8;
    /* nop */

loc_00142150: ;
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0014215Du); RECOMP_ABI_CALL(0x001420A0u, sub_001420A0); /* call 0x001420A0 */

loc_0014215D: ;
    ecx = MEM32(eax);
    xmm3 = XMM_SCALAR(MEMF(0x2DBED4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM32(edi + -8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + -4) = edx;
    eax = MEM32(eax + 8);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEM32(edi) = eax;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + -8)); /* movss */
    MEM32(esi + -20) = ecx;
    MEM32(esi + -16) = edx;
    MEM32(esi + -12) = eax;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    MEMF(esi + -8) = xmm1.f[0]; /* movss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + -12)); /* movss */
    xmm0 = xmm3; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001421D4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001421D1: ;
    xmm0 = xmm1; /* movaps */

loc_001421D4: ;
    xmm3 = XMM_SCALAR(MEMF(esi + -16)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm7 = xmm3; /* movaps */
    if ((_fca > _fcb)) goto loc_001421E9; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_001421E6: ;
    xmm7 = xmm2; /* movaps */

loc_001421E9: ;
    xmm3 = XMM_SCALAR(MEMF(esi + -20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm6 = xmm3; /* movaps */
    if ((_fca > _fcb)) goto loc_001421FE; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_001421FB: ;
    xmm6 = xmm2; /* movaps */

loc_001421FE: ;
    xmm3 = XMM_SCALAR(MEMF(esi + -12)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm5 = xmm3; /* movaps */
    if ((_fca > _fcb)) goto loc_00142212; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_0014220F: ;
    xmm5 = xmm2; /* movaps */

loc_00142212: ;
    xmm2 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + -16)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00142224; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00142221: ;
    xmm3 = xmm2; /* movaps */

loc_00142224: ;
    xmm2 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + -20)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00142236; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_00142233: ;
    xmm2 = xmm4; /* movaps */

loc_00142236: ;
    ecx = MEM32(ebp + 0x1C);
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    MEMF(esi + 8) = xmm3.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + -104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00142274; /* je: equal / zero */

loc_00142262: ;
    ecx = eax;
    PUSH32(esp, 0x00142269u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00142269: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + -104) = 0;

loc_00142274: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + -104) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00142280; /* je: equal / zero */

loc_0014227B: ;
    PUSH32(esp, 0x00142280u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_00142280: ;
    MEM32(esi + -44) = 0x19;
    MEM32(esi + -40) = 1;
    MEM32(esi + -36) = 4;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x88)) >> 32) & 1);
    esi = esi + 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00142150; /* jl: less (signed <) */

loc_001422A8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x101);
    ecx = esp + 0x68;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001422BDu); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_001422BD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = esp + 0x2C;
    esi = esp + 0x94;
    ebx = 4;

loc_001422D2: ;
    SET_LO8(ecx, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00142356; /* je: equal / zero */

loc_001422D9: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    if ((_fca > _fcb)) goto loc_001422EC; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001422E9: ;
    xmm0 = xmm1; /* movaps */

loc_001422EC: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC3D0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00142356; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC3D0)) */

loc_001422F5: ;
    ecx = ebp;
    PUSH32(esp, 0x001422FCu); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_001422FC: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DE084)); /* movss */
    edx = MEM32(ebp);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = ebp;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00142354u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142351u); } /* indirect call */
    }

loc_00142354: ;
    SET_LO8(eax, 1);

loc_00142356: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x88)) >> 32) & 1);
    esi = esi + 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001422D2; /* jne: not equal / not zero */

loc_00142366: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = ebp;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x108) = eax;
    PUSH32(esp, 0x0014237Du); RECOMP_ABI_CALL(0x00141820u, sub_00141820); /* call 0x00141820 */

loc_0014237D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001423BC; /* jne: not equal / not zero */

loc_00142381: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0014238Du); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0014238D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001423BC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0014239B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x001423A7u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_001423A7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebp;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001423BCu); RECOMP_ABI_CALL(0x00130EF0u, sub_00130EF0); /* call 0x00130EF0 */

loc_001423BC: ;
    PUSH32(esp, 0x18AD0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x88);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    MEM32(esp + 0x294) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001423DDu); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_001423DD: ;
    ecx = MEM32(esp + 0x27C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x278)) >> 32) & 1);
    esp = esp + 0x278;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00142400
 * Original: 0x00142400 - 0x00142484 (132 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142400: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243358);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM16(esi + 6) = 1;
    ecx = MEM32(esp + 0x18);
    eax = esi + 8;
    MEM32(eax) = 0x2DD93C;
    MEM32(esi) = 0x2F186C;
    MEM32(eax) = 0x2F1860;
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00142450u); RECOMP_ABI_CALL(0x001C2B40u, sub_001C2B40); /* call 0x001C2B40 */

loc_00142450: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM16(ecx + 0x60) = 0;
    ecx = MEM32(esp + 8);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x18) = 0;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00142490
 * Original: 0x00142490 - 0x001424B8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142490: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00142498u); RECOMP_ABI_CALL(0x00142060u, sub_00142060); /* call 0x00142060 */

loc_00142498: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001424B2; /* je: equal / zero */

loc_0014249F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001424B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001424AFu); } /* indirect call */
    }

loc_001424B2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001424C0
 * Original: 0x001424C0 - 0x0014280A (842 bytes, 241 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001424C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001424C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebx));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001424DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001424DAu); } /* indirect call */
    }

loc_001424DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001424F6; /* je: equal / zero */

loc_001424E4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3E0)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */

loc_001424F6: ;
    ecx = MEM32(ebx + 8);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142509; /* je: equal / zero */

loc_00142500: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142500; /* jne: not equal / not zero */

loc_00142509: ;
    eax = MEM32(ecx + 0x18);
    edx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014251A; /* jne: not equal / not zero */

loc_00142515: ;
    esi = MEM32(ecx + 0x20);
    goto loc_0014251C;

loc_0014251A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014251C: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014252F; /* je: equal / zero */

loc_00142526: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142526; /* jne: not equal / not zero */

loc_0014252F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014253D; /* jne: not equal / not zero */

loc_00142534: ;
    eax = MEM32(ecx + 0x20);
    MEM32(esp + 0xC) = eax;
    goto loc_00142545;

loc_0014253D: ;
    MEM32(esp + 0xC) = 0;

loc_00142545: ;
    eax = MEM32(ebx + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), esi (32-bit) */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001425AF; /* je: equal / zero */

loc_0014257C: ;
    xmm4 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    eax = esi;
    esi = MEM32(esp + 0xC);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */

loc_001425AF: ;
    ecx = MEM32(esi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    edi = MEM32(esi + 0xA4);
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001425CE; /* jp: parity */

loc_001425C6: ;
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    goto loc_001425E0;

loc_001425CE: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_001425E0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(0x2F17D4)); /* movss */
    eax = MEM32(ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001425FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001425F7u); } /* indirect call */
    }

loc_001425FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142625; /* je: equal / zero */

loc_001425FF: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x3C);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014262B; /* jnp: not parity */

loc_00142617: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_0014262B;

loc_00142625: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_0014262B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00142642; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014263C: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00142642: ;
    eax = MEM32(ebx + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    ebx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00142673u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142670u); } /* indirect call */
    }

loc_00142673: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x3C);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] / xmm2.f[0]; /* divss */
    xmm6 = xmm4; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2DC884); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00142757; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x2DC884)) */

loc_00142753: ;
    SET_LO8(ebx, 1);
    goto loc_00142759;

loc_00142757: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00142759: ;
    PUSH32(esp, 0x12A63513);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142765u); RECOMP_ABI_CALL(0x001EA000u, sub_001EA000); /* call 0x001EA000 */

loc_00142765: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ebx = MEM32(esp + 0x10);
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0014277D; /* jne: not equal / not zero */

loc_0014276F: ;
    PUSH32(esp, 1);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    goto loc_00142798;

loc_0014277D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC094); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001427AD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC094)) */

loc_0014278C: ;
    PUSH32(esp, 1);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);

loc_00142798: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001427A0u); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_001427A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001427AAu); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_001427AA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001427AD: ;
    ecx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142801; /* je: equal / zero */

loc_001427BB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001427C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001427BDu); } /* indirect call */
    }

loc_001427C0: ;
    edx = MEM32(0x30C30C);
    ecx = MEM32(0x30C308);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142801; /* jne: not equal / not zero */

loc_001427D2: ;
    PUSH32(esp, 0x693DCBD4);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001427DEu); RECOMP_ABI_CALL(0x001EA000u, sub_001EA000); /* call 0x001EA000 */

loc_001427DE: ;
    PUSH32(esp, 1);
    esi = eax;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001427F4u); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_001427F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001427FEu); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_001427FE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00142801: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00142810
 * Original: 0x00142810 - 0x001429AA (410 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142810(void)
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

loc_00142810: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243386);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0xE4) = eax;
    PUSH32(esp, 0x0014284Bu); RECOMP_ABI_CALL(0x001319F0u, sub_001319F0); /* call 0x001319F0 */

loc_0014284B: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x1C);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0014285Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142857u); } /* indirect call */
    }

loc_0014285A: ;
    MEM16(eax + 4) = 0x1C;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00142874u); RECOMP_ABI_CALL(0x00142400u, sub_00142400); /* call 0x00142400 */

loc_00142874: ;
    MEM32(esi + 0xD8) = eax;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x20);
    MEM32(esp + 0x20) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00142890u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014288Du); } /* indirect call */
    }

loc_00142890: ;
    MEM16(eax + 4) = 0x20;
    MEM32(esp + 0x20) = eax;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, 0x001428AEu); RECOMP_ABI_CALL(0x00141830u, sub_00141830); /* call 0x00141830 */

loc_001428AE: ;
    MEM32(esi + 0xDC) = eax;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x001428C4u); RECOMP_ABI_CALL(0x001BF080u, sub_001BF080); /* call 0x001BF080 */

loc_001428C4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x001428CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001428C8u); } /* indirect call */
    }

loc_001428CB: ;
    ecx = esi;
    PUSH32(esp, 0x001428D2u); RECOMP_ABI_CALL(0x00141620u, sub_00141620); /* call 0x00141620 */

loc_001428D2: ;
    edi = 0x2F17D8;

loc_001428D7: ;
    ebp = MEM32(edi);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001428E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001428DEu); } /* indirect call */
    }

loc_001428E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001428F6; /* je: equal / zero */

loc_001428E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001428EBu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_001428EB: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001428F6u); RECOMP_ABI_CALL(0x00141690u, sub_00141690); /* call 0x00141690 */

loc_001428F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F17F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2F17F4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001428D7; /* jl: less (signed <) */

loc_00142901: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax);
    MEM32(esi + 0xA8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0xAC) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0xB0) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xB4) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0xB8) = ecx;
    edx = MEM32(eax + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0xBC) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0xC0) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0xC4) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0xC8) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0xCC) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0xD0) = ecx;
    edx = MEM32(eax + 0x2C);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0xD4) = edx;
    POP32(esp, edi);
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x108) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001429B0
 * Original: 0x001429B0 - 0x00142C31 (641 bytes, 181 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001429B0(void)
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

loc_001429B0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD8);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x44); /* comiss */
    MEM8(esi + 0x10C) = LO8(ecx);
    if ((_fca >= _fcb)) goto loc_00142C2A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 0x44)) */

loc_001429D8: ;
    ecx = MEM32(esi + 0xE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001429EE; /* je: equal / zero */

loc_001429E2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001429EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001429E4u); } /* indirect call */
    }

loc_001429EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001429F9; /* jne: not equal / not zero */

loc_001429EE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */

loc_001429F9: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00142A06u); RECOMP_ABI_CALL(0x00141A70u, sub_00141A70); /* call 0x00141A70 */

loc_00142A06: ;
    ecx = MEM32(esi + 0xE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142A1C; /* je: equal / zero */

loc_00142A10: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x00142A18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142A12u); } /* indirect call */
    }

loc_00142A18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142A2F; /* jne: not equal / not zero */

loc_00142A1C: ;
    ecx = MEM32(esi + 0x108);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x108) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00142A37; /* jg: greater (signed >) */

loc_00142A2F: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00142A37u); RECOMP_ABI_CALL(0x001420F0u, sub_001420F0); /* call 0x001420F0 */

loc_00142A37: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00142A3Fu); RECOMP_ABI_CALL(0x00141A00u, sub_00141A00); /* call 0x00141A00 */

loc_00142A3F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00142A46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142A43u); } /* indirect call */
    }

loc_00142A46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142AA6; /* jne: not equal / not zero */

loc_00142A4A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x80); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00142AA6; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x80)) */

loc_00142A56: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142AA6; /* jne: not equal / not zero */

loc_00142A5D: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00142A69u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_00142A69: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E3D28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00142AA6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_00142A77: ;
    ecx = MEM32(esi + 0xE4);
    PUSH32(esp, ecx);
    ecx = 0x30D8A0;
    PUSH32(esp, 0x00142A88u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00142A88: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142AA6; /* je: equal / zero */

loc_00142A8E: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x244); PUSH32(esp, 0x00142A98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142A92u); } /* indirect call */
    }

loc_00142A98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142AA6; /* jne: not equal / not zero */

loc_00142A9C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x248); PUSH32(esp, 0x00142AA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142AA0u); } /* indirect call */
    }

loc_00142AA6: ;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142AB7; /* je: equal / zero */

loc_00142AB0: ;
    MEM32(eax + 0x18) = 0;

loc_00142AB7: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142AC7; /* je: equal / zero */

loc_00142ABE: ;
    MEM8(esi + 0x10D) = 1;
    goto loc_00142B36;

loc_00142AC7: ;
    SET_LO8(eax, MEM8(esi + 0x10D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142B36; /* je: equal / zero */

loc_00142AD1: ;
    ecx = esi;
    PUSH32(esp, 0x00142AD8u); RECOMP_ABI_CALL(0x00141820u, sub_00141820); /* call 0x00141820 */

loc_00142AD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142B36; /* je: equal / zero */

loc_00142ADC: ;
    ecx = MEM32(esi + 0xE4);
    PUSH32(esp, 0x1A34DD6A);
    PUSH32(esp, 0x00142AECu); RECOMP_ABI_CALL(0x001EA000u, sub_001EA000); /* call 0x001EA000 */

loc_00142AEC: ;
    PUSH32(esp, 1);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00142AFCu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00142AFC: ;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00142B09u); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_00142B09: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00142B11u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00142B11: ;
    eax = MEM32(esi + 0xE4);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00142B22u); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_00142B22: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00142B2Cu); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_00142B2C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x10D) = 0;

loc_00142B36: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00142B42u); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_00142B42: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00142B4Eu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_00142B4E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1870)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    eax = esp + 0x38;
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00142BEBu); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_00142BEB: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x14); /* addss */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00142C29u); RECOMP_ABI_CALL(0x00130E80u, sub_00130E80); /* call 0x00130E80 */

loc_00142C29: ;
    POP32(esp, edi);

loc_00142C2A: ;
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
 * sub_00142C40
 * Original: 0x00142C40 - 0x00142C52 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00142C40: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(ecx + 0x1C);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_001429B0(); return; /* tail jmp 0x001429B0 */

}

/**
 * sub_00142C60
 * Original: 0x00142C60 - 0x00143673 (2579 bytes, 590 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00142C60(void)
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

loc_00142C60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24339E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1B8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x70));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014365C; /* je: equal / zero */

loc_00142C94: ;
    ecx = MEM32(eax + 0x1C);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 4);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x8C) = ecx;
    MEM8(esp + 0x15) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00142CBC; /* jne: not equal / not zero */

loc_00142CB0: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ecx + 0x20);
    MEM32(esp + 0x40) = edx;
    goto loc_00142CC5;

loc_00142CBC: ;
    MEM32(esp + 0x40) = eax;
    MEM8(esp + 0x15) = 1;

loc_00142CC5: ;
    eax = MEM32(esp + 0x40);
    esi = MEM32(eax + 0xA4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x3C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00142CF4; /* je: equal / zero */

loc_00142CD7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00142CDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142CDBu); } /* indirect call */
    }

loc_00142CDE: ;
    edx = MEM32(0x30C30C);
    ecx = MEM32(0x30C308);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00142CFC; /* je: equal / zero */

loc_00142CF4: ;
    MEM32(esp + 0x18) = 0;

loc_00142CFC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142D19; /* je: equal / zero */

loc_00142D00: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00142D07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142D04u); } /* indirect call */
    }

loc_00142D07: ;
    edx = MEM32(0x30D8A8);
    ecx = MEM32(0x30D8A4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142D1B; /* je: equal / zero */

loc_00142D19: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00142D1B: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x17) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142D33; /* jne: not equal / not zero */

loc_00142D2A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x16) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00142D38; /* je: equal / zero */

loc_00142D33: ;
    MEM8(esp + 0x16) = 1;

loc_00142D38: ;
    ecx = esp + 0x14C;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142D48u); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_00142D48: ;
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x84) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0014365C; /* jle: less or equal (signed <=) */

loc_00142D61: ;
    MEM32(esp + 0x18) = eax;

loc_00142D65: ;
    edx = MEM32(ebx + 0xC);
    eax = MEM32(edx);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ecx + edx + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + edx + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + edx + 0x10)); /* movss */
    esi = ecx + edx;
    ecx = MEM32(edi + 4);
    eax = esp + 0x17C;
    PUSH32(esp, eax);
    MEMF(esp + 0xEC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xF0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xF4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142DB0u); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_00142DB0: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    ecx = esp + 0xE8;
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    ecx = esp + 0x118;
    MEMF(esp + 0x124) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x118) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x11C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x120) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142E09u); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_00142E09: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142E51; /* je: equal / zero */

loc_00142E11: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm2.f[0]; /* movss */
    goto loc_00142E57;

loc_00142E51: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */

loc_00142E57: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00143632; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00142E63: ;
    eax = MEM32(edi + 4);
    ebx = MEM32(eax + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(0x2F1878)); /* movss */
    edx = MEM32(ebx);
    ecx = ebx;
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00142E8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142E85u); } /* indirect call */
    }

loc_00142E8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2F1874)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00142EA0; /* jne: not equal / not zero */

loc_00142E97: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */

loc_00142EA0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001430A8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00142EAF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x150)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001430A8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00142EC5: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001430A8; /* jne: not equal / not zero */

loc_00142ED1: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001430A8; /* je: equal / zero */

loc_00142EDD: ;
    eax = MEM32(eax + 0x150);
    PUSH32(esp, 0x17);
    PUSH32(esp, eax);
    ecx = 0x3C0470;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142EF0u); RECOMP_ABI_CALL(0x0015E8B0u, sub_0015E8B0); /* call 0x0015E8B0 */

loc_00142EF0: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001430A8; /* jbe: below or equal (unsigned <=) */

loc_00142F02: ;
    ecx = esp + 0x18C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142F0Eu); RECOMP_ABI_CALL(0x0001F970u, sub_0001F970); /* call 0x0001F970 */

loc_00142F0E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    eax = esp + 0xF4;
    PUSH32(esp, eax);
    ecx = esp + 0x174;
    MEMF(esp + 0xF8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0xFC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    MEMF(esp + 0xE4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xEC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142F79u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00142F79: ;
    PUSH32(esp, eax);
    edx = esp + 0xE4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x447A0000);
    PUSH32(esp, 0x17);
    ecx = esp + 0x1A0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142F95u); RECOMP_ABI_CALL(0x00018650u, sub_00018650); /* call 0x00018650 */

loc_00142F95: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x44);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00142FA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142FA1u); } /* indirect call */
    }

loc_00142FA4: ;
    MEM16(eax + 4) = 0x44;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    edx = esp + 0x190;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x1D4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142FCDu); RECOMP_ABI_CALL(0x00131120u, sub_00131120); /* call 0x00131120 */

loc_00142FCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1CC) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00142FE1; /* je: equal / zero */

loc_00142FDC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00142FE3;

loc_00142FE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00142FE3: ;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142FEFu); RECOMP_ABI_CALL(0x001BD850u, sub_001BD850); /* call 0x001BD850 */

loc_00142FEF: ;
    PUSH32(esp, ebx);
    ecx = 0x30D350;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00142FFAu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00142FFA: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x00143004u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00142FFEu); } /* indirect call */
    }

loc_00143004: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001430A8; /* je: equal / zero */

loc_0014300C: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = 0x30C29C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014301Bu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0014301B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00143032; /* jne: not equal / not zero */

loc_0014301F: ;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    ecx = 0x30D38C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014302Eu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0014302E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001430A8; /* je: equal / zero */

loc_00143032: ;
    PUSH32(esp, 0x12A63513);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014303Eu); RECOMP_ABI_CALL(0x001EA000u, sub_001EA000); /* call 0x001EA000 */

loc_0014303E: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    ecx = MEM32(edi + 4);
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    ebx = eax;
    PUSH32(esp, 1);
    eax = esp + 0x15C;
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014307Bu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0014307B: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014308Cu); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_0014308C: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014309Bu); RECOMP_ABI_CALL(0x00202BA0u, sub_00202BA0); /* call 0x00202BA0 */

loc_0014309B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001430A5u); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_001430A5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001430A8: ;
    ebx = MEM32(edi + 0x10);
    ecx = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = ebx;
    ebx = MEM32(esp + 0x8C);
    eax = MEM32(ebx + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001430F8u); RECOMP_ABI_CALL(0x00130270u, sub_00130270); /* call 0x00130270 */

loc_001430F8: ;
    ecx = esp + 0x164;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143108u); RECOMP_ABI_CALL(0x00130220u, sub_00130220); /* call 0x00130220 */

loc_00143108: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00143157; /* je: equal / zero */

loc_00143131: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */

loc_00143157: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    ecx = MEM32(edi + 4);
    MEMF(esp + 0xAC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143188u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00143188: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143246; /* jnp: not parity */

loc_00143207: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x44); /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    goto loc_00143258;

loc_00143246: ;
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */

loc_00143258: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014330B; /* jnp: not parity */

loc_001432CC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x50); /* mulss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    goto loc_0014331D;

loc_0014330B: ;
    MEMF(esp + 0x6C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm3.f[0]; /* movss */

loc_0014331D: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x90); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x98); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x94); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00143369; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00143365: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0014336E;

loc_00143369: ;
    eax = 1;

loc_0014336E: ;
    xmm0 = XMM_SCALAR(MEMF(edi + eax * 4 + 8)); /* movss */
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00143398; /* je: equal / zero */

loc_00143385: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    if ((_fca > _fcb)) goto loc_0014365C; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x24)) */

loc_00143398: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x130;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001433A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001433A6u); } /* indirect call */
    }

loc_001433A9: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x134)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x138)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x130)); /* movss */
    MEMF(esp + 0xA0) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2E55D4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    ecx = esp + 0xAC;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    edx = esp + 0xD4;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0xD8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm4.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143471u); RECOMP_ABI_CALL(0x00141E90u, sub_00141E90); /* call 0x00141E90 */

loc_00143471: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2E39F0)); /* movss */
    eax = esp + 0xAC;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xCC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143524u); RECOMP_ABI_CALL(0x00141E90u, sub_00141E90); /* call 0x00141E90 */

loc_00143524: ;
    ebx = MEM32(esp + 0x40);
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x120;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00143539u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00143536u); } /* indirect call */
    }

loc_00143539: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x128)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x124)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x120)); /* movss */
    ecx = MEM32(ebx + 0x3C);
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x88); /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001435A3; /* jp: parity */

loc_0014359E: ;
    xmm6 = xmm1; /* movaps */
    goto loc_001435AF;

loc_001435A3: ;
    xmm6 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm6.f[0] = xmm6.f[0] / xmm5.f[0]; /* divss */

loc_001435AF: ;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    edx = esp + 0x5F;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(esp + 0x104) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x108) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x110) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014360Bu); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_0014360B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014361E; /* jne: not equal / not zero */

loc_00143610: ;
    eax = MEM32(ebx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014361E; /* je: equal / zero */

loc_00143617: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014361Eu); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_0014361E: ;
    ecx = MEM32(ebx + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edx = esp + 0x104;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0014362Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014362Cu); } /* indirect call */
    }

loc_0014362F: ;
    ebx = MEM32(ebp + 8);

loc_00143632: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(esp + 0x84);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x84) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00142D65; /* jl: less (signed <) */

loc_0014365C: ;
    ecx = MEM32(esp + 0x1C4);
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
 * sub_00143680
 * Original: 0x00143680 - 0x001436FF (127 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143680: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x688);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001436BE; /* je: equal / zero */

loc_00143691: ;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001436A2u); RECOMP_ABI_CALL(0x001BD750u, sub_001BD750); /* call 0x001BD750 */

loc_001436A2: ;
    ecx = MEM32(esi + 0x688);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001436B8; /* jne: not equal / not zero */

loc_001436B2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001436B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001436B6u); } /* indirect call */
    }

loc_001436B8: ;
    MEM32(esi + 0x688) = edi;

loc_001436BE: ;
    eax = MEM32(esi + 0x68C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001436F5; /* je: equal / zero */

loc_001436C8: ;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001436D9u); RECOMP_ABI_CALL(0x001BD750u, sub_001BD750); /* call 0x001BD750 */

loc_001436D9: ;
    ecx = MEM32(esi + 0x68C);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001436EF; /* jne: not equal / not zero */

loc_001436E9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001436EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001436EDu); } /* indirect call */
    }

loc_001436EF: ;
    MEM32(esi + 0x68C) = edi;

loc_001436F5: ;
    MEM32(esi + 0x684) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00143700
 * Original: 0x00143700 - 0x00143737 (55 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143700: ;
    eax = MEM32(ecx + 0x5C4);
    eax = MEM32(eax + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    ecx = MEM32(eax + 0xB0);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143740
 * Original: 0x00143740 - 0x00143747 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143740(void)
{

loc_00143740: ;
    eax = MEM32(ecx + 0x5C4);
    esp += 4; return; /* ret */

}

/**
 * sub_00143750
 * Original: 0x00143750 - 0x0014377C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143750: ;
    xmm0 = XMM_SCALAR(MEMF(0x2F187C)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x24;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00143778u); RECOMP_ABI_CALL(0x001F3BE0u, sub_001F3BE0); /* call 0x001F3BE0 */

loc_00143778: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143780
 * Original: 0x00143780 - 0x001437CA (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143780: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    ecx = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0014378Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014378Au); } /* indirect call */
    }

loc_0014378D: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001437C0; /* je: equal / zero */

loc_00143794: ;
    PUSH32(esp, eax);
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, 0x001437A5u); RECOMP_ABI_CALL(0x001C04D0u, sub_001C04D0); /* call 0x001C04D0 */

loc_001437A5: ;
    ecx = MEM32(esi + 0x14);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001437B9; /* jne: not equal / not zero */

loc_001437B3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001437B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001437B7u); } /* indirect call */
    }

loc_001437B9: ;
    MEM32(esi + 0x14) = 0;

loc_001437C0: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001437D0
 * Original: 0x001437D0 - 0x0014383A (106 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001437D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001437D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143804; /* je: equal / zero */

loc_001437DA: ;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    eax = esp + 0xB;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001437EBu); RECOMP_ABI_CALL(0x001BD750u, sub_001BD750); /* call 0x001BD750 */

loc_001437EB: ;
    ecx = MEM32(esi);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001437FE; /* jne: not equal / not zero */

loc_001437F8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001437FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001437FCu); } /* indirect call */
    }

loc_001437FE: ;
    MEM32(esi) = 0;

loc_00143804: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143837; /* je: equal / zero */

loc_0014380B: ;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    eax = esp + 0xB;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014381Cu); RECOMP_ABI_CALL(0x001BD750u, sub_001BD750); /* call 0x001BD750 */

loc_0014381C: ;
    ecx = MEM32(esi + 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00143830; /* jne: not equal / not zero */

loc_0014382A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00143830u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014382Eu); } /* indirect call */
    }

loc_00143830: ;
    MEM32(esi + 4) = 0;

loc_00143837: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00143840
 * Original: 0x00143840 - 0x001438E5 (165 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143840: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x794) = eax;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esi + 0x79C) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x7A0) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x7A4) = xmm0.f[0]; /* movss */
    ecx = esi;
    MEM32(esi + 0x790) = 0;
    PUSH32(esp, 0x001438A2u); RECOMP_ABI_CALL(0x001FA1D0u, sub_001FA1D0); /* call 0x001FA1D0 */

loc_001438A2: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xA3B9A057u);
    ecx = 0x643860;
    MEMF(esi + 0x7A8) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x7AC) = 0;
    PUSH32(esp, 0x001438CDu); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_001438CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF5ACC305u);
    ecx = 0x643860;
    PUSH32(esp, 0x001438DEu); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_001438DE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001438F0
 * Original: 0x001438F0 - 0x0014393B (75 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001438F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001438F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x790)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x790), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143900; /* je: equal / zero */

loc_001438FC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00143900: ;
    ecx = MEM32(esi + 0x798);
    PUSH32(esp, 0x0014390Bu); RECOMP_ABI_CALL(0x00130410u, sub_00130410); /* call 0x00130410 */

loc_0014390B: ;
    ecx = esi + 0x20;
    MEM32(esi + 0x798) = 0;
    PUSH32(esp, 0x0014391Du); RECOMP_ABI_CALL(0x00143680u, sub_00143680); /* call 0x00143680 */

loc_0014391D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    MEM32(esi + 0x790) = 2;
    MEMF(esi + 0x7A8) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143940
 * Original: 0x00143940 - 0x00143968 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143940: ;
    _fa = (uint32_t)(MEM32(ecx + 0x790)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x790), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014394C; /* je: equal / zero */

loc_00143949: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0014394C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    eax = 1;
    MEMF(ecx + 0x780) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x790) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00143970
 * Original: 0x00143970 - 0x001439AE (62 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143970: ;
    eax = MEM32(ecx + 0x790);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143986; /* je: equal / zero */

loc_0014397E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00143986: ;
    eax = esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00143992u); RECOMP_ABI_CALL(0x00143700u, sub_00143700); /* call 0x00143700 */

loc_00143992: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001439B0
 * Original: 0x001439B0 - 0x001439CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001439B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001439B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001439B8u); RECOMP_ABI_CALL(0x00029C50u, sub_00029C50); /* call 0x00029C50 */

loc_001439B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001439C8; /* je: equal / zero */

loc_001439BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001439C5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_001439C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001439C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001439D0
 * Original: 0x001439D0 - 0x00143A74 (164 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001439D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001439D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2433E2);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x29C40);
    PUSH32(esp, 0x143750);
    PUSH32(esp, 8);
    esi = ecx;
    PUSH32(esp, 0xD0);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x00143A04u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00143A04: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x680) = eax;
    MEM32(esi + 0x688) = eax;
    MEM32(esi + 0x68C) = eax;
    MEM32(esi + 0x690) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x694) = 0x2F1884;
    MEM32(esi + 0x698) = esi;
    ecx = esi + 0x69C;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x00143A42u); RECOMP_ABI_CALL(0x001F3BE0u, sub_001F3BE0); /* call 0x001F3BE0 */

loc_00143A42: ;
    ecx = esi + 0x6F8;
    MEM8(esp + 0x10) = 2;
    PUSH32(esp, 0x00143A52u); RECOMP_ABI_CALL(0x001F36F0u, sub_001F36F0); /* call 0x001F36F0 */

loc_00143A52: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esi + 0x760) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00143A80
 * Original: 0x00143A80 - 0x00143AF3 (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143A80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi;
    ebx = 8;
    /* nop */

loc_00143A90: ;
    ecx = edi;
    PUSH32(esp, 0x00143A97u); RECOMP_ABI_CALL(0x001437D0u, sub_001437D0); /* call 0x001437D0 */

loc_00143A97: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00143A90; /* jne: not equal / not zero */

loc_00143AA0: ;
    ecx = esi;
    PUSH32(esp, 0x00143AA7u); RECOMP_ABI_CALL(0x00143680u, sub_00143680); /* call 0x00143680 */

loc_00143AA7: ;
    edi = esi;
    ebx = 8;
    edi = edi;

loc_00143AB0: ;
    ecx = edi;
    PUSH32(esp, 0x00143AB7u); RECOMP_ABI_CALL(0x00143780u, sub_00143780); /* call 0x00143780 */

loc_00143AB7: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00143AB0; /* jne: not equal / not zero */

loc_00143AC0: ;
    ecx = MEM32(0x37A3F0);
    eax = esi + 0x694;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00143AD2u); RECOMP_ABI_CALL(0x001BD210u, sub_001BD210); /* call 0x001BD210 */

loc_00143AD2: ;
    edx = MEM32(esi + 0x69C);
    ecx = esi + 0x69C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00143AE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00143ADEu); } /* indirect call */
    }

loc_00143AE1: ;
    eax = MEM32(esi + 0x6F8);
    POP32(esp, edi);
    ecx = esi + 0x6F8;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_00143B00
 * Original: 0x00143B00 - 0x0014419C (1692 bytes, 369 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00143B00(void)
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

loc_00143B00: ;
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
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x680);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143B23u); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_00143B23: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x48)) >> 32) & 1);
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143B32u); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_00143B32: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    esi = edi + 0x88;
    ebx = 8;

loc_00143B55: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00143B6A; /* je: equal / zero */

loc_00143B5C: ;
    edx = MEM32(esi + -100);
    ecx = esi + -100;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00143B65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00143B62u); } /* indirect call */
    }

loc_00143B65: ;
    goto loc_00143EB3;

loc_00143B6A: ;
    eax = MEM32(esi + -116);
    eax = MEM32(eax + 0x3C);
    xmm2 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xB0)) >> 32) & 1);
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    xmm4 = xmm0; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm3.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143C39; /* jnp: not parity */

loc_00143C08: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    goto loc_00143C4E;

loc_00143C39: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_00143C4E: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x680);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143C61u); RECOMP_ABI_CALL(0x00130220u, sub_00130220); /* call 0x00130220 */

loc_00143C61: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143D0F; /* jnp: not parity */

loc_00143CD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x58); /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    goto loc_00143D21;

loc_00143D0F: ;
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */

loc_00143D21: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143DC6; /* jnp: not parity */

loc_00143D99: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    goto loc_00143DCF;

loc_00143DC6: ;
    xmm5 = xmm3; /* movaps */
    xmm6 = xmm3; /* movaps */
    xmm7 = xmm3; /* movaps */

loc_00143DCF: ;
    xmm4 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x64); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x68); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x6C); /* addss */
    MEMF(esi + -8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esi + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esi) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edx = esp + 0x64;
    MEMF(esi + 0xC) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    ecx = esi + -100;
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143E8Fu); RECOMP_ABI_CALL(0x002035D0u, sub_002035D0); /* call 0x002035D0 */

loc_00143E8F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_00143EB3: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xD0)) >> 32) & 1);
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00143B55; /* jne: not equal / not zero */

loc_00143EC0: ;
    esi = MEM32(edi + 0x684);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00143FF8; /* je: equal / zero */

loc_00143ECE: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143EDAu); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_00143EDA: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x48)) >> 32) & 1);
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143EE9u); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_00143EE9: ;
    edx = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x30) = edx;
    edx = esp + 0xB0;
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(edi + 0x684);
    PUSH32(esp, edx);
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143F14u); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_00143F14: ;
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143F26u); RECOMP_ABI_CALL(0x0022FA9Eu, sub_0022FA9E); /* call 0x0022FA9E */

loc_00143F26: ;
    PUSH32(esp, eax);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00143F31u); RECOMP_ABI_CALL(0x0022F9BCu, sub_0022F9BC); /* call 0x0022F9BC */

loc_00143F31: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    esi = edi + 0x720;
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    goto loc_00144167;

loc_00143FF8: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x634)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x640)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x644)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x660)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0x648)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DD6C0)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x638)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x63C)); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x64C)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x650)); /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x654)); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x658)); /* movss */
    esi = edi + 0x720;
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x65C)); /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x664)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x668)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x630)); /* movss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(esi + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    MEMF(esi + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    MEMF(esi + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esi + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(esi + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esi + 0x28) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    MEMF(esi + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm1.f[0]; /* movss */

loc_00144167: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, esi);
    ecx = edi + 0x69C;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144180u); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_00144180: ;
    _fb = (uint32_t)(0x6F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x6F8)) >> 32) & 1);
    edi = edi + 0x6F8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014418Eu); RECOMP_ABI_CALL(0x001F3CE0u, sub_001F3CE0); /* call 0x001F3CE0 */

loc_0014418E: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144195u); RECOMP_ABI_CALL(0x001F3D00u, sub_001F3D00); /* call 0x001F3D00 */

loc_00144195: ;
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
 * sub_001441A0
 * Original: 0x001441A0 - 0x00144233 (147 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001441A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001441A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243403);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x001441C3u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_001441C3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x20;
    MEM32(esp + 0x14) = edi;
    MEM32(esi) = 0x2F188C;
    PUSH32(esp, 0x001441D7u); RECOMP_ABI_CALL(0x001439D0u, sub_001439D0); /* call 0x001439D0 */

loc_001441D7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x790) = edi;
    MEM32(esi + 0x794) = edi;
    MEM32(esi + 0x798) = edi;
    ecx = MEM32(0x6459E8);
    eax = esi + 0x79C;
    MEM32(eax) = ecx;
    edx = MEM32(0x6459EC);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x6459F0);
    MEM32(eax + 8) = ecx;
    ecx = esi;
    MEM8(esp + 0x14) = 1;
    MEMF(esi + 0x7A8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00144220u); RECOMP_ABI_CALL(0x001FA1D0u, sub_001FA1D0); /* call 0x001FA1D0 */

loc_00144220: ;
    ecx = MEM32(esp + 0xC);
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
 * sub_00144240
 * Original: 0x00144240 - 0x00144246 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144240(void)
{

loc_00144240: ;
    eax = MEM32(0x37A3D0);
    esp += 4; return; /* ret */

}

/**
 * sub_00144250
 * Original: 0x00144250 - 0x0014426E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144250: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00144258u); RECOMP_ABI_CALL(0x0002A330u, sub_0002A330); /* call 0x0002A330 */

loc_00144258: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00144268; /* je: equal / zero */

loc_0014425F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00144265u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00144265: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00144268: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144270
 * Original: 0x00144270 - 0x001442A4 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144270: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x790);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144287; /* je: equal / zero */

loc_0014427E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144287; /* je: equal / zero */

loc_00144283: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00144287: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0014428Fu); RECOMP_ABI_CALL(0x00143A80u, sub_00143A80); /* call 0x00143A80 */

loc_0014428F: ;
    ecx = esi;
    PUSH32(esp, 0x00144296u); RECOMP_ABI_CALL(0x001FA1D0u, sub_001FA1D0); /* call 0x001FA1D0 */

loc_00144296: ;
    MEM32(esi + 0x790) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001442B0
 * Original: 0x001442B0 - 0x0014462F (895 bytes, 215 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001442B0(void)
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

loc_001442B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24341B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC350); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    esi = ecx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    PUSH32(esp, edi);
    ecx = esp + 0x98;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144318u); RECOMP_ABI_CALL(0x00050820u, sub_00050820); /* call 0x00050820 */

loc_00144318: ;
    ecx = MEM32(esi + 0x794);
    esi = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 0x94);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x14C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014433A; /* je: equal / zero */

loc_00144335: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014433Au); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0014433A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x94) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0014434C; /* je: equal / zero */

loc_00144345: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014434Cu); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_0014434C: ;
    PUSH32(esp, 1);
    edx = esp + 0x94;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014435Du); RECOMP_ABI_CALL(0x0012E440u, sub_0012E440); /* call 0x0012E440 */

loc_0014435D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00144593; /* jle: less or equal (signed <=) */

loc_0014436C: ;
    MEM32(esp + 0x10) = 0x378EF8;

loc_00144374: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014457B; /* je: equal / zero */

loc_00144382: ;
    esi = MEM32(eax + 0xA8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014457B; /* je: equal / zero */

loc_00144390: ;
    ecx = esp + 0x100;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014439Fu); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_0014439F: ;
    PUSH32(esp, eax);
    edx = esi + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001443AEu); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_001443AE: ;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x50);
    MEM32(esp + 0x28) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 4); /* subss */
    MEM32(esp + 0x24) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi); /* subss */
    xmm3 = xmm2; /* movaps */
    MEM32(esp + 0x2C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x64) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_001445DF; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00144423: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    ecx = esp + 0x60;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x3C); /* mulss */
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144452u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00144452: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144492u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00144492: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    eax = MEM32(esi);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x5C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001444DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001444DAu); } /* indirect call */
    }

loc_001444DD: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax + 0xA8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014457B; /* je: equal / zero */

loc_001444EE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144531u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00144531: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x70;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x74) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0014457Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144578u); } /* indirect call */
    }

loc_0014457B: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00144374; /* jl: less (signed <) */

loc_00144593: ;
    MEM32(esp + 0x14C) = 0xFFFFFFFFu;
    MEM32(esp + 0x90) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001445B0;

    /* nop */

loc_001445B0: ;
    ecx = MEM32(esp + esi * 4 + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001445C0; /* je: equal / zero */

loc_001445BB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001445C0u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_001445C0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001445B0; /* jl: less (signed <) */

loc_001445C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x144);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001445DF: ;
    MEM32(esp + 0x14C) = 0xFFFFFFFFu;
    MEM32(esp + 0x90) = 0x2DC928;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00144600;

    /* nop */

loc_00144600: ;
    ecx = MEM32(esp + edi * 4 + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144610; /* je: equal / zero */

loc_0014460B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144610u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00144610: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00144600; /* jl: less (signed <) */

loc_00144616: ;
    ecx = MEM32(esp + 0x144);
    POP32(esp, edi);
    eax = esi;
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
 * sub_00144630
 * Original: 0x00144630 - 0x00144943 (787 bytes, 192 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00144630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00144630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24343B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144664u); RECOMP_ABI_CALL(0x001C5B10u, sub_001C5B10); /* call 0x001C5B10 */

loc_00144664: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esi) = 0x2F18B0;
    MEM32(esi + 8) = 0x2F18A0;
    MEM32(esi + 0x6C) = eax;
    ecx = MEM32(ebx + 0xA8);
    MEM32(esi + 0x70) = ecx;
    eax = MEM32(edi + 0xA8);
    MEM32(esi + 0x74) = eax;
    ecx = MEM32(0x6459E8);
    edx = MEM32(0x6459EC);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x6459EC);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x6459F0);
    MEM32(esp + 0x8C) = 0;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x2C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00144706; /* je: equal / zero */

loc_001446CB: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(esp + 0x38) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00144706: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144745; /* je: equal / zero */

loc_0014470A: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x30) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    edx = MEM32(eax + 8);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */

loc_00144745: ;
    PUSH32(esp, esi);
    ecx = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014474Fu); RECOMP_ABI_CALL(0x001C5F40u, sub_001C5F40); /* call 0x001C5F40 */

loc_0014474F: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E19999A);
    ecx = esp + 0x6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144762u); RECOMP_ABI_CALL(0x001C6470u, sub_001C6470); /* call 0x001C6470 */

loc_00144762: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = esp + 0x30;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014479Du); RECOMP_ABI_CALL(0x001C60C0u, sub_001C60C0); /* call 0x001C60C0 */

loc_0014479D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    ecx = esp + 0x30;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001447D8u); RECOMP_ABI_CALL(0x001C6140u, sub_001C6140); /* call 0x001C6140 */

loc_001447D8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = MEM32(ebx + 0x3C);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014481Cu); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_0014481C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edx = MEM32(edi + 0x3C);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144861u); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_00144861: ;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001448DE; /* jnp: not parity */

loc_001448A4: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_001448E5;

loc_001448DE: ;
    xmm2.f[0] = xmm2.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */

loc_001448E5: ;
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, 0);
    eax = esp + 0x54;
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    XMM_STORE(esp + 0x58, xmm2); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144904u); RECOMP_ABI_CALL(0x001C5F80u, sub_001C5F80); /* call 0x001C5F80 */

loc_00144904: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x70;
    MEM32(esi + 0x78) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144918u); RECOMP_ABI_CALL(0x001C6230u, sub_001C6230); /* call 0x001C6230 */

loc_00144918: ;
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144921u); RECOMP_ABI_CALL(0x001C6540u, sub_001C6540); /* call 0x001C6540 */

loc_00144921: ;
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014492Au); RECOMP_ABI_CALL(0x001C65A0u, sub_001C65A0); /* call 0x001C65A0 */

loc_0014492A: ;
    ecx = MEM32(esp + 0x84);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00144950
 * Original: 0x00144950 - 0x00144978 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144950: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00144958u); RECOMP_ABI_CALL(0x00144980u, sub_00144980); /* call 0x00144980 */

loc_00144958: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00144972; /* je: equal / zero */

loc_0014495F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00144972u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014496Fu); } /* indirect call */
    }

loc_00144972: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144980
 * Original: 0x00144980 - 0x00144992 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144980: ;
    MEM32(ecx) = 0x2F18B0;
    MEM32(ecx + 8) = 0x2F18A0;
    g_seh_ebp = ebp; sub_001C5B90(); return; /* tail jmp 0x001C5B90 */

}

/**
 * sub_001449A0
 * Original: 0x001449A0 - 0x001449A8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001449A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001449A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00144950(); return; /* tail jmp 0x00144950 */

}

/**
 * sub_001449B0
 * Original: 0x001449B0 - 0x001449BF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001449B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001449B0: ;
    ecx = MEM32(ecx + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001449BC; /* je: equal / zero */

loc_001449B7: ;
    PUSH32(esp, 0x001449BCu); RECOMP_ABI_CALL(0x001438F0u, sub_001438F0); /* call 0x001438F0 */

loc_001449BC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001449C0
 * Original: 0x001449C0 - 0x00144BC3 (515 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001449C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001449C0: ;
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
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x70);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144A43; /* je: equal / zero */

loc_001449D7: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001449E3u); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_001449E3: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001449F2u); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_001449F2: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    goto loc_00144A5A;

loc_00144A43: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x3C);
    xmm0 = XMM_MEM(eax + 0xB0); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */

loc_00144A5A: ;
    edi = MEM32(esi + 0x74);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144ACD; /* je: equal / zero */

loc_00144A61: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144A6Du); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_00144A6D: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144A7Cu); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_00144A7C: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    goto loc_00144ADA;

loc_00144ACD: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x3C);
    xmm1 = XMM_MEM(ecx + 0xB0); /* movaps */

loc_00144ADA: ;
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    edx = esp + 0x10;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2DC3B4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00144BBD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x2DC3B4)) */

loc_00144B2B: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00144B95; /* jnp: not parity */

loc_00144B5B: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_00144B9C;

loc_00144B95: ;
    xmm1.f[0] = xmm1.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */

loc_00144B9C: ;
    ecx = MEM32(esi + 0x78);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    PUSH32(esp, ecx);
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    ecx = esi;
    XMM_STORE(esp + 0x4C, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144BBDu); RECOMP_ABI_CALL(0x001C4730u, sub_001C4730); /* call 0x001C4730 */

loc_00144BBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00144BD0
 * Original: 0x00144BD0 - 0x001451BD (1517 bytes, 368 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00144BD0(void)
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

loc_00144BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6459E8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    edx = MEM32(0x6459F0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC350); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x6459EC);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(esi + 0x690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x70) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00144C40; /* je: equal / zero */

loc_00144C1F: ;
    eax = MEM32(eax + 0x794);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144C40; /* je: equal / zero */

loc_00144C29: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144C35u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00144C35: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */

loc_00144C40: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x760)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00144C8D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00144C53: ;
    fp_push(MEMF(0x2DBED0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x760)); /* fsub dword ptr [esi + 0x760] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DBED0)); /* fmul dword ptr [0x2dbed0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144C70u); RECOMP_ABI_CALL(0x00237629u, sub_00237629); /* call 0x00237629 */

loc_00144C70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144C78u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_00144C78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00144C80; /* jge: greater or equal (signed >=) */

loc_00144C7C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00144C8A;

loc_00144C80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00144C8A; /* jle: less or equal (signed <=) */

loc_00144C85: ;
    eax = 7;

loc_00144C8A: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */

loc_00144C8D: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = eax;
    edi = esi + 0x14;
    MEM32(esp + 0x18) = 8;
    /* nop */

loc_00144CA0: ;
    ecx = MEM32(edi + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144CAF; /* je: equal / zero */

loc_00144CA7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144CACu); RECOMP_ABI_CALL(0x001449C0u, sub_001449C0); /* call 0x001449C0 */

loc_00144CAC: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */

loc_00144CAF: ;
    ecx = MEM32(edi + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144CBE; /* je: equal / zero */

loc_00144CB6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144CBBu); RECOMP_ABI_CALL(0x001449C0u, sub_001449C0); /* call 0x001449C0 */

loc_00144CBB: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */

loc_00144CBE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x760)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00144EFC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00144CCF: ;
    eax = MEM32(esi + 0x690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144EFC; /* je: equal / zero */

loc_00144CDD: ;
    esi = MEM32(eax + 0x794);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144CEFu); RECOMP_ABI_CALL(0x001301D0u, sub_001301D0); /* call 0x001301D0 */

loc_00144CEF: ;
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144CFEu); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_00144CFE: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144D0Du); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_00144D0D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x58);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = ecx;
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x5C); /* addss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x60); /* addss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x64); /* addss */
    MEMF(esp + 0x74) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x74);
    MEMF(esp + 0x78) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x78);
    MEMF(esp + 0x7C) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x7C);
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00144DC8; /* jge: greater or equal (signed >=) */

loc_00144D80: ;
    MEM8(edi + 0xAC) = 1;

loc_00144D87: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */

loc_00144D99: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144EF5; /* je: equal / zero */

loc_00144DA3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00144EF5; /* jge: greater or equal (signed >=) */

loc_00144DAC: ;
    ecx = MEM32(esi + 0x3C);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00144E08; /* jp: parity */

loc_00144DC0: ;
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    goto loc_00144E1A;

loc_00144DC8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00144D87; /* jge: greater or equal (signed >=) */

loc_00144DCD: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    edx = ebx + 1;
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    goto loc_00144D99;

loc_00144E08: ;
    xmm4 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm4.f[0] = xmm4.f[0] / xmm2.f[0]; /* divss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */

loc_00144E1A: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xB0)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0xB8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xB4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    eax = esp + 0x21;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x90) = xmm6.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3DC)); /* fmul dword ptr [0x2dc3dc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x84) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144ED2u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_00144ED2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00144EE5; /* jne: not equal / not zero */

loc_00144ED7: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144EE5; /* je: equal / zero */

loc_00144EDE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144EE5u); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_00144EE5: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00144EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144EF2u); } /* indirect call */
    }

loc_00144EF5: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    esi = MEM32(esp + 0x14);

loc_00144EFC: ;
    ecx = MEM32(esi + 0x690);
    eax = MEM32(ecx + 0x798);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001450B1; /* jne: not equal / not zero */

loc_00144F10: ;
    esi = MEM32(edi);
    eax = MEM32(esi + 0x3C);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x6C); /* subss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00144FE4; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_00144F29: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2E16C4); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00144F44; /* jp: parity */

loc_00144F3F: ;
    xmm2 = xmm4; /* movaps */
    goto loc_00144F50;

loc_00144F44: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */

loc_00144F50: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30F064); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x30F068); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x30F06C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edx = esp + 0x22;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm4.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144FBCu); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_00144FBC: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00144FCF; /* jne: not equal / not zero */

loc_00144FC1: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144FCF; /* je: equal / zero */

loc_00144FC8: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00144FCFu); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_00144FCF: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00144FDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144FDCu); } /* indirect call */
    }

loc_00144FDF: ;
    goto loc_001450AA;

loc_00144FE4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E25EC)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00145007; /* jp: parity */

loc_00145002: ;
    xmm2 = xmm4; /* movaps */
    goto loc_00145013;

loc_00145007: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */

loc_00145013: ;
    xmm3 = XMM_SCALAR(MEMF(0x2E0848)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30F064); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x30F068); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x30F06C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = esp + 0x23;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm4.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145087u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_00145087: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014509A; /* jne: not equal / not zero */

loc_0014508C: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014509A; /* je: equal / zero */

loc_00145093: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014509Au); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_0014509A: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001450AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001450A7u); } /* indirect call */
    }

loc_001450AA: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    esi = MEM32(esp + 0x14);

loc_001450B1: ;
    eax = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00144CA0; /* jne: not equal / not zero */

loc_001450C7: ;
    ecx = MEM32(esi + 0x688);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001450D6; /* je: equal / zero */

loc_001450D1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001450D6u); RECOMP_ABI_CALL(0x001449C0u, sub_001449C0); /* call 0x001449C0 */

loc_001450D6: ;
    ecx = MEM32(esi + 0x68C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001450E5; /* je: equal / zero */

loc_001450E0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001450E5u); RECOMP_ABI_CALL(0x001449C0u, sub_001449C0); /* call 0x001449C0 */

loc_001450E5: ;
    eax = MEM32(esi + 0x690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001451B4; /* je: equal / zero */

loc_001450F3: ;
    esi = MEM32(eax + 0x798);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001451B4; /* je: equal / zero */

loc_00145101: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014510Du); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0014510D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x6C); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001451A1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00145122: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDE24); /* mulss */
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145137u); RECOMP_ABI_CALL(0x001303D0u, sub_001303D0); /* call 0x001303D0 */

loc_00145137: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = MEM32(esi);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30F064); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x30F068); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x30F06C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = esp + 0x38;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001451A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014519Eu); } /* indirect call */
    }

loc_001451A1: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */

loc_001451B4: ;
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
 * sub_001451C0
 * Original: 0x001451C0 - 0x001452B8 (248 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001451C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001451C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243466);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27);
    ebp = 0x7C;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001451EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001451ECu); } /* indirect call */
    }

loc_001451EF: ;
    MEM16(eax + 4) = LO16(ebp);
    MEM32(esp + 0x10) = eax;
    ebx = MEM32(esi + 0x690);
    edi = MEM32(esp + 0x24);
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(esi + 0x5C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, 0x00145223u); RECOMP_ABI_CALL(0x00144630u, sub_00144630); /* call 0x00144630 */

loc_00145223: ;
    MEM32(esi + 0x688) = eax;
    ecx = MEM32(0x37A3F0);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0014523Cu); RECOMP_ABI_CALL(0x001BDFA0u, sub_001BDFA0); /* call 0x001BDFA0 */

loc_0014523C: ;
    ecx = MEM32(0x30E940);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00145254u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00145251u); } /* indirect call */
    }

loc_00145254: ;
    MEM16(eax + 4) = LO16(ebp);
    MEM32(esp + 0x10) = eax;
    ebp = MEM32(esp + 0x24);
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(esi + 0x680);
    edx = MEM32(edx + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x690);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x30) = 1;
    PUSH32(esp, 0x00145287u); RECOMP_ABI_CALL(0x00144630u, sub_00144630); /* call 0x00144630 */

loc_00145287: ;
    MEM32(esi + 0x68C) = eax;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0014529Du); RECOMP_ABI_CALL(0x001BDFA0u, sub_001BDFA0); /* call 0x001BDFA0 */

loc_0014529D: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x684) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001452C0
 * Original: 0x001452C0 - 0x00145342 (130 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001452C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001452C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24347B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27);
    PUSH32(esp, 0x7C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001452E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001452E5u); } /* indirect call */
    }

loc_001452E8: ;
    MEM16(eax + 4) = 0x7C;
    MEM32(esp + 4) = eax;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + 0x690);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0014531Au); RECOMP_ABI_CALL(0x00144630u, sub_00144630); /* call 0x00144630 */

loc_0014531A: ;
    MEM32(esi) = eax;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00145330u); RECOMP_ABI_CALL(0x001BDFA0u, sub_001BDFA0); /* call 0x001BDFA0 */

loc_00145330: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145350
 * Original: 0x00145350 - 0x001453D9 (137 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145350: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24347B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x27);
    PUSH32(esp, 0x7C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00145379u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00145376u); } /* indirect call */
    }

loc_00145379: ;
    MEM16(eax + 4) = 0x7C;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + 0x690);
    edi = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x001453AFu); RECOMP_ABI_CALL(0x00144630u, sub_00144630); /* call 0x00144630 */

loc_001453AF: ;
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001453C6u); RECOMP_ABI_CALL(0x001BDFA0u, sub_001BDFA0); /* call 0x001BDFA0 */

loc_001453C6: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001453E0
 * Original: 0x001453E0 - 0x0014541D (61 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001453E0(void)
{

loc_001453E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001453E8u); RECOMP_ABI_CALL(0x001438F0u, sub_001438F0); /* call 0x001438F0 */

loc_001453E8: ;
    ecx = esi;
    PUSH32(esp, 0x001453EFu); RECOMP_ABI_CALL(0x00144270u, sub_00144270); /* call 0x00144270 */

loc_001453EF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA3B9A057u);
    ecx = 0x643860;
    MEM32(esi + 0x794) = 0;
    PUSH32(esp, 0x0014540Au); RECOMP_ABI_CALL(0x001F7AF0u, sub_001F7AF0); /* call 0x001F7AF0 */

loc_0014540A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF5ACC305u);
    ecx = 0x643860;
    PUSH32(esp, 0x0014541Bu); RECOMP_ABI_CALL(0x001F7AF0u, sub_001F7AF0); /* call 0x001F7AF0 */

loc_0014541B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00145420
 * Original: 0x00145420 - 0x0014545F (63 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145420: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x790)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x790), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145432; /* je: equal / zero */

loc_0014542C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00145432: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x00145440u); RECOMP_ABI_CALL(0x001451C0u, sub_001451C0); /* call 0x001451C0 */

loc_00145440: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00145448u); RECOMP_ABI_CALL(0x0012FFE0u, sub_0012FFE0); /* call 0x0012FFE0 */

loc_00145448: ;
    MEM32(esi + 0x798) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x790) = 3;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145460
 * Original: 0x00145460 - 0x001455D2 (370 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145460(void)
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

loc_00145460: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x790);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0014559E; /* ja: above (unsigned >) */

loc_00145475: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1455D4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0014547Cu) goto loc_0014547C;
    if (_jt == 0x0014548Au) goto loc_0014548A;
    if (_jt == 0x0014552Eu) goto loc_0014552E;
    if (_jt == 0x001455C3u) goto loc_001455C3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0014547C: ;
    ecx = esi;
    PUSH32(esp, 0x00145483u); RECOMP_ABI_CALL(0x001FA1D0u, sub_001FA1D0); /* call 0x001FA1D0 */

loc_00145483: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014548A: ;
    ecx = MEM32(esi + 0x794);
    PUSH32(esp, 0x72DBB0F4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014549Fu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0014549F: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x794);
    PUSH32(esp, 0x001454B0u); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_001454B0: ;
    edx = MEM32(esi + 0x7AC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001454BDu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_001454BD: ;
    ecx = esi + 0x20;
    MEM32(esi + 0x7AC) = eax;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x760)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x6C); /* subss */
    MEMF(ecx + 0x760) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x780); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001455C6; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x780)) */

loc_001454EF: ;
    ecx = esi;
    PUSH32(esp, 0x001454F6u); RECOMP_ABI_CALL(0x00144270u, sub_00144270); /* call 0x00144270 */

loc_001454F6: ;
    ecx = MEM32(esi + 0x794);
    PUSH32(esp, 0x81700110u);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014550Bu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0014550B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x794);
    PUSH32(esp, 0x0014551Cu); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_0014551C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00145524u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00145524: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014552E: ;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    ecx = edi;
    PUSH32(esp, 0x00145539u); RECOMP_ABI_CALL(0x00143B00u, sub_00143B00); /* call 0x00143B00 */

loc_00145539: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x7A8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001455A5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x7A8)) */

loc_00145545: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00145551u); RECOMP_ABI_CALL(0x00143700u, sub_00143700); /* call 0x00143700 */

loc_00145551: ;
    ecx = edi;
    PUSH32(esp, 0x00145558u); RECOMP_ABI_CALL(0x00143740u, sub_00143740); /* call 0x00143740 */

loc_00145558: ;
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00145566u); RECOMP_ABI_CALL(0x001442B0u, sub_001442B0); /* call 0x001442B0 */

loc_00145566: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014559D; /* je: equal / zero */

loc_0014556C: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00145574u); RECOMP_ABI_CALL(0x00145420u, sub_00145420); /* call 0x00145420 */

loc_00145574: ;
    PUSH32(esp, 0x4B7F734D);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00145585u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00145585: ;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00145592u); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_00145592: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014559Au); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014559A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014559D: ;
    POP32(esp, edi);

loc_0014559E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001455A5: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7A8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x60); /* subss */
    POP32(esp, edi);
    MEMF(esi + 0x7A8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001455C3: ;
    ecx = esi + 0x20;

loc_001455C6: ;
    PUSH32(esp, 0x001455CBu); RECOMP_ABI_CALL(0x00143B00u, sub_00143B00); /* call 0x00143B00 */

loc_001455CB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001455F0
 * Original: 0x001455F0 - 0x00145606 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001455F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001455F0: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145603; /* je: equal / zero */

loc_001455F7: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00145603u); RECOMP_ABI_CALL(0x00144BD0u, sub_00144BD0); /* call 0x00144BD0 */

loc_00145603: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00145610
 * Original: 0x00145610 - 0x00145620 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145610: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x14);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_001452C0(); return; /* tail jmp 0x001452C0 */

}

/**
 * sub_00145620
 * Original: 0x00145620 - 0x0014563D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145620(void)
{

loc_00145620: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00145632u); RECOMP_ABI_CALL(0x001452C0u, sub_001452C0); /* call 0x001452C0 */

loc_00145632: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145640
 * Original: 0x00145640 - 0x001459A4 (868 bytes, 195 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00145640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2434B7);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1B8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(edi + 0x1C) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x100;
    MEM32(edi + 0x18) = eax;
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    MEM8(edi + 0xC0) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145690u); RECOMP_ABI_CALL(0x001C45D0u, sub_001C45D0); /* call 0x001C45D0 */

loc_00145690: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    XMM_STORE(esp + 0x64, xmm0); /* movaps */
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    XMM_STORE(esp + 0x84, xmm0); /* movaps */
    XMM_STORE(esp + 0x94, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3D0)); /* movss */
    PUSH32(esp, 0x41200000);
    PUSH32(esp, eax);
    MEM32(esp + 0x1D8) = ebx;
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001456FCu); RECOMP_ABI_CALL(0x001CFD40u, sub_001CFD40); /* call 0x001CFD40 */

loc_001456FC: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0014570Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014570Bu); } /* indirect call */
    }

loc_0014570E: ;
    MEM16(eax + 4) = 0x20;
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3D0)); /* movss */
    ecx = MEM32(0x30ED84);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = eax;
    MEM8(esp + 0x1D4) = 1;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145756u); RECOMP_ABI_CALL(0x001907D0u, sub_001907D0); /* call 0x001907D0 */

loc_00145756: ;
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    XMM_STORE(esp + 0x160, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x80); /* movaps */
    XMM_STORE(esp + 0x170, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x90); /* movaps */
    XMM_STORE(esp + 0x180, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x1A0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x104) = eax;
    eax = MEM32(ebp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x1A8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1A4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esp + 0x1CC) = LO8(ebx);
    MEM8(esp + 0x1B4) = 3;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(0x4409AC);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    eax = eax | 0x15;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x28);
    XMM_STORE(esp + 0x124, xmm0); /* movaps */
    MEM8(esp + 0x1B9) = 1;
    MEM32(esp + 0x104) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, 0xC0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00145829u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00145826u); } /* indirect call */
    }

loc_00145829: ;
    esi = eax;
    MEM16(esi + 4) = 0xC0;
    MEM32(esp + 0x3C) = esi;
    eax = esp + 0x100;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x1D0) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014584Cu); RECOMP_ABI_CALL(0x001C3E60u, sub_001C3E60); /* call 0x001C3E60 */

loc_0014584C: ;
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    MEM32(esi) = 0x2F1090;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xBC) = ebx;
    MEM32(edi + 0x14) = esi;
    XMM_STORE(esp + 0xD0, xmm0); /* movaps */
    XMM_STORE(esp + 0xE0, xmm0); /* movaps */
    XMM_STORE(esp + 0xF0, xmm0); /* movaps */
    esi = MEM32(esi + 0x3C);
    edx = MEM32(esi);
    eax = esp + 0xD0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x1D0) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001458B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001458B2u); } /* indirect call */
    }

loc_001458B5: ;
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    eax = MEM32(edi + 0x14);
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    XMM_STORE(esp + 0xB0, xmm0); /* movaps */
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001458E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001458E2u); } /* indirect call */
    }

loc_001458E5: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(0x37A3F0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001458F4u); RECOMP_ABI_CALL(0x001BFFB0u, sub_001BFFB0); /* call 0x001BFFB0 */

loc_001458F4: ;
    ecx = MEM32(esp + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145908; /* jne: not equal / not zero */

loc_00145902: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00145908u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00145906u); } /* indirect call */
    }

loc_00145908: ;
    esi = edi + 0x80;
    PUSH32(esp, 0x6438E0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014591Au); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0014591A: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x38) = eax;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA3B9A057u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0014594Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00145947u); } /* indirect call */
    }

loc_0014594A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00145951u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014594Eu); } /* indirect call */
    }

loc_00145951: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145959u); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_00145959: ;
    eax = MEM32(esp + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1CC) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0014598D; /* js: sign (negative) */

loc_0014596F: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x114);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0014598Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014598Au); } /* indirect call */
    }

loc_0014598D: ;
    ecx = MEM32(esp + 0x1C4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001459B0
 * Original: 0x001459B0 - 0x00145CB8 (776 bytes, 208 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001459B0(void)
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

loc_001459B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x74));
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    eax = MEM32(ebp + 0x14);
    xmm3 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 8);
    MEMF(edi + 0x760) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x690) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x680) = ecx;
    xmm0 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = esp + 0x40;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145A45u); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_00145A45: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145A55u); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_00145A55: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x37A3F4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edx;
    edx = ecx;
    MEM32(eax) = ecx;
    MEM32(esp + 0x18) = edx;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;

loc_00145A86: ;
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
    xmm2 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    ebx = esi + 1;
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
    MEM32(esp + 0x14) = eax;
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
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x10) = ebx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(0x30EFF0) = ecx;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    if (CMP_GE(_fas, _fbs)) goto loc_00145B3D; /* jge: greater or equal (signed >=) */

loc_00145B37: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00145B3D: ;
    SET_LO8(eax, MEM8(ebp + 0x18));
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC09C)); /* fmul dword ptr [0x2dc09c] */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    if (CMP_EQ(_fa, _fb)) goto loc_00145B99; /* je: equal / zero */

loc_00145B60: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E5CB0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    goto loc_00145B9F;

loc_00145B99: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */

loc_00145B9F: ;
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    PUSH32(esp, esi);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, edi);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145BE8u); RECOMP_ABI_CALL(0x00145640u, sub_00145640); /* call 0x00145640 */

loc_00145BE8: ;
    ecx = MEM32(esp + 0xC);
    esi = ebx;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xD0)) >> 32) & 1);
    ecx = ecx + 0xD0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00145A86; /* jb: below (unsigned <) */

loc_00145C01: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145C0Cu); RECOMP_ABI_CALL(0x00145620u, sub_00145620); /* call 0x00145620 */

loc_00145C0C: ;
    ebx = 1;
    esi = edi + 0xD0;

loc_00145C17: ;
    ecx = esi + -208;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145C25u); RECOMP_ABI_CALL(0x00145610u, sub_00145610); /* call 0x00145610 */

loc_00145C25: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = ebx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00145C38; /* jge: greater or equal (signed >=) */

loc_00145C32: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00145C38: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145C4Au); RECOMP_ABI_CALL(0x00145350u, sub_00145350); /* call 0x00145350 */

loc_00145C4A: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xD0)) >> 32) & 1);
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00145C17; /* jb: below (unsigned <) */

loc_00145C55: ;
    ecx = MEM32(0x37A3F0);
    eax = edi + 0x694;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145C67u); RECOMP_ABI_CALL(0x001BD850u, sub_001BD850); /* call 0x001BD850 */

loc_00145C67: ;
    edx = MEM32(edi + 0x69C);
    ebx = edi + 0x69C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF5ACC305u);
    ecx = ebx;
    MEM32(edi + 0x684) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00145C87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00145C84u); } /* indirect call */
    }

loc_00145C87: ;
    esi = edi + 0x6F8;
    PUSH32(esp, 0xF5ACC305u);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00145C99u); RECOMP_ABI_CALL(0x001F5200u, sub_001F5200); /* call 0x001F5200 */

loc_00145C99: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00145CA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00145C9Du); } /* indirect call */
    }

loc_00145CA0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00145CA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00145CA4u); } /* indirect call */
    }

loc_00145CA7: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM8(esi + 0x24) = LO8(eax);
    POP32(esp, esi);
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
 * sub_00145CC0
 * Original: 0x00145CC0 - 0x00145D45 (133 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145CC0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x790);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145CD9; /* je: equal / zero */

loc_00145CD0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00145CD9: ;
    ecx = MEM32(esi + 0x794);
    PUSH32(esp, 0x81700110u);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00145CEEu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00145CEE: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x794);
    PUSH32(esp, 0x00145CFFu); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_00145CFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00145D07u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00145D07: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esi + 0x794);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F4CCCCD);
    eax = esi + 0x79C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x20;
    MEM32(esi + 0x790) = 2;
    PUSH32(esp, 0x00145D35u); RECOMP_ABI_CALL(0x001459B0u, sub_001459B0); /* call 0x001459B0 */

loc_00145D35: ;
    ecx = esi;
    PUSH32(esp, 0x00145D3Cu); RECOMP_ABI_CALL(0x001FA170u, sub_001FA170); /* call 0x001FA170 */

loc_00145D3C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145D50
 * Original: 0x00145D50 - 0x00145D8B (59 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145D50: ;
    eax = MEM32(ecx + 0x790);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00145D83; /* je: equal / zero */

loc_00145D5B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00145D68; /* je: equal / zero */

loc_00145D5E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00145D8A; /* jne: not equal / not zero */

loc_00145D63: ;
    g_seh_ebp = ebp; sub_001438F0(); return; /* tail jmp 0x001438F0 */

loc_00145D68: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(ecx + 0x780) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x790) = 2;
    esp += 4; return; /* ret */

loc_00145D83: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00145D8Au); RECOMP_ABI_CALL(0x00145CC0u, sub_00145CC0); /* call 0x00145CC0 */

loc_00145D8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00145D90
 * Original: 0x00145D90 - 0x00145DB2 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145D90(void)
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

loc_00145D90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00145DAD; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00145DA7: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_00145DAD: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00145DC0
 * Original: 0x00145DC0 - 0x00145EC4 (260 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145DC0(void)
{

loc_00145DC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DD418)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC394)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(ecx + 0xD4) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xFC) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2DC3D0)); /* movss */
    MEMF(ecx + 0x104) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x114) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x11C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x124) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    MEMF(ecx + 0x138) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3CC)); /* movss */
    MEMF(ecx + 0xDC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xEC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0xF4) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0xF8) = xmm5.f[0]; /* movss */
    MEMF(ecx + 0x108) = xmm4.f[0]; /* movss */
    MEMF(ecx + 0x118) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x128) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x12C) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x134) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x13C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00145ED0
 * Original: 0x00145ED0 - 0x00145F97 (199 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145ED0(void)
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

loc_00145ED0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax);
    edi = edx;
    PUSH32(esp, edi);
    ebx = ecx;
    eax = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00145EF9u); RECOMP_ABI_CALL(0x001F16C0u, sub_001F16C0); /* call 0x001F16C0 */

loc_00145EF9: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00145F00u); RECOMP_ABI_CALL(0x001F28E0u, sub_001F28E0); /* call 0x001F28E0 */

loc_00145F00: ;
    xmm0 = XMM_SCALAR(MEMF(0x2F143C)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00145F21; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_00145F12: ;
    POP32(esp, edi);
    eax = esi + 0xD0;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00145F21: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00145F88; /* ja: above (unsigned >) */

loc_00145F27: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x145F98); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00145F2Eu) goto loc_00145F2E;
    if (_jt == 0x00145F3Du) goto loc_00145F3D;
    if (_jt == 0x00145F4Cu) goto loc_00145F4C;
    if (_jt == 0x00145F5Bu) goto loc_00145F5B;
    if (_jt == 0x00145F6Au) goto loc_00145F6A;
    if (_jt == 0x00145F79u) goto loc_00145F79;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00145F2E: ;
    POP32(esp, edi);
    eax = esi + 0xE0;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00145F3D: ;
    POP32(esp, edi);
    eax = esi + 0xF0;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00145F4C: ;
    POP32(esp, edi);
    eax = esi + 0x100;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00145F5B: ;
    POP32(esp, edi);
    eax = esi + 0x110;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00145F6A: ;
    POP32(esp, edi);
    eax = esi + 0x120;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00145F79: ;
    POP32(esp, edi);
    eax = esi + 0x130;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00145F88: ;
    POP32(esp, edi);
    eax = esi + 0xC0;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145FB0
 * Original: 0x00145FB0 - 0x001460BB (267 bytes, 66 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145FB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2434DB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x9C);
    ecx = MEM32(esp + 0x98);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00145FE5u); RECOMP_ABI_CALL(0x000187A0u, sub_000187A0); /* call 0x000187A0 */

loc_00145FE5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    edx = esp + 0x10;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0xA8) = 0;
    PUSH32(esp, 0x00146005u); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_00146005: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014607B; /* je: equal / zero */

loc_0014600C: ;
    eax = MEM32(esp + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146037; /* je: equal / zero */

loc_00146017: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_00146037: ;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    MEM32(esp + 4) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00146050: ;
    ecx = MEM32(esp + esi * 4 + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014605D; /* je: equal / zero */

loc_00146058: ;
    PUSH32(esp, 0x0014605Du); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0014605D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146050; /* jl: less (signed <) */

loc_00146063: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x88);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0014607B: ;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    MEM32(esp + 4) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00146090: ;
    ecx = MEM32(esp + esi * 4 + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014609D; /* je: equal / zero */

loc_00146098: ;
    PUSH32(esp, 0x0014609Du); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0014609D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146090; /* jl: less (signed <) */

loc_001460A3: ;
    ecx = MEM32(esp + 0x8C);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001460C0
 * Original: 0x001460C0 - 0x00146211 (337 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001460C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001460C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2434F8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x001460E7u); RECOMP_ABI_CALL(0x001C3E60u, sub_001C3E60); /* call 0x001C3E60 */

loc_001460E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xBC) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DD418)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x2F1914;
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xCC) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xDC) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xEC) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xFC) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x108) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x10C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x114) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x118) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x11C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x124) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x128) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x12C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x145FB0);
    MEM32(esp + 0x14) = eax;
    MEMF(esi + 0x134) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x138) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x13C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x001461FAu); RECOMP_ABI_CALL(0x001F0340u, sub_001F0340); /* call 0x001F0340 */

loc_001461FA: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146220
 * Original: 0x00146220 - 0x00146225 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146220: ;
    g_seh_ebp = ebp; sub_001C36A0(); return; /* tail jmp 0x001C36A0 */

}

/**
 * sub_00146230
 * Original: 0x00146230 - 0x0014624F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146230: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2F1944;
    if (TEST_Z(_fa, _fb)) goto loc_00146249; /* je: equal / zero */

loc_00146240: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00146246u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00146246: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00146249: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146250
 * Original: 0x00146250 - 0x001462BA (106 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146250: ;
    eax = MEM32(0x37A3E8);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014625Eu); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_0014625E: ;
    ecx = MEM32(0x37A3E4);
    PUSH32(esp, 1);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(0x37A3E8) = esi;
    PUSH32(esp, 0x00146274u); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_00146274: ;
    edx = MEM32(0x37A3DC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(0x37A3E4) = esi;
    PUSH32(esp, 0x00146288u); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_00146288: ;
    eax = MEM32(0x37A3E0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(0x37A3DC) = esi;
    PUSH32(esp, 0x0014629Bu); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_0014629B: ;
    ecx = MEM32(0x37A3D8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(0x37A3E0) = esi;
    PUSH32(esp, 0x001462AFu); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_001462AF: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x37A3D8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001462C0
 * Original: 0x001462C0 - 0x001462DA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001462C0(void)
{

loc_001462C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001462D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001462D5u); } /* indirect call */
    }

loc_001462D8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001462E0
 * Original: 0x001462E0 - 0x001462F2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001462E0(void)
{

loc_001462E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001462E8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_001462E8: ;
    MEM32(esi) = 0x2F1964;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146300
 * Original: 0x00146300 - 0x00146306 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146300(void)
{

loc_00146300: ;
    eax = MEM32(0x37A3D4);
    esp += 4; return; /* ret */

}

/**
 * sub_00146310
 * Original: 0x00146310 - 0x0014632D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146310(void)
{

loc_00146310: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0014631Du); RECOMP_ABI_CALL(0x00196800u, sub_00196800); /* call 0x00196800 */

loc_0014631D: ;
    MEM32(esi) = 0x2F1978;
    MEM8(esi + 0x14) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146330
 * Original: 0x00146330 - 0x00146344 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146330: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00146341; /* je: equal / zero */

loc_00146335: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_00146341: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146350
 * Original: 0x00146350 - 0x00146358 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146350: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00146CD0(); return; /* tail jmp 0x00146CD0 */

}

/**
 * sub_00146360
 * Original: 0x00146360 - 0x0014645B (251 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146360: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00146389; /* jae: above or equal (unsigned >=) */

loc_0014636F: ;
    MEM32(ecx) = 0x2F19C4;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp) = eax;
    eax = MEM32(esp);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_00146389: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001463F4; /* jle: less or equal (signed <=) */

loc_0014639E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001463A2: ;
    esi = MEM32(edi + 0x68);
    ecx = MEM32(esi + ebx);
    edx = MEM32(ecx + 0x10);
    SET_LO8(eax, MEM8(edx + 0x40));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001463C1; /* jne: not equal / not zero */

loc_001463B4: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(ecx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001463DF; /* je: equal / zero */

loc_001463C1: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001463D8; /* je: equal / zero */

loc_001463C8: ;
    edx = MEM32(ecx);
    ebp = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001463D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001463CDu); } /* indirect call */
    }

loc_001463D0: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001463D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001463D5u); } /* indirect call */
    }

loc_001463D8: ;
    MEM32(esi + 8) = 0;

loc_001463DF: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi + 0x6C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001463A2; /* jl: less (signed <) */

loc_001463F2: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001463F4: ;
    eax = MEM32(edi + 0x40);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014642B; /* jle: less or equal (signed <=) */

loc_001463FD: ;
    /* nop */

loc_00146400: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx + esi * 4);
    ecx = MEM32(edx + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0014640Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014640Bu); } /* indirect call */
    }

loc_0014640E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146423; /* jne: not equal / not zero */

loc_00146413: ;
    ecx = MEM32(edi + 0x3C);
    ecx = MEM32(ecx + esi * 4);
    PUSH32(esp, 0x440E90);
    PUSH32(esp, 0x00146423u); RECOMP_ABI_CALL(0x00146460u, sub_00146460); /* call 0x00146460 */

loc_00146423: ;
    eax = MEM32(edi + 0x40);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146400; /* jl: less (signed <) */

loc_0014642B: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00146457; /* jae: above or equal (unsigned >=) */

loc_0014643B: ;
    MEM32(ecx) = 0x2F19C0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 8) = eax;
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_00146457: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146460
 * Original: 0x00146460 - 0x00146490 (48 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146460: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00146470; /* je: equal / zero */

loc_0014646C: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00146470: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146488; /* je: equal / zero */

loc_00146477: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146488; /* jne: not equal / not zero */

loc_00146482: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00146488u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146486u); } /* indirect call */
    }

loc_00146488: ;
    MEM32(esi + 0x58) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146490
 * Original: 0x00146490 - 0x00146504 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00146490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x30F054);
    eax = esp + 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001464A8u); RECOMP_ABI_CALL(0x0022FA9Eu, sub_0022FA9E); /* call 0x0022FA9E */

loc_001464A8: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001464B3u); RECOMP_ABI_CALL(0x0022F9BCu, sub_0022F9BC); /* call 0x0022F9BC */

loc_001464B3: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, 5);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, 7);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x100);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001464FDu); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_001464FD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00146510
 * Original: 0x00146510 - 0x00146534 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146510: ;
    eax = MEM32(0x37A3EC);
    ecx = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146529; /* jne: not equal / not zero */

loc_00146523: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00146529u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146527u); } /* indirect call */
    }

loc_00146529: ;
    MEM32(0x37A3EC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00146540
 * Original: 0x00146540 - 0x0014656C (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146540(void)
{

loc_00146540: ;
    eax = MEM32(0x37A3F0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xE8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xE4)); /* movss */
    ecx = MEM32(eax + 0xE0);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00146570
 * Original: 0x00146570 - 0x00146625 (181 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146570(void)
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

loc_00146570: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00146611; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00146586: ;
    SET_LO8(ecx, MEM8(0x37A3F8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001465D7; /* je: equal / zero */

loc_0014659A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x2F19E0)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F19DC)); /* fmul dword ptr [0x2f19dc] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC340)); /* fadd dword ptr [0x2dc340] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001465C3u); RECOMP_ABI_CALL(0x00237629u, sub_00237629); /* call 0x00237629 */

loc_001465C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001465CBu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001465CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001465E9; /* jle: less or equal (signed <=) */

loc_001465D0: ;
    eax = 5;
    goto loc_001465E9;

loc_001465D7: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3D0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001465E9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001465E4: ;
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_001465E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00146611; /* jle: less or equal (signed <=) */

loc_001465ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    esi = eax;
    goto loc_00146600;

    /* nop */
    edi = edi;

loc_00146600: ;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0014660Cu); RECOMP_ABI_CALL(0x001C1CA0u, sub_001C1CA0); /* call 0x001C1CA0 */

loc_0014660C: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00146600; /* jne: not equal / not zero */

loc_0014660F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00146611: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00146621u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0014661Eu); } /* indirect call */
    }

loc_00146621: ;
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
 * sub_00146630
 * Original: 0x00146630 - 0x0014665F (47 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146630: ;
    edx = MEM32(ecx + 0x10C);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00146653; /* jle: less or equal (signed <=) */

loc_0014663D: ;
    ecx = MEM32(ecx + 0x108);
    esi = MEM32(esp + 8);

loc_00146647: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146659; /* je: equal / zero */

loc_0014664B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146647; /* jl: less (signed <) */

loc_00146653: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00146659: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146660
 * Original: 0x00146660 - 0x001466DD (125 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146660: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24351B);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00146683; /* jne: not equal / not zero */

loc_0014667E: ;
    eax = 1;

loc_00146683: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00146697; /* jle: less or equal (signed <=) */

loc_0014668A: ;
    /* nop */

loc_00146690: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00146690; /* jg: greater (signed >) */

loc_00146697: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x80);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001466A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001466A6u); } /* indirect call */
    }

loc_001466A9: ;
    MEM16(eax + 4) = 0x80;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x001466CDu); RECOMP_ABI_CALL(0x001274C0u, sub_001274C0); /* call 0x001274C0 */

loc_001466CD: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001466E0
 * Original: 0x001466E0 - 0x00146708 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001466E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001466E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001466E8u); RECOMP_ABI_CALL(0x00146710u, sub_00146710); /* call 0x00146710 */

loc_001466E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146702; /* je: equal / zero */

loc_001466EF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2A);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00146702u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001466FFu); } /* indirect call */
    }

loc_00146702: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146710
 * Original: 0x00146710 - 0x00146715 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146710: ;
    g_seh_ebp = ebp; sub_001C16B0(); return; /* tail jmp 0x001C16B0 */

}

/**
 * sub_00146720
 * Original: 0x00146720 - 0x0014672E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146720(void)
{

loc_00146720: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014672Au); RECOMP_ABI_CALL(0x00146570u, sub_00146570); /* call 0x00146570 */

loc_0014672A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146730
 * Original: 0x00146730 - 0x00146A07 (727 bytes, 198 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00146730(void)
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

loc_00146730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x64));
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    edx = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1930)); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0xC) = ecx;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    if ((_fas < 0)) goto loc_001469FE; /* js: sign (negative) */

loc_00146783: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    goto loc_00146790;

    /* nop */

loc_00146790: ;
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    eax = MEM32(esp + 0xC);
    XMM_STORE(esi, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(edx + 0x30); /* movaps */
    xmm3 = XMM_MEM(edx + 0x40); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(esp + 0x40, xmm2); /* movaps */
    xmm2 = XMM_MEM(0x2F1900); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    ecx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x50);
    if (6) _cf = (int)(((ecx) >> ((6) - 1)) & 1);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (6) _cf = (int)(((eax) >> ((6) - 1)) & 1);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX16(LO16(ecx));
    ecx = MEM32(edx + 0xC);
    edi = ZX16(LO16(eax));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001469E1; /* jae: above or equal (unsigned >=) */

loc_001467E7: ;
    eax = MEM32(edx + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001469E1; /* jae: above or equal (unsigned >=) */

loc_001467F3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x2C) = edi;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00146805; /* jge: greater or equal (signed >=) */

loc_001467FF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00146805: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x40) - fp_top()); /* fsubr dword ptr [esp + 0x40] */
    MEM32(esp + 0x2C) = ebx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0014681F; /* jge: greater or equal (signed >=) */

loc_00146819: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_0014681F: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x48) - fp_top()); /* fsubr dword ptr [esp + 0x48] */
    eax = edi + 1;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146835u); RECOMP_ABI_CALL(0x00146A10u, sub_00146A10); /* call 0x00146A10 */

loc_00146835: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146847u); RECOMP_ABI_CALL(0x00146A10u, sub_00146A10); /* call 0x00146A10 */

loc_00146847: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001468D2; /* jbe: below or equal (unsigned <=) */

loc_00146864: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146873u); RECOMP_ABI_CALL(0x00146A10u, sub_00146A10); /* call 0x00146A10 */

loc_00146873: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm3; /* movaps */
    MEMF(esi) = xmm4.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    goto loc_0014692B;

loc_001468D2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001468D9u); RECOMP_ABI_CALL(0x00146A10u, sub_00146A10); /* call 0x00146A10 */

loc_001468D9: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi) = xmm4.f[0]; /* movss */
    MEMF(esi + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */

loc_0014692B: ;
    ecx = MEM32(esp + 0x28);
    xmm1 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm2 = XMM_MEM(esi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm4 = xmm1; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm1, 0x55); /* shufps */
    xmm5 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xAA); /* shufps */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    XMM_STORE(esp + 0x68, xmm1); /* movaps */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    XMM_STORE(esi, xmm2); /* movaps */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001469AC; /* jnp: not parity */

loc_00146972: ;
    xmm4 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    XMM_STORE(esp + 0x60, xmm1); /* movaps */
    xmm3.f[0] = recomp_rsqrtss(xmm1.f[0]); /* rsqrtss */
    MEMF(esp + 0x60) = xmm3.f[0]; /* movss */
    xmm3 = XMM_MEM(esp + 0x60); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    goto loc_001469B3;

loc_001469AC: ;
    xmm3.f[0] = xmm3.f[0]; /* movss */
    xmm1 = xmm3; /* movaps */

loc_001469B3: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x20);
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    XMM_STORE(esi, xmm3); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xC); /* subss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */

loc_001469E1: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_00146790; /* jne: not equal / not zero */

loc_001469FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00146A10
 * Original: 0x00146A10 - 0x00146A96 (134 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_00146A10: ;
    edx = MEM32(0x6432C4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x6432D8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = edx;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(0x6432E0);
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = MEM32(0x643274);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x6432B4);
    ecx = edx;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = ecx;
    ecx = esi;
    esi = MEM32(esp + 0x18);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x6432C8);
    edi = eax;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x64326C);
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(ebp + eax * 4));
    eax = (uint32_t)(int32_t)SMEM16(ebp + eax * 4 + 2);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(edx + edi));
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = edx;
    POP32(esp, ebx);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x643290)); /* fmul dword ptr [0x643290] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00146AA0
 * Original: 0x00146AA0 - 0x00146CCC (556 bytes, 184 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146AA0: ;
    ecx = MEM32(0x4409E4);
    eax = MEM32(0x4409E8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00146ACE; /* jae: above or equal (unsigned >=) */

loc_00146AB2: ;
    MEM32(ecx) = 0x2F19E4;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_00146ACE: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    ecx = MEM32(ebp + 0x6C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00146C60; /* jle: less or equal (signed <=) */

loc_00146AE5: ;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    goto loc_00146AF0;

    /* nop */

loc_00146AF0: ;
    ebx = MEM32(ebp + 0x68);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebx + ecx + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00146C3F; /* jne: not equal / not zero */

loc_00146B09: ;
    eax = MEM32(ebp + 0x20);
    esi = MEM32(ebx);
    edi = MEM32(ebx + 4);
    ecx = MEM32(eax + 0xD0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146B43; /* je: equal / zero */

loc_00146B21: ;
    eax = ecx;
    edx = MEM32(eax + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax + 8;
    PUSH32(esp, esi);
    eax = esp + 0x1A;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00146B32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146B30u); } /* indirect call */
    }

loc_00146B32: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146B43; /* jne: not equal / not zero */

loc_00146B37: ;
    MEM32(ebx + 8) = 0;
    goto loc_00146C3F;

loc_00146B43: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(edi + 0x20);
    eax = MEM32(ebp + 0x20);
    ebx = MEM32(eax + 0xC8);
    eax = MEM32(eax + 0xCC);
    MEM32(esp + 0x28) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x48);
    MEM32(esp + 0x2C) = edx;
    edx = (uint32_t)(int32_t)SMEM8(edx + 0x48);
    ecx = edx + ecx * 8;
    ecx = MEM32(ebx + ecx * 4 + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00146B77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146B74u); } /* indirect call */
    }

loc_00146B77: ;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 0xCC);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00146B8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146B8Cu); } /* indirect call */
    }

loc_00146B8F: ;
    ecx = MEM32(edi);
    ebp = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00146B98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146B95u); } /* indirect call */
    }

loc_00146B98: ;
    ecx = MEM32(esp + 0x24);
    ebp = ebp << 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebx + ebp * 4 + 0x18C);
    ebp = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00146BB2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00146BB0u); } /* indirect call */
    }

loc_00146BB2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146C28; /* je: equal / zero */

loc_00146BB9: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146C28; /* je: equal / zero */

loc_00146BC0: ;
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x28);
    MEM32(ebx + 8) = eax;
    ecx = MEM32(ebp + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00146BD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146BD0u); } /* indirect call */
    }

loc_00146BD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146BDF; /* je: equal / zero */

loc_00146BD8: ;
    SET_LO8(eax, MEM8(ebp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146BF7; /* je: equal / zero */

loc_00146BDF: ;
    ecx = MEM32(ebp + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00146BE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146BE4u); } /* indirect call */
    }

loc_00146BE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146C1F; /* je: equal / zero */

loc_00146BEC: ;
    ecx = MEM32(esp + 0x2C);
    SET_LO8(eax, MEM8(ecx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146C1F; /* jne: not equal / not zero */

loc_00146BF7: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(edx + 0x20);
    ecx = MEM32(eax + 0x250);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x1B;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00146C10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146C0Du); } /* indirect call */
    }

loc_00146C10: ;
    SET_LO8(edx, MEM8(eax));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0xC) = ecx;
    goto loc_00146C3B;

loc_00146C1F: ;
    MEM32(ebx + 0xC) = 0xFFFFFFFFu;
    goto loc_00146C3B;

loc_00146C28: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx + 8) = 0;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00146C3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146C38u); } /* indirect call */
    }

loc_00146C3B: ;
    ebp = MEM32(esp + 0x34);

loc_00146C3F: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x6C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00146AF0; /* jl: less (signed <) */

loc_00146C5E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00146C60: ;
    eax = MEM32(ebp + 0x40);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00146C9A; /* jle: less or equal (signed <=) */

loc_00146C69: ;
    /* nop */

loc_00146C70: ;
    ecx = MEM32(ebp + 0x3C);
    edx = MEM32(ecx + esi * 4);
    ecx = MEM32(edx + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00146C7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146C7Bu); } /* indirect call */
    }

loc_00146C7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146C92; /* jne: not equal / not zero */

loc_00146C85: ;
    ecx = MEM32(ebp + 0x3C);
    ecx = MEM32(ecx + esi * 4);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00146C92u); RECOMP_ABI_CALL(0x001C3940u, sub_001C3940); /* call 0x001C3940 */

loc_00146C92: ;
    eax = MEM32(ebp + 0x40);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146C70; /* jl: less (signed <) */

loc_00146C9A: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_AE(_fa, _fb)) goto loc_00146CC6; /* jae: above or equal (unsigned >=) */

loc_00146CAA: ;
    MEM32(ecx) = 0x2F19C0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x24) = eax;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_00146CC6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146CD0
 * Original: 0x00146CD0 - 0x00146CEE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00146CD8u); RECOMP_ABI_CALL(0x00146CF0u, sub_00146CF0); /* call 0x00146CF0 */

loc_00146CD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146CE8; /* je: equal / zero */

loc_00146CDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00146CE5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00146CE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00146CE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146CF0
 * Original: 0x00146CF0 - 0x00146D11 (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146CF0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146D02; /* je: equal / zero */

loc_00146CF4: ;
    MEM32(ecx + 4) = 0x2DC4B8;
    MEM32(ecx) = 0x2F1944;
    esp += 4; return; /* ret */

loc_00146D02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x2DC4B8;
    MEM32(ecx) = 0x2F1944;
    esp += 4; return; /* ret */

}

/**
 * sub_00146D20
 * Original: 0x00146D20 - 0x00146DA5 (133 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146D20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3A83126F);
    PUSH32(esp, 0x00146D2Bu); RECOMP_ABI_CALL(0x00146570u, sub_00146570); /* call 0x00146570 */

loc_00146D2B: ;
    eax = MEM32(0x37A3F4);
    ecx = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146D48; /* jne: not equal / not zero */

loc_00146D42: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00146D48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146D46u); } /* indirect call */
    }

loc_00146D48: ;
    MEM32(0x37A3F4) = ebx;
    PUSH32(esp, 0x00146D53u); RECOMP_ABI_CALL(0x00146250u, sub_00146250); /* call 0x00146250 */

loc_00146D53: ;
    PUSH32(esp, 0x00146D58u); RECOMP_ABI_CALL(0x00146510u, sub_00146510); /* call 0x00146510 */

loc_00146D58: ;
    eax = MEM32(0x37A3F0);
    ecx = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146D70; /* jne: not equal / not zero */

loc_00146D6A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00146D70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146D6Eu); } /* indirect call */
    }

loc_00146D70: ;
    ecx = 0x37A400;
    MEM32(0x37A3F0) = ebx;
    PUSH32(esp, 0x00146D80u); RECOMP_ABI_CALL(0x001FA1D0u, sub_001FA1D0); /* call 0x001FA1D0 */

loc_00146D80: ;
    MEM8(0x645932) = LO8(ebx);
    MEM32(0x6459B4) = 0x2F19F8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x30ED18); PUSH32(esp, 0x00146D96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146D90u); } /* indirect call */
    }

loc_00146D96: ;
    MEM32(0x6459B4) = ebx;
    MEM8(0x645932) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00146DB0
 * Original: 0x00146DB0 - 0x00146F21 (369 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146DB0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2F1A28)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1A24)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E5680)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1A20)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00146E08u); RECOMP_ABI_CALL(0x00146490u, sub_00146490); /* call 0x00146490 */

loc_00146E08: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 8;
    MEM32(0x37A3E8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1A1C)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00146E39u); RECOMP_ABI_CALL(0x00146490u, sub_00146490); /* call 0x00146490 */

loc_00146E39: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E5680)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1A24)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1A28)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1A18)); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    MEM32(0x37A3E4) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00146E94u); RECOMP_ABI_CALL(0x00146490u, sub_00146490); /* call 0x00146490 */

loc_00146E94: ;
    xmm0 = XMM_SCALAR(MEMF(0x2F1A14)); /* movss */
    MEM32(0x37A3DC) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00146EC5u); RECOMP_ABI_CALL(0x00146490u, sub_00146490); /* call 0x00146490 */

loc_00146EC5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2F1A28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E5680)); /* movss */
    edx = esp + 0x20;
    MEM32(0x37A3E0) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2F1A10)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00146F18u); RECOMP_ABI_CALL(0x00146490u, sub_00146490); /* call 0x00146490 */

loc_00146F18: ;
    MEM32(0x37A3D8) = eax;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00146F30
 * Original: 0x00146F30 - 0x00146F45 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146F30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00146F3Fu); RECOMP_ABI_CALL(0x00146A10u, sub_00146A10); /* call 0x00146A10 */

loc_00146F3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00146F50
 * Original: 0x00146F50 - 0x00146F78 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00146F58u); RECOMP_ABI_CALL(0x001CC0E0u, sub_001CC0E0); /* call 0x001CC0E0 */

loc_00146F58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146F72; /* je: equal / zero */

loc_00146F5F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00146F72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146F6Fu); } /* indirect call */
    }

loc_00146F72: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146F80
 * Original: 0x00146F80 - 0x001470F3 (371 bytes, 116 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146F80(void)
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

loc_00146F80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xA4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00146FB8; /* je: equal / zero */

loc_00146F9F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00146FA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146FA3u); } /* indirect call */
    }

loc_00146FA6: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146FBA; /* je: equal / zero */

loc_00146FB8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00146FBA: ;
    edi = MEM32(ebx + 0xA4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146FDD; /* je: equal / zero */

loc_00146FC4: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00146FCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00146FC8u); } /* indirect call */
    }

loc_00146FCB: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146FDF; /* je: equal / zero */

loc_00146FDD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00146FDF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146FEB; /* jne: not equal / not zero */

loc_00146FE3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001470E2; /* je: equal / zero */

loc_00146FEB: ;
    edi = MEM32(ebp + 0xA8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(ebx + 0xA8);
    if (CMP_EQ(_fa, _fb)) goto loc_0014708F; /* je: equal / zero */

loc_00146FFF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147056; /* je: equal / zero */

loc_00147003: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014700Du); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0014700D: ;
    esi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0014701Bu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0014701B: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    goto loc_001470C8;

loc_00147056: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00147062u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00147062: ;
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
    goto loc_001470C8;

loc_0014708F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001470E2; /* je: equal / zero */

loc_00147093: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014709Du); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0014709D: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */

loc_001470C8: ;
    _fca = xmm3.f[0]; _fcb = MEMF(0x2E4210); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001470E2; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x2E4210)) */

loc_001470D1: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_001470E2: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00147100
 * Original: 0x00147100 - 0x00147128 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147100: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00147108u); RECOMP_ABI_CALL(0x0019FDA0u, sub_0019FDA0); /* call 0x0019FDA0 */

loc_00147108: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147122; /* je: equal / zero */

loc_0014710F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00147122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014711Fu); } /* indirect call */
    }

loc_00147122: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147130
 * Original: 0x00147130 - 0x00147453 (803 bytes, 182 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00147130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24354C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM8(0x645932) = 0;
    MEM32(0x6459B4) = 0x2F1AA0;
    { uint32_t _icall_target = MEM32(0x30ED14); PUSH32(esp, 0x00147169u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00147163u); } /* indirect call */
    }

loc_00147169: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147172u); RECOMP_ABI_CALL(0x001C6750u, sub_001C6750); /* call 0x001C6750 */

loc_00147172: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2F1A9C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2F1A98)); /* movss */
    ecx = MEM32(0x4409AC);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x2F1A94)); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2F1A90)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC394)); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2F1A8C)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2F1A88)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x70) = 4;
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, 0x9C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0014723Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014723Bu); } /* indirect call */
    }

loc_0014723E: ;
    esi = eax;
    MEM16(esi + 4) = 0x9C;
    MEM32(esp + 0xC) = esi;
    ecx = esi;
    MEM32(esp + 0xBC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014725Cu); RECOMP_ABI_CALL(0x00190D90u, sub_00190D90); /* call 0x00190D90 */

loc_0014725C: ;
    MEM32(esi) = 0x2F1060;
    MEM32(esi + 8) = 0x2F105C;
    MEM32(esi + 0xC) = 0x2F1054;
    MEM32(esi + 0x10) = 0x2F104C;
    MEM32(esi + 0x14) = 0x2F1048;
    ecx = esi;
    MEM32(esp + 0xBC) = 0xFFFFFFFFu;
    MEM32(0x37A3F4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147296u); RECOMP_ABI_CALL(0x0012B260u, sub_0012B260); /* call 0x0012B260 */

loc_00147296: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x260);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001472A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001472A5u); } /* indirect call */
    }

loc_001472A8: ;
    esi = eax;
    MEM16(esi + 4) = 0x260;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x4F4C);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001472D0u); RECOMP_ABI_CALL(0x001C0E40u, sub_001C0E40); /* call 0x001C0E40 */

loc_001472D0: ;
    PUSH32(esp, ecx);
    MEM32(esi) = 0x2F1950;
    eax = esp;
    MEM32(0x37A3F0) = esi;
    MEM8(eax) = 0;
    ecx = MEM32(0x37A3F4);
    MEM32(esp + 0x10) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x37A3F0);
    MEM32(esp + 0xC4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147303u); RECOMP_ABI_CALL(0x001C1560u, sub_001C1560); /* call 0x001C1560 */

loc_00147303: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00147312u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014730Fu); } /* indirect call */
    }

loc_00147312: ;
    esi = eax;
    MEM16(esi + 4) = 8;
    MEM16(esi + 6) = 1;
    MEM32(esi) = 0x2F1A60;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147332u); RECOMP_ABI_CALL(0x001BCFB0u, sub_001BCFB0); /* call 0x001BCFB0 */

loc_00147332: ;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00147345; /* jne: not equal / not zero */

loc_0014733D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00147345u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00147343u); } /* indirect call */
    }

loc_00147345: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM8(eax) = 1;
    ecx = MEM32(0x37A3F0);
    MEM32(esp + 0x10) = esp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014735Au); RECOMP_ABI_CALL(0x001BD8D0u, sub_001BD8D0); /* call 0x001BD8D0 */

loc_0014735A: ;
    PUSH32(esp, 0x2F1A68);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147368u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00147368: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147387; /* je: equal / zero */

loc_0014736F: ;
    MEM32(eax + 4) = 0x2DC4B8;
    MEM32(eax) = 0x2F19B4;
    MEM32(eax + 4) = 0x2F19AC;
    esi = eax;
    goto loc_00147389;

loc_00147387: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00147389: ;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147395u); RECOMP_ABI_CALL(0x001BD7D0u, sub_001BD7D0); /* call 0x001BD7D0 */

loc_00147395: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014739E; /* je: equal / zero */

loc_00147399: ;
    eax = esi + 4;
    goto loc_001473A0;

loc_0014739E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001473A0: ;
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001473ACu); RECOMP_ABI_CALL(0x001BD890u, sub_001BD890); /* call 0x001BD890 */

loc_001473AC: ;
    ecx = MEM32(0x37A3F0);
    eax = MEM32(ecx + 0xC8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001473BEu); RECOMP_ABI_CALL(0x00191D80u, sub_00191D80); /* call 0x00191D80 */

loc_001473BE: ;
    ecx = MEM32(0x4409DC);
    eax = esp;
    MEM32(esp + 0x10) = esp;
    MEM8(eax) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FF8C16F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001473D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001473D4u); } /* indirect call */
    }

loc_001473D7: ;
    ecx = MEM32(0x4409DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x10) = esp;
    MEM8(eax) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0x20C0F7EA);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001473F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001473EEu); } /* indirect call */
    }

loc_001473F1: ;
    ecx = MEM32(0x4409DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x10) = esp;
    MEM8(eax) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, 0x54156F9E);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0014740Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00147408u); } /* indirect call */
    }

loc_0014740B: ;
    ecx = MEM32(0x4409DC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x10) = esp;
    MEM8(eax) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0x5C819B4E);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00147425u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00147422u); } /* indirect call */
    }

loc_00147425: ;
    ecx = 0x37A400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014742Fu); RECOMP_ABI_CALL(0x001FA170u, sub_001FA170); /* call 0x001FA170 */

loc_0014742F: ;
    ecx = MEM32(esp + 0xB4);
    MEM8(0x645932) = 1;
    MEM32(0x6459B4) = 0;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00147460
 * Original: 0x00147460 - 0x0014765F (511 bytes, 111 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00147460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243587);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014748Bu); RECOMP_ABI_CALL(0x00196A30u, sub_00196A30); /* call 0x00196A30 */

loc_0014748B: ;
    xmm0 = XMM_SCALAR(MEMF(0x643284)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    eax = MEM32(0x643310);
    ecx = MEM32(0x4409AC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x64328C)); /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x643288)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, 0x60);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001474F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001474F6u); } /* indirect call */
    }

loc_001474F9: ;
    esi = eax;
    MEM16(esi + 4) = 0x60;
    MEM32(esp + 0x2C) = esi;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x130) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014751Cu); RECOMP_ABI_CALL(0x00146310u, sub_00146310); /* call 0x00146310 */

loc_0014751C: ;
    ecx = esp + 0x60;
    MEM32(esi) = 0x2F1A2C;
    MEM32(esp + 0x12C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147536u); RECOMP_ABI_CALL(0x001C45D0u, sub_001C45D0); /* call 0x001C45D0 */

loc_00147536: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x4409AC);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x643278); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x64327C); /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x28);
    MEM32(esp + 0x68) = esi;
    XMM_STORE(esp + 0x84, xmm0); /* movaps */
    MEM8(esp + 0x118) = 7;
    MEM32(esp + 0x64) = 4;
    edx = MEM32(ecx);
    PUSH32(esp, 0x140);
    MEM32(esp + 0x134) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001475A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001475A2u); } /* indirect call */
    }

loc_001475A5: ;
    MEM16(eax + 4) = 0x140;
    MEM32(esp + 0x2C) = eax;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(esp + 0x130) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001475C3u); RECOMP_ABI_CALL(0x001460C0u, sub_001460C0); /* call 0x001460C0 */

loc_001475C3: ;
    MEM32(0x37A3EC) = eax;
    MEM32(eax + 0xB4) = 5;
    edx = MEM32(0x37A3EC);
    MEM32(edx + 0xB0) = 0x100;
    ecx = MEM32(0x37A3EC);
    MEM8(esp + 0x12C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001475F5u); RECOMP_ABI_CALL(0x00145DC0u, sub_00145DC0); /* call 0x00145DC0 */

loc_001475F5: ;
    eax = MEM32(0x37A3EC);
    ecx = MEM32(0x37A3F0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147606u); RECOMP_ABI_CALL(0x001BFFB0u, sub_001BFFB0); /* call 0x001BFFB0 */

loc_00147606: ;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00147619; /* jne: not equal / not zero */

loc_00147611: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00147619u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00147617u); } /* indirect call */
    }

loc_00147619: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014761Eu); RECOMP_ABI_CALL(0x00146DB0u, sub_00146DB0); /* call 0x00146DB0 */

loc_0014761E: ;
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x12C) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0014764C; /* js: sign (negative) */

loc_00147631: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0014764Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00147649u); } /* indirect call */
    }

loc_0014764C: ;
    ecx = MEM32(esp + 0x124);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00147660
 * Original: 0x00147660 - 0x00147665 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147660(void)
{

loc_00147660: ;
    MEM8(ecx + 0x69) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00147670
 * Original: 0x00147670 - 0x00147686 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147670: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147683; /* jge: greater or equal (signed >=) */

loc_00147678: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x10) = edx;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00147683: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147690
 * Original: 0x00147690 - 0x00147697 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147690(void)
{

loc_00147690: ;
    eax = ecx;
    MEM8(eax + 0x69) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001476A0
 * Original: 0x001476A0 - 0x001477B0 (272 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001476A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001476A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x1C) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x68) = LO8(eax);
    MEM8(ecx + 0x69) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001477B0
 * Original: 0x001477B0 - 0x001478D7 (295 bytes, 85 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001477B0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001477B0: ;
    eax = MEM32(esp + 8);
    eax = MEM32(ecx + eax * 4 + 0x10);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001477DC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001477D7: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001477E4;

loc_001477DC: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001477E4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001477E1: ;
    xmm0 = xmm3; /* movaps */

loc_001477E4: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    edx = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014782A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00147819: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00147824; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0014781E: ;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    goto loc_00147844;

loc_00147824: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00147840;

loc_0014782A: ;
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014783C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_00147836: ;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    goto loc_00147844;

loc_0014783C: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_00147840: ;
    MEMF(ecx) = xmm0.f[0]; /* movss */

loc_00147844: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014785E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00147859: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00147866;

loc_0014785E: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00147866; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00147863: ;
    xmm0 = xmm4; /* movaps */

loc_00147866: ;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00147895; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00147884: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014788F; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00147889: ;
    MEMF(edx) = xmm2.f[0]; /* movss */
    goto loc_001478AF;

loc_0014788F: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_001478AB;

loc_00147895: ;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001478A7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_001478A1: ;
    MEMF(edx) = xmm2.f[0]; /* movss */
    goto loc_001478AF;

loc_001478A7: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_001478AB: ;
    MEMF(edx) = xmm0.f[0]; /* movss */

loc_001478AF: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001478CD; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001478C0: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001478D0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001478CD: ;
    xmm0 = xmm1; /* movaps */

loc_001478D0: ;
    MEMF(edx) = xmm0.f[0]; /* movss */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001478E0
 * Original: 0x001478E0 - 0x0014794E (110 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001478E0(void)
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

loc_001478E0: ;
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001478FE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001478F9: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00147906;

loc_001478FE: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014790C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00147903: ;
    xmm0 = xmm2; /* movaps */

loc_00147906: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_0014790C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014792E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00147914: ;
    fp_push(MEMF(0x2DC3A0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0xC)); /* fdiv dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    esp += 12; return; /* ret 8 */

loc_0014792E: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00147948; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00147933: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x10)); /* fdiv dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    esp += 12; return; /* ret 8 */

loc_00147948: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00147950
 * Original: 0x00147950 - 0x00147A51 (257 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00147950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0014796D; /* jne: not equal / not zero */

loc_0014796A: ;
    ebx = MEM32(esi + 8);

loc_0014796D: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001479B5; /* je: equal / zero */

loc_00147973: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014797Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00147977u); } /* indirect call */
    }

loc_0014797A: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001479B5; /* jne: not equal / not zero */

loc_0014798C: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x284); PUSH32(esp, 0x00147996u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00147990u); } /* indirect call */
    }

loc_00147996: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001479B5; /* je: equal / zero */

loc_0014799A: ;
    edx = MEM32(edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x284); PUSH32(esp, 0x001479AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001479A4u); } /* indirect call */
    }

loc_001479AA: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001479B1u); RECOMP_ABI_CALL(0x00061FF0u, sub_00061FF0); /* call 0x00061FF0 */

loc_001479B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001479BF; /* jne: not equal / not zero */

loc_001479B5: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    goto loc_00147A3C;

loc_001479BF: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00147A37; /* jne: not equal / not zero */

loc_001479C6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147A37; /* je: equal / zero */

loc_001479CD: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001479D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001479D1u); } /* indirect call */
    }

loc_001479D7: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001479E6u); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_001479E6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147A37; /* je: equal / zero */

loc_001479EC: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001479F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001479F1u); } /* indirect call */
    }

loc_001479F7: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xAD178436u);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147A12u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00147A12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00147A37; /* jle: less or equal (signed <=) */

loc_00147A16: ;
    esi = MEM32(ebp + 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147A29u); RECOMP_ABI_CALL(0x00018610u, sub_00018610); /* call 0x00018610 */

loc_00147A29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00147A37: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);

loc_00147A3C: ;
    esi = MEM32(ebp + 8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147A46u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00147A46: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147A60
 * Original: 0x00147A60 - 0x00147C1A (442 bytes, 125 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00147A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00147A60: ;
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
    eax = esp + 0x30;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147A7Bu); RECOMP_ABI_CALL(0x00147950u, sub_00147950); /* call 0x00147950 */

loc_00147A7B: ;
    SET_LO8(eax, MEM8(esi + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00147AA7; /* jne: not equal / not zero */

loc_00147A8E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm6.f[0]; /* movss */
    MEM8(esi + 0x68) = 1;

loc_00147AA7: ;
    xmm4 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm4.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00147AF3; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(0x2DC098)) */

loc_00147AB5: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0x50); /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm4.f[0]; /* divss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x54); /* subss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x58); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm5 = xmm1; /* movaps */
    goto loc_00147B0B;

loc_00147AF3: ;
    xmm4 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */

loc_00147B0B: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5C); /* subss */
    ecx = esp + 0x70;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x60); /* subss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x64); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm6.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm5.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147B67u); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_00147B67: ;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147B77u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_00147B77: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x10);
    xmm1 = xmm0; /* movaps */
    MEM32(esp + 0x18) = ecx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x1C);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEM32(esp + 0x1C) = edx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x1C); /* subss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00147C11; /* jle: less or equal (signed <=) */

loc_00147BC5: ;
    ebx = esi + 0x10;

loc_00147BC8: ;
    ecx = MEM32(ebx);
    SET_LO8(edx, MEM8(ecx + 0x2E));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = ZX8(MEM8(ecx + 0x2C));
    if (CMP_EQ(_fa, _fb)) goto loc_00147BEB; /* je: equal / zero */

loc_00147BD5: ;
    ecx = esi + eax * 4 + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esi + eax * 4 + 0x44;
    eax = MEM32(esp + eax * 4 + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    goto loc_00147BFF;

loc_00147BEB: ;
    edx = esi + eax * 4 + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + eax * 4 + 0x10);
    ecx = esi + eax * 4 + 0x38;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);

loc_00147BFF: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147C06u); RECOMP_ABI_CALL(0x001477B0u, sub_001477B0); /* call 0x001477B0 */

loc_00147C06: ;
    eax = MEM32(esi + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00147BC8; /* jl: less (signed <) */

loc_00147C11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147C20
 * Original: 0x00147C20 - 0x00147E48 (552 bytes, 157 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00147C20(void)
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

loc_00147C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x174;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147C3Bu); RECOMP_ABI_CALL(0x00147950u, sub_00147950); /* call 0x00147950 */

loc_00147C3B: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147E2E; /* je: equal / zero */

loc_00147C46: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00147E2E; /* jne: not equal / not zero */

loc_00147C51: ;
    ecx = MEM32(0x6459E8);
    edx = MEM32(0x6459EC);
    eax = MEM32(0x6459F0);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x84;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147C7Fu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00147C7F: ;
    eax = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00147D57; /* jle: less or equal (signed <=) */

loc_00147C8C: ;
    edi = esi + 0x10;
    /* nop */

loc_00147C90: ;
    edx = MEM32(edi);
    SET_LO8(ecx, MEM8(edx + 0x2E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = ZX8(MEM8(edx + 0x2C));
    PUSH32(esp, edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00147D34; /* je: equal / zero */

loc_00147CA2: ;
    ecx = MEM32(esi + eax * 4 + 0x2C);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147CAEu); RECOMP_ABI_CALL(0x001478E0u, sub_001478E0); /* call 0x001478E0 */

loc_00147CAE: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX8(MEM8(edx + 0x2D));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00147D0F; /* je: equal / zero */

loc_00147CBB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00147CEA; /* je: equal / zero */

loc_00147CBE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00147D48; /* jne: not equal / not zero */

loc_00147CC5: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147CD7u); RECOMP_ABI_CALL(0x0022F841u, sub_0022F841); /* call 0x0022F841 */

loc_00147CD7: ;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147CE8u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00147CE8: ;
    goto loc_00147D48;

loc_00147CEA: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147CFCu); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_00147CFC: ;
    PUSH32(esp, eax);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147D0Du); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00147D0D: ;
    goto loc_00147D48;

loc_00147D0F: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x144;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147D21u); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_00147D21: ;
    PUSH32(esp, eax);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147D32u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00147D32: ;
    goto loc_00147D48;

loc_00147D34: ;
    eax = MEM32(esi + eax * 4 + 0x20);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147D40u); RECOMP_ABI_CALL(0x001478E0u, sub_001478E0); /* call 0x001478E0 */

loc_00147D40: ;
    ecx = ZX8(MEM8(edx + 0x2D));
    MEMF(esp + ecx * 4 + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00147D48: ;
    eax = MEM32(esi + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00147C90; /* jl: less (signed <) */

loc_00147D57: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147D6Bu); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_00147D6B: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x70);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x74);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x78);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEM32(esp + 0x20) = eax;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ecx;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x28); /* addss */
    eax = esp + 0x84;
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147E02u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00147E02: ;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147E16u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00147E16: ;
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147E27u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00147E27: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    goto loc_00147E33;

loc_00147E2E: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);

loc_00147E33: ;
    esi = MEM32(ebp + 8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147E3Du); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00147E3D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
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
 * sub_00147E50
 * Original: 0x00147E50 - 0x00147E5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00147E50: ;
    MEM32(ecx) = 0x2F1ABC;
    g_seh_ebp = ebp; sub_001EF9A0(); return; /* tail jmp 0x001EF9A0 */

}

/**
 * sub_00147E60
 * Original: 0x00147E60 - 0x00147E63 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147E60(void)
{

loc_00147E60: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00147E70
 * Original: 0x00147E70 - 0x00147E98 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x170);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00147E82; /* je: equal / zero */

loc_00147E7D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00147E82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00147E7Fu); } /* indirect call */
    }

loc_00147E82: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x170) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00147E95; /* je: equal / zero */

loc_00147E91: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00147E95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00147E93u); } /* indirect call */
    }

loc_00147E95: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147EA0
 * Original: 0x00147EA0 - 0x00147EA8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00147EA0: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_00147EB0
 * Original: 0x00147EB0 - 0x00147ECE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00147EB8u); RECOMP_ABI_CALL(0x00147E50u, sub_00147E50); /* call 0x00147E50 */

loc_00147EB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147EC8; /* je: equal / zero */

loc_00147EBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00147EC5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00147EC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00147EC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147ED0
 * Original: 0x00147ED0 - 0x001481A2 (722 bytes, 184 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00147ED0(void)
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

loc_00147ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x68));
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = esp + 0x30;
    esi = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147EECu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00147EEC: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147EF8u); RECOMP_ABI_CALL(0x001EFC20u, sub_001EFC20); /* call 0x001EFC20 */

loc_00147EF8: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0C8C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    ecx = esi + 0x28;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147F3Du); RECOMP_ABI_CALL(0x00076360u, sub_00076360); /* call 0x00076360 */

loc_00147F3D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x50); /* subss */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x5C); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147F73u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00147F73: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2F1AF8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, 0x43250000);
    ecx = esi;
    MEMF(esi + 0x134) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x138) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x13C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147FDAu); RECOMP_ABI_CALL(0x001EF870u, sub_001EF870); /* call 0x001EF870 */

loc_00147FDA: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    MEMF(esi + 0x14C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1AF4)); /* movss */
    MEMF(esi + 0x154) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1AF0)); /* movss */
    MEMF(esi + 0x158) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    MEMF(esi + 0x15C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC898)); /* movss */
    MEMF(esi + 0x160) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DEE8C)); /* movss */
    MEMF(esi + 0x164) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE56B587Fu);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00148046u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00148043u); } /* indirect call */
    }

loc_00148046: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0014805A; /* je: equal / zero */

loc_0014804A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148050u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00148050: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014805Au); RECOMP_ABI_CALL(0x001EF870u, sub_001EF870); /* call 0x001EF870 */

loc_0014805A: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA9F94830u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00148066u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00148063u); } /* indirect call */
    }

loc_00148066: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00148079; /* je: equal / zero */

loc_0014806A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148070u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00148070: ;
    MEMF(esi + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00148079: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DA781C4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00148085u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00148082u); } /* indirect call */
    }

loc_00148085: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0014809E; /* je: equal / zero */

loc_00148089: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014808Fu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0014808F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x154) = (float)fp_top(); fp_pop(); /* fstp */

loc_0014809E: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x55414F4D);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001480AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001480A7u); } /* indirect call */
    }

loc_001480AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001480C3; /* je: equal / zero */

loc_001480AE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001480B4u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_001480B4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x158) = (float)fp_top(); fp_pop(); /* fstp */

loc_001480C3: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCCF3A775u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001480CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001480CCu); } /* indirect call */
    }

loc_001480CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001480E2; /* je: equal / zero */

loc_001480D3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001480D9u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_001480D9: ;
    MEMF(esi + 0x15C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001480E2: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7ABA04AA);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001480EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001480EBu); } /* indirect call */
    }

loc_001480EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00148101; /* je: equal / zero */

loc_001480F2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001480F8u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_001480F8: ;
    MEMF(esi + 0x160) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00148101: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE7168257u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0014810Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014810Au); } /* indirect call */
    }

loc_0014810D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00148126; /* je: equal / zero */

loc_00148111: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148117u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00148117: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x164) = (float)fp_top(); fp_pop(); /* fstp */

loc_00148126: ;
    eax = esi + 0x174;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148134u); RECOMP_ABI_CALL(0x00147E70u, sub_00147E70); /* call 0x00147E70 */

loc_00148134: ;
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
    MEM32(esp + 4) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E2C54); /* mulss */
    MEM32(0x30EFF0) = ecx;
    MEMF(esi + 0x148) = xmm0.f[0]; /* movss */
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
 * sub_001481B0
 * Original: 0x001481B0 - 0x00148224 (116 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001481B0(void)
{

loc_001481B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    MEMF(ecx + 0x140) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x13C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x138) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x134) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x150) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x154) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x158) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x15C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x160) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x164) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x168) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x16C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00148230
 * Original: 0x00148230 - 0x00148299 (105 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148230(void)
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

loc_00148230: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DFE78)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148257; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00148243: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x148)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 0x148) = xmm1.f[0]; /* movss */

loc_00148257: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x148)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E2C54)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148287; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0014826C: ;
    xmm2 = xmm1; /* movaps */
    /* nop */

loc_00148270: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_00148270; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0014827F: ;
    MEMF(ecx + 0x148) = xmm2.f[0]; /* movss */

loc_00148287: ;
    ecx = MEM32(ecx + 0x170);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00148296; /* je: equal / zero */

loc_00148291: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_00148296: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001482A0
 * Original: 0x001482A0 - 0x00148455 (437 bytes, 115 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001482A0(void)
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

loc_001482A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x6C));
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx + 0x28;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001482B9u); RECOMP_ABI_CALL(0x0021AA80u, sub_0021AA80); /* call 0x0021AA80 */

loc_001482B9: ;
    ecx = eax;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x6459E8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001482F4; /* jp: parity */

loc_001482CC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x6459EC); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001482F4; /* jp: parity */

loc_001482DE: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x6459F0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014844E; /* jnp: not parity */

loc_001482F4: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148300u); RECOMP_ABI_CALL(0x0021AA80u, sub_0021AA80); /* call 0x0021AA80 */

loc_00148300: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148307u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00148307: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148317u); RECOMP_ABI_CALL(0x0021AA60u, sub_0021AA60); /* call 0x0021AA60 */

loc_00148317: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    ecx = esp + 0xC;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014834Fu); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0014834F: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014835Cu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_0014835C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00148394; /* jbe: below or equal (unsigned <=) */

loc_0014837B: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    if ((_fca > _fcb)) goto loc_0014838D; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_0014838A: ;
    xmm2 = xmm1; /* movaps */

loc_0014838D: ;
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + 0x14); /* mulss */
    goto loc_0014839A;

loc_00148394: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_0014839A: ;
    PUSH32(esp, ecx);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    eax = esp + 0x34;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014840Eu); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0014840E: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014841Au); RECOMP_ABI_CALL(0x0021AA80u, sub_0021AA80); /* call 0x0021AA80 */

loc_0014841A: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014842Au); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0014842A: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014844Eu); RECOMP_ABI_CALL(0x00076360u, sub_00076360); /* call 0x00076360 */

loc_0014844E: ;
    POP32(esp, esi);
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
 * sub_00148460
 * Original: 0x00148460 - 0x001486C8 (616 bytes, 159 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00148460(void)
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

loc_00148460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx + 0x28;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148479u); RECOMP_ABI_CALL(0x0021AA80u, sub_0021AA80); /* call 0x0021AA80 */

loc_00148479: ;
    ecx = eax;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x6459E8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001484B4; /* jp: parity */

loc_0014848C: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x6459EC); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001484B4; /* jp: parity */

loc_0014849E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x6459F0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001486C1; /* jnp: not parity */

loc_001484B4: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001484C0u); RECOMP_ABI_CALL(0x0021AA80u, sub_0021AA80); /* call 0x0021AA80 */

loc_001484C0: ;
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001484CBu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_001484CB: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001484D5u); RECOMP_ABI_CALL(0x001FA070u, sub_001FA070); /* call 0x001FA070 */

loc_001484D5: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001484E8u); RECOMP_ABI_CALL(0x0021AA60u, sub_0021AA60); /* call 0x0021AA60 */

loc_001484E8: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148526u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00148526: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148530u); RECOMP_ABI_CALL(0x001FA070u, sub_001FA070); /* call 0x001FA070 */

loc_00148530: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148564; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014855C: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0014857B;

loc_00148564: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0014857B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00148575: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_0014857B: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014858Au); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0014858A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = esp + 0x18;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001485D9u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_001485D9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148681u); RECOMP_ABI_CALL(0x0022F8BDu, sub_0022F8BD); /* call 0x0022F8BD */

loc_00148681: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014868Du); RECOMP_ABI_CALL(0x0021AA80u, sub_0021AA80); /* call 0x0021AA80 */

loc_0014868D: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014869Du); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0014869D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x28;
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x34) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001486C1u); RECOMP_ABI_CALL(0x00076360u, sub_00076360); /* call 0x00076360 */

loc_001486C1: ;
    POP32(esp, esi);
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
 * sub_001486D0
 * Original: 0x001486D0 - 0x001486E0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001486D0(void)
{

loc_001486D0: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x2F1AFC;
    esp += 4; return; /* ret */

}

/**
 * sub_001486E0
 * Original: 0x001486E0 - 0x001486F8 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001486E0(void)
{

loc_001486E0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x2F1B08;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00148700
 * Original: 0x00148700 - 0x0014872B (43 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148700(void)
{

loc_00148700: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x134) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x138) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x13C) = eax;
    MEM32(ecx + 0x144) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00148730
 * Original: 0x00148730 - 0x00148769 (57 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148730(void)
{

loc_00148730: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x140) = xmm0.f[0]; /* movss */
    edx = MEM32(eax);
    MEM32(ecx + 0x134) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x138) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x13C) = eax;
    MEM32(ecx + 0x144) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00148770
 * Original: 0x00148770 - 0x001487B5 (69 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148770(void)
{

loc_00148770: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00148778u); RECOMP_ABI_CALL(0x001EF920u, sub_001EF920); /* call 0x001EF920 */

loc_00148778: ;
    ecx = esi + 0x174;
    MEM32(esi) = 0x2F1ABC;
    PUSH32(esp, 0x00148789u); RECOMP_ABI_CALL(0x001486D0u, sub_001486D0); /* call 0x001486D0 */

loc_00148789: ;
    ecx = esi + 0x17C;
    PUSH32(esp, 0x00148794u); RECOMP_ABI_CALL(0x001486E0u, sub_001486E0); /* call 0x001486E0 */

loc_00148794: ;
    ecx = esi;
    PUSH32(esp, 0x0014879Bu); RECOMP_ABI_CALL(0x001481B0u, sub_001481B0); /* call 0x001481B0 */

loc_0014879B: ;
    MEM32(esi + 0x170) = 0;
    MEM32(esi + 0x178) = esi;
    MEM32(esi + 0x180) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001487C0
 * Original: 0x001487C0 - 0x00148C0A (1098 bytes, 279 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001487C0(void)
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

loc_001487C0: ;
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
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x28;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001487DBu); RECOMP_ABI_CALL(0x0021B880u, sub_0021B880); /* call 0x0021B880 */

loc_001487DB: ;
    ebx = esi + 0x134;
    eax = ebx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x144)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x144), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001488CB; /* jne: not equal / not zero */

loc_00148804: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148810u); RECOMP_ABI_CALL(0x0021AA60u, sub_0021AA60); /* call 0x0021AA60 */

loc_00148810: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx)); /* fsub dword ptr [ebx] */
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x44;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 8)); /* fsub dword ptr [ebx + 8] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148830u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00148830: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    edx = esp + 0x44;
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DDA30)); /* fadd dword ptr [0x2dda30] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014884Eu); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0014884E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x140)); /* movss */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014887Fu); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0014887F: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    MEM32(esp + 0x30) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    MEM32(esp + 0x34) = ecx;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    MEM32(esp + 0x38) = edx;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    goto loc_001488EB;

loc_001488CB: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_001488EB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x154)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    ebx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    ecx = esi;
    MEM32(eax + 8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014891Eu); RECOMP_ABI_CALL(0x001482A0u, sub_001482A0); /* call 0x001482A0 */

loc_0014891E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x158)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    ecx = esi;
    MEM32(eax + 8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014894Du); RECOMP_ABI_CALL(0x00148460u, sub_00148460); /* call 0x00148460 */

loc_0014894D: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148959u); RECOMP_ABI_CALL(0x001EF790u, sub_001EF790); /* call 0x001EF790 */

loc_00148959: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    ecx = esp + 0x14;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014898Eu); RECOMP_ABI_CALL(0x0021AA60u, sub_0021AA60); /* call 0x0021AA60 */

loc_0014898E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30F064);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001489A6u); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_001489A6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001489B8u); RECOMP_ABI_CALL(0x001EFBA0u, sub_001EFBA0); /* call 0x001EFBA0 */

loc_001489B8: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001489C4u); RECOMP_ABI_CALL(0x0021AB10u, sub_0021AB10); /* call 0x0021AB10 */

loc_001489C4: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001489CFu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_001489CF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x1C;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x30); /* subss */
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148A02u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00148A02: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148A31u); RECOMP_ABI_CALL(0x0021AA80u, sub_0021AA80); /* call 0x0021AA80 */

loc_00148A31: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148A3Cu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00148A3C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148A75u); RECOMP_ABI_CALL(0x001FA040u, sub_001FA040); /* call 0x001FA040 */

loc_00148A75: ;
    edx = MEM32(esi + 0x148);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DDA3C)); /* fsub dword ptr [0x2dda3c] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 0x30EFF0;
    MEM32(esp + 0x30) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148A99u); RECOMP_ABI_CALL(0x001F2E10u, sub_001F2E10); /* call 0x001F2E10 */

loc_00148A99: ;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F1B14)); /* fmul dword ptr [0x2f1b14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC3A0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00148ACF; /* jbe: below or equal (unsigned <=) */

loc_00148AC5: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    goto loc_00148ADD;

loc_00148ACF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148ADD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00148ADA: ;
    xmm1 = xmm3; /* movaps */

loc_00148ADD: ;
    xmm4 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC088); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x16C); /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2E3F7C); /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x16C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148B20; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00148B1B: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00148B28;

loc_00148B20: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148B28; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00148B25: ;
    xmm1 = xmm3; /* movaps */

loc_00148B28: ;
    xmm5 = XMM_SCALAR(MEMF(esi + 0x160)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x16C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x168); /* addss */
    xmm1 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x168) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148B64; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00148B5F: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00148B6C;

loc_00148B64: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148B6C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00148B69: ;
    xmm0 = xmm3; /* movaps */

loc_00148B6C: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x164)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x168) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148B8E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00148B89: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00148B96;

loc_00148B8E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00148B96; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00148B93: ;
    xmm0 = xmm1; /* movaps */

loc_00148B96: ;
    ecx = esp + 0x30;
    MEMF(esi + 0x168) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148BB8u); RECOMP_ABI_CALL(0x001EF7F0u, sub_001EF7F0); /* call 0x001EF7F0 */

loc_00148BB8: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    edx = esp + 0x20;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148BF6u); RECOMP_ABI_CALL(0x0021B490u, sub_0021B490); /* call 0x0021B490 */

loc_00148BF6: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148C01u); RECOMP_ABI_CALL(0x0021ABF0u, sub_0021ABF0); /* call 0x0021ABF0 */

loc_00148C01: ;
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
 * sub_00148C10
 * Original: 0x00148C10 - 0x00148EAE (670 bytes, 177 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00148C10(void)
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

loc_00148C10: ;
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
    xmm0 = XMM_SCALAR(MEMF(esi + 0x154)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    PUSH32(esp, edi);
    edi = esi + 0x134;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = edi;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148C55u); RECOMP_ABI_CALL(0x001482A0u, sub_001482A0); /* call 0x001482A0 */

loc_00148C55: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x158)); /* movss */
    edx = MEM32(edi);
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(edi + 8);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148C84u); RECOMP_ABI_CALL(0x00148460u, sub_00148460); /* call 0x00148460 */

loc_00148C84: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148C90u); RECOMP_ABI_CALL(0x001EF790u, sub_001EF790); /* call 0x001EF790 */

loc_00148C90: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    ecx = esp + 0x34;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    ebx = esi + 0x28;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148CC8u); RECOMP_ABI_CALL(0x0021AA60u, sub_0021AA60); /* call 0x0021AA60 */

loc_00148CC8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30F064);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148CDDu); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00148CDD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148CECu); RECOMP_ABI_CALL(0x001EFBA0u, sub_001EFBA0); /* call 0x001EFBA0 */

loc_00148CEC: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148CF8u); RECOMP_ABI_CALL(0x001EF7D0u, sub_001EF7D0); /* call 0x001EF7D0 */

loc_00148CF8: ;
    edi = eax;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148D06u); RECOMP_ABI_CALL(0x001EF7B0u, sub_001EF7B0); /* call 0x001EF7B0 */

loc_00148D06: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148D43u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00148D43: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x24;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x38); /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148D76u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00148D76: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x34;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148DA5u); RECOMP_ABI_CALL(0x001EF790u, sub_001EF790); /* call 0x001EF790 */

loc_00148DA5: ;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148DB0u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00148DB0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148DE9u); RECOMP_ABI_CALL(0x001FA040u, sub_001FA040); /* call 0x001FA040 */

loc_00148DE9: ;
    fp_pop(); /* fstp st(0) */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DBED0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2F1B18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x16C); /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x16C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148E32; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00148E2D: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00148E3A;

loc_00148E32: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00148E3A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00148E37: ;
    xmm1 = xmm3; /* movaps */

loc_00148E3A: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = esp + 0x34;
    MEMF(esi + 0x16C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14C)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148E60u); RECOMP_ABI_CALL(0x001EF7F0u, sub_001EF7F0); /* call 0x001EF7F0 */

loc_00148E60: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148E9Au); RECOMP_ABI_CALL(0x0021B490u, sub_0021B490); /* call 0x0021B490 */

loc_00148E9A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148EA5u); RECOMP_ABI_CALL(0x0021ABF0u, sub_0021ABF0); /* call 0x0021ABF0 */

loc_00148EA5: ;
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
 * sub_00148EB0
 * Original: 0x00148EB0 - 0x00149072 (450 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00148EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    esi = ecx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148EE6u); RECOMP_ABI_CALL(0x001EF790u, sub_001EF790); /* call 0x001EF790 */

loc_00148EE6: ;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148EF1u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00148EF1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax); /* subss */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148F4Bu); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_00148F4B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0x168);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148FCFu); RECOMP_ABI_CALL(0x0022F8BDu, sub_0022F8BD); /* call 0x0022F8BD */

loc_00148FCF: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = esp + 0xC8;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148FE9u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00148FE9: ;
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esp + 0x104;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00148FFDu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00148FFD: ;
    ecx = esp + 0x100;
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149011u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00149011: ;
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014901Du); RECOMP_ABI_CALL(0x001EF7B0u, sub_001EF7B0); /* call 0x001EF7B0 */

loc_0014901D: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    esi = MEM32(ebp + 8);
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x80;
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00149069u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00149069: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149080
 * Original: 0x00149080 - 0x00149136 (182 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149080: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149093u); RECOMP_ABI_CALL(0x001EF7B0u, sub_001EF7B0); /* call 0x001EF7B0 */

loc_00149093: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x001490A0u); RECOMP_ABI_CALL(0x001EF7F0u, sub_001EF7F0); /* call 0x001EF7F0 */

loc_001490A0: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DFE78)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = MEM32(esi + 4);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC8DC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 4;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00149122u); RECOMP_ABI_CALL(0x00148700u, sub_00148700); /* call 0x00148700 */

loc_00149122: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0014912Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014912Cu); } /* indirect call */
    }

loc_0014912F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149140
 * Original: 0x00149140 - 0x00149145 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149140: ;
    g_seh_ebp = ebp; sub_001EF740(); return; /* tail jmp 0x001EF740 */

}

/**
 * sub_00149150
 * Original: 0x00149150 - 0x0014916A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149150: ;
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = edx + 0x24;
    MEM32(edx + 0x68) = eax;
    MEM32(edx + 0x64) = eax;
    MEM32(edx + 0x20) = eax;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149170
 * Original: 0x00149170 - 0x001491D2 (98 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149170: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001491CF; /* ja: above (unsigned >) */

loc_0014917B: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1491D4); /* switch: 10 entries, 10 targets */
    if (_jt == 0x00149182u) goto loc_00149182;
    if (_jt == 0x0014918Au) goto loc_0014918A;
    if (_jt == 0x00149192u) goto loc_00149192;
    if (_jt == 0x0014919Au) goto loc_0014919A;
    if (_jt == 0x001491A2u) goto loc_001491A2;
    if (_jt == 0x001491AAu) goto loc_001491AA;
    if (_jt == 0x001491B2u) goto loc_001491B2;
    if (_jt == 0x001491BAu) goto loc_001491BA;
    if (_jt == 0x001491C2u) goto loc_001491C2;
    if (_jt == 0x001491CAu) goto loc_001491CA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00149182: ;
    eax = 0x2F1BFC;
    esp += 8; return; /* ret 4 */

loc_0014918A: ;
    eax = 0x2F1BE4;
    esp += 8; return; /* ret 4 */

loc_00149192: ;
    eax = 0x2F1BCC;
    esp += 8; return; /* ret 4 */

loc_0014919A: ;
    eax = 0x2F1BB0;
    esp += 8; return; /* ret 4 */

loc_001491A2: ;
    eax = 0x2F1B98;
    esp += 8; return; /* ret 4 */

loc_001491AA: ;
    eax = 0x2F1B7C;
    esp += 8; return; /* ret 4 */

loc_001491B2: ;
    eax = 0x2F1B60;
    esp += 8; return; /* ret 4 */

loc_001491BA: ;
    eax = 0x2F1B48;
    esp += 8; return; /* ret 4 */

loc_001491C2: ;
    eax = 0x2F1B30;
    esp += 8; return; /* ret 4 */

loc_001491CA: ;
    eax = 0x2F1B1C;

loc_001491CF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149200
 * Original: 0x00149200 - 0x0014920F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149200: ;
    eax = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014920E; /* je: equal / zero */

loc_00149207: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014920Du); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0014920D: ;
    POP32(esp, ecx);

loc_0014920E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00149210
 * Original: 0x00149210 - 0x00149264 (84 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149210: ;
    eax = MEM32(ecx + 0x154);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = ecx + eax + 0x54;
    if (CMP_EQ(_fa, _fb)) goto loc_0014924F; /* je: equal / zero */

loc_00149225: ;
    PUSH32(esp, edi);
    goto loc_00149230;

    /* nop */
    /* nop */

loc_00149230: ;
    edi = MEM32(ecx + 0x154);
    MEM8(ecx + edi + 0x54) = LO8(edx);
    edi = MEM32(ecx + 0x154);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x154) = edi;
    SET_LO8(edx, MEM8(esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149230; /* jne: not equal / not zero */

loc_0014924E: ;
    POP32(esp, edi);

loc_0014924F: ;
    edx = MEM32(ecx + 0x154);
    MEM8(ecx + edx + 0x54) = 0;
    MEM32(ecx + 0x154) = MEM32(ecx + 0x154) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x154)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149270
 * Original: 0x00149270 - 0x001492C2 (82 bytes, 30 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00149270(void)
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

loc_00149270: ;
    edx = MEM32(ecx + 0x68);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    esi = esi + esi * 2;
    fp_push(MEMF(edx + esi * 4)); /* fld float */
    esi = edx + esi * 4;
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + eax)); /* fsub dword ptr [edx + eax] */
    ecx = edx;
    fp_push(MEMF(esi + 8)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + eax + 8)); /* fsub dword ptr [edx + eax + 8] */
    edx = MEM32(esp + 0xC);
    edx = edx + edx * 2;
    fp_push(MEMF(ecx + edx * 4)); /* fld float */
    edx = ecx + edx * 4;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + eax)); /* fsub dword ptr [ecx + eax] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + eax + 8)); /* fsub dword ptr [ecx + eax + 8] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001492D0
 * Original: 0x001492D0 - 0x00149345 (117 bytes, 51 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001492D0(void)
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

loc_001492D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001492EAu); RECOMP_ABI_CALL(0x00149270u, sub_00149270); /* call 0x00149270 */

loc_001492EA: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0014933C; /* jbe: below or equal (unsigned <=) */

loc_001492F8: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00149306u); RECOMP_ABI_CALL(0x00149270u, sub_00149270); /* call 0x00149270 */

loc_00149306: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0014933C; /* jbe: below or equal (unsigned <=) */

loc_00149314: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00149322u); RECOMP_ABI_CALL(0x00149270u, sub_00149270); /* call 0x00149270 */

loc_00149322: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0014933C; /* jbe: below or equal (unsigned <=) */

loc_00149330: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0014933C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00149350
 * Original: 0x00149350 - 0x001494DA (394 bytes, 124 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149350(void)
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

loc_00149350: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8D8)); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149483; /* jl: less (signed <) */

loc_00149378: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = 2;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00149390;

    /* nop */
    /* nop */

loc_00149390: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + -4);
    eax = eax + eax * 2;
    _fca = xmm1.f[0]; _fcb = MEMF(ebp + eax * 4); /* comiss */
    ecx = ebp + eax * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001493A8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebp + eax * 4)) */

loc_001493A2: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    goto loc_001493BF;

loc_001493A8: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001493C6; /* jp: parity */

loc_001493B5: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001493C6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001493BF: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    esi = edx;

loc_001493C6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + -2);
    ecx = eax + eax * 2;
    _fca = xmm1.f[0]; _fcb = MEMF(ebp + ecx * 4); /* comiss */
    ecx = ebp + ecx * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001493DE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebp + ecx * 4)) */

loc_001493D8: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    goto loc_001493F5;

loc_001493DE: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001493FD; /* jp: parity */

loc_001493EB: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001493FD; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001493F5: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    esi = edi + -1;

loc_001493FD: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx);
    eax = eax + eax * 2;
    _fca = xmm1.f[0]; _fcb = MEMF(ebp + eax * 4); /* comiss */
    ecx = ebp + eax * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00149414; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebp + eax * 4)) */

loc_0014940E: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    goto loc_0014942B;

loc_00149414: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00149432; /* jp: parity */

loc_00149421: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00149432; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0014942B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    esi = edi;

loc_00149432: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    ecx = eax + eax * 2;
    _fca = xmm1.f[0]; _fcb = MEMF(ebp + ecx * 4); /* comiss */
    ecx = ebp + ecx * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014944A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebp + ecx * 4)) */

loc_00149444: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    goto loc_00149461;

loc_0014944A: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00149469; /* jp: parity */

loc_00149457: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00149469; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00149461: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    esi = edi + 1;

loc_00149469: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149390; /* jl: less (signed <) */

loc_00149481: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00149483: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001494D3; /* jge: greater or equal (signed >=) */

loc_00149489: ;
    /* nop */

loc_00149490: ;
    eax = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx * 2);
    ecx = eax + eax * 2;
    _fca = xmm1.f[0]; _fcb = MEMF(ebp + ecx * 4); /* comiss */
    ecx = ebp + ecx * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001494AC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebp + ecx * 4)) */

loc_001494A6: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    goto loc_001494C3;

loc_001494AC: ;
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001494CA; /* jp: parity */

loc_001494B9: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001494CA; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001494C3: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    esi = edx;

loc_001494CA: ;
    eax = MEM32(esp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149490; /* jl: less (signed <) */

loc_001494D3: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001494E0
 * Original: 0x001494E0 - 0x00149536 (86 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001494E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001494E0: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00149531; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_001494FC: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00149531; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0014950F: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x18); /* comiss */
    if ((_fca > _fcb)) goto loc_00149531; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(ecx + 0x18)) */

loc_0014951D: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x1C); /* comiss */
    if ((_fca > _fcb)) goto loc_00149531; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(ecx + 0x1C)) */

loc_0014952C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00149531: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00149540
 * Original: 0x00149540 - 0x00149548 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149540: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_00149550
 * Original: 0x00149550 - 0x00149561 (17 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00149550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149550: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014955E; /* je: equal / zero */

loc_00149557: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

loc_0014955E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00149570
 * Original: 0x00149570 - 0x001495C2 (82 bytes, 24 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149570: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37A444);
    PUSH32(esp, 0x2E3DF0);
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x10);
    MEM32(0x37A444) = esi;
    PUSH32(esp, 0x0014958Cu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0014958C: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x2E3DBC);
    MEM32(esi) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x001495ABu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001495AB: ;
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x37A428);
    MEM32(esi + 0xC) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x37A428) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001495D0
 * Original: 0x001495D0 - 0x00149615 (69 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001495D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001495D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x2F1C20;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x78;
    ecx = edi;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x001495F0u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_001495F0: ;
    ecx = esi;
    MEM32(edi) = 0x2F1C0C;
    MEM32(edi + 0x1C) = ebx;
    PUSH32(esp, 0x00149600u); RECOMP_ABI_CALL(0x00149150u, sub_00149150); /* call 0x00149150 */

loc_00149600: ;
    POP32(esp, edi);
    MEM8(esi + 0x74) = LO8(ebx);
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x94) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00149620
 * Original: 0x00149620 - 0x0014968B (107 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149620: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2435AB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F1C20;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0014965B; /* je: equal / zero */

loc_00149652: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149658u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00149658: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014965B: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014966B; /* je: equal / zero */

loc_00149662: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149668u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00149668: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014966B: ;
    ecx = esi + 0x78;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0014967Bu); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_0014967B: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00149690
 * Original: 0x00149690 - 0x001496AB (27 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149690: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001496A3; /* jne: not equal / not zero */

loc_0014969B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001496A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014969Du); } /* indirect call */
    }

loc_001496A0: ;
    esp += 8; return; /* ret 4 */

loc_001496A3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001496A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001496A5u); } /* indirect call */
    }

loc_001496A8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001496B0
 * Original: 0x001496B0 - 0x001497E2 (306 bytes, 97 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001496B0(void)
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

loc_001496B0: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca > _fcb)) goto loc_001497D9; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx)) */

loc_001496C8: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 8); /* comiss */
    if ((_fca > _fcb)) goto loc_001497D9; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 8)) */

loc_001496D7: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x18); /* comiss */
    if ((_fca > _fcb)) goto loc_001497D9; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x18)) */

loc_001496E5: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1C); /* comiss */
    if ((_fca > _fcb)) goto loc_001497D9; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x1C)) */

loc_001496F4: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x64);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001497CE; /* jle: less or equal (signed <=) */

loc_00149703: ;
    ecx = MEM32(ecx + 0x68);
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ecx;
    esi = ecx + 0xC;
    goto loc_00149720;

loc_0014971B: ;
    edx = MEM32(esp + 0x24);
    /* nop */

loc_00149720: ;
    eax = esi + -12;
    ecx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    eax = ebp + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0014974D; /* jne: not equal / not zero */

loc_0014973E: ;
    eax = MEM32(esp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    goto loc_00149756;

loc_0014974D: ;
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */

loc_00149756: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 8); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(edx); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 8); /* subss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014977D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_00149779: ;
    SET_LO8(edx, 1);
    goto loc_0014977F;

loc_0014977D: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0014977F: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00149788; /* jb: below (unsigned <) (xmm2.f[0] vs xmm4.f[0]) */

loc_00149784: ;
    SET_LO8(eax, 1);
    goto loc_0014978A;

loc_00149788: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0014978A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001497C1; /* je: equal / zero */

loc_0014978E: ;
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001497A0; /* jp: parity */

loc_0014979B: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    goto loc_001497BA;

loc_001497A0: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */

loc_001497BA: ;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001497C1; /* jb: below (unsigned <) (xmm3.f[0] vs xmm4.f[0]) */

loc_001497BC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_001497C1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014971B; /* jl: less (signed <) */

loc_001497CD: ;
    POP32(esp, esi);

loc_001497CE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001497D9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001497F0
 * Original: 0x001497F0 - 0x001499D9 (489 bytes, 139 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001497F0(void)
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

loc_001497F0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm6 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    eax = MEM32(esp + 0x40);
    MEMF(esp + 4) = xmm6.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014985F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_00149813: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca > _fcb)) goto loc_00149855; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(eax)) */

loc_00149821: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca > _fcb)) goto loc_00149855; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(eax + 8)) */

loc_00149830: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00149855; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00149842: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014985F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00149855: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014985F: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001499BE; /* jle: less or equal (signed <=) */

loc_0014986D: ;
    ecx = MEM32(ecx + 0x68);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + -1;
    eax = ecx + 0xC;
    /* nop */

loc_00149880: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    ebx = eax + -12;
    ebp = MEM32(ebx);
    MEM32(esp + 0x28) = ebp;
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x30) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001498A6; /* jne: not equal / not zero */

loc_0014989B: ;
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    goto loc_001498AF;

loc_001498A6: ;
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */

loc_001498AF: ;
    ebx = MEM32(esp + 0x50);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm7 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014992F; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_00149919: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    goto loc_00149991;

loc_0014992F: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00149956; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00149934: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    goto loc_00149991;

loc_00149956: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm0 = xmm5; /* movaps */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x10); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */

loc_00149991: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001499A3; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_001499A0: ;
    xmm6 = xmm0; /* movaps */

loc_001499A3: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149880; /* jl: less (signed <) */

loc_001499AF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    POP32(esp, ebx);

loc_001499BE: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001499CF; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_001499C4: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001499CF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_001499C9: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_001499CF: ;
    fp_push(MEMF(esp + 4)); /* fld float */
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
 * sub_001499E0
 * Original: 0x001499E0 - 0x00149A20 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001499E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001499E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x001499F3u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_001499F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149A18; /* je: equal / zero */

loc_001499FA: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00149A06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00149A03u); } /* indirect call */
    }

loc_00149A06: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00149A12u); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_00149A12: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00149A18: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00149A20
 * Original: 0x00149A20 - 0x00149A46 (38 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149A20: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    MEM32(eax + 0xC) = 0;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149A50
 * Original: 0x00149A50 - 0x00149C7A (554 bytes, 166 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149A50: ;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x134);
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00149C6F; /* jl: less (signed <) */

loc_00149A70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_00149A72: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00149A7Eu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_00149A7E: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x504F5250) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x504F5250 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00149BAD; /* ja: above (unsigned >) */

loc_00149A8D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00149B1F; /* je: equal / zero */

loc_00149A93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x454D414E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x454D414E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149B00; /* je: equal / zero */

loc_00149A9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F464E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F464E49 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149C5E; /* jne: not equal / not zero */

loc_00149AA5: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00149ABBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00149AB8u); } /* indirect call */
    }

loc_00149ABB: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM32(esi + 0x44) = ecx;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00149AD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00149AD4u); } /* indirect call */
    }

loc_00149AD7: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM32(esi + 0x4C) = ecx;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00149AF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00149AF0u); } /* indirect call */
    }

loc_00149AF3: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM32(esi + 0x48) = ecx;
    goto loc_00149C5E;

loc_00149B00: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0x40);
    edi = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00149B0Fu); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00149B0F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00149B15u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00149B15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    goto loc_00149C5E;

loc_00149B1F: ;
    eax = MEM32(esi + 0x4C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00149C5E; /* jle: less or equal (signed <=) */

loc_00149B2C: ;
    /* nop */

loc_00149B30: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0x100);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00149B43u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00149B43: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149B4Du); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00149B4D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    ebx = eax;
    PUSH32(esp, 0x00149B65u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00149B65: ;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00149B71u); RECOMP_ABI_CALL(0x00149210u, sub_00149210); /* call 0x00149210 */

loc_00149B71: ;
    ebp = eax;
    PUSH32(esp, 0x7F);
    eax = esi + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00149B82u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00149B82: ;
    MEM32(esi + eax * 4 + 0x160) = ebp;
    edx = MEM32(esi + 0x158);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x158) = edx;
    eax = MEM32(esi + 0x4C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149B30; /* jl: less (signed <) */

loc_00149BA1: ;
    ebp = MEM32(esp + 0x140);
    goto loc_00149C5E;

loc_00149BAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53544E50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x53544E50 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149C5E; /* jne: not equal / not zero */

loc_00149BB8: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, 0x2F1C4C);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149BCEu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00149BCE: ;
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esi + 0x48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00149C5E; /* jle: less or equal (signed <=) */

loc_00149BE1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00149BE3: ;
    ecx = MEM32(esp + 0x38);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00149BFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00149BF9u); } /* indirect call */
    }

loc_00149BFC: ;
    ecx = MEM32(esp + 0x38);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00149C15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00149C12u); } /* indirect call */
    }

loc_00149C15: ;
    ecx = MEM32(esp + 0x38);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00149C2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00149C2Bu); } /* indirect call */
    }

loc_00149C2E: ;
    eax = MEM32(esi + 0x50);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x48);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149BE3; /* jl: less (signed <) */

loc_00149C5E: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00149A72; /* jge: greater or equal (signed >=) */

loc_00149C6D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00149C6F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149C80
 * Original: 0x00149C80 - 0x00149F5E (734 bytes, 250 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149C80(void)
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

loc_00149C80: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00149CDB; /* jne: not equal / not zero */

loc_00149C93: ;
    eax = MEM32(ecx + 0x6C);
    esi = MEM32(ecx + 0x70);
    edx = eax + eax * 2;
    eax = MEM32(esp + 0x30);
    SET_LO16(edi, MEM16(eax));
    MEM16(esi + edx * 2) = LO16(edi);
    SET_LO16(edi, MEM16(eax + 2));
    edx = MEM32(ecx + 0x6C);
    esi = MEM32(ecx + 0x70);
    edx = edx + edx * 2;
    MEM16(esi + edx * 2 + 2) = LO16(edi);
    edx = MEM32(ecx + 0x6C);
    SET_LO16(eax, MEM16(eax + 4));
    esi = MEM32(ecx + 0x70);
    edx = edx + edx * 2;
    MEM16(esi + edx * 2 + 4) = LO16(eax);
    eax = MEM32(ecx + 0x6C);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx + 0x6C) = eax;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00149CDB: ;
    edx = MEM32(ecx + 0x68);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00149CEBu); RECOMP_ABI_CALL(0x00149350u, sub_00149350); /* call 0x00149350 */

loc_00149CEB: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149CFA; /* jne: not equal / not zero */

loc_00149CF1: ;
    eax = ebp + -1;
    MEM32(esp + 0x14) = eax;
    goto loc_00149D01;

loc_00149CFA: ;
    ecx = ebx + -1;
    MEM32(esp + 0x14) = ecx;

loc_00149D01: ;
    eax = ebp + -1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00149D16; /* jne: not equal / not zero */

loc_00149D0C: ;
    MEM32(esp + 0x18) = 0;
    goto loc_00149D1D;

loc_00149D16: ;
    edx = ebx + 1;
    MEM32(esp + 0x18) = edx;

loc_00149D1D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8D8)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(esp + 0x34) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00149EAB; /* jle: less or equal (signed <=) */

loc_00149D41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149DB8; /* je: equal / zero */

loc_00149D45: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149DB8; /* je: equal / zero */

loc_00149D4D: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149DB8; /* je: equal / zero */

loc_00149D55: ;
    edi = (uint32_t)(int32_t)SMEM16(esi + ecx * 2);
    ecx = (uint32_t)(int32_t)SMEM16(esi + ebx * 2);
    ebp = (uint32_t)(int32_t)SMEM16(esi + edx * 2);
    eax = (uint32_t)(int32_t)SMEM16(esi + eax * 2);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149D72u); RECOMP_ABI_CALL(0x001492D0u, sub_001492D0); /* call 0x001492D0 */

loc_00149D72: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149DB0; /* je: equal / zero */

loc_00149D76: ;
    edx = MEM32(esp + 0x34);
    eax = (uint32_t)(int32_t)SMEM16(esi + edx * 2);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149D8Au); RECOMP_ABI_CALL(0x00149270u, sub_00149270); /* call 0x00149270 */

loc_00149D8A: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00149DB0; /* jbe: below or equal (unsigned <=) */

loc_00149D9C: ;
    eax = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = eax;

loc_00149DB0: ;
    eax = MEM32(esp + 0x34);
    ebp = MEM32(esp + 0x30);

loc_00149DB8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00149D41; /* jl: less (signed <) */

loc_00149DC1: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00149EAB; /* jle: less or equal (signed <=) */

loc_00149DCE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00149DD8; /* jge: greater or equal (signed >=) */

loc_00149DD2: ;
    edi = ebx;
    ebx = eax;
    goto loc_00149DDA;

loc_00149DD8: ;
    edi = eax;

loc_00149DDA: ;
    ebp = ebx;
    PUSH32(esp, 0x2F1CCC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp + ebp + 2;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00149DEFu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00149DEF: ;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x3C);
    edx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2F1CAC);
    ecx = eax + eax + 2;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x00149E12u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00149E12: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x24) = eax;
    eax = edi;
    if (CMP_G(_fas, _fbs)) goto loc_00149E32; /* jg: greater (signed >) */

loc_00149E1F: ;
    ecx = MEM32(esp + 0x34);

loc_00149E23: ;
    SET_LO16(edx, MEM16(esi + eax * 2));
    MEM16(ecx) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00149E23; /* jle: less or equal (signed <=) */

loc_00149E32: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00149E42u); RECOMP_ABI_CALL(0x00149C80u, sub_00149C80); /* call 0x00149C80 */

loc_00149E42: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00149E4Cu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00149E4C: ;
    ebp = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149E79; /* jl: less (signed <) */

loc_00149E57: ;
    ecx = esi;
    edx = edi + 1;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x34) = edx;

loc_00149E64: ;
    SET_LO16(edx, MEM16(ecx + eax));
    MEM16(eax) = LO16(edx);
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = edx;
    if ((_fa != 0)) goto loc_00149E64; /* jne: not equal / not zero */

loc_00149E79: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00149E9F; /* jle: less or equal (signed <=) */

loc_00149E83: ;
    esi = esi + ebx * 2;
    edi = ebp + edi * 2 + 2;
    /* nop */

loc_00149E90: ;
    SET_LO16(ecx, MEM16(esi));
    MEM16(edi) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00149E90; /* jne: not equal / not zero */

loc_00149E9F: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    goto loc_00149F42;

loc_00149EAB: ;
    PUSH32(esp, 0x2F1C8C);
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00149EB9u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00149EB9: ;
    PUSH32(esp, 0x2F1C6C);
    edi = eax;
    eax = ebp + ebp + -2;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149ECCu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00149ECC: ;
    ecx = MEM32(esp + 0x2C);
    SET_LO16(edx, MEM16(esi + ecx * 2));
    ecx = MEM32(esp + 0x30);
    MEM16(edi) = LO16(edx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    SET_LO16(eax, MEM16(esi + ebx * 2));
    MEM16(edi + 2) = LO16(eax);
    SET_LO16(edx, MEM16(esi + ecx * 2));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    MEM16(edi + 4) = LO16(edx);
    PUSH32(esp, 0x00149EFCu); RECOMP_ABI_CALL(0x00149C80u, sub_00149C80); /* call 0x00149C80 */

loc_00149EFC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00149F02u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00149F02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00149F1E; /* jle: less or equal (signed <=) */

loc_00149F09: ;
    ecx = esi;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx;

loc_00149F11: ;
    SET_LO16(edi, MEM16(eax + ecx));
    MEM16(eax) = LO16(edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00149F11; /* jne: not equal / not zero */

loc_00149F1E: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    eax = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00149F40; /* jge: greater or equal (signed >=) */

loc_00149F28: ;
    esi = esi + ebx * 2 + 2;
    /* nop */

loc_00149F30: ;
    SET_LO16(edx, MEM16(esi));
    MEM16(ebp + eax * 2) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149F30; /* jl: less (signed <) */

loc_00149F40: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);

loc_00149F42: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x00149F4Bu); RECOMP_ABI_CALL(0x00149C80u, sub_00149C80); /* call 0x00149C80 */

loc_00149F4B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00149F51u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00149F51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00149F60
 * Original: 0x00149F60 - 0x0014A122 (450 bytes, 133 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149F60(void)
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

loc_00149F60: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0014A11C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00149F81: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0014A11C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00149F98: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x18); /* comiss */
    if ((_fca > _fcb)) goto loc_0014A11C; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x18)) */

loc_00149FAA: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1C); /* comiss */
    if ((_fca > _fcb)) goto loc_0014A11C; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x1C)) */

loc_00149FBD: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014A001; /* jle: less or equal (signed <=) */

loc_00149FC7: ;
    edx = MEM32(ecx + 0x68);
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    edi = edi;

loc_00149FD0: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx); /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0014A03F; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00149FF9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149FD0; /* jl: less (signed <) */

loc_0014A001: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0014A101; /* jle: less or equal (signed <=) */

loc_0014A01C: ;
    ebp = MEM32(ecx + 0x68);
    edx = ebp + 0xC;

loc_0014A022: ;
    xmm4 = XMM_SCALAR(MEMF(edx + -12)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edx + -4)); /* movss */
    eax = esi + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014A046; /* jne: not equal / not zero */

loc_0014A033: ;
    xmm2 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    goto loc_0014A04F;

loc_0014A03F: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0014A046: ;
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */

loc_0014A04F: ;
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm7 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014A0F5; /* jnp: not parity */

loc_0014A079: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014A0F5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0014A0A3: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014A0F5; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_0014A0B0: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_0014A113; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0014A0F5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014A022; /* jl: less (signed <) */

loc_0014A101: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0014A107u); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_0014A107: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0014A113: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0014A11C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014A130
 * Original: 0x0014A130 - 0x0014A136 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A130(void)
{

loc_0014A130: ;
    eax = MEM32(0x30E94C);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A140
 * Original: 0x0014A140 - 0x0014A172 (50 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A140: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x7F);
    eax = esi + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014A156u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014A156: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A167; /* jge: greater or equal (signed >=) */

loc_0014A15D: ;
    eax = MEM32(esi + 0x15C);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014A167: ;
    eax = MEM32(esi + eax * 4 + 0x160);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A180
 * Original: 0x0014A180 - 0x0014A18E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A180: ;
    edx = MEM32(ecx + 0x84);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0014A190
 * Original: 0x0014A190 - 0x0014A1AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A190: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014A198u); RECOMP_ABI_CALL(0x0014A1B0u, sub_0014A1B0); /* call 0x0014A1B0 */

loc_0014A198: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A1A8; /* je: equal / zero */

loc_0014A19F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014A1A5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014A1A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014A1A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A1B0
 * Original: 0x0014A1B0 - 0x0014A1BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014A1B0: ;
    MEM32(ecx) = 0x2F1CEC;
    g_seh_ebp = ebp; sub_00149620(); return; /* tail jmp 0x00149620 */

}

/**
 * sub_0014A1C0
 * Original: 0x0014A1C0 - 0x0014A1C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A1C0(void)
{

loc_0014A1C0: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0014A1D0
 * Original: 0x0014A1D0 - 0x0014A1EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014A1D8u); RECOMP_ABI_CALL(0x0014A1F0u, sub_0014A1F0); /* call 0x0014A1F0 */

loc_0014A1D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A1E8; /* je: equal / zero */

loc_0014A1DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014A1E5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014A1E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014A1E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A1F0
 * Original: 0x0014A1F0 - 0x0014A1FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014A1F0: ;
    MEM32(ecx) = 0x2F1D18;
    g_seh_ebp = ebp; sub_00149620(); return; /* tail jmp 0x00149620 */

}

/**
 * sub_0014A200
 * Original: 0x0014A200 - 0x0014A206 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A200(void)
{

loc_0014A200: ;
    eax = 9;
    esp += 4; return; /* ret */

}

/**
 * sub_0014A210
 * Original: 0x0014A210 - 0x0014A22E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014A218u); RECOMP_ABI_CALL(0x0014A230u, sub_0014A230); /* call 0x0014A230 */

loc_0014A218: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A228; /* je: equal / zero */

loc_0014A21F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014A225u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014A225: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014A228: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A230
 * Original: 0x0014A230 - 0x0014A23B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014A230: ;
    MEM32(ecx) = 0x2F1D44;
    g_seh_ebp = ebp; sub_00149620(); return; /* tail jmp 0x00149620 */

}

/**
 * sub_0014A240
 * Original: 0x0014A240 - 0x0014A260 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A240: ;
    PUSH32(esp, esi);
    esi = MEM32(0x30E958);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A25E; /* je: equal / zero */

loc_0014A24E: ;
    edi = edi;

loc_0014A250: ;
    eax = MEM32(ecx);
    esi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0014A257u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014A254u); } /* indirect call */
    }

loc_0014A257: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014A250; /* jne: not equal / not zero */

loc_0014A25E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A260
 * Original: 0x0014A260 - 0x0014A27E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A260: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014A268u); RECOMP_ABI_CALL(0x00149620u, sub_00149620); /* call 0x00149620 */

loc_0014A268: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014A278; /* je: equal / zero */

loc_0014A26F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014A275u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014A275: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014A278: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A280
 * Original: 0x0014A280 - 0x0014A298 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014A280: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    ecx = 0x30E958;
    PUSH32(esp, 0x0014A28Eu); RECOMP_ABI_CALL(0x00149A20u, sub_00149A20); /* call 0x00149A20 */

loc_0014A28E: ;
    eax = MEM32(esi + 0x78);
    ecx = esi + 0x78;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0014A2A0
 * Original: 0x0014A2A0 - 0x0014A2C6 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A2A0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = edx + 4;
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
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014A2D0
 * Original: 0x0014A2D0 - 0x0014A335 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014A2D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x360;
    PUSH32(esp, 0x80);
    MEM32(esi + 0x158) = edi;
    PUSH32(esp, eax);
    MEM32(esi + 0x15C) = edi;
    PUSH32(esp, 0x0014A2F3u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0014A2F3: ;
    ecx = esi + 0x360;
    PUSH32(esp, 0x80);
    PUSH32(esp, ecx);
    MEM32(esi) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    PUSH32(esp, 0x0014A30Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0014A30F: ;
    MEM32(esi + 0x158) = edi;
    MEM32(esi + 0x15C) = edi;
    MEM32(esi + 0x154) = edi;
    edi = esi + 0x54;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014A340
 * Original: 0x0014A340 - 0x0014AA0A (1738 bytes, 471 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A340(void)
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

loc_0014A340: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2435CB);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x5D8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5D8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5EC);
    ecx = ebp;
    PUSH32(esp, 0x0014A36Au); RECOMP_ABI_CALL(0x002094F0u, sub_002094F0); /* call 0x002094F0 */

loc_0014A36A: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014A9F4; /* jl: less (signed <) */

loc_0014A379: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 4;
    ebx = 0x20;
    PUSH32(esp, edi);

loc_0014A386: ;
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0014A392u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_0014A392: ;
    _fa = (uint32_t)(MEM32(esp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F67726C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x6C), 0x5F67726C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014A9C9; /* jne: not equal / not zero */

loc_0014A3A0: ;
    ecx = esp + 0x88;
    PUSH32(esp, 0x0014A3ACu); RECOMP_ABI_CALL(0x0014A2D0u, sub_0014A2D0); /* call 0x0014A2D0 */

loc_0014A3AC: ;
    edx = esp + 0x6C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    ecx = esp + 0x8C;
    MEM32(esp + 0x5F4) = edi;
    PUSH32(esp, 0x0014A3C6u); RECOMP_ABI_CALL(0x00149A50u, sub_00149A50); /* call 0x00149A50 */

loc_0014A3C6: ;
    _fa = (uint32_t)(MEM32(esp + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xD0), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014A9DA; /* jl: less (signed <) */

loc_0014A3D4: ;
    PUSH32(esp, 0x7F);
    eax = esp + 0x3EC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5127F14D);
    PUSH32(esp, 0x0014A3E8u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014A3E8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A3F8; /* jge: greater or equal (signed >=) */

loc_0014A3EF: ;
    eax = esp + 0x1E4;
    goto loc_0014A3FF;

loc_0014A3F8: ;
    eax = esp + eax * 4 + 0x1E8;

loc_0014A3FF: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A407u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014A407: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D035048u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9D035048u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0014A87E; /* ja: above (unsigned >) */

loc_0014A415: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0014A9AD; /* je: equal / zero */

loc_0014A41B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49C69A10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49C69A10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0014A84C; /* ja: above (unsigned >) */

loc_0014A426: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0014A466; /* je: equal / zero */

loc_0014A428: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E42225B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E42225B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A43F; /* je: equal / zero */

loc_0014A42F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F1EA1BB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F1EA1BB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014A93A; /* jne: not equal / not zero */

loc_0014A43A: ;
    goto loc_0014A9AD;

loc_0014A43F: ;
    PUSH32(esp, 0x2F1E38);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD4);
    PUSH32(esp, 0x0014A44Fu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0014A44F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A99C; /* je: equal / zero */

loc_0014A45A: ;
    ecx = eax;
    PUSH32(esp, 0x0014A461u); RECOMP_ABI_CALL(0x0014B010u, sub_0014B010); /* call 0x0014B010 */

loc_0014A461: ;
    goto loc_0014A99E;

loc_0014A466: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC394)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E5680)); /* movss */
    PUSH32(esp, 0xBA5E165Cu);
    ecx = esp + 0x8C;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x48) = 0x68726C52;
    MEM32(esp + 0x30) = 0xB189E957u;
    MEM32(esp + 0x34) = 0xB289EAEAu;
    MEM32(esp + 0x38) = 0xB389EC7Du;
    MEM32(esp + 0x3C) = 0xAC89E178u;
    MEM32(esp + 0x2C) = esi;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x4C) = edi;
    PUSH32(esp, 0x0014A4EFu); RECOMP_ABI_CALL(0x0014A140u, sub_0014A140); /* call 0x0014A140 */

loc_0014A4EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A504; /* je: equal / zero */

loc_0014A4F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A4F9u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0014A4F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;

loc_0014A504: ;
    PUSH32(esp, 0x55906E20);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x0014A515u); RECOMP_ABI_CALL(0x0014A140u, sub_0014A140); /* call 0x0014A140 */

loc_0014A515: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A52A; /* je: equal / zero */

loc_0014A519: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A51Fu); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0014A51F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = eax;

loc_0014A52A: ;
    PUSH32(esp, 0x16746AA2);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x0014A53Bu); RECOMP_ABI_CALL(0x0014A140u, sub_0014A140); /* call 0x0014A140 */

loc_0014A53B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A54C; /* je: equal / zero */

loc_0014A53F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A545u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0014A545: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014A54C: ;
    PUSH32(esp, 0xDF817BC8u);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x0014A55Du); RECOMP_ABI_CALL(0x0014A140u, sub_0014A140); /* call 0x0014A140 */

loc_0014A55D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A56E; /* je: equal / zero */

loc_0014A561: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A567u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0014A567: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;

loc_0014A56E: ;
    PUSH32(esp, 0x3C6468F4);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x0014A57Fu); RECOMP_ABI_CALL(0x0014A140u, sub_0014A140); /* call 0x0014A140 */

loc_0014A57F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A5E1; /* je: equal / zero */

loc_0014A583: ;
    ecx = eax;
    esi = ecx + 1;

loc_0014A588: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014A588; /* jne: not equal / not zero */

loc_0014A58F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x4C;
    esi = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0014A5A0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014A5A0; /* jne: not equal / not zero */

loc_0014A5AA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0014A5B0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A5D7; /* jge: greater or equal (signed >=) */

loc_0014A5B6: ;
    SET_LO8(edx, LO8(ebx));
    eax = esp + 0x4C;
    _fb = (uint32_t)(0x31) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x31);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM8(esp + esi + 0x50) = LO8(edx);
    MEM8(esp + esi + 0x51) = 0;
    PUSH32(esp, 0x0014A5CEu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014A5CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + ebx * 4 + 0x2C) = eax;
    goto loc_0014A5DB;

loc_0014A5D7: ;
    MEM32(esp + ebx * 4 + 0x2C) = edi;

loc_0014A5DB: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014A5B0; /* jl: less (signed <) */

loc_0014A5E1: ;
    PUSH32(esp, 0x7F);
    ecx = esp + 0x3EC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE72871FBu);
    PUSH32(esp, 0x0014A5F5u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014A5F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A605; /* jge: greater or equal (signed >=) */

loc_0014A5FC: ;
    eax = esp + 0x1E4;
    goto loc_0014A60C;

loc_0014A605: ;
    eax = esp + eax * 4 + 0x1E8;

loc_0014A60C: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A61F; /* je: equal / zero */

loc_0014A612: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A618u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0014A618: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014A61F: ;
    PUSH32(esp, 0x7F);
    edx = esp + 0x3EC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40F480DC);
    edi = 0x52;
    ebp = 0x6C;
    ebx = 0x72;
    esi = 0x68;
    PUSH32(esp, 0x0014A647u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014A647: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A657; /* jge: greater or equal (signed >=) */

loc_0014A64E: ;
    eax = esp + 0x1E4;
    goto loc_0014A65E;

loc_0014A657: ;
    eax = esp + eax * 4 + 0x1E8;

loc_0014A65E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A684; /* je: equal / zero */

loc_0014A664: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A66Au); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0014A66A: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014A67E; /* jle: less or equal (signed <=) */

loc_0014A677: ;
    edi = 0xFF;
    goto loc_0014A684;

loc_0014A67E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A684; /* jge: greater or equal (signed >=) */

loc_0014A682: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014A684: ;
    PUSH32(esp, 0x7F);
    eax = esp + 0x3EC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11DECBC);
    PUSH32(esp, 0x0014A698u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014A698: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A6A8; /* jge: greater or equal (signed >=) */

loc_0014A69F: ;
    eax = esp + 0x1E4;
    goto loc_0014A6AF;

loc_0014A6A8: ;
    eax = esp + eax * 4 + 0x1E8;

loc_0014A6AF: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A6D3; /* je: equal / zero */

loc_0014A6B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A6BBu); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0014A6BB: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014A6CD; /* jle: less or equal (signed <=) */

loc_0014A6C8: ;
    edi = 0xFF;

loc_0014A6CD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A6D3; /* jge: greater or equal (signed >=) */

loc_0014A6D1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014A6D3: ;
    PUSH32(esp, 0x7F);
    ecx = esp + 0x3EC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82FBF5CDu);
    PUSH32(esp, 0x0014A6E7u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014A6E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A6F7; /* jge: greater or equal (signed >=) */

loc_0014A6EE: ;
    eax = esp + 0x1E4;
    goto loc_0014A6FE;

loc_0014A6F7: ;
    eax = esp + eax * 4 + 0x1E8;

loc_0014A6FE: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A722; /* je: equal / zero */

loc_0014A704: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A70Au); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0014A70A: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014A71C; /* jle: less or equal (signed <=) */

loc_0014A717: ;
    edi = 0xFF;

loc_0014A71C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A722; /* jge: greater or equal (signed >=) */

loc_0014A720: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014A722: ;
    PUSH32(esp, 0x7F);
    edx = esp + 0x3EC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D8B6DAB);
    PUSH32(esp, 0x0014A736u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014A736: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A746; /* jge: greater or equal (signed >=) */

loc_0014A73D: ;
    eax = esp + 0x1E4;
    goto loc_0014A74D;

loc_0014A746: ;
    eax = esp + eax * 4 + 0x1E8;

loc_0014A74D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A789; /* je: equal / zero */

loc_0014A753: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A759u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_0014A759: ;
    ecx = eax;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x80808081u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((7) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = edx;
    esi = esi >> 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014A783; /* jle: less or equal (signed <=) */

loc_0014A77C: ;
    esi = 0x80;
    goto loc_0014A789;

loc_0014A783: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A789; /* jge: greater or equal (signed >=) */

loc_0014A787: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014A789: ;
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x7F);
    eax = esp + 0x3EC;
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xD5BDBB42u);
    MEM32(esp + 0x50) = esi;
    PUSH32(esp, 0x0014A7B0u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014A7B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A7C0; /* jge: greater or equal (signed >=) */

loc_0014A7B7: ;
    eax = esp + 0x1E4;
    goto loc_0014A7C7;

loc_0014A7C0: ;
    eax = esp + eax * 4 + 0x1E8;

loc_0014A7C7: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A7DA; /* je: equal / zero */

loc_0014A7CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A7D3u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0014A7D3: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014A7DA: ;
    PUSH32(esp, 0x2F1E30);
    PUSH32(esp, 0x0014A7E4u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014A7E4: ;
    PUSH32(esp, 0x7F);
    ecx = esp + 0x3F0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A7F4u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014A7F4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A804; /* jge: greater or equal (signed >=) */

loc_0014A7FB: ;
    eax = esp + 0x1E4;
    goto loc_0014A80B;

loc_0014A804: ;
    eax = esp + eax * 4 + 0x1E8;

loc_0014A80B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A81E; /* je: equal / zero */

loc_0014A811: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014A817u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014A817: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = eax;

loc_0014A81E: ;
    eax = MEM32(esp + 0xD0);
    ecx = MEM32(esp + 0xD8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014A838u); RECOMP_ABI_CALL(0x00202630u, sub_00202630); /* call 0x00202630 */

loc_0014A838: ;
    ebp = MEM32(esp + 0x604);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x20;
    goto loc_0014A9AD;

loc_0014A84C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9CB35188u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9CB35188u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014A93A; /* jne: not equal / not zero */

loc_0014A857: ;
    PUSH32(esp, 0x2F1E10);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD8);
    PUSH32(esp, 0x0014A867u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0014A867: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A99C; /* je: equal / zero */

loc_0014A872: ;
    ecx = eax;
    PUSH32(esp, 0x0014A879u); RECOMP_ABI_CALL(0x0014C230u, sub_0014C230); /* call 0x0014C230 */

loc_0014A879: ;
    goto loc_0014A99E;

loc_0014A87E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAEBBAD4Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAEBBAD4Du (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0014A933; /* ja: above (unsigned >) */

loc_0014A889: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0014A8FF; /* je: equal / zero */

loc_0014A88B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F9C4FD4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9F9C4FD4u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A8C4; /* je: equal / zero */

loc_0014A892: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA9596036u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA9596036u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014A93A; /* jne: not equal / not zero */

loc_0014A89D: ;
    PUSH32(esp, 0x2F1DF0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x0014A8ADu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0014A8AD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A99C; /* je: equal / zero */

loc_0014A8B8: ;
    ecx = eax;
    PUSH32(esp, 0x0014A8BFu); RECOMP_ABI_CALL(0x0014B750u, sub_0014B750); /* call 0x0014B750 */

loc_0014A8BF: ;
    goto loc_0014A99E;

loc_0014A8C4: ;
    PUSH32(esp, 0x2F1DD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x0014A8D4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0014A8D4: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A96E; /* je: equal / zero */

loc_0014A8E1: ;
    ecx = esi;
    PUSH32(esp, 0x0014A8E8u); RECOMP_ABI_CALL(0x001495D0u, sub_001495D0); /* call 0x001495D0 */

loc_0014A8E8: ;
    ecx = esi;
    eax = esp + 0x88;
    MEM32(esi) = 0x2F1D44;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    goto loc_0014A9AA;

loc_0014A8FF: ;
    PUSH32(esp, 0x2F1DB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x0014A90Fu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0014A90F: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A96E; /* je: equal / zero */

loc_0014A918: ;
    ecx = esi;
    PUSH32(esp, 0x0014A91Fu); RECOMP_ABI_CALL(0x001495D0u, sub_001495D0); /* call 0x001495D0 */

loc_0014A91F: ;
    ecx = esi;
    eax = esp + 0x88;
    MEM32(esi) = 0x2F1D18;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    goto loc_0014A9AA;

loc_0014A933: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD7FE1AD5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD7FE1AD5u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A97C; /* je: equal / zero */

loc_0014A93A: ;
    PUSH32(esp, 0x2F1D90);
    PUSH32(esp, edi);
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x0014A94Au); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0014A94A: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A96E; /* je: equal / zero */

loc_0014A953: ;
    ecx = esi;
    PUSH32(esp, 0x0014A95Au); RECOMP_ABI_CALL(0x001495D0u, sub_001495D0); /* call 0x001495D0 */

loc_0014A95A: ;
    ecx = esi;
    eax = esp + 0x88;
    MEM32(esi) = 0x2F1CEC;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    goto loc_0014A9AA;

loc_0014A96E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ecx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    goto loc_0014A9AA;

loc_0014A97C: ;
    PUSH32(esp, 0x2F1D70);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA8);
    PUSH32(esp, 0x0014A98Cu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0014A98C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014A99C; /* je: equal / zero */

loc_0014A993: ;
    ecx = eax;
    PUSH32(esp, 0x0014A99Au); RECOMP_ABI_CALL(0x0014AE20u, sub_0014AE20); /* call 0x0014AE20 */

loc_0014A99A: ;
    goto loc_0014A99E;

loc_0014A99C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014A99E: ;
    edx = MEM32(eax);
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    ecx = eax;

loc_0014A9AA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0014A9ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014A9AAu); } /* indirect call */
    }

loc_0014A9AD: ;
    ecx = esp + 0x88;
    MEM32(esp + 0x5F0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0014A9C4u); RECOMP_ABI_CALL(0x00149200u, sub_00149200); /* call 0x00149200 */

loc_0014A9C4: ;
    esi = 4;

loc_0014A9C9: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014A386; /* jge: greater or equal (signed >=) */

loc_0014A9D8: ;
    goto loc_0014A9F1;

loc_0014A9DA: ;
    ecx = esp + 0x88;
    MEM32(esp + 0x5F0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0014A9F1u); RECOMP_ABI_CALL(0x00149200u, sub_00149200); /* call 0x00149200 */

loc_0014A9F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0014A9F4: ;
    ecx = MEM32(esp + 0x5DC);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x5E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5E4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014AA10
 * Original: 0x0014AA10 - 0x0014AAA3 (147 bytes, 57 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014AA10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, 0x2E3EF4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ebx * 4;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = edx;
    PUSH32(esp, 0x0014AA35u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0014AA35: ;
    PUSH32(esp, 0x2E3EC4);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x0014AA44u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0014AA44: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0014AA66; /* jne: not equal / not zero */

loc_0014AA51: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0014AA66: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ebp;
    PUSH32(esp, 0x0014AA76u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0014AA76: ;
    ecx = edi;
    edi = MEM32(esp + 0x1C);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 8) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014AAB0
 * Original: 0x0014AAB0 - 0x0014AB10 (96 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AAB0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AB0E; /* je: equal / zero */

loc_0014AAB7: ;
    eax = MEM32(esi + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AAFC; /* je: equal / zero */

loc_0014AAC3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx + 4;

loc_0014AAC8: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    edi = edx;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(edx + 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0014AAE2u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_0014AAE2: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AAF3; /* je: equal / zero */

loc_0014AAEC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0014AAF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014AAF0u); } /* indirect call */
    }

loc_0014AAF3: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014AAC8; /* jne: not equal / not zero */

loc_0014AAFA: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0014AAFC: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014AB05u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0014AB05: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014AB0Bu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014AB0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014AB0E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014AB10
 * Original: 0x0014AB10 - 0x0014AB20 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AB10(void)
{

loc_0014AB10: ;
    PUSH32(esp, 0x80);
    ecx = 0x37A428;
    PUSH32(esp, 0x0014AB1Fu); RECOMP_ABI_CALL(0x0014AA10u, sub_0014AA10); /* call 0x0014AA10 */

loc_0014AB1F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014AB20
 * Original: 0x0014AB20 - 0x0014AB2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014AB20: ;
    ecx = 0x37A428;
    g_seh_ebp = ebp; sub_0014AAB0(); return; /* tail jmp 0x0014AAB0 */

}

/**
 * sub_0014AB30
 * Original: 0x0014AB30 - 0x0014ACF6 (454 bytes, 152 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0014AB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0014AB30: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0014AB3Au); RECOMP_ABI_CALL(0x00149150u, sub_00149150); /* call 0x00149150 */

loc_0014AB3A: ;
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    MEM32(esi + 0x20) = eax;
    eax = ebp + 4;
    edx = esi + 0x24;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0014AB50: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014AB50; /* jne: not equal / not zero */

loc_0014AB5A: ;
    edi = MEM32(ebp + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM32(esi + 0x64) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014ACF0; /* jl: less (signed <) */

loc_0014AB69: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2F1E9C);
    ecx = edi + edi * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014AB7Du); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0014AB7D: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AB96; /* je: equal / zero */

loc_0014AB86: ;
    PUSH32(esp, 0xB5E50);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0014AB94u); RECOMP_ABI_CALL(0x00015B30u, sub_00015B30); /* call 0x00015B30 */

loc_0014AB94: ;
    goto loc_0014AB98;

loc_0014AB96: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014AB98: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC424)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2F1E98)); /* movss */
    MEM32(esi + 0x68) = ebx;
    edx = MEM32(ebp + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm1; /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AC27; /* je: equal / zero */

loc_0014ABB8: ;
    eax = MEM32(esi + 0x64);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014AC27; /* jle: less or equal (signed <=) */

loc_0014ABC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014ABD0;

    /* nop */

loc_0014ABD0: ;
    ebx = MEM32(edx + -8);
    MEM32(eax + ecx) = ebx;
    ebx = MEM32(edx + -4);
    MEM32(eax + ecx + 4) = ebx;
    ebx = MEM32(edx);
    MEM32(eax + ecx + 8) = ebx;
    ecx = MEM32(esi + 0x68);
    xmm4 = XMM_SCALAR(MEMF(eax + ecx)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014ABF3; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_0014ABF0: ;
    xmm3 = xmm4; /* movaps */

loc_0014ABF3: ;
    _fca = xmm2.f[0]; _fcb = MEMF(eax + ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014ABFE; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(eax + ecx)) */

loc_0014ABF9: ;
    xmm2 = XMM_SCALAR(MEMF(eax + ecx)); /* movss */

loc_0014ABFE: ;
    xmm4 = XMM_SCALAR(MEMF(eax + ecx + 8)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014AC0C; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0014AC09: ;
    xmm1 = xmm4; /* movaps */

loc_0014AC0C: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + ecx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014AC19; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + ecx + 8)) */

loc_0014AC13: ;
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 8)); /* movss */

loc_0014AC19: ;
    ebx = MEM32(esi + 0x64);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014ABD0; /* jl: less (signed <) */

loc_0014AC27: ;
    eax = MEM32(esi + 0x64);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x2F1E78);
    edx = eax + eax * 2;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0014AC53u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0014AC53: ;
    MEM32(esi + 0x70) = eax;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, 0x2F1E58);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014AC68u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0014AC68: ;
    ecx = MEM32(esi + 0x64);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_0014AC83; /* jle: less or equal (signed <=) */

loc_0014AC77: ;
    MEM16(edi + eax * 2) = LO16(eax);
    ecx = MEM32(esi + 0x64);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014AC77; /* jl: less (signed <) */

loc_0014AC83: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014AC8Fu); RECOMP_ABI_CALL(0x00149C80u, sub_00149C80); /* call 0x00149C80 */

loc_0014AC8F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0014AC95u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0014AC95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = 0x30E958;
    PUSH32(esp, 0x0014ACA3u); RECOMP_ABI_CALL(0x0014A2A0u, sub_0014A2A0); /* call 0x0014A2A0 */

loc_0014ACA3: ;
    eax = MEM32(0x37A428);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(eax + edx * 4) = esi;
    eax = MEM32(0x37A428);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x37A42C);
    edx = MEM32(0x37A438);
    eax = MEM32(esi + 0x20);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014ACD1u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0014ACD1: ;
    ecx = MEM32(0x37A434);
    MEM32(ecx + eax * 4) = esi;
    eax = MEM32(0x37A430);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x78;
    MEM32(0x37A430) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0014ACF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014ACEDu); } /* indirect call */
    }

loc_0014ACF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014AD00
 * Original: 0x0014AD00 - 0x0014ADB7 (183 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AD00(void)
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

loc_0014AD00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0014AD0Eu); RECOMP_ABI_CALL(0x0014AB30u, sub_0014AB30); /* call 0x0014AB30 */

loc_0014AD0E: ;
    PUSH32(esp, 0x7F);
    eax = esi + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE0D9594);
    PUSH32(esp, 0x0014AD21u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014AD21: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014AD30; /* jge: greater or equal (signed >=) */

loc_0014AD28: ;
    eax = esi + 0x15C;
    goto loc_0014AD37;

loc_0014AD30: ;
    eax = esi + eax * 4 + 0x160;

loc_0014AD37: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014AD3Fu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014AD3F: ;
    PUSH32(esp, 0x7F);
    ecx = esi + 0x360;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x95876E1Fu);
    MEM32(edi + 0x9C) = eax;
    PUSH32(esp, 0x0014AD58u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014AD58: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014AD67; /* jge: greater or equal (signed >=) */

loc_0014AD5F: ;
    eax = esi + 0x15C;
    goto loc_0014AD6E;

loc_0014AD67: ;
    eax = esi + eax * 4 + 0x160;

loc_0014AD6E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AD85; /* je: equal / zero */

loc_0014AD74: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014AD7Au); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0014AD7A: ;
    MEMF(edi + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014AD90;

loc_0014AD85: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0xA0) = xmm0.f[0]; /* movss */

loc_0014AD90: ;
    edx = MEM32(edi + 0xA0);
    eax = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x9C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014ADA9u); RECOMP_ABI_CALL(0x00152F40u, sub_00152F40); /* call 0x00152F40 */

loc_0014ADA9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x98) = eax;
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
 * sub_0014ADC0
 * Original: 0x0014ADC0 - 0x0014ADC5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ADC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014ADC0: ;
    g_seh_ebp = ebp; sub_0014AB30(); return; /* tail jmp 0x0014AB30 */

}

/**
 * sub_0014ADD0
 * Original: 0x0014ADD0 - 0x0014ADDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ADD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014ADD0: ;
    MEM32(ecx) = 0x2F1EBC;
    g_seh_ebp = ebp; sub_00149620(); return; /* tail jmp 0x00149620 */

}

/**
 * sub_0014ADE0
 * Original: 0x0014ADE0 - 0x0014ADE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ADE0(void)
{

loc_0014ADE0: ;
    eax = 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_0014ADF0
 * Original: 0x0014ADF0 - 0x0014ADFC (12 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ADF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014ADF0: ;
    MEM8(ecx + 0xA4) = 0;
    g_seh_ebp = ebp; sub_0014AB30(); return; /* tail jmp 0x0014AB30 */

}

/**
 * sub_0014AE00
 * Original: 0x0014AE00 - 0x0014AE05 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014AE00: ;
    g_seh_ebp = ebp; sub_00149690(); return; /* tail jmp 0x00149690 */

}

/**
 * sub_0014AE10
 * Original: 0x0014AE10 - 0x0014AE16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AE10(void)
{

loc_0014AE10: ;
    eax = MEM32(0x30E96C);
    esp += 4; return; /* ret */

}

/**
 * sub_0014AE20
 * Original: 0x0014AE20 - 0x0014AE46 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AE20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014AE28u); RECOMP_ABI_CALL(0x001495D0u, sub_001495D0); /* call 0x001495D0 */

loc_0014AE28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2F1EBC;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014AE50
 * Original: 0x0014AE50 - 0x0014AE6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AE50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014AE58u); RECOMP_ABI_CALL(0x0014ADD0u, sub_0014ADD0); /* call 0x0014ADD0 */

loc_0014AE58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014AE68; /* je: equal / zero */

loc_0014AE5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014AE65u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014AE65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014AE68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014AE70
 * Original: 0x0014AE70 - 0x0014AF54 (228 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AE70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0014AE80u); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_0014AE80: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x660E4490);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014AE9Fu); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014AE9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AECE; /* je: equal / zero */

loc_0014AEA6: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014AEB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014AEAFu); } /* indirect call */
    }

loc_0014AEB2: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    goto loc_0014AEF2;

loc_0014AECE: ;
    eax = MEM32(0x6437B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AF4D; /* je: equal / zero */

loc_0014AED7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */

loc_0014AEF2: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014AF04u); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_0014AF04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0xA4));
    if (CMP_EQ(_fa, _fb)) goto loc_0014AF31; /* je: equal / zero */

loc_0014AF0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014AF4D; /* jne: not equal / not zero */

loc_0014AF12: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 1);
    MEM8(esi + 0xA4) = 1;
    ecx = MEM32(0x3FF730);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014AF2Au); RECOMP_ABI_CALL(0x0016FB00u, sub_0016FB00); /* call 0x0016FB00 */

loc_0014AF2A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014AF31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AF4D; /* je: equal / zero */

loc_0014AF35: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(esi + 0xA4) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3FF730);
    PUSH32(esp, 0x0014AF4Du); RECOMP_ABI_CALL(0x0016FB00u, sub_0016FB00); /* call 0x0016FB00 */

loc_0014AF4D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014AF60
 * Original: 0x0014AF60 - 0x0014AF6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014AF60: ;
    MEM32(ecx) = 0x2F1F00;
    g_seh_ebp = ebp; sub_00149620(); return; /* tail jmp 0x00149620 */

}

/**
 * sub_0014AF70
 * Original: 0x0014AF70 - 0x0014AF76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AF70(void)
{

loc_0014AF70: ;
    eax = 0xD4;
    esp += 4; return; /* ret */

}

/**
 * sub_0014AF80
 * Original: 0x0014AF80 - 0x0014AFA5 (37 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AF80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0014AF8Eu); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_0014AF8E: ;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AFA0; /* je: equal / zero */

loc_0014AF98: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014AFA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014AF9Du); } /* indirect call */
    }

loc_0014AFA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014AFB0
 * Original: 0x0014AFB0 - 0x0014AFD8 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014AFB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014AFC2; /* je: equal / zero */

loc_0014AFBD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0014AFC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014AFBFu); } /* indirect call */
    }

loc_0014AFC2: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xCC) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014AFD5; /* je: equal / zero */

loc_0014AFD1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0014AFD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014AFD3u); } /* indirect call */
    }

loc_0014AFD5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014AFE0
 * Original: 0x0014AFE0 - 0x0014AFF2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014AFE0(void)
{

loc_0014AFE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B000
 * Original: 0x0014B000 - 0x0014B006 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B000(void)
{

loc_0014B000: ;
    eax = MEM32(0x30E97C);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B010
 * Original: 0x0014B010 - 0x0014B05C (76 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B010: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014B018u); RECOMP_ABI_CALL(0x001495D0u, sub_001495D0); /* call 0x001495D0 */

loc_0014B018: ;
    MEM32(esi) = 0x2F1F00;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xAC) = 0x2F1EF4;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC0) = 0x2F1EE8;
    MEM32(esi + 0xCC) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B060
 * Original: 0x0014B060 - 0x0014B07E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B060: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014B068u); RECOMP_ABI_CALL(0x0014AF60u, sub_0014AF60); /* call 0x0014AF60 */

loc_0014B068: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B078; /* je: equal / zero */

loc_0014B06F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014B075u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014B075: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014B078: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B080
 * Original: 0x0014B080 - 0x0014B0B2 (50 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B080: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0014B08Eu); RECOMP_ABI_CALL(0x00149690u, sub_00149690); /* call 0x00149690 */

loc_0014B08E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0014B0A6; /* jne: not equal / not zero */

loc_0014B095: ;
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014B0A1u); RECOMP_ABI_CALL(0x0014AFB0u, sub_0014AFB0); /* call 0x0014AFB0 */

loc_0014B0A1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0014B0A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014B0ADu); RECOMP_ABI_CALL(0x0014AFB0u, sub_0014AFB0); /* call 0x0014AFB0 */

loc_0014B0AD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B0C0
 * Original: 0x0014B0C0 - 0x0014B1FA (314 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B0C0(void)
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

loc_0014B0C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    edi = ecx;
    PUSH32(esp, 0x0014B0D1u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014B0D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0014B0E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014B0DFu); } /* indirect call */
    }

loc_0014B0E2: ;
    ecx = MEM32(edi + 4);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014B0EFu); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_0014B0EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B1EA; /* jne: not equal / not zero */

loc_0014B0F7: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014B1F2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0014B114: ;
    ecx = MEM32(edi + 4);
    ecx = MEM32(ecx + 0xD0);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0014B14F; /* ja: above (unsigned >) */

loc_0014B127: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x14B1FC); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0014B12Eu) goto loc_0014B12E;
    if (_jt == 0x0014B135u) goto loc_0014B135;
    if (_jt == 0x0014B13Cu) goto loc_0014B13C;
    if (_jt == 0x0014B143u) goto loc_0014B143;
    if (_jt == 0x0014B14Au) goto loc_0014B14A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0014B12E: ;
    eax = 0x786A3059;
    goto loc_0014B14F;

loc_0014B135: ;
    eax = 0xA03B111Cu;
    goto loc_0014B14F;

loc_0014B13C: ;
    eax = 0xDA75A3A0u;
    goto loc_0014B14F;

loc_0014B143: ;
    eax = 0x90331E0Du;
    goto loc_0014B14F;

loc_0014B14A: ;
    eax = 0x8636A6D0u;

loc_0014B14F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = 0x361B90;
    PUSH32(esp, 0x0014B15Cu); RECOMP_ABI_CALL(0x00108F00u, sub_00108F00); /* call 0x00108F00 */

loc_0014B15C: ;
    PUSH32(esp, 0x200000FF);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014B16Bu); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_0014B16B: ;
    ecx = MEM32(edi + 4);
    edx = ecx + 0xAC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014B17Au); RECOMP_ABI_CALL(0x0014AFB0u, sub_0014AFB0); /* call 0x0014AFB0 */

loc_0014B17A: ;
    eax = MEM32(edi + 4);
    eax = MEM32(eax + 0xD0);
    _fa = (uint32_t)(MEM32(esi + 0xF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B195; /* jne: not equal / not zero */

loc_0014B18B: ;
    SET_LO8(ecx, MEM8(esi + 0x1A9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B1F2; /* jne: not equal / not zero */

loc_0014B195: ;
    ecx = eax + eax;
    edx = 3;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + 0x254);
    PUSH32(esp, 0x660E4490);
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x254) = ecx;
    PUSH32(esp, 0x0014B1B7u); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_0014B1B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B1F2; /* je: equal / zero */

loc_0014B1BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B1F2; /* je: equal / zero */

loc_0014B1C2: ;
    ecx = MEM32(edi + 4);
    ecx = MEM32(ecx + 0xD0);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 3;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x254);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x254) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014B1EA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */

loc_0014B1F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B210
 * Original: 0x0014B210 - 0x0014B31F (271 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0014B210: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    edi = ecx;
    PUSH32(esp, 0x0014B221u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014B221: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0014B232u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014B22Fu); } /* indirect call */
    }

loc_0014B232: ;
    ecx = MEM32(edi + 4);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014B23Fu); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_0014B23F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B29F; /* jne: not equal / not zero */

loc_0014B243: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014B317; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0014B268: ;
    PUSH32(esp, 0xAD159E9Fu);
    PUSH32(esp, 0);
    ecx = 0x361B90;
    PUSH32(esp, 0x0014B279u); RECOMP_ABI_CALL(0x00108F00u, sub_00108F00); /* call 0x00108F00 */

loc_0014B279: ;
    PUSH32(esp, 0x50808080);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014B288u); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_0014B288: ;
    ecx = MEM32(edi + 4);
    eax = ecx + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014B297u); RECOMP_ABI_CALL(0x0014AFB0u, sub_0014AFB0); /* call 0x0014AFB0 */

loc_0014B297: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014B29F: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 0xD0);
    _fa = (uint32_t)(MEM32(esi + 0xF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B2BA; /* jne: not equal / not zero */

loc_0014B2B0: ;
    SET_LO8(ecx, MEM8(esi + 0x1A9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B2FF; /* jne: not equal / not zero */

loc_0014B2BA: ;
    ecx = eax + eax;
    edx = 3;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + 0x254);
    PUSH32(esp, 0x660E4490);
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x254) = ecx;
    PUSH32(esp, 0x0014B2DCu); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_0014B2DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B2FF; /* je: equal / zero */

loc_0014B2E3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B2FF; /* je: equal / zero */

loc_0014B2E7: ;
    ecx = MEM32(edi + 4);
    ecx = MEM32(ecx + 0xD0);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 3;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x254) = MEM32(eax + 0x254) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x254)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0014B2FF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */

loc_0014B317: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B320
 * Original: 0x0014B320 - 0x0014B355 (53 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B320: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(eax + 0x98);
    edx = MEM32(eax + 0x9C);
    MEM32(eax + 0xA0) = 0;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 0x9C);
    edx = MEM32(eax + 0x98);
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B360
 * Original: 0x0014B360 - 0x0014B375 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B360(void)
{

loc_0014B360: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014B368u); RECOMP_ABI_CALL(0x0014A280u, sub_0014A280); /* call 0x0014A280 */

loc_0014B368: ;
    PUSH32(esp, esi);
    ecx = 0x30E988;
    PUSH32(esp, 0x0014B373u); RECOMP_ABI_CALL(0x0014B320u, sub_0014B320); /* call 0x0014B320 */

loc_0014B373: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B380
 * Original: 0x0014B380 - 0x0014B3A9 (41 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B380: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = edx + 0x98;
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
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B3B0
 * Original: 0x0014B3B0 - 0x0014B489 (217 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B3B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0014B3BEu); RECOMP_ABI_CALL(0x0014AB30u, sub_0014AB30); /* call 0x0014AB30 */

loc_0014B3BE: ;
    PUSH32(esp, 0x7F);
    eax = edi + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2E42225B);
    PUSH32(esp, 0x0014B3D1u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014B3D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B3E0; /* jge: greater or equal (signed >=) */

loc_0014B3D8: ;
    eax = edi + 0x15C;
    goto loc_0014B3E7;

loc_0014B3E0: ;
    eax = edi + eax * 4 + 0x160;

loc_0014B3E7: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014B3EFu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014B3EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DA8B911) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DA8B911 (32-bit) */
    MEM32(esi + 0xD0) = 0;
    if (CMP_A(_fa, _fb)) goto loc_0014B437; /* ja: above (unsigned >) */

loc_0014B403: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0014B42B; /* je: equal / zero */

loc_0014B405: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23E9891F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23E9891F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B41F; /* je: equal / zero */

loc_0014B40C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E520DCB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E520DCB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B45B; /* jne: not equal / not zero */

loc_0014B413: ;
    MEM32(esi + 0xD0) = 3;
    goto loc_0014B45B;

loc_0014B41F: ;
    MEM32(esi + 0xD0) = 6;
    goto loc_0014B45B;

loc_0014B42B: ;
    MEM32(esi + 0xD0) = 4;
    goto loc_0014B45B;

loc_0014B437: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E3669AE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5E3669AE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B451; /* je: equal / zero */

loc_0014B43E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xECA4A890u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xECA4A890u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B45B; /* jne: not equal / not zero */

loc_0014B445: ;
    MEM32(esi + 0xD0) = 5;
    goto loc_0014B45B;

loc_0014B451: ;
    MEM32(esi + 0xD0) = 2;

loc_0014B45B: ;
    PUSH32(esp, esi);
    ecx = 0x30E988;
    PUSH32(esp, 0x0014B466u); RECOMP_ABI_CALL(0x0014B380u, sub_0014B380); /* call 0x0014B380 */

loc_0014B466: ;
    ecx = esi + 0xC0;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esi + 0x74) = 1;
    MEM32(esi + 0xB0) = esi;
    MEM32(esi + 0xC4) = esi;
    PUSH32(esp, 0x0014B484u); RECOMP_ABI_CALL(0x0014AFB0u, sub_0014AFB0); /* call 0x0014AFB0 */

loc_0014B484: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B490
 * Original: 0x0014B490 - 0x0014B49B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014B490: ;
    MEM32(ecx) = 0x2F1F50;
    g_seh_ebp = ebp; sub_00149620(); return; /* tail jmp 0x00149620 */

}

/**
 * sub_0014B4A0
 * Original: 0x0014B4A0 - 0x0014B4A5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014B4A0: ;
    g_seh_ebp = ebp; sub_0014A280(); return; /* tail jmp 0x0014A280 */

}

/**
 * sub_0014B4B0
 * Original: 0x0014B4B0 - 0x0014B4D5 (37 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B4B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0014B4BEu); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_0014B4BE: ;
    eax = MEM32(esi + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B4D0; /* je: equal / zero */

loc_0014B4C8: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014B4D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014B4CDu); } /* indirect call */
    }

loc_0014B4D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B4E0
 * Original: 0x0014B4E0 - 0x0014B54A (106 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B4E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014B543; /* je: equal / zero */

loc_0014B4EC: ;
    ecx = esi;
    PUSH32(esp, 0x0014B4F3u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_0014B4F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B500; /* je: equal / zero */

loc_0014B4F7: ;
    _fa = (uint32_t)(MEM8(edi + 0xAC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xAC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B53C; /* jne: not equal / not zero */

loc_0014B500: ;
    ecx = esi;
    PUSH32(esp, 0x0014B507u); RECOMP_ABI_CALL(0x00011590u, sub_00011590); /* call 0x00011590 */

loc_0014B507: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B514; /* je: equal / zero */

loc_0014B50B: ;
    _fa = (uint32_t)(MEM8(edi + 0xAC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xAC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B53C; /* jne: not equal / not zero */

loc_0014B514: ;
    ecx = esi;
    PUSH32(esp, 0x0014B51Bu); RECOMP_ABI_CALL(0x000115C0u, sub_000115C0); /* call 0x000115C0 */

loc_0014B51B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B528; /* je: equal / zero */

loc_0014B51F: ;
    _fa = (uint32_t)(MEM8(edi + 0xAC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xAC), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014B53C; /* jne: not equal / not zero */

loc_0014B528: ;
    ecx = esi;
    PUSH32(esp, 0x0014B52Fu); RECOMP_ABI_CALL(0x000115A0u, sub_000115A0); /* call 0x000115A0 */

loc_0014B52F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B543; /* je: equal / zero */

loc_0014B533: ;
    _fa = (uint32_t)(MEM8(edi + 0xAC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xAC), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B543; /* je: equal / zero */

loc_0014B53C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014B543: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B550
 * Original: 0x0014B550 - 0x0014B599 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B550: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0014B563u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014B563: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B591; /* je: equal / zero */

loc_0014B56A: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014B576u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014B573u); } /* indirect call */
    }

loc_0014B576: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0014B582u); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_0014B582: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0xEC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0xEC) (8-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0014B591: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0014B5A0
 * Original: 0x0014B5A0 - 0x0014B5C8 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B5A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B5B2; /* je: equal / zero */

loc_0014B5AD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0014B5B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014B5AFu); } /* indirect call */
    }

loc_0014B5B2: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xE8) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014B5C5; /* je: equal / zero */

loc_0014B5C1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0014B5C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014B5C3u); } /* indirect call */
    }

loc_0014B5C5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B5D0
 * Original: 0x0014B5D0 - 0x0014B65C (140 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B5D0(void)
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

loc_0014B5D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0014B5DFu); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014B5DF: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x0014B5ECu); RECOMP_ABI_CALL(0x0014B550u, sub_0014B550); /* call 0x0014B550 */

loc_0014B5EC: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0014B5F7u); RECOMP_ABI_CALL(0x0014B4E0u, sub_0014B4E0); /* call 0x0014B4E0 */

loc_0014B5F7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B64E; /* jne: not equal / not zero */

loc_0014B5FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B64E; /* jne: not equal / not zero */

loc_0014B600: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DBED0); /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014B656; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DBED0)) */

loc_0014B619: ;
    PUSH32(esp, 0x84A2DE50u);
    PUSH32(esp, 0);
    ecx = 0x361B90;
    PUSH32(esp, 0x0014B62Au); RECOMP_ABI_CALL(0x00108F00u, sub_00108F00); /* call 0x00108F00 */

loc_0014B62A: ;
    PUSH32(esp, 0x200000FF);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014B639u); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_0014B639: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ecx + 0xBC;
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014B5A0(); return; /* tail jmp 0x0014B5A0 */

loc_0014B64E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_0014B656: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B660
 * Original: 0x0014B660 - 0x0014B734 (212 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0014B660: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0014B672u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014B672: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = MEM32(edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0014B683u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014B680u); } /* indirect call */
    }

loc_0014B683: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0014B68Bu); RECOMP_ABI_CALL(0x0014B550u, sub_0014B550); /* call 0x0014B550 */

loc_0014B68B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0014B696u); RECOMP_ABI_CALL(0x0014B4E0u, sub_0014B4E0); /* call 0x0014B4E0 */

loc_0014B696: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B6D7; /* je: equal / zero */

loc_0014B69A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B6D7; /* je: equal / zero */

loc_0014B69E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DDC40); /* comiss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014B72B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DDC40)) */

loc_0014B6BF: ;
    ecx = MEM32(esi + 4);
    edx = ecx + 0xD8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014B6CEu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0014B6CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014B6D7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0014B6FC; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0014B6F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B72B; /* jne: not equal / not zero */

loc_0014B6FC: ;
    PUSH32(esp, 0x1F36C1F0);
    PUSH32(esp, 0);
    ecx = 0x361B90;
    PUSH32(esp, 0x0014B70Du); RECOMP_ABI_CALL(0x00108F00u, sub_00108F00); /* call 0x00108F00 */

loc_0014B70D: ;
    PUSH32(esp, 0x50808080);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014B71Cu); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_0014B71C: ;
    ecx = MEM32(esi + 4);
    eax = ecx + 0xCC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014B72Bu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0014B72B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B740
 * Original: 0x0014B740 - 0x0014B746 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B740(void)
{

loc_0014B740: ;
    eax = MEM32(0x30E9AC);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B750
 * Original: 0x0014B750 - 0x0014B7B3 (99 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B750: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014B758u); RECOMP_ABI_CALL(0x001495D0u, sub_001495D0); /* call 0x001495D0 */

loc_0014B758: ;
    MEM32(esi) = 0x2F1F50;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xBC) = 0x2F1F38;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xCC) = 0x2F1F2C;
    MEM32(esi + 0xDC) = eax;
    MEM32(esi + 0xD8) = 0x2F1F44;
    MEM32(esi + 0xE8) = eax;
    MEM8(esi + 0xEC) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014B7C0
 * Original: 0x0014B7C0 - 0x0014B7DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014B7C8u); RECOMP_ABI_CALL(0x0014B490u, sub_0014B490); /* call 0x0014B490 */

loc_0014B7C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014B7D8; /* je: equal / zero */

loc_0014B7CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014B7D5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014B7D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014B7D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B7E0
 * Original: 0x0014B7E0 - 0x0014B812 (50 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B7E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0014B7EEu); RECOMP_ABI_CALL(0x00149690u, sub_00149690); /* call 0x00149690 */

loc_0014B7EE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0014B806; /* jne: not equal / not zero */

loc_0014B7F5: ;
    eax = esi + 0xCC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014B801u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0014B801: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0014B806: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014B80Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0014B80D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B820
 * Original: 0x0014B820 - 0x0014B842 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B820(void)
{

loc_0014B820: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ecx + 4);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, ecx);
    ecx = 0x37DD10;
    PUSH32(esp, 0x0014B841u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_0014B841: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014B850
 * Original: 0x0014B850 - 0x0014B919 (201 bytes, 59 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B850: ;
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0014B863u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014B863: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014B872u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014B86Fu); } /* indirect call */
    }

loc_0014B872: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0014B87Bu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0014B87B: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2DC8E0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0014B88Eu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0014B88E: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0014B89Cu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0014B89C: ;
    PUSH32(esp, 0x2F1F94);
    PUSH32(esp, 0x2F1F7C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0014B8AFu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0014B8AF: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0014B8BDu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0014B8BD: ;
    edx = MEM32(esp + 0x820);
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xB0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0x4031B0;
    PUSH32(esp, 0x0014B8E2u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0014B8E2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B90D; /* je: equal / zero */

loc_0014B8E8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0014B8EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014B8ECu); } /* indirect call */
    }

loc_0014B8EF: ;
    edx = MEM32(0x30D374);
    ecx = MEM32(0x30D370);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B90D; /* jne: not equal / not zero */

loc_0014B901: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014B90D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014B920
 * Original: 0x0014B920 - 0x0014BB8C (620 bytes, 167 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014B920: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0014B92Eu); RECOMP_ABI_CALL(0x0014AB30u, sub_0014AB30); /* call 0x0014AB30 */

loc_0014B92E: ;
    PUSH32(esp, 0x7F);
    eax = esi + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8FD2898Du);
    MEM8(edi + 0xEC) = 1;
    PUSH32(esp, 0x0014B948u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014B948: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B957; /* jge: greater or equal (signed >=) */

loc_0014B94F: ;
    eax = esi + 0x15C;
    goto loc_0014B95E;

loc_0014B957: ;
    eax = esi + eax * 4 + 0x160;

loc_0014B95E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014B966u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014B966: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB069958) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB069958 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014B977; /* jne: not equal / not zero */

loc_0014B970: ;
    MEM8(edi + 0xEC) = 0;

loc_0014B977: ;
    PUSH32(esp, 0x7F);
    ecx = esi + 0x360;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8E2B546Eu);
    MEM32(edi + 0xAC) = 0;
    PUSH32(esp, 0x0014B994u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014B994: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B9A3; /* jge: greater or equal (signed >=) */

loc_0014B99B: ;
    eax = esi + 0x15C;
    goto loc_0014B9AA;

loc_0014B9A3: ;
    eax = esi + eax * 4 + 0x160;

loc_0014B9AA: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014B9B2u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014B9B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB069958) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB069958 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014B9C3; /* je: equal / zero */

loc_0014B9BC: ;
    MEM32(edi + 0xAC) = MEM32(edi + 0xAC) | 1;
    _fa = (uint32_t)(MEM32(edi + 0xAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0014B9C3: ;
    PUSH32(esp, 0x7F);
    edx = esi + 0x360;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4CF3CC5D);
    PUSH32(esp, 0x0014B9D6u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014B9D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014B9E5; /* jge: greater or equal (signed >=) */

loc_0014B9DD: ;
    eax = esi + 0x15C;
    goto loc_0014B9EC;

loc_0014B9E5: ;
    eax = esi + eax * 4 + 0x160;

loc_0014B9EC: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014B9F4u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014B9F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB069958) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB069958 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BA05; /* je: equal / zero */

loc_0014B9FE: ;
    MEM32(edi + 0xAC) = MEM32(edi + 0xAC) | 4;
    _fa = (uint32_t)(MEM32(edi + 0xAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0014BA05: ;
    PUSH32(esp, 0x7F);
    eax = esi + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, 0xEB5ADA7Du);
    PUSH32(esp, 0x0014BA18u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014BA18: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014BA27; /* jge: greater or equal (signed >=) */

loc_0014BA1F: ;
    eax = esi + 0x15C;
    goto loc_0014BA2E;

loc_0014BA27: ;
    eax = esi + eax * 4 + 0x160;

loc_0014BA2E: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014BA36u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014BA36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB069958) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB069958 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BA47; /* je: equal / zero */

loc_0014BA40: ;
    MEM32(edi + 0xAC) = MEM32(edi + 0xAC) | 8;
    _fa = (uint32_t)(MEM32(edi + 0xAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0014BA47: ;
    PUSH32(esp, 0x7F);
    ecx = esi + 0x360;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xD34988DCu);
    PUSH32(esp, 0x0014BA5Au); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014BA5A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014BA69; /* jge: greater or equal (signed >=) */

loc_0014BA61: ;
    eax = esi + 0x15C;
    goto loc_0014BA70;

loc_0014BA69: ;
    eax = esi + eax * 4 + 0x160;

loc_0014BA70: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014BA78u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014BA78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB069958) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB069958 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BA89; /* je: equal / zero */

loc_0014BA82: ;
    MEM32(edi + 0xAC) = MEM32(edi + 0xAC) | 2;
    _fa = (uint32_t)(MEM32(edi + 0xAC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0014BA89: ;
    PUSH32(esp, 0x7F);
    edx = esi + 0x360;
    PUSH32(esp, edx);
    PUSH32(esp, 0x1A1E8CE);
    PUSH32(esp, 0x0014BA9Cu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014BA9C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014BAAB; /* jge: greater or equal (signed >=) */

loc_0014BAA3: ;
    eax = esi + 0x15C;
    goto loc_0014BAB2;

loc_0014BAAB: ;
    eax = esi + eax * 4 + 0x160;

loc_0014BAB2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BAC9; /* je: equal / zero */

loc_0014BAB8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014BABEu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014BABE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xB0) = eax;
    goto loc_0014BAD3;

loc_0014BAC9: ;
    MEM32(edi + 0xB0) = 0x49E50DC8;

loc_0014BAD3: ;
    PUSH32(esp, 0x7F);
    eax = esi + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, 0x152526CB);
    MEM32(edi + 0xB4) = 0x52317D49;
    PUSH32(esp, 0x0014BAF0u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014BAF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014BAFF; /* jge: greater or equal (signed >=) */

loc_0014BAF7: ;
    eax = esi + 0x15C;
    goto loc_0014BB06;

loc_0014BAFF: ;
    eax = esi + eax * 4 + 0x160;

loc_0014BB06: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BB1B; /* je: equal / zero */

loc_0014BB0C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014BB12u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014BB12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xB4) = eax;

loc_0014BB1B: ;
    PUSH32(esp, 0x7F);
    ecx = esi + 0x360;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3049B38D);
    MEM32(edi + 0xB8) = 0x50317A23;
    PUSH32(esp, 0x0014BB38u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014BB38: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014BB47; /* jge: greater or equal (signed >=) */

loc_0014BB3F: ;
    eax = esi + 0x15C;
    goto loc_0014BB4E;

loc_0014BB47: ;
    eax = esi + eax * 4 + 0x160;

loc_0014BB4E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BB63; /* je: equal / zero */

loc_0014BB54: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014BB5Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014BB5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xB8) = eax;

loc_0014BB63: ;
    edx = edi + 0xCC;
    PUSH32(esp, edx);
    ecx = edi;
    MEM8(edi + 0x74) = 1;
    MEM32(edi + 0xC0) = edi;
    MEM32(edi + 0xD0) = edi;
    MEM32(edi + 0xDC) = edi;
    PUSH32(esp, 0x0014BB87u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0014BB87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014BB90
 * Original: 0x0014BB90 - 0x0014BE66 (726 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0014BB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014BB90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BBABu); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014BBAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0014BBBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014BBB9u); } /* indirect call */
    }

loc_0014BBBC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DD448); /* addss */
    edx = MEM32(esi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0014BBDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014BBD9u); } /* indirect call */
    }

loc_0014BBDC: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BBEAu); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_0014BBEA: ;
    xmm3 = XMM_SCALAR(MEMF(0x2E27C8)); /* movss */
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = MEM32(esp + 0x24);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x38) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    MEM32(esp + 0x40) = ecx;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    edx = esp + 0x50;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BC76u); RECOMP_ABI_CALL(0x0014B850u, sub_0014B850); /* call 0x0014B850 */

loc_0014BC76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BCB8; /* je: equal / zero */

loc_0014BC7A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0014BC84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014BC7Eu); } /* indirect call */
    }

loc_0014BC84: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x38;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x0014BCABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014BCA5u); } /* indirect call */
    }

loc_0014BCAB: ;
    PUSH32(esp, 0x45610000);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BCB8u); RECOMP_ABI_CALL(0x00065250u, sub_00065250); /* call 0x00065250 */

loc_0014BCB8: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x34); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E27C8)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = esp + 0x50;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BD37u); RECOMP_ABI_CALL(0x0014B850u, sub_0014B850); /* call 0x0014B850 */

loc_0014BD37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BD95; /* je: equal / zero */

loc_0014BD3B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0014BD45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014BD3Fu); } /* indirect call */
    }

loc_0014BD45: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x44;
    edi = eax;
    eax = MEM32(edi);
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    ecx = edi;
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x0014BD88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014BD82u); } /* indirect call */
    }

loc_0014BD88: ;
    PUSH32(esp, 0x45610000);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BD95u); RECOMP_ABI_CALL(0x00065250u, sub_00065250); /* call 0x00065250 */

loc_0014BD95: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E27C8); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = esp + 0x50;
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BDFBu); RECOMP_ABI_CALL(0x0014B850u, sub_0014B850); /* call 0x0014B850 */

loc_0014BDFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014BE5F; /* je: equal / zero */

loc_0014BDFF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0014BE09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014BE03u); } /* indirect call */
    }

loc_0014BE09: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    ecx = esp + 0x44;
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x44); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, esi);
    ecx = edi;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x0014BE52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014BE4Cu); } /* indirect call */
    }

loc_0014BE52: ;
    PUSH32(esp, 0x45610000);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014BE5Fu); RECOMP_ABI_CALL(0x00065250u, sub_00065250); /* call 0x00065250 */

loc_0014BE5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0014BE70
 * Original: 0x0014BE70 - 0x0014BE9B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BE70(void)
{

loc_0014BE70: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014BE85u); RECOMP_ABI_CALL(0x0014BB90u, sub_0014BB90); /* call 0x0014BB90 */

loc_0014BE85: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xB8);
    PUSH32(esp, ecx);
    ecx = 0x37DD10;
    PUSH32(esp, 0x0014BE99u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_0014BE99: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014BEA0
 * Original: 0x0014BEA0 - 0x0014C10E (622 bytes, 160 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014BEA0(void)
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

loc_0014BEA0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0014BEB2u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014BEB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = MEM32(edi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0014BEC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014BEC0u); } /* indirect call */
    }

loc_0014BEC3: ;
    edx = MEM32(edi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0014BECFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014BECCu); } /* indirect call */
    }

loc_0014BECF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014C0F6; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0014BEF6: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DBED0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014C027; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DBED0)) */

loc_0014BF03: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014C027; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0014BF1A: ;
    PUSH32(esp, 0x0014BF1Fu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0014BF1F: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC340)); /* fsub dword ptr [0x2dc340] */
    PUSH32(esp, 3);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3C4)); /* fmul dword ptr [0x2dc3c4] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0014BF3Bu); RECOMP_ABI_CALL(0x00011E90u, sub_00011E90); /* call 0x00011E90 */

loc_0014BF3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    PUSH32(esp, 0x0014BF45u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0014BF45: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC340)); /* fsub dword ptr [0x2dc340] */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC350)); /* fmul dword ptr [0x2dc350] */
    ecx = 0x30EFF0;
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0014BF64u); RECOMP_ABI_CALL(0x00011ED0u, sub_00011ED0); /* call 0x00011ED0 */

loc_0014BF64: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014BF73u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0014BF73: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0014BFE7; /* jne: not equal / not zero */

loc_0014BFCA: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x0014BFE5u); RECOMP_ABI_CALL(0x000161A0u, sub_000161A0); /* call 0x000161A0 */

loc_0014BFE5: ;
    goto loc_0014C024;

loc_0014BFE7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C009; /* jne: not equal / not zero */

loc_0014BFEC: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x0014C007u); RECOMP_ABI_CALL(0x000161F0u, sub_000161F0); /* call 0x000161F0 */

loc_0014C007: ;
    goto loc_0014C024;

loc_0014C009: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x0014C024u); RECOMP_ABI_CALL(0x00042640u, sub_00042640); /* call 0x00042640 */

loc_0014C024: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014C027: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC34C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014C105; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC34C)) */

loc_0014C039: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x0014C059u); RECOMP_ABI_CALL(0x00042640u, sub_00042640); /* call 0x00042640 */

loc_0014C059: ;
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x3C;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F1F9C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    MEM8(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x40) = 0xE;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0014C0DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C0D6u); } /* indirect call */
    }

loc_0014C0DC: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esi + 4);
    edx = ecx + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014C0EDu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0014C0ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014C0F6: ;
    ecx = MEM32(esi + 4);
    eax = ecx + 0xCC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C105u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0014C105: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C110
 * Original: 0x0014C110 - 0x0014C11B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C110: ;
    MEM32(ecx) = 0x2F1FBC;
    g_seh_ebp = ebp; sub_00149620(); return; /* tail jmp 0x00149620 */

}

/**
 * sub_0014C120
 * Original: 0x0014C120 - 0x0014C126 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C120(void)
{

loc_0014C120: ;
    eax = 0xD8;
    esp += 4; return; /* ret */

}

/**
 * sub_0014C130
 * Original: 0x0014C130 - 0x0014C158 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C130: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C142; /* je: equal / zero */

loc_0014C13D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0014C142u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C13Fu); } /* indirect call */
    }

loc_0014C142: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xC8) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014C155; /* je: equal / zero */

loc_0014C151: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0014C155u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C153u); } /* indirect call */
    }

loc_0014C155: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C160
 * Original: 0x0014C160 - 0x0014C174 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C160(void)
{

loc_0014C160: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ecx + 4);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0014C180
 * Original: 0x0014C180 - 0x0014C209 (137 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0014C180: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0014C190u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014C190: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014C19Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C19Cu); } /* indirect call */
    }

loc_0014C19F: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM8(edx + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0xD0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C1FA; /* jne: not equal / not zero */

loc_0014C1AB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014C202; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0014C1C4: ;
    PUSH32(esp, 0xB47EC09Au);
    PUSH32(esp, 0);
    ecx = 0x361B90;
    PUSH32(esp, 0x0014C1D5u); RECOMP_ABI_CALL(0x00108F00u, sub_00108F00); /* call 0x00108F00 */

loc_0014C1D5: ;
    PUSH32(esp, 0x200000FF);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014C1E4u); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_0014C1E4: ;
    ecx = MEM32(esi + 4);
    eax = ecx + 0xAC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C1F3u); RECOMP_ABI_CALL(0x0014C130u, sub_0014C130); /* call 0x0014C130 */

loc_0014C1F3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014C1FA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_0014C202: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C210
 * Original: 0x0014C210 - 0x0014C21E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C210(void)
{

loc_0014C210: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0014C220
 * Original: 0x0014C220 - 0x0014C226 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C220(void)
{

loc_0014C220: ;
    eax = MEM32(0x30E9BC);
    esp += 4; return; /* ret */

}

/**
 * sub_0014C230
 * Original: 0x0014C230 - 0x0014C28D (93 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C230: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014C238u); RECOMP_ABI_CALL(0x001495D0u, sub_001495D0); /* call 0x001495D0 */

loc_0014C238: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2F1FBC;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xAC) = 0x2F1FB0;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xBC) = 0x2F1FA4;
    MEM32(esi + 0xC8) = eax;
    MEM8(esi + 0xD0) = LO8(eax);
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014C290
 * Original: 0x0014C290 - 0x0014C2AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014C298u); RECOMP_ABI_CALL(0x0014C110u, sub_0014C110); /* call 0x0014C110 */

loc_0014C298: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014C2A8; /* je: equal / zero */

loc_0014C29F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014C2A5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014C2A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014C2A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C2B0
 * Original: 0x0014C2B0 - 0x0014C2E2 (50 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C2B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0014C2BEu); RECOMP_ABI_CALL(0x00149690u, sub_00149690); /* call 0x00149690 */

loc_0014C2BE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0014C2D6; /* jne: not equal / not zero */

loc_0014C2C5: ;
    eax = esi + 0xBC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C2D1u); RECOMP_ABI_CALL(0x0014C130u, sub_0014C130); /* call 0x0014C130 */

loc_0014C2D1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0014C2D6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014C2DDu); RECOMP_ABI_CALL(0x0014C130u, sub_0014C130); /* call 0x0014C130 */

loc_0014C2DD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C2F0
 * Original: 0x0014C2F0 - 0x0014C380 (144 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C2F0(void)
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

loc_0014C2F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0014C2FEu); RECOMP_ABI_CALL(0x0014AB30u, sub_0014AB30); /* call 0x0014AB30 */

loc_0014C2FE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    PUSH32(esp, 0x7F);
    eax = edi + 0x360;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5084EC02);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014C31Fu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014C31F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C32E; /* jge: greater or equal (signed >=) */

loc_0014C326: ;
    eax = edi + 0x15C;
    goto loc_0014C335;

loc_0014C32E: ;
    eax = edi + eax * 4 + 0x160;

loc_0014C335: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C348; /* je: equal / zero */

loc_0014C33B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C341u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0014C341: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014C348: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = esi + 0xBC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xB0) = esi;
    MEM32(esi + 0xC0) = esi;
    PUSH32(esp, 0x0014C370u); RECOMP_ABI_CALL(0x0014C130u, sub_0014C130); /* call 0x0014C130 */

loc_0014C370: ;
    POP32(esp, edi);
    MEM8(esi + 0xD0) = 0;
    MEM8(esi + 0x74) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C380
 * Original: 0x0014C380 - 0x0014C4B5 (309 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C380(void)
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

loc_0014C380: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C4AE; /* je: equal / zero */

loc_0014C390: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xCC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x3C); /* mulss */
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0014C3B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C3ABu); } /* indirect call */
    }

loc_0014C3B1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C3D3; /* je: equal / zero */

loc_0014C3B7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0014C3BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C3BBu); } /* indirect call */
    }

loc_0014C3BD: ;
    edx = MEM32(0x30D994);
    ecx = MEM32(0x30D990);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C3D3; /* jne: not equal / not zero */

loc_0014C3CF: ;
    edi = esi;
    goto loc_0014C3D5;

loc_0014C3D3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014C3D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C3F5; /* je: equal / zero */

loc_0014C3D9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0014C3DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C3DDu); } /* indirect call */
    }

loc_0014C3DF: ;
    edx = MEM32(0x30DA48);
    ecx = MEM32(0x30DA44);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C3F5; /* jne: not equal / not zero */

loc_0014C3F1: ;
    ecx = esi;
    goto loc_0014C3F7;

loc_0014C3F5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014C3F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C404; /* je: equal / zero */

loc_0014C3FB: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0014C402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C3FFu); } /* indirect call */
    }

loc_0014C402: ;
    goto loc_0014C40D;

loc_0014C404: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C42B; /* je: equal / zero */

loc_0014C408: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0014C40Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C40Au); } /* indirect call */
    }

loc_0014C40D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C42B; /* je: equal / zero */

loc_0014C411: ;
    ecx = MEM32(esp + 0x48);
    eax = MEM32(eax + 0x150);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x13);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C424u); RECOMP_ABI_CALL(0x0015EB30u, sub_0015EB30); /* call 0x0015EB30 */

loc_0014C424: ;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014C42B: ;
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    edx = MEM32(ebp);
    eax = esp + 0xC;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEM8(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x10) = 0x13;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0014C4AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C4A4u); } /* indirect call */
    }

loc_0014C4AA: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    POP32(esp, esi);

loc_0014C4AE: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014C4C0
 * Original: 0x0014C4C0 - 0x0014C616 (342 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C4C0(void)
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

loc_0014C4C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0014C4D2u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014C4D2: ;
    PUSH32(esp, 0x660E4490);
    edi = eax;
    PUSH32(esp, 0x0014C4DEu); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_0014C4DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    ebx = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0014C4EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C4ECu); } /* indirect call */
    }

loc_0014C4EF: ;
    edx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(edx + 0xD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C559; /* jne: not equal / not zero */

loc_0014C4FC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014C60D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0014C521: ;
    PUSH32(esp, 0xBCE1274Eu);
    PUSH32(esp, 0);
    ecx = 0x361B90;
    PUSH32(esp, 0x0014C532u); RECOMP_ABI_CALL(0x00108F00u, sub_00108F00); /* call 0x00108F00 */

loc_0014C532: ;
    PUSH32(esp, 0x50808080);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014C541u); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_0014C541: ;
    ecx = MEM32(esi + 4);
    eax = ecx + 0xBC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C550u); RECOMP_ABI_CALL(0x0014C130u, sub_0014C130); /* call 0x0014C130 */

loc_0014C550: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014C559: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0014C578u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C575u); } /* indirect call */
    }

loc_0014C578: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C5A7; /* je: equal / zero */

loc_0014C57D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C5B5; /* je: equal / zero */

loc_0014C581: ;
    ecx = MEM32(ebx + 0x98);
    edx = MEM32(ebx);
    MEM32(esp + 0xC) = ecx;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x0014C595u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C58Fu); } /* indirect call */
    }

loc_0014C595: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) / fp_top()); /* fdivr dword ptr [esp + 0xc] */
    fp_push(MEMF(0x2E39F8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0014C5B5; /* jbe: below or equal (unsigned <=) */

loc_0014C5A7: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C5B5u); RECOMP_ABI_CALL(0x0014C380u, sub_0014C380); /* call 0x0014C380 */

loc_0014C5B5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014C60D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_0014C5C3: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xD4); /* addss */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xD4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2F1FA0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014C60D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2F1FA0)) */

loc_0014C5F0: ;
    PUSH32(esp, 0xFA3D3142u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014C5FCu); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_0014C5FC: ;
    edx = MEM32(esi + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0xD4) = xmm0.f[0]; /* movss */

loc_0014C60D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_0014C620
 * Original: 0x0014C620 - 0x0014C68F (111 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C620: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0014C630u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C62Du); } /* indirect call */
    }

loc_0014C630: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C687; /* je: equal / zero */

loc_0014C636: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014C642u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C63Fu); } /* indirect call */
    }

loc_0014C642: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0014C64Eu); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_0014C64E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C687; /* jne: not equal / not zero */

loc_0014C652: ;
    eax = MEM32(esi + 0x768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C67A; /* je: equal / zero */

loc_0014C65C: ;
    _fa = (uint32_t)(MEM32(eax + 0x118)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x118), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C687; /* jne: not equal / not zero */

loc_0014C665: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0014C672u); RECOMP_ABI_CALL(0x0014C380u, sub_0014C380); /* call 0x0014C380 */

loc_0014C672: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014C67A: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0014C687u); RECOMP_ABI_CALL(0x0014C380u, sub_0014C380); /* call 0x0014C380 */

loc_0014C687: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014C690
 * Original: 0x0014C690 - 0x0014C6DD (77 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C690: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x322C50);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014C6B8; /* je: equal / zero */

loc_0014C6A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0014C6AFu); RECOMP_ABI_CALL(0x0014C620u, sub_0014C620); /* call 0x0014C620 */

loc_0014C6AF: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C6A6; /* jne: not equal / not zero */

loc_0014C6B8: ;
    esi = MEM32(0x322BC8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C6D7; /* je: equal / zero */

loc_0014C6C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0014C6CEu); RECOMP_ABI_CALL(0x0014C620u, sub_0014C620); /* call 0x0014C620 */

loc_0014C6CE: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C6C5; /* jne: not equal / not zero */

loc_0014C6D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C6E0
 * Original: 0x0014C6E0 - 0x0014C784 (164 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C6E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0014C6F1u); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_0014C6F1: ;
    ecx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C701; /* je: equal / zero */

loc_0014C6FB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014C701u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C6FEu); } /* indirect call */
    }

loc_0014C701: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014C709u); RECOMP_ABI_CALL(0x0014C690u, sub_0014C690); /* call 0x0014C690 */

loc_0014C709: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0014C713u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014C713: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C77C; /* je: equal / zero */

loc_0014C71A: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014C726u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C723u); } /* indirect call */
    }

loc_0014C726: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0014C732u); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_0014C732: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0xD0));
    if (CMP_EQ(_fa, _fb)) goto loc_0014C760; /* je: equal / zero */

loc_0014C73C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C77C; /* jne: not equal / not zero */

loc_0014C740: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 1);
    MEM8(esi + 0xD0) = 1;
    ecx = MEM32(0x3FF730);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C758u); RECOMP_ABI_CALL(0x0016FB00u, sub_0016FB00); /* call 0x0016FB00 */

loc_0014C758: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014C760: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C77C; /* je: equal / zero */

loc_0014C764: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(esi + 0xD0) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3FF730);
    PUSH32(esp, 0x0014C77Cu); RECOMP_ABI_CALL(0x0016FB00u, sub_0016FB00); /* call 0x0016FB00 */

loc_0014C77C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C790
 * Original: 0x0014C790 - 0x0014C79D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C790(void)
{

loc_0014C790: ;
    PUSH32(esp, 0);
    ecx = 0x37A8D8;
    PUSH32(esp, 0x0014C79Cu); RECOMP_ABI_CALL(0x002096E0u, sub_002096E0); /* call 0x002096E0 */

loc_0014C79C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014C7A0
 * Original: 0x0014C7A0 - 0x0014C7D6 (54 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014C7B0u); RECOMP_ABI_CALL(0x0020A2B0u, sub_0020A2B0); /* call 0x0020A2B0 */

loc_0014C7B0: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0x64);
    if (CMP_EQ(_fa, _fb)) goto loc_0014C7C4; /* je: equal / zero */

loc_0014C7BA: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014C7C2u); RECOMP_ABI_CALL(0x0020AE90u, sub_0020AE90); /* call 0x0020AE90 */

loc_0014C7C2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014C7C4: ;
    edx = MEM32(esi + 0x6C);
    eax = MEM32(esi + 0x68);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014C7D4u); RECOMP_ABI_CALL(0x0020A4B0u, sub_0020A4B0); /* call 0x0020A4B0 */

loc_0014C7D4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014C7E0
 * Original: 0x0014C7E0 - 0x0014C869 (137 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C7E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014C865; /* je: equal / zero */

loc_0014C7EB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    ebx = esi + 0x208;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C7FBu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014C7FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014C864; /* jl: less (signed <) */

loc_0014C802: ;
    MEM32(esi + eax * 4 + 0x208) = 0;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = eax + 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 0x7F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014C863; /* je: equal / zero */

loc_0014C824: ;
    eax = MEM32(esi + edi * 4 + 0x208);
    MEM32(esi + edi * 4 + 0x208) = 0;
    ecx = MEM32(esi);
    PUSH32(esp, 0x7F);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x0014C844u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0014C844: ;
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
    edi = edi & 0x7F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014C824; /* jne: not equal / not zero */

loc_0014C863: ;
    POP32(esp, edi);

loc_0014C864: ;
    POP32(esp, ebx);

loc_0014C865: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
