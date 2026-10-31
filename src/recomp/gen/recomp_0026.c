/**
 * Mercenaries - Recompiled code chunk 26
 * Functions: 250 (0x00154810 - 0x001602C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00154810
 * Original: 0x00154810 - 0x00154837 (39 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154810: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 8) = 1;
    MEM8(ecx + 0xC) = 0;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    ecx = 0x35C940;
    g_seh_ebp = ebp; sub_000F0360(); return; /* tail jmp 0x000F0360 */

}

/**
 * sub_00154840
 * Original: 0x00154840 - 0x00154851 (17 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154840: ;
    MEM8(0x35CA24) = 0;
    ecx = 0x35C940;
    g_seh_ebp = ebp; sub_000F03D0(); return; /* tail jmp 0x000F03D0 */

}

/**
 * sub_00154860
 * Original: 0x00154860 - 0x001548BF (95 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00154860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154860: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCF0A7ED5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0xCF0A7ED5u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001548BA; /* jne: not equal / not zero */

loc_0015486A: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154879; /* jne: not equal / not zero */

loc_00154871: ;
    eax = 0xEF01AF58u;
    esp += 8; return; /* ret 4 */

loc_00154879: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154886; /* jne: not equal / not zero */

loc_0015487E: ;
    eax = 0xC301CF93u;
    esp += 8; return; /* ret 4 */

loc_00154886: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154893; /* jne: not equal / not zero */

loc_0015488B: ;
    eax = 0xD90BDE50u;
    esp += 8; return; /* ret 4 */

loc_00154893: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001548A0; /* jne: not equal / not zero */

loc_00154898: ;
    eax = 0xCE164093u;
    esp += 8; return; /* ret 4 */

loc_001548A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001548AD; /* jne: not equal / not zero */

loc_001548A5: ;
    eax = 0xDDDDA5A3u;
    esp += 8; return; /* ret 4 */

loc_001548AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001548BA; /* jne: not equal / not zero */

loc_001548B2: ;
    eax = 0x357DA4F3;
    esp += 8; return; /* ret 4 */

loc_001548BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001548C0
 * Original: 0x001548C0 - 0x001548EE (46 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001548C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001548C0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF19C818Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF19C818Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001548E0; /* je: equal / zero */

loc_001548CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF29C831Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF29C831Du (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001548EB; /* jne: not equal / not zero */

loc_001548D2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_001548E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */

loc_001548EB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001548F0
 * Original: 0x001548F0 - 0x00154936 (70 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001548F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001548F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x441524D6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x441524D6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015491D; /* je: equal / zero */

loc_001548FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0D02D99u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD0D02D99u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154913; /* je: equal / zero */

loc_00154902: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD56BBB65u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD56BBB65u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154910; /* jne: not equal / not zero */

loc_00154909: ;
    MEM32(ecx + 8) = 1;

loc_00154910: ;
    esp += 8; return; /* ret 4 */

loc_00154913: ;
    MEM32(ecx + 8) = 4;
    esp += 8; return; /* ret 4 */

loc_0015491D: ;
    MEM32(ecx + 8) = 1;
    MEM32(esp + 4) = 2;
    ecx = 0x35CDC8;
    g_seh_ebp = ebp; sub_000FAB50(); return; /* tail jmp 0x000FAB50 */

}

/**
 * sub_00154940
 * Original: 0x00154940 - 0x0015498F (79 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154940: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x660E4490);
    MEM32(esi + 8) = 0;
    MEM8(esi + 0xC) = 0;
    PUSH32(esp, 0x0015495Bu); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_0015495B: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0015496Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154967u); } /* indirect call */
    }

loc_0015496A: ;
    edx = MEM32(eax);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x18) = edx;
    MEM8(0x3BE240) = 0;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00154990
 * Original: 0x00154990 - 0x00154998 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154990(void)
{

loc_00154990: ;
    MEM8(0x3BE240) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001549A0
 * Original: 0x001549A0 - 0x001549C8 (40 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001549A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001549A0: ;
    eax = MEM32(esp + 4);
    edx = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001549C5; /* jne: not equal / not zero */

loc_001549A9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001549C0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_001549B8: ;
    SET_LO8(edx, 1);
    MEM8(ecx + 0xC) = LO8(edx);
    esp += 12; return; /* ret 8 */

loc_001549C0: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0xC) = LO8(edx);

loc_001549C5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001549D0
 * Original: 0x001549D0 - 0x00154A22 (82 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001549D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001549D0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCF0A7ED5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0xCF0A7ED5u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154A1D; /* jne: not equal / not zero */

loc_001549DA: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001549E9; /* jne: not equal / not zero */

loc_001549E1: ;
    eax = 0xEF01AF58u;
    esp += 8; return; /* ret 4 */

loc_001549E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001549F6; /* jne: not equal / not zero */

loc_001549EE: ;
    eax = 0xCE164093u;
    esp += 8; return; /* ret 4 */

loc_001549F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154A03; /* jne: not equal / not zero */

loc_001549FB: ;
    eax = 0x7D1B23B6;
    esp += 8; return; /* ret 4 */

loc_00154A03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154A10; /* jne: not equal / not zero */

loc_00154A08: ;
    eax = 0xD90BDE50u;
    esp += 8; return; /* ret 4 */

loc_00154A10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154A1D; /* jne: not equal / not zero */

loc_00154A15: ;
    eax = 0x357DA4F3;
    esp += 8; return; /* ret 4 */

loc_00154A1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154A30
 * Original: 0x00154A30 - 0x00154A57 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154A30(void)
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

loc_00154A30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B66F78F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B66F78F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154A51; /* je: equal / zero */

loc_00154A3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x748B9B9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x748B9B9D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154A4B; /* je: equal / zero */

loc_00154A42: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00154A4B: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00154A51: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00154A60
 * Original: 0x00154A60 - 0x00154AA7 (71 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154A60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x441524D6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x441524D6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154A95; /* je: equal / zero */

loc_00154A6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0D02D99u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD0D02D99u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154A8B; /* je: equal / zero */

loc_00154A72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD56BBB65u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD56BBB65u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154A88; /* jne: not equal / not zero */

loc_00154A79: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 8) = 0;
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */

loc_00154A88: ;
    esp += 8; return; /* ret 4 */

loc_00154A8B: ;
    MEM32(ecx + 8) = 1;
    esp += 8; return; /* ret 4 */

loc_00154A95: ;
    MEM32(esp + 4) = 3;
    ecx = 0x35CDC8;
    g_seh_ebp = ebp; sub_000FAB50(); return; /* tail jmp 0x000FAB50 */

}

/**
 * sub_00154AB0
 * Original: 0x00154AB0 - 0x00154AF2 (66 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154AB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x58) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00154B00
 * Original: 0x00154B00 - 0x00154B7D (125 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154B00: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE820FBCCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE820FBCCu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00154B4A; /* ja: above (unsigned >) */

loc_00154B0B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00154B40; /* je: equal / zero */

loc_00154B0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE520F713u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE520F713u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154B36; /* je: equal / zero */

loc_00154B14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE620F8A6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE620F8A6u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154B2C; /* je: equal / zero */

loc_00154B1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE720FA39u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE720FA39u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154B7A; /* jne: not equal / not zero */

loc_00154B22: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 12; return; /* ret 8 */

loc_00154B2C: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x38) = edx;
    esp += 12; return; /* ret 8 */

loc_00154B36: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3C) = eax;
    esp += 12; return; /* ret 8 */

loc_00154B40: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x30) = edx;
    esp += 12; return; /* ret 8 */

loc_00154B4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE920FD5Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE920FD5Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154B73; /* je: equal / zero */

loc_00154B51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEA20FEF2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEA20FEF2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154B69; /* je: equal / zero */

loc_00154B58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEB210085u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEB210085u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154B7A; /* jne: not equal / not zero */

loc_00154B5F: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 12; return; /* ret 8 */

loc_00154B69: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x28) = edx;
    esp += 12; return; /* ret 8 */

loc_00154B73: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;

loc_00154B7A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154B80
 * Original: 0x00154B80 - 0x00154BFD (125 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154B80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63633D41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63633D41 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00154BCA; /* ja: above (unsigned >) */

loc_00154B8B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00154BC0; /* je: equal / zero */

loc_00154B8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC08C7FD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC08C7FD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154BB6; /* je: equal / zero */

loc_00154B94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55C20807) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x55C20807 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154BAC; /* je: equal / zero */

loc_00154B9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6226FA86) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6226FA86 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154BFA; /* jne: not equal / not zero */

loc_00154BA2: ;
    MEM32(ecx + 0x44) = 1;
    esp += 8; return; /* ret 4 */

loc_00154BAC: ;
    MEM32(ecx + 0x48) = 1;
    esp += 8; return; /* ret 4 */

loc_00154BB6: ;
    MEM32(ecx + 0x40) = 1;
    esp += 8; return; /* ret 4 */

loc_00154BC0: ;
    MEM32(ecx + 0x50) = 1;
    esp += 8; return; /* ret 4 */

loc_00154BCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C00C19B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C00C19B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154BF3; /* je: equal / zero */

loc_00154BD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9127B6A0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9127B6A0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154BE9; /* je: equal / zero */

loc_00154BD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF29510FAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF29510FAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154BFA; /* jne: not equal / not zero */

loc_00154BDF: ;
    MEM32(ecx + 0x54) = 1;
    esp += 8; return; /* ret 4 */

loc_00154BE9: ;
    MEM32(ecx + 0x4C) = 1;
    esp += 8; return; /* ret 4 */

loc_00154BF3: ;
    MEM32(ecx + 0x58) = 1;

loc_00154BFA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154C00
 * Original: 0x00154C00 - 0x00154C37 (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00154C00: ;
    eax = MEM32(esp + 4);
    edx = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00154C34; /* jne: not equal / not zero */

loc_00154C09: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00154C29; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00154C18: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x5C);
    edx = 1;
    MEM32(ecx + esi * 4 + 0x40) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00154C29: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x5C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + esi * 4 + 0x40) = edx;
    POP32(esp, esi);

loc_00154C34: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154C40
 * Original: 0x00154C40 - 0x00154C75 (53 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154C40: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154C5D; /* je: equal / zero */

loc_00154C47: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00154C57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154C51u); } /* indirect call */
    }

loc_00154C57: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00154C5D: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154C80
 * Original: 0x00154C80 - 0x00154CA2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00154C80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154C9F; /* jne: not equal / not zero */

loc_00154C89: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00154C9F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00154C98: ;
    MEM32(ecx + 0x30) = 0;

loc_00154C9F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154CB0
 * Original: 0x00154CB0 - 0x00154CC2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154CB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00154CD0
 * Original: 0x00154CD0 - 0x00154CD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154CD0(void)
{

loc_00154CD0: ;
    eax = ecx + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154CE0
 * Original: 0x00154CE0 - 0x00154D32 (82 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154CE0: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154D03; /* je: equal / zero */

loc_00154CEA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = esp;
    goto loc_00154D12;

loc_00154D03: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00154D12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154D0Cu); } /* indirect call */
    }

loc_00154D12: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = ecx;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154D40
 * Original: 0x00154D40 - 0x00154D7B (59 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00154D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154D40: ;
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
    PUSH32(esp, 0x00154D57u); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_00154D57: ;
    ebx = MEM32(esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D65u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00154D65: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x30); PUSH32(esp, 0x00154D6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154D68u); } /* indirect call */
    }

loc_00154D6B: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D72u); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_00154D72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154D80
 * Original: 0x00154D80 - 0x00154DBA (58 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154D80: ;
    _fa = (uint32_t)(MEM32(ecx + 0x180)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x180), 1 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00154DAA; /* jne: not equal / not zero */

loc_00154D8A: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x174;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00154DAA: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00154DB4u); RECOMP_ABI_CALL(0x001EA400u, sub_001EA400); /* call 0x001EA400 */

loc_00154DB4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154DC0
 * Original: 0x00154DC0 - 0x00154DC9 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154DC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00154DC0: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00154DD0
 * Original: 0x00154DD0 - 0x00154E16 (70 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154DD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00154DDEu); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_00154DDE: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154E0F; /* je: equal / zero */

loc_00154DE7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00154DEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154DEBu); } /* indirect call */
    }

loc_00154DEE: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154E0F; /* jne: not equal / not zero */

loc_00154E00: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x00154E0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154E04u); } /* indirect call */
    }

loc_00154E0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00154E0F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154E20
 * Original: 0x00154E20 - 0x00154E39 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00154E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154E20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154E34; /* jne: not equal / not zero */

loc_00154E28: ;
    eax = MEM32(ecx + 0x10);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00154DD0(); return; /* tail jmp 0x00154DD0 */

loc_00154E34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154E40
 * Original: 0x00154E40 - 0x00154E8E (78 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154E40: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00154E75; /* jne: not equal / not zero */

loc_00154E4B: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154E54u); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00154E54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154E75; /* je: equal / zero */

loc_00154E58: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00154E63u); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00154E63: ;
    esi = MEM32(esp + 8);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00154E6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154E6Cu); } /* indirect call */
    }

loc_00154E6F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00154E75: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154E90
 * Original: 0x00154E90 - 0x00154EA0 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00154E90: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154E99u); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00154E99: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_00154EA0
 * Original: 0x00154EA0 - 0x00154F65 (197 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154EA0(void)
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

loc_00154EA0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00154F3D; /* jle: less or equal (signed <=) */

loc_00154EAD: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x00154EB5u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_00154EB5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00154EBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154EB9u); } /* indirect call */
    }

loc_00154EBC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x210); PUSH32(esp, 0x00154EC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154EC0u); } /* indirect call */
    }

loc_00154EC6: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3EAAAAAB);
    PUSH32(esp, 0x3F000000);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00154EE5u); RECOMP_ABI_CALL(0x000981A0u, sub_000981A0); /* call 0x000981A0 */

loc_00154EE5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154F3D; /* je: equal / zero */

loc_00154EEB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00154EF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154EEFu); } /* indirect call */
    }

loc_00154EF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154F3D; /* je: equal / zero */

loc_00154EF9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x00154F03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154EFDu); } /* indirect call */
    }

loc_00154F03: ;
    ecx = MEM32(eax + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154F3D; /* je: equal / zero */

loc_00154F0A: ;
    ecx = esi;
    PUSH32(esp, 0x00154F11u); RECOMP_ABI_CALL(0x00015000u, sub_00015000); /* call 0x00015000 */

loc_00154F11: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154F3D; /* je: equal / zero */

loc_00154F15: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00154F3D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00154F26: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00154F30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154F2Au); } /* indirect call */
    }

loc_00154F30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154F43; /* je: equal / zero */

loc_00154F34: ;
    _fa = (uint32_t)(MEM32(eax + 0x4A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4A4), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154F4C; /* jne: not equal / not zero */

loc_00154F3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00154F43: ;
    _fa = (uint32_t)(MEM32(esi + 0xF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF4), 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154F3D; /* je: equal / zero */

loc_00154F4C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x00154F56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154F50u); } /* indirect call */
    }

loc_00154F56: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00154F70
 * Original: 0x00154F70 - 0x00154F9C (44 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154F70: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x2F22C0;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154FA0
 * Original: 0x00154FA0 - 0x00154FBE (30 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154FA0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154FC0
 * Original: 0x00154FC0 - 0x00155029 (105 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00154FC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fa != 0)) goto loc_00155022; /* jne: not equal / not zero */

loc_00154FCD: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x00154FD7u); RECOMP_ABI_CALL(0x000976C0u, sub_000976C0); /* call 0x000976C0 */

loc_00154FD7: ;
    xmm0 = XMM_SCALAR(MEMF(0x414138)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD6D0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x414134)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00154FF8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00154FF4: ;
    SET_LO8(ecx, 1);
    goto loc_00154FFA;

loc_00154FF8: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00154FFA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155002; /* je: equal / zero */

loc_00154FFE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155022; /* jne: not equal / not zero */

loc_00155002: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015501D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00155011: ;
    SET_LO8(eax, 1);
    MEM8(edi + 0xC) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0015501D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi + 0xC) = LO8(eax);

loc_00155022: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00155030
 * Original: 0x00155030 - 0x0015506B (59 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x38;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x2E64D8;
    PUSH32(esp, 0x00155048u); RECOMP_ABI_CALL(0x00153A10u, sub_00153A10); /* call 0x00153A10 */

loc_00155048: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM8(esi + 0xC) = LO8(eax);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x34) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155070
 * Original: 0x00155070 - 0x001550D7 (103 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155070: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6438E0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0xEDB4F7D0u);
    ecx = 0x4031B0;
    PUSH32(esp, 0x0015508Eu); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0015508E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001550AD; /* je: equal / zero */

loc_00155094: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0015509Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155098u); } /* indirect call */
    }

loc_0015509B: ;
    edx = MEM32(0x30E9E8);
    ecx = MEM32(0x30E9E4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001550AF; /* je: equal / zero */

loc_001550AD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001550AF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x94) = edi;
    POP32(esp, edi);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001550E0
 * Original: 0x001550E0 - 0x00155102 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001550E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001550E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001550F6; /* je: equal / zero */

loc_001550EA: ;
    PUSH32(esp, 0x001550EFu); RECOMP_ABI_CALL(0x00030E40u, sub_00030E40); /* call 0x00030E40 */

loc_001550EF: ;
    MEM32(esi + 0x34) = 0;

loc_001550F6: ;
    MEM32(esi + 0x94) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00155110
 * Original: 0x00155110 - 0x001554D5 (965 bytes, 263 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155110(void)
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

loc_00155110: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00155133u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_00155133: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0015513Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155137u); } /* indirect call */
    }

loc_0015513A: ;
    ebp = eax;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x00155147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155141u); } /* indirect call */
    }

loc_00155147: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001552C2; /* je: equal / zero */

loc_0015514F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00155159u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155153u); } /* indirect call */
    }

loc_00155159: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001552C2; /* je: equal / zero */

loc_00155163: ;
    ecx = edi;
    PUSH32(esp, 0x0015516Au); RECOMP_ABI_CALL(0x00032460u, sub_00032460); /* call 0x00032460 */

loc_0015516A: ;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00155176u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_00155176: ;
    edx = MEM32(eax);
    ebx = MEM32(edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0015517Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015517Cu); } /* indirect call */
    }

loc_0015517F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x1C4); PUSH32(esp, 0x00155188u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155182u); } /* indirect call */
    }

loc_00155188: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001552C8; /* je: equal / zero */

loc_00155194: ;
    SET_LO8(ebx, 1);

loc_00155196: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001552E8; /* je: equal / zero */

loc_001551A1: ;
    SET_LO8(eax, MEM8(ebp + 0xA88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001552E8; /* jne: not equal / not zero */

loc_001551AF: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    ecx = 0x4140E8;
    MEM8(0x3BE240) = 1;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001551CEu); RECOMP_ABI_CALL(0x00097690u, sub_00097690); /* call 0x00097690 */

loc_001551CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001551E0; /* je: equal / zero */

loc_001551D2: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DDA48)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_001551E0: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x43C80000);
    PUSH32(esp, 0);
    eax = esp + 0x1B;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F000000);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00155207u); RECOMP_ABI_CALL(0x00097F00u, sub_00097F00); /* call 0x00097F00 */

loc_00155207: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00155225; /* jne: not equal / not zero */

loc_0015520F: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015521Eu); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_0015521E: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00155225: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(0x3BE248) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(0x3BE244) = xmm0.f[0]; /* movss */
    MEMF(0x3BE24C) = xmm1.f[0]; /* movss */
    eax = esi + 0x10;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3BE248)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3BE24C)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00155279u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155276u); } /* indirect call */
    }

loc_00155279: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015528D; /* je: equal / zero */

loc_0015527D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_0015528D: ;
    SET_LO8(eax, MEM8(0x3BE240));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001552A5; /* jne: not equal / not zero */

loc_00155296: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001552A5; /* jne: not equal / not zero */

loc_0015529D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_001552A5: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM8(eax + 0x2A1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2A1), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001552F1; /* jne: not equal / not zero */

loc_001552B1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esi + 8) = 4;
    goto loc_0015530D;

loc_001552C2: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edi;

loc_001552C8: ;
    eax = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00155196; /* je: equal / zero */

loc_001552D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00155196; /* je: equal / zero */

loc_001552DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00155196; /* je: equal / zero */

loc_001552E8: ;
    MEM8(0x3BE240) = 0;
    goto loc_00155296;

loc_001552F1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC3F0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015530D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC3F0)) */

loc_001552FF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015530D; /* jne: not equal / not zero */

loc_00155306: ;
    MEM32(esi + 8) = 2;

loc_0015530D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00155338; /* je: equal / zero */

loc_00155311: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00155318u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155315u); } /* indirect call */
    }

loc_00155318: ;
    ebp = MEM32(0x30C144);
    ebx = MEM32(0x30C140);
    edi = eax;
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    edi = edi & ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ebx));
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ~edi;
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0015533A;

loc_00155338: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015533A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001554C7; /* je: equal / zero */

loc_00155342: ;
    eax = MEM32(edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0015534Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015534Bu); } /* indirect call */
    }

loc_0015534E: ;
    fp_push(MEMF(0x3BE244)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    xmm5 = XMM_SCALAR(MEMF(0x2DC3F4)); /* movss */
    _fca = xmm5.f[0]; _fcb = MEMF(edi + 0x22C); /* comiss */
    fp_push(MEMF(0x3BE24C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155417; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs MEMF(edi + 0x22C)) */

loc_0015538E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155417; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0015539B: ;
    SET_LO8(eax, MEM8(0x3BE240));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00155417; /* je: equal / zero */

loc_001553A4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155402; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001553B6: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx);
    ebx = MEM32(edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x001553C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001553C2u); } /* indirect call */
    }

loc_001553C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x64); PUSH32(esp, 0x001553CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001553CBu); } /* indirect call */
    }

loc_001553CE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x70F7A8F7);
    PUSH32(esp, 0);
    MEMF(edi + 0x224) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001553E5u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_001553E5: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2DC3F4)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 3;
    goto loc_0015541F;

loc_00155402: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x2C); /* addss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    goto loc_00155427;

loc_00155417: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x2C) = xmm4.f[0]; /* movss */

loc_0015541F: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */

loc_00155427: ;
    _fca = xmm2.f[0]; _fcb = MEMF(esi + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155434; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(esi + 0x30)) */

loc_0015542D: ;
    MEMF(esi + 0x30) = xmm2.f[0]; /* movss */
    goto loc_00155461;

loc_00155434: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DDC40)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC090); /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155459; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_0015544C: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015545C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00155459: ;
    xmm0 = xmm3; /* movaps */

loc_0015545C: ;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */

loc_00155461: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x22C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x230)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155487; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00155482: ;
    xmm3 = xmm4; /* movaps */
    goto loc_00155492;

loc_00155487: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_00155492; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0015548F: ;
    xmm3 = xmm0; /* movaps */

loc_00155492: ;
    xmm2.f[0] = xmm2.f[0] / MEMF(esi + 0x30); /* divss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001554AD; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_001554A8: ;
    xmm2 = xmm4; /* movaps */
    goto loc_001554B5;

loc_001554AD: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001554B5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_001554B2: ;
    xmm2 = xmm1; /* movaps */

loc_001554B5: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */

loc_001554C7: ;
    POP32(esp, edi);
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
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
 * sub_001554E0
 * Original: 0x001554E0 - 0x00155536 (86 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001554E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001554E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x2F2300;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155540
 * Original: 0x00155540 - 0x0015555B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155540: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015554E; /* jl: less (signed <) */

loc_00155549: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0015554E: ;
    eax = MEM32(ecx + eax * 4 + 8);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00154DD0(); return; /* tail jmp 0x00154DD0 */

}

/**
 * sub_00155560
 * Original: 0x00155560 - 0x001555DB (123 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155560: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    eax = MEM32(ecx + esi * 4 + 8);
    PUSH32(esp, eax);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00155587u); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00155587: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001555BC; /* jge: greater or equal (signed >=) */

loc_0015558D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001555BC; /* je: equal / zero */

loc_00155591: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0015559Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015559Au); } /* indirect call */
    }

loc_0015559D: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_001555BC: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001555E0
 * Original: 0x001555E0 - 0x0015560C (44 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001555E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001555E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 8;
    ebx = 7;

loc_001555F0: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001555FAu); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_001555FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001555FF; /* je: equal / zero */

loc_001555FE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001555FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001555F0; /* jne: not equal / not zero */

loc_00155605: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00155610
 * Original: 0x00155610 - 0x001557A8 (408 bytes, 133 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155610(void)
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

loc_00155610: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + eax * 4 + 0x24);
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0015562Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015562Au); } /* indirect call */
    }

loc_0015562D: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x00155635u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_00155635: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0015563Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155639u); } /* indirect call */
    }

loc_0015563C: ;
    ebp = eax;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x210); PUSH32(esp, 0x00155649u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155643u); } /* indirect call */
    }

loc_00155649: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x210); PUSH32(esp, 0x00155658u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155652u); } /* indirect call */
    }

loc_00155658: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    eax = MEM32(esp + 0x4C);
    edi = MEM32(esp + 0x48);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00155779; /* jle: less or equal (signed <=) */

loc_00155672: ;
    ecx = MEM32(edi + ebx * 4);
    eax = MEM32(ecx);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0015567Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015567Cu); } /* indirect call */
    }

loc_0015567F: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    ecx = MEM32(edi + ebx * 4);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x34;
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0x44) = 0;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001556C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001556C4u); } /* indirect call */
    }

loc_001556C7: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = esi;
    PUSH32(esp, 0x001556EDu); RECOMP_ABI_CALL(0x0003C830u, sub_0003C830); /* call 0x0003C830 */

loc_001556ED: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x244)); /* fadd dword ptr [esi + 0x244] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esi + 0x23C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00155765; /* ja: above (unsigned >) */

loc_00155707: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0015570Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015570Bu); } /* indirect call */
    }

loc_0015570E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esi + 0x220)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00155765; /* ja: above (unsigned >) */

loc_00155722: ;
    eax = MEM32(edi + ebx * 4);
    edx = MEM32(ebp);
    ecx = ebp;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00155734u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015572Eu); } /* indirect call */
    }

loc_00155734: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00155765; /* je: equal / zero */

loc_0015573C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca > _fcb)) goto loc_00155765; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_00155749: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E425C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155765; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00155756: ;
    eax = MEM32(ecx + 0x5C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x98); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015576C; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x98)) */

loc_00155765: ;
    MEM32(edi + ebx * 4) = 0;

loc_0015576C: ;
    eax = MEM32(esp + 0x4C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00155672; /* jl: less (signed <) */

loc_00155779: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0015579E; /* jle: less or equal (signed <=) */

loc_0015577F: ;
    /* nop */

loc_00155780: ;
    _fa = (uint32_t)(MEM32(edi + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ecx * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00155799; /* jne: not equal / not zero */

loc_00155786: ;
    edx = MEM32(edi + eax * 4 + -4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00155793; /* jne: not equal / not zero */

loc_0015578F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00155786; /* jg: greater (signed >) */

loc_00155793: ;
    edx = MEM32(edi + eax * 4);
    MEM32(edi + ecx * 4) = edx;

loc_00155799: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00155780; /* jl: less (signed <) */

loc_0015579E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001557B0
 * Original: 0x001557B0 - 0x001557D5 (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001557B0(void)
{

loc_001557B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = eax;
    MEM32(esi) = 0x2E6520;
    PUSH32(esp, 0x001557C8u); RECOMP_ABI_CALL(0x00153A10u, sub_00153A10); /* call 0x00153A10 */

loc_001557C8: ;
    MEM32(esi + 8) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001557E0
 * Original: 0x001557E0 - 0x00155866 (134 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001557E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001557E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x43C80000);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3EAAAAAB);
    esi = ecx;
    PUSH32(esp, 0x3F000000);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = 0x4140E8;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00155815u); RECOMP_ABI_CALL(0x00097F00u, sub_00097F00); /* call 0x00097F00 */

loc_00155815: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00155822u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015581Fu); } /* indirect call */
    }

loc_00155822: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155858; /* je: equal / zero */

loc_0015582A: ;
    PUSH32(esp, 0x0015582Fu); RECOMP_ABI_CALL(0x00015000u, sub_00015000); /* call 0x00015000 */

loc_0015582F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155858; /* je: equal / zero */

loc_00155833: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155858; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00155848: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x28);
    MEM32(esi + 0x70) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00155858: ;
    MEM32(esi + 0x70) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155870
 * Original: 0x00155870 - 0x00155885 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00155870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155870: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45BE5DF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x45BE5DF0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155880; /* jne: not equal / not zero */

loc_0015587A: ;
    eax = MEM32(ecx + 0x70);
    esp += 8; return; /* ret 4 */

loc_00155880: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155890
 * Original: 0x00155890 - 0x001558EA (90 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155890(void)
{

loc_00155890: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 4);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC898)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DDA40)); /* movss */
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = 0x2F2340;
    MEM32(ecx + 0x30) = 0;
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001558E5u); RECOMP_ABI_CALL(0x00154CB0u, sub_00154CB0); /* call 0x00154CB0 */

loc_001558E5: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001558F0
 * Original: 0x001558F0 - 0x00155988 (152 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001558F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001558F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC898)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD3E4)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    MEM32(esi + 0x30) = 0;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015593Eu); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0015593E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00155952u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_00155952: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDA48); /* mulss */
    eax = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x34) = 0;
    MEM8(esi + 0x38) = 0;
    ecx = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00154CB0(); return; /* tail jmp 0x00154CB0 */

}

/**
 * sub_00155990
 * Original: 0x00155990 - 0x0015599C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155990: ;
    eax = MEM32(ecx + 0x30);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00154DD0(); return; /* tail jmp 0x00154DD0 */

}

/**
 * sub_001559A0
 * Original: 0x001559A0 - 0x001559B0 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001559A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001559A0: ;
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001559A9u); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_001559A9: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_001559B0
 * Original: 0x001559B0 - 0x001559D0 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001559B0(void)
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

loc_001559B0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001559C7; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_001559BB: ;
    eax = MEM32(ecx + 0x30);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00154DD0(); return; /* tail jmp 0x00154DD0 */

loc_001559C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001559D0
 * Original: 0x001559D0 - 0x00155A16 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001559D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001559D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001559DCu); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_001559DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001559FD; /* je: equal / zero */

loc_001559E0: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001559EBu); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_001559EB: ;
    esi = MEM32(esp + 8);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001559F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001559F4u); } /* indirect call */
    }

loc_001559F7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001559FD: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00155A20
 * Original: 0x00155A20 - 0x00155C61 (577 bytes, 172 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155A20(void)
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

loc_00155A20: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00155A32u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_00155A32: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00155A39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155A36u); } /* indirect call */
    }

loc_00155A39: ;
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x210); PUSH32(esp, 0x00155A45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155A3Fu); } /* indirect call */
    }

loc_00155A45: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x210); PUSH32(esp, 0x00155A53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155A4Du); } /* indirect call */
    }

loc_00155A53: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    eax = MEM32(ebx);
    ecx = ebx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC) = 3;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x224); PUSH32(esp, 0x00155A6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155A67u); } /* indirect call */
    }

loc_00155A6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155A88; /* je: equal / zero */

loc_00155A71: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x224); PUSH32(esp, 0x00155A7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155A75u); } /* indirect call */
    }

loc_00155A7B: ;
    eax = MEM32(eax + 0x1E8);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = eax;

loc_00155A88: ;
    eax = MEM32(esp + 0x50);
    esi = MEM32(esp + 0x4C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00155C2D; /* jle: less or equal (signed <=) */

loc_00155A9A: ;
    PUSH32(esp, ebp);
    goto loc_00155AA0;

    /* nop */

loc_00155AA0: ;
    ecx = MEM32(esi + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00155AADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155AAAu); } /* indirect call */
    }

loc_00155AAD: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00155AB8u); RECOMP_ABI_CALL(0x001F3540u, sub_001F3540); /* call 0x001F3540 */

loc_00155AB8: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00155AC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155AC4u); } /* indirect call */
    }

loc_00155AC7: ;
    ecx = MEM32(esi + edi * 4);
    edx = MEM32(ecx);
    ebp = eax;
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00155AD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155AD3u); } /* indirect call */
    }

loc_00155AD6: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 8); /* subss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca > _fcb)) goto loc_00155C18; /* ja: above (unsigned >) (xmm4.f[0] vs MEMF(esp + 0x24)) */

loc_00155B06: ;
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155C18; /* ja: above (unsigned >) (xmm5.f[0] vs xmm2.f[0]) */

loc_00155B33: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x3C); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155C18; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00155B41: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155C18; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_00155B62: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155C18; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00155B74: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca > _fcb)) goto loc_00155C18; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(esp + 0x18)) */

loc_00155B7F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E425C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155C18; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00155B90: ;
    ecx = MEM32(esi + edi * 4);
    ecx = MEM32(ecx + 0x5C);
    _fca = xmm4.f[0]; _fcb = MEMF(ecx + 0x98); /* comiss */
    if ((_fca >= _fcb)) goto loc_00155C18; /* jae: above or equal (unsigned >=) (xmm4.f[0] vs MEMF(ecx + 0x98)) */

loc_00155B9F: ;
    PUSH32(esp, 0x00155BA4u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_00155BA4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155C18; /* jne: not equal / not zero */

loc_00155BA8: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00155BCD; /* jne: not equal / not zero */

loc_00155BAF: ;
    edx = MEM32(esi + edi * 4);
    ecx = MEM32(edx + 0x5C);
    PUSH32(esp, 0x00155BBAu); RECOMP_ABI_CALL(0x00012990u, sub_00012990); /* call 0x00012990 */

loc_00155BBA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155C18; /* jne: not equal / not zero */

loc_00155BBE: ;
    eax = MEM32(esi + edi * 4);
    ecx = MEM32(eax + 0x5C);
    PUSH32(esp, 0x00155BC9u); RECOMP_ABI_CALL(0x00011590u, sub_00011590); /* call 0x00011590 */

loc_00155BC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155C18; /* jne: not equal / not zero */

loc_00155BCD: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00155C01; /* jne: not equal / not zero */

loc_00155BD4: ;
    ecx = MEM32(esi + edi * 4);
    ecx = MEM32(ecx + 0x5C);
    PUSH32(esp, 0x00155BDFu); RECOMP_ABI_CALL(0x000115A0u, sub_000115A0); /* call 0x000115A0 */

loc_00155BDF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155C18; /* jne: not equal / not zero */

loc_00155BE3: ;
    edx = MEM32(esi + edi * 4);
    ecx = MEM32(edx + 0x5C);
    PUSH32(esp, 0x00155BEEu); RECOMP_ABI_CALL(0x000115C0u, sub_000115C0); /* call 0x000115C0 */

loc_00155BEE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155C18; /* jne: not equal / not zero */

loc_00155BF2: ;
    eax = MEM32(esi + edi * 4);
    ecx = MEM32(eax + 0x5C);
    PUSH32(esp, 0x00155BFDu); RECOMP_ABI_CALL(0x000115B0u, sub_000115B0); /* call 0x000115B0 */

loc_00155BFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155C18; /* jne: not equal / not zero */

loc_00155C01: ;
    ecx = MEM32(esi + edi * 4);
    eax = MEM32(ecx + 0x5C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00155C14u); RECOMP_ABI_CALL(0x00098450u, sub_00098450); /* call 0x00098450 */

loc_00155C14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155C1F; /* jne: not equal / not zero */

loc_00155C18: ;
    MEM32(esi + edi * 4) = 0;

loc_00155C1F: ;
    eax = MEM32(esp + 0x54);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00155AA0; /* jl: less (signed <) */

loc_00155C2C: ;
    POP32(esp, ebp);

loc_00155C2D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00155C58; /* jle: less or equal (signed <=) */

loc_00155C33: ;
    _fa = (uint32_t)(MEM32(esi + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + ecx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155C53; /* jne: not equal / not zero */

loc_00155C39: ;
    /* nop */

loc_00155C40: ;
    edx = MEM32(esi + eax * 4 + -4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155C4D; /* jne: not equal / not zero */

loc_00155C49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00155C40; /* jg: greater (signed >) */

loc_00155C4D: ;
    edx = MEM32(esi + eax * 4);
    MEM32(esi + ecx * 4) = edx;

loc_00155C53: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00155C33; /* jl: less (signed <) */

loc_00155C58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_00155C70
 * Original: 0x00155C70 - 0x00155D6F (255 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00155C70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = MEM32(edi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00155C87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155C84u); } /* indirect call */
    }

loc_00155C87: ;
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00155C92u); RECOMP_ABI_CALL(0x001F3540u, sub_001F3540); /* call 0x001F3540 */

loc_00155C92: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155CF7; /* ja: above (unsigned >) (xmm3.f[0] vs xmm1.f[0]) */

loc_00155CBA: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155CF7; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_00155CC8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155CF7; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_00155CE5: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155CF7; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00155CF3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00155CFC;

loc_00155CF7: ;
    eax = 1;

loc_00155CFC: ;
    ecx = MEM32(esp + 0x28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM8(ecx) = LO8(eax);
    if ((_fca > _fcb)) goto loc_00155D65; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00155D0A: ;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00155D15u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_00155D15: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155D65; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00155D24: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155D65; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00155D32: ;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00155D3Du); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_00155D3D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00155D65; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00155D4C: ;
    edx = MEM32(edi + 0x5C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x98); /* comiss */
    if ((_fca >= _fcb)) goto loc_00155D65; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(edx + 0x98)) */

loc_00155D5B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00155D65: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00155D70
 * Original: 0x00155D70 - 0x00155D9B (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155D70(void)
{

loc_00155D70: ;
    eax = MEM32(ecx + 0x28);
    edx = MEM32(ecx + 0x24);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(ecx + 0x20);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x5C);
    eax = MEM32(edx + 8);
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x1C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155DA0
 * Original: 0x00155DA0 - 0x00155E1A (122 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155DA0(void)
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

loc_00155DA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF281BF8Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF281BF8Cu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00155DF1; /* ja: above (unsigned >) */

loc_00155DAB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00155DDF; /* je: equal / zero */

loc_00155DAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67F926A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67F926A0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155DCD; /* je: equal / zero */

loc_00155DB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B5DEAD1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7B5DEAD1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155DF8; /* jne: not equal / not zero */

loc_00155DBB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00155DCD: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00155DDF: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00155DF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF381C11Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF381C11Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155E08; /* je: equal / zero */

loc_00155DF8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00155E08: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00155E20
 * Original: 0x00155E20 - 0x00155FBC (412 bytes, 115 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155E20(void)
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

loc_00155E20: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00155E2Fu); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00155E2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155FA6; /* je: equal / zero */

loc_00155E37: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x00155E41u); RECOMP_ABI_CALL(0x000978B0u, sub_000978B0); /* call 0x000978B0 */

loc_00155E41: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00155FA6; /* ja: above (unsigned >) */

loc_00155E53: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00155E5Eu); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00155E5E: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00155E6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155E67u); } /* indirect call */
    }

loc_00155E6A: ;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00155E75u); RECOMP_ABI_CALL(0x001F3540u, sub_001F3540); /* call 0x001F3540 */

loc_00155E75: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155F54; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00155EA1: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155F54; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00155EB3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155F54; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00155ED4: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155F54; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00155EE2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155F0C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_00155EED: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155F0C; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0xC)) */

loc_00155EFE: ;
    PUSH32(esp, 0x7CF9FA72);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00155F0Au); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00155F0A: ;
    goto loc_00155F28;

loc_00155F0C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155F2B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_00155F17: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, 0x7CF9FA72);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00155F25u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00155F25: ;
    MEM32(esi + 0x34) = eax;

loc_00155F28: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00155F2B: ;
    ecx = MEM32(esi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00155F47u); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_00155F47: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00155F54: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155FB5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_00155F5F: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(esi + 0x10); /* divss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155F86; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00155F81: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00155F8E;

loc_00155F86: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155F8E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00155F8B: ;
    xmm0 = xmm1; /* movaps */

loc_00155F8E: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00155FB5; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00155F98: ;
    MEM32(esi + 0x30) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00155FA6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x30) = 0;

loc_00155FB5: ;
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
 * sub_00155FC0
 * Original: 0x00155FC0 - 0x00156011 (81 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155FC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6438E0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0xEDB4F7D0u);
    ecx = 0x4031B0;
    PUSH32(esp, 0x00155FDEu); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_00155FDE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156006; /* je: equal / zero */

loc_00155FE4: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00155FEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155FE8u); } /* indirect call */
    }

loc_00155FEB: ;
    edx = MEM32(0x30E9E8);
    ecx = MEM32(0x30E9E4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156006; /* jne: not equal / not zero */

loc_00155FFD: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x68) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00156006: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x68) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00156020
 * Original: 0x00156020 - 0x00156035 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156020: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x0015602Bu); RECOMP_ABI_CALL(0x00030E40u, sub_00030E40); /* call 0x00030E40 */

loc_0015602B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x68) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00156040
 * Original: 0x00156040 - 0x001560B5 (117 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156040: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x43C80000);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3EAAAAAB);
    esi = ecx;
    PUSH32(esp, 0x3F000000);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = 0x4140E8;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00156075u); RECOMP_ABI_CALL(0x00097F00u, sub_00097F00); /* call 0x00097F00 */

loc_00156075: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00156082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015607Fu); } /* indirect call */
    }

loc_00156082: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001560A7; /* je: equal / zero */

loc_0015608A: ;
    PUSH32(esp, 0x0015608Fu); RECOMP_ABI_CALL(0x00015000u, sub_00015000); /* call 0x00015000 */

loc_0015608F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001560A7; /* je: equal / zero */

loc_00156093: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x28);
    MEM32(esi + 0x70) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001560A7: ;
    MEM32(esi + 0x70) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001560C0
 * Original: 0x001560C0 - 0x00156116 (86 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001560C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001560C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001560C8u); RECOMP_ABI_CALL(0x000124C0u, sub_000124C0); /* call 0x000124C0 */

loc_001560C8: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    MEM32(esi) = 0x2F2380;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x184) = eax;
    MEM32(esi + 0x188) = eax;
    MEM32(esi + 0x18C) = eax;
    MEM32(esi + 0x170) = eax;
    MEMF(esi + 0x174) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x178) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x180) = 2;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00156120
 * Original: 0x00156120 - 0x00156126 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156120(void)
{

loc_00156120: ;
    eax = 0x190;
    esp += 4; return; /* ret */

}

/**
 * sub_00156130
 * Original: 0x00156130 - 0x0015614E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00156138u); RECOMP_ABI_CALL(0x00156150u, sub_00156150); /* call 0x00156150 */

loc_00156138: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00156148; /* je: equal / zero */

loc_0015613F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00156145u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00156145: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156148: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00156150
 * Original: 0x00156150 - 0x00156155 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156150: ;
    g_seh_ebp = ebp; sub_00011070(); return; /* tail jmp 0x00011070 */

}

/**
 * sub_00156160
 * Original: 0x00156160 - 0x00156166 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156160(void)
{

loc_00156160: ;
    eax = MEM32(0x30E9E4);
    esp += 4; return; /* ret */

}

/**
 * sub_00156170
 * Original: 0x00156170 - 0x001565A6 (1078 bytes, 360 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00156170(void)
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

loc_00156170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001564B8; /* je: equal / zero */

loc_0015618A: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001564B8; /* jle: less or equal (signed <=) */

loc_00156195: ;
    esi = eax + eax;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x88);
    PUSH32(esp, 0x2F2530);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001561B0u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001561B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001561D8; /* je: equal / zero */

loc_001561B7: ;
    PUSH32(esp, 0x18AD0);
    PUSH32(esp, 0x186F0);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0x88);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001561D2u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_001561D2: ;
    MEM32(esp + 0x10) = edi;
    goto loc_001561E4;

loc_001561D8: ;
    MEM32(esp + 0x10) = 0;
    edi = MEM32(esp + 0x10);

loc_001561E4: ;
    ecx = MEM32(0x414104);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001561F7u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_001561F7: ;
    edx = MEM32(esp + 0x90);
    eax = MEM32(esp + 0x94);
    ecx = MEM32(esp + 0x98);
    PUSH32(esp, 0x660E4490);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156222u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_00156222: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0015622Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156229u); } /* indirect call */
    }

loc_0015622F: ;
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00156454; /* jle: less or equal (signed <=) */

loc_0015624A: ;
    esi = edi;
    /* nop */

loc_00156250: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax + ecx * 4);
    edi = MEM32(edx + 0x5C);
    eax = MEM32(edi);
    ecx = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00156269u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156266u); } /* indirect call */
    }

loc_00156269: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(edi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = edi;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00156290u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015628Du); } /* indirect call */
    }

loc_00156290: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001563CA; /* jne: not equal / not zero */

loc_001562A6: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001562ADu); RECOMP_ABI_CALL(0x00050800u, sub_00050800); /* call 0x00050800 */

loc_001562AD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x34;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001562EAu); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_001562EA: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001562FD; /* je: equal / zero */

loc_001562F1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001562F6u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_001562F6: ;
    MEM32(esi + 4) = 0;

loc_001562FD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0015630B; /* je: equal / zero */

loc_00156304: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015630Bu); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_0015630B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00156315u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015630Fu); } /* indirect call */
    }

loc_00156315: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0015632A; /* je: equal / zero */

loc_0015631E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156323u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00156323: ;
    MEM32(esi + 8) = 0;

loc_0015632A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00156338; /* je: equal / zero */

loc_00156331: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156338u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_00156338: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156349u); RECOMP_ABI_CALL(0x000507E0u, sub_000507E0); /* call 0x000507E0 */

loc_00156349: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x34;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015637Au); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_0015637A: ;
    ecx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015638B; /* je: equal / zero */

loc_00156383: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156388u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00156388: ;
    MEM32(esi + 4) = ebx;

loc_0015638B: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0015639B; /* je: equal / zero */

loc_00156396: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015639Bu); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_0015639B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x001563A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015639Fu); } /* indirect call */
    }

loc_001563A5: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001563B6; /* je: equal / zero */

loc_001563AE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001563B3u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_001563B3: ;
    MEM32(esi + 8) = ebx;

loc_001563B6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001563C4; /* je: equal / zero */

loc_001563BD: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001563C4u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_001563C4: ;
    ebx = MEM32(esp + 0x18);
    goto loc_00156429;

loc_001563CA: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001563DBu); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_001563DB: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001563EE; /* je: equal / zero */

loc_001563E2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001563E7u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_001563E7: ;
    MEM32(esi + 4) = 0;

loc_001563EE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001563FC; /* je: equal / zero */

loc_001563F5: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001563FCu); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_001563FC: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00156406u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156400u); } /* indirect call */
    }

loc_00156406: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0015641B; /* je: equal / zero */

loc_0015640F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156414u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00156414: ;
    MEM32(esi + 8) = 0;

loc_0015641B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00156429; /* je: equal / zero */

loc_00156422: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156429u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_00156429: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00156250; /* jl: less (signed <) */

loc_0015644C: ;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esp + 0x10);

loc_00156454: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x104);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156464u); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_00156464: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015649E; /* jne: not equal / not zero */

loc_0015646B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156494; /* je: equal / zero */

loc_0015646F: ;
    ecx = MEM32(edi + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0015648B; /* je: equal / zero */

loc_00156479: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00156481u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015647Fu); } /* indirect call */
    }

loc_00156481: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0015648B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156491u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00156491: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156494: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0015649E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001564D3; /* jne: not equal / not zero */

loc_001564A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001564B8; /* je: equal / zero */

loc_001564A6: ;
    ecx = MEM32(edi + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_001564C1; /* je: equal / zero */

loc_001564B0: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001564B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001564B6u); } /* indirect call */
    }

loc_001564B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001564C1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001564C7u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001564C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001564D3: ;
    edx = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015654A; /* jle: less or equal (signed <=) */

loc_001564DC: ;
    /* nop */

loc_001564E0: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + esi * 4);
    ecx = MEM32(eax + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156524; /* je: equal / zero */

loc_001564ED: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001564F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001564EFu); } /* indirect call */
    }

loc_001564F2: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156524; /* jne: not equal / not zero */

loc_00156504: ;
    SET_LO8(eax, MEM8(edi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015651C; /* je: equal / zero */

loc_0015650B: ;
    SET_LO8(eax, MEM8(edi + 0xC4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015651C; /* je: equal / zero */

loc_00156515: ;
    MEM32(ebx + esi * 4) = 0;

loc_0015651C: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x110;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015653A;

loc_00156524: ;
    eax = edi;
    SET_LO8(ecx, MEM8(eax + 0x3C));
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x88;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015653A; /* je: equal / zero */

loc_00156533: ;
    MEM32(ebx + esi * 4) = 0;

loc_0015653A: ;
    eax = MEM32(ebp + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001564E0; /* jl: less (signed <) */

loc_00156542: ;
    edi = MEM32(esp + 0x10);
    edx = eax;
    goto loc_0015654D;

loc_0015654A: ;
    ebx = MEM32(ebp + 8);

loc_0015654D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015656F; /* jle: less or equal (signed <=) */

loc_00156553: ;
    ecx = ebx + edx * 4 + -4;

loc_00156557: ;
    _fa = (uint32_t)(MEM32(ebx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156567; /* jne: not equal / not zero */

loc_0015655D: ;
    esi = MEM32(ecx);
    MEM32(ebx + eax * 4) = esi;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00156567: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00156557; /* jl: less (signed <) */

loc_0015656C: ;
    MEM32(ebp + 0xC) = edx;

loc_0015656F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015659D; /* je: equal / zero */

loc_00156573: ;
    ecx = MEM32(edi + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00156591; /* je: equal / zero */

loc_0015657D: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00156585u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156583u); } /* indirect call */
    }

loc_00156585: ;
    edx = MEM32(ebp + 0xC);
    eax = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00156591: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156597u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00156597: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015659D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
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
 * sub_001565B0
 * Original: 0x001565B0 - 0x00156677 (199 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001565B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001565B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243621);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x001565D2u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_001565D2: ;
    MEM32(esi) = 0x2F2554;
    PUSH32(esp, esi);
    ecx = esi + 0x3C;
    MEM32(esp + 0x14) = 0;
    MEM32(esi + 0x2C) = esi;
    MEM32(esi + 0x28) = 0x2F2240;
    PUSH32(esp, 0x001565F3u); RECOMP_ABI_CALL(0x00154F70u, sub_00154F70); /* call 0x00154F70 */

loc_001565F3: ;
    PUSH32(esp, esi);
    ecx = esi + 0x64;
    PUSH32(esp, 0x001565FCu); RECOMP_ABI_CALL(0x00155030u, sub_00155030); /* call 0x00155030 */

loc_001565FC: ;
    PUSH32(esp, esi);
    ecx = esi + 0x100;
    MEM8(esp + 0x14) = 1;
    PUSH32(esp, 0x0015660Du); RECOMP_ABI_CALL(0x001554E0u, sub_001554E0); /* call 0x001554E0 */

loc_0015660D: ;
    PUSH32(esp, esi);
    ecx = esi + 0x160;
    PUSH32(esp, 0x00156619u); RECOMP_ABI_CALL(0x001557B0u, sub_001557B0); /* call 0x001557B0 */

loc_00156619: ;
    PUSH32(esp, esi);
    ecx = esi + 0x1D4;
    MEM8(esp + 0x14) = 2;
    PUSH32(esp, 0x0015662Au); RECOMP_ABI_CALL(0x00155890u, sub_00155890); /* call 0x00155890 */

loc_0015662A: ;
    MEM32(esi + 0x218) = 0x2F2280;
    MEM32(esi + 0x21C) = esi;
    ecx = esi + 0x238;
    MEM32(esi + 0x230) = esi;
    MEM32(esi + 0x22C) = 0x2E6490;
    PUSH32(esp, 0x00156655u); RECOMP_ABI_CALL(0x00153A10u, sub_00153A10); /* call 0x00153A10 */

loc_00156655: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x230) = esi;
    MEM32(esi + 0x234) = 0;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00156680
 * Original: 0x00156680 - 0x0015669E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156680: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00156688u); RECOMP_ABI_CALL(0x0008BF60u, sub_0008BF60); /* call 0x0008BF60 */

loc_00156688: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00156698; /* je: equal / zero */

loc_0015668F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00156695u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00156695: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156698: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001566A0
 * Original: 0x001566A0 - 0x00156780 (224 bytes, 78 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001566A0(void)
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

loc_001566A0: ;
    eax = 0x100C;
    PUSH32(esp, 0x001566AAu); RECOMP_ABI_CALL(0x00237830u, sub_00237830); /* call 0x00237830 */

loc_001566AA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001566B7u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_001566B7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001566BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001566BBu); } /* indirect call */
    }

loc_001566BE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x210); PUSH32(esp, 0x001566C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001566C2u); } /* indirect call */
    }

loc_001566C8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E4514)); /* fmul dword ptr [0x2e4514] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC340)); /* fadd dword ptr [0x2dc340] */
    PUSH32(esp, 0x001566D9u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001566D9: ;
    ecx = MEM32(esi + 4);
    edi = eax;
    PUSH32(esp, 0x001566E3u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_001566E3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001566EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001566E7u); } /* indirect call */
    }

loc_001566EA: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x001566F2u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_001566F2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00156701u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001566FEu); } /* indirect call */
    }

loc_00156701: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x400);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = 0x37E158;
    PUSH32(esp, 0x00156716u); RECOMP_ABI_CALL(0x001541D0u, sub_001541D0); /* call 0x001541D0 */

loc_00156716: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00156774; /* jle: less or equal (signed <=) */

loc_00156720: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1020);
    goto loc_00156730;

    /* nop */

loc_00156730: ;
    ecx = MEM32(esp + edi * 4 + 0x1C);
    esi = MEM32(ecx);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015676E; /* je: equal / zero */

loc_0015673D: ;
    /* nop */

loc_00156740: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1024)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1024) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015676E; /* jge: greater or equal (signed >=) */

loc_00156749: ;
    edx = MEM32(ecx + 0x5C);
    edx = MEM32(edx + 0xF4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156765; /* je: equal / zero */

loc_00156756: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156765; /* je: equal / zero */

loc_0015675B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156765; /* je: equal / zero */

loc_00156760: ;
    MEM32(ebp + eax * 4) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00156765: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156740; /* jne: not equal / not zero */

loc_0015676E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00156730; /* jl: less (signed <) */

loc_00156773: ;
    POP32(esp, ebp);

loc_00156774: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00156780
 * Original: 0x00156780 - 0x00156878 (248 bytes, 79 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156780(void)
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

loc_00156780: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015678Du); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_0015678D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00156794u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156791u); } /* indirect call */
    }

loc_00156794: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x210); PUSH32(esp, 0x0015679Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156798u); } /* indirect call */
    }

loc_0015679E: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, 0x2F2568);
    eax = ebp * 4;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001567BAu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001567BA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ebx = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00156859; /* jle: less or equal (signed <=) */

loc_001567C7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    esi = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001567E1: ;
    eax = MEM32(0x41410C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(edi + esi);
    if (CMP_NE(_fa, _fb)) goto loc_001567F4; /* jne: not equal / not zero */

loc_001567ED: ;
    eax = 0x6438E0;
    goto loc_001567F7;

loc_001567F4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001567F7: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00156818u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156815u); } /* indirect call */
    }

loc_00156818: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x10); /* divss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001567E1; /* jne: not equal / not zero */

loc_00156853: ;
    ebp = MEM32(esp + 0x34);
    POP32(esp, edi);
    POP32(esp, esi);

loc_00156859: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00156867u); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_00156867: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015686Du); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0015686D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00156880
 * Original: 0x00156880 - 0x00156A7B (507 bytes, 162 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156880(void)
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

loc_00156880: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x4C));
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00156A70; /* je: equal / zero */

loc_00156894: ;
    ebp = MEM32(esp + 0x60);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00156A70; /* jle: less or equal (signed <=) */

loc_001568A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x001568ABu); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_001568AB: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x001568BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001568B7u); } /* indirect call */
    }

loc_001568BA: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x001568C2u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_001568C2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001568C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001568C6u); } /* indirect call */
    }

loc_001568C9: ;
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x210); PUSH32(esp, 0x001568D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001568CFu); } /* indirect call */
    }

loc_001568D5: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x210); PUSH32(esp, 0x001568E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001568DDu); } /* indirect call */
    }

loc_001568E3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00156A64; /* jle: less or equal (signed <=) */

loc_001568F5: ;
    eax = edi + ebp * 4 + -4;
    MEM32(esp + 0x60) = eax;
    /* nop */

loc_00156900: ;
    ecx = MEM32(edi + esi * 4);
    edx = MEM32(ecx);
    ebp = MEM32(ecx + 0x5C);
    eax = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00156910u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015690Du); } /* indirect call */
    }

loc_00156910: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    ecx = MEM32(edi + esi * 4);
    edx = MEM32(ecx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0015693Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015693Bu); } /* indirect call */
    }

loc_0015693E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00156949u); RECOMP_ABI_CALL(0x001F3540u, sub_001F3540); /* call 0x001F3540 */

loc_00156949: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x28); /* comiss */
    if ((_fca > _fcb)) goto loc_00156A25; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x28)) */

loc_0015695A: ;
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00156967u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_00156967: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2E5680)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00156A25; /* ja: above (unsigned >) */

loc_0015698C: ;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00156999u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_00156999: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2F258C)); /* fsub dword ptr [0x2f258c] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2E5680)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00156A25; /* ja: above (unsigned >) */

loc_001569C0: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001569CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001569C4u); } /* indirect call */
    }

loc_001569CA: ;
    _fa = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + esi * 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00156A25; /* je: equal / zero */

loc_001569CF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca > _fcb)) goto loc_00156A25; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(esp + 0x1C)) */

loc_001569F4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x98); /* comiss */
    if ((_fca >= _fcb)) goto loc_00156A25; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ebp + 0x98)) */

loc_00156A00: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00156A0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156A05u); } /* indirect call */
    }

loc_00156A0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00156A3F; /* je: equal / zero */

loc_00156A0F: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00156A1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156A14u); } /* indirect call */
    }

loc_00156A1A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00156A21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156A1Eu); } /* indirect call */
    }

loc_00156A21: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00156A3F; /* je: equal / zero */

loc_00156A25: ;
    eax = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x64);
    ecx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + esi * 4) = ecx;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x60) = eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00156A3F: ;
    eax = MEM32(esp + 0x64);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00156900; /* jl: less (signed <) */

loc_00156A4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00156A60; /* jle: less or equal (signed <=) */

loc_00156A50: ;
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00156A59u); RECOMP_ABI_CALL(0x00156170u, sub_00156170); /* call 0x00156170 */

loc_00156A59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x64) = eax;

loc_00156A60: ;
    ebp = MEM32(esp + 0x64);

loc_00156A64: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00156A70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00156A80
 * Original: 0x00156A80 - 0x00156C3B (443 bytes, 117 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00156A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00156A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00156ABB; /* jne: not equal / not zero */

loc_00156A9E: ;
    MEM8(0x35CA24) = LO8(ebx);
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x2A0));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156ABB; /* jne: not equal / not zero */

loc_00156AB1: ;
    MEM32(esi + 8) = ebx;
    MEM8(0x35CA24) = 0;

loc_00156ABB: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156AE8; /* jne: not equal / not zero */

loc_00156AC0: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM8(edx + 0x2A0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2A0), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156AD0; /* jne: not equal / not zero */

loc_00156ACB: ;
    MEM32(esi + 8) = eax;
    goto loc_00156AE8;

loc_00156AD0: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156AE8; /* je: equal / zero */

loc_00156AD7: ;
    ecx = 0x35C940;
    MEM32(esi + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156AE8u); RECOMP_ABI_CALL(0x000F03E0u, sub_000F03E0); /* call 0x000F03E0 */

loc_00156AE8: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156B34; /* jne: not equal / not zero */

loc_00156AEE: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM8(eax + 0x2A0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2A0), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156B0C; /* jne: not equal / not zero */

loc_00156AF9: ;
    ecx = 0x35C940;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156B03u); RECOMP_ABI_CALL(0x000F0410u, sub_000F0410); /* call 0x000F0410 */

loc_00156B03: ;
    MEM32(esi + 8) = 5;
    goto loc_00156B20;

loc_00156B0C: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156B20; /* jne: not equal / not zero */

loc_00156B13: ;
    ecx = 0x35C940;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156B1Du); RECOMP_ABI_CALL(0x000F0410u, sub_000F0410); /* call 0x000F0410 */

loc_00156B1D: ;
    MEM32(esi + 8) = ebx;

loc_00156B20: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x7CF9FA72);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156B2Eu); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00156B2E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = eax;

loc_00156B34: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156C22; /* je: equal / zero */

loc_00156B3E: ;
    ecx = MEM32(0x41410C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156B4F; /* jne: not equal / not zero */

loc_00156B48: ;
    eax = 0x6438E0;
    goto loc_00156B54;

loc_00156B4F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00156B54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156B51u); } /* indirect call */
    }

loc_00156B54: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156B5Eu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00156B5E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x50); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x54); /* subss */
    eax = esp;
    MEM32(eax) = ecx;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = esp + 0x2C;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, edx);
    ecx = 0x35C940;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156BB3u); RECOMP_ABI_CALL(0x000FDB10u, sub_000FDB10); /* call 0x000FDB10 */

loc_00156BB3: ;
    xmm0 = XMM_SCALAR(MEMF(0x35C944)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00156C22; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_00156BC4: ;
    eax = MEM32(0x35C9B0);
    ecx = MEM32(0x35C9B4);
    edx = MEM32(0x35C9B8);
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    ecx = 0x35C940;
    MEM32(esi + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156C13u); RECOMP_ABI_CALL(0x000F03D0u, sub_000F03D0); /* call 0x000F03D0 */

loc_00156C13: ;
    PUSH32(esp, 0x70F7A8F7);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156C1Fu); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00156C1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156C22: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00156C40
 * Original: 0x00156C40 - 0x00156E07 (455 bytes, 139 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156C40(void)
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

loc_00156C40: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x78);
    PUSH32(esp, 0x2F2590);
    eax = edi * 4;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00156C61u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00156C61: ;
    ecx = MEM32(esp + 0x7C);
    ebx = MEM32(esi + ecx * 4 + 0x24);
    ecx = MEM32(esi + 4);
    ebp = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = ebp;
    PUSH32(esp, 0x00156C7Au); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_00156C7A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00156C81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156C7Eu); } /* indirect call */
    }

loc_00156C81: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x210); PUSH32(esp, 0x00156C8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156C87u); } /* indirect call */
    }

loc_00156C8D: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x210); PUSH32(esp, 0x00156C99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156C93u); } /* indirect call */
    }

loc_00156C99: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00156CA0u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_00156CA0: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00156CB7u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_00156CB7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DD6D0); /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00156DE6; /* jle: less or equal (signed <=) */

loc_00156CD1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    edi = MEM32(esp + 0x74);
    eax = MEM32(esp + 0x78);
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x70); /* divss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;

loc_00156D00: ;
    esi = MEM32(edi);
    eax = esp + 0x3C;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x10) = 0;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00156D1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156D1Bu); } /* indirect call */
    }

loc_00156D1E: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = ebx;
    PUSH32(esp, 0x00156D44u); RECOMP_ABI_CALL(0x0003C830u, sub_0003C830); /* call 0x0003C830 */

loc_00156D44: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    eax = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00156D50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156D4Du); } /* indirect call */
    }

loc_00156D50: ;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00156D5Bu); RECOMP_ABI_CALL(0x001F3540u, sub_001F3540); /* call 0x001F3540 */

loc_00156D5B: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00156D6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156D67u); } /* indirect call */
    }

loc_00156D6A: ;
    edx = MEM32(esi);
    eax = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00156D76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156D73u); } /* indirect call */
    }

loc_00156D76: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x70)); /* fsub dword ptr [esp + 0x70] */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEM32(esp + 0x18) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebx + 0x220)); /* fdiv dword ptr [ebx + 0x220] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebx + 0x23C)); /* fdiv dword ptr [ebx + 0x23c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi + ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_00156D00; /* jne: not equal / not zero */

loc_00156DDE: ;
    edi = MEM32(esp + 0x78);
    ebp = MEM32(esp + 0x2C);

loc_00156DE6: ;
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00156DF4u); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_00156DF4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00156DFAu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00156DFA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00156E10
 * Original: 0x00156E10 - 0x00156F4F (319 bytes, 112 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156E10(void)
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

loc_00156E10: ;
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x414));
    esp = esp - 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 0x24;

loc_00156E23: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00156F35; /* je: equal / zero */

loc_00156E2B: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00156F2E; /* jne: not equal / not zero */

loc_00156E37: ;
    eax = MEM32(esi + -28);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00156E42u); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00156E42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00156EEB; /* je: equal / zero */

loc_00156E4A: ;
    ecx = MEM32(esi + -28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x18) = 0;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00156E66u); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00156E66: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00156E72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E6Fu); } /* indirect call */
    }

loc_00156E72: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x00156E98u); RECOMP_ABI_CALL(0x0003C830u, sub_0003C830); /* call 0x0003C830 */

loc_00156E98: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x244)); /* fadd dword ptr [ecx + 0x244] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ecx + 0x23C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00156F32; /* ja: above (unsigned >) */

loc_00156EB4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00156EB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156EB6u); } /* indirect call */
    }

loc_00156EB9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    eax = MEM32(esi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(eax + 0x220)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00156F32; /* ja: above (unsigned >) */

loc_00156ECF: ;
    ecx = MEM32(esi + -28);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00156EDAu); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00156EDA: ;
    edx = MEM32(eax + 0x5C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x98); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00156F35; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edx + 0x98)) */

loc_00156EE9: ;
    goto loc_00156F32;

loc_00156EEB: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00156EFCu); RECOMP_ABI_CALL(0x001566A0u, sub_001566A0); /* call 0x001566A0 */

loc_00156EFC: ;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00156F0Au); RECOMP_ABI_CALL(0x00155610u, sub_00155610); /* call 0x00155610 */

loc_00156F0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156F35; /* jle: less or equal (signed <=) */

loc_00156F0E: ;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00156F1Cu); RECOMP_ABI_CALL(0x00156C40u, sub_00156C40); /* call 0x00156C40 */

loc_00156F1C: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x5C);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x28);
    MEM32(esi + -28) = eax;
    goto loc_00156F35;

loc_00156F2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00156F35; /* jne: not equal / not zero */

loc_00156F32: ;
    MEM32(esi + -28) = ebp;

loc_00156F35: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00156E23; /* jl: less (signed <) */

loc_00156F42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x414)) >> 32) & 1);
    esp = esp + 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00156F50
 * Original: 0x00156F50 - 0x001570F3 (419 bytes, 127 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156F50(void)
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

loc_00156F50: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x60);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F25B4);
    eax = ebx * 4;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00156F71u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00156F71: ;
    ecx = MEM32(esi + 4);
    ebp = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x00156F82u); RECOMP_ABI_CALL(0x000D4A20u, sub_000D4A20); /* call 0x000D4A20 */

loc_00156F82: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00156F89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156F86u); } /* indirect call */
    }

loc_00156F89: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x210); PUSH32(esp, 0x00156F95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156F8Fu); } /* indirect call */
    }

loc_00156F95: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x210); PUSH32(esp, 0x00156FA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156F9Bu); } /* indirect call */
    }

loc_00156FA1: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00156FA8u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_00156FA8: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00156FBFu); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_00156FBF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DD6D0); /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_001570D2; /* jle: less or equal (signed <=) */

loc_00156FD9: ;
    ebx = MEM32(esp + 0x68);
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 0x10); /* divss */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x6C);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ebp = esi + 0x1C;
    MEM32(esp + 0x14) = eax;

loc_00157013: ;
    edx = MEM32(edi);
    esi = MEM32(ebx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00157021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015701Eu); } /* indirect call */
    }

loc_00157021: ;
    edx = MEM32(esi);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0015702Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015702Au); } /* indirect call */
    }

loc_0015702D: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    eax = esp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00157039u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157036u); } /* indirect call */
    }

loc_00157039: ;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00157044u); RECOMP_ABI_CALL(0x001F3540u, sub_001F3540); /* call 0x001F3540 */

loc_00157044: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    edx = MEM32(esi + 0x5C);
    ecx = MEM32(edx + 8);
    edx = MEM32(ecx + 0x28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    ecx = ebp;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */

loc_00157081: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157090; /* je: equal / zero */

loc_00157085: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00157081; /* jl: less (signed <) */

loc_0015708E: ;
    goto loc_001570A3;

loc_00157090: ;
    edx = 5;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DFE78); /* mulss */

loc_001570A3: ;
    eax = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(eax + ebx) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00157013; /* jne: not equal / not zero */

loc_001570CA: ;
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x6C);

loc_001570D2: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001570E0u); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_001570E0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001570E6u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001570E6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157100
 * Original: 0x00157100 - 0x0015720A (266 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00157100: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    MEM8(esp + 0xB) = 0;
    PUSH32(esp, 0x00157117u); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00157117: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157142; /* je: equal / zero */

loc_0015711B: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00157126u); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_00157126: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015713B; /* je: equal / zero */

loc_0015712A: ;
    edx = esp + 7;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00157137u); RECOMP_ABI_CALL(0x00155C70u, sub_00155C70); /* call 0x00155C70 */

loc_00157137: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157142; /* jne: not equal / not zero */

loc_0015713B: ;
    MEM32(esi + 0x30) = 0;

loc_00157142: ;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015714Du); RECOMP_ABI_CALL(0x00154DD0u, sub_00154DD0); /* call 0x00154DD0 */

loc_0015714D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157159; /* je: equal / zero */

loc_00157151: ;
    SET_LO8(eax, MEM8(esp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001571B5; /* je: equal / zero */

loc_00157159: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0015716Bu); RECOMP_ABI_CALL(0x001566A0u, sub_001566A0); /* call 0x001566A0 */

loc_0015716B: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00157178u); RECOMP_ABI_CALL(0x00155A20u, sub_00155A20); /* call 0x00155A20 */

loc_00157178: ;
    edi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00157187u); RECOMP_ABI_CALL(0x00156F50u, sub_00156F50); /* call 0x00156F50 */

loc_00157187: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001571AE; /* jle: less or equal (signed <=) */

loc_0015718C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x5C);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x28);
    MEM32(esi + 0x30) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001571A4u); RECOMP_ABI_CALL(0x00155D70u, sub_00155D70); /* call 0x00155D70 */

loc_001571A4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    goto loc_001571B5;

loc_001571AE: ;
    ecx = esi;
    PUSH32(esp, 0x001571B5u); RECOMP_ABI_CALL(0x00154CB0u, sub_00154CB0); /* call 0x00154CB0 */

loc_001571B5: ;
    edx = MEM32(esp + 0x40C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001571C4u); RECOMP_ABI_CALL(0x00155E20u, sub_00155E20); /* call 0x00155E20 */

loc_001571C4: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001571F3; /* jne: not equal / not zero */

loc_001571CB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001571F3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0xC)) */

loc_001571D6: ;
    PUSH32(esp, 0x70F7A8F7);
    PUSH32(esp, 0);
    MEM8(esi + 0x38) = 1;
    PUSH32(esp, 0x001571E6u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_001571E6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001571F3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00157200; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_001571FC: ;
    MEM8(esi + 0x38) = 0;

loc_00157200: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00157210
 * Original: 0x00157210 - 0x0015727C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00157218u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00157218: ;
    MEM32(esi) = 0x2F25D8;
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
    PUSH32(esp, 0x00157275u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00157275: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00157280
 * Original: 0x00157280 - 0x0015728C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157280: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00157290(); return; /* tail jmp 0x00157290 */

}

/**
 * sub_00157290
 * Original: 0x00157290 - 0x001572FC (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157290: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001572F7; /* je: equal / zero */

loc_001572A2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x184);
    edx = MEM32(ecx + 0x188);
    MEM32(ecx + 0x18C) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x188);
    edx = MEM32(ecx + 0x184);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001572DA; /* je: equal / zero */

loc_001572D4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001572DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001572D8u); } /* indirect call */
    }

loc_001572DA: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFE70u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFE70u;
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
    if (CMP_NE(_fa, _fb)) goto loc_001572A2; /* jne: not equal / not zero */

loc_001572F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00157300
 * Original: 0x00157300 - 0x00157382 (130 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157300: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00157319u); RECOMP_ABI_CALL(0x001566A0u, sub_001566A0); /* call 0x001566A0 */

loc_00157319: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00157326u); RECOMP_ABI_CALL(0x00156880u, sub_00156880); /* call 0x00156880 */

loc_00157326: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015733A; /* jle: less or equal (signed <=) */

loc_0015732D: ;
    PUSH32(esp, edi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0015733Au); RECOMP_ABI_CALL(0x00156780u, sub_00156780); /* call 0x00156780 */

loc_0015733A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157353; /* jne: not equal / not zero */

loc_0015733E: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015734Fu); RECOMP_ABI_CALL(0x00154EA0u, sub_00154EA0); /* call 0x00154EA0 */

loc_0015734F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */

loc_00157353: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00157370; /* jle: less or equal (signed <=) */

loc_00157355: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 0x5C);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x28);
    POP32(esp, edi);
    MEM32(esi + 0x10) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00157370: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00157390
 * Original: 0x00157390 - 0x001573EF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x001573A4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_001573A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001573B4; /* je: equal / zero */

loc_001573AB: ;
    ecx = eax;
    PUSH32(esp, 0x001573B2u); RECOMP_ABI_CALL(0x001560C0u, sub_001560C0); /* call 0x001560C0 */

loc_001573B2: ;
    goto loc_001573B6;

loc_001573B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001573B6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x184;
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
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x190;
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
 * sub_001573F0
 * Original: 0x001573F0 - 0x00157411 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001573F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001573F0: ;
    PUSH32(esp, esi);
    ecx = 0x3BE250;
    PUSH32(esp, 0x001573FBu); RECOMP_ABI_CALL(0x00157390u, sub_00157390); /* call 0x00157390 */

loc_001573FB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015740D; /* je: equal / zero */

loc_00157401: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0015740Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015740Au); } /* indirect call */
    }

loc_0015740D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00157420
 * Original: 0x00157420 - 0x00157442 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157420: ;
    SET_LO8(eax, MEM8(ecx + 0x19));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015743F; /* jne: not equal / not zero */

loc_00157429: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, 1);
    MEM32(ecx + 0x2C) = edx;
    MEM8(ecx + 0x19) = LO8(eax);
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x18) = LO8(edx);
    MEM8(ecx + 0x1A) = LO8(eax);

loc_0015743F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00157450
 * Original: 0x00157450 - 0x0015745C (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157450: ;
    SET_LO8(eax, MEM8(ecx + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015745B; /* je: equal / zero */

loc_00157457: ;
    MEM8(ecx + 0x19) = 0;

loc_0015745B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00157460
 * Original: 0x00157460 - 0x0015747F (31 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157460(void)
{

loc_00157460: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00157480
 * Original: 0x00157480 - 0x0015748B (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157480: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015748A; /* jne: not equal / not zero */

loc_00157487: ;
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015748A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00157490
 * Original: 0x00157490 - 0x001576E0 (592 bytes, 127 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157490: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001574AAu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_001574AA: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x28); /* cvtsi2ss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm5.f[0] = (float)(int32_t)MEM32(esi + 0x1C); /* cvtsi2ss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC090); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 0x24); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC340); /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm7.f[0] = (float)(int32_t)MEM32(esi + 0x20); /* cvtsi2ss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    PUSH32(esp, 0x3F800000);
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 8) = xmm6.f[0]; /* movss */
    xmm6 = xmm1; /* movaps */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    PUSH32(esp, 0x00157582u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_00157582: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x28); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC090); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, 0x3F800000);
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x00157604u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_00157604: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x28); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC090); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, 0x3F800000);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00157666u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_00157666: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x28); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC090); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, 0x3F800000);
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    PUSH32(esp, 0);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001576D9u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_001576D9: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001576E0
 * Original: 0x001576E0 - 0x0015787D (413 bytes, 118 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001576E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001576E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015787B; /* jne: not equal / not zero */

loc_001576EE: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015787B; /* je: equal / zero */

loc_001576F9: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x7AD604);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015787A; /* je: equal / zero */

loc_00157708: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00157712u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00157712: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0015771Cu); RECOMP_ABI_CALL(0x00288F80u, sub_00288F80); /* call 0x00288F80 */

loc_0015771C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00157723u); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_00157723: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x66);
    PUSH32(esp, 0x0015772Cu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015772C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x00157738u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00157738: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x93);
    PUSH32(esp, 0x00157744u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00157744: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015774Fu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015774F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015775Au); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015775A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00157765u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00157765: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, 0x0015776Fu); RECOMP_ABI_CALL(0x0028AEF0u, sub_0028AEF0); /* call 0x0028AEF0 */

loc_0015776F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x00157778u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00157778: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x00157784u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00157784: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x00157790u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00157790: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0015779Cu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015779C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x60606060);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001577ABu); RECOMP_ABI_CALL(0x0028AEA0u, sub_0028AEA0); /* call 0x0028AEA0 */

loc_001577AB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001577B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x30E9F4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E0C7C); /* mulss */
    PUSH32(esp, ebx);
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DD414); /* addss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001577E3u); RECOMP_ABI_CALL(0x00157490u, sub_00157490); /* call 0x00157490 */

loc_001577E3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001577B0; /* jl: less (signed <) */

loc_001577E9: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001577F2u); RECOMP_ABI_CALL(0x0028AEA0u, sub_0028AEA0); /* call 0x0028AEA0 */

loc_001577F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x001577FBu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_001577FB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00157800: ;
    xmm0 = XMM_SCALAR(MEMF(0x30E9F4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E0C7C); /* mulss */
    PUSH32(esp, ebx);
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x14); /* addss */
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015782Bu); RECOMP_ABI_CALL(0x00157490u, sub_00157490); /* call 0x00157490 */

loc_0015782B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00157800; /* jl: less (signed <) */

loc_00157831: ;
    PUSH32(esp, 0x00157836u); RECOMP_ABI_CALL(0x0028AF30u, sub_0028AF30); /* call 0x0028AF30 */

loc_00157836: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x3BE2D8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30E9F0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x30E9F4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00157874; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00157859: ;
    xmm2 = xmm0; /* movaps */
    /* nop */

loc_00157860: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = xmm0; /* movaps */
    if ((_fca > _fcb)) goto loc_00157860; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0015786F: ;
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */

loc_00157874: ;
    MEM32(0x3BE2D8) = MEM32(0x3BE2D8) + 1;
    _fa = (uint32_t)(MEM32(0x3BE2D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015787A: ;
    POP32(esp, ebx);

loc_0015787B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00157880
 * Original: 0x00157880 - 0x001579CF (335 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157880: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    edx = ebx + 0x14C;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    ecx = 0x3C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xDC) = esi;
    MEM32(edx + 0xA8) = esi;
    MEM32(edx + 0x28) = esi;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 0xAC) = esi;
    MEM32(edx + 0xB0) = esi;
    MEM32(edx + 0xE4) = ebp;
    MEM32(edx + 0xE8) = ebp;
    MEM32(edx + 0xD4) = 0x11101;
    MEM32(edx + 0xD8) = 0x4021;
    MEM32(edx + 0xE0) = 0x10000;
    MEM32(edx + 0x88) = 0xC8C40000u;
    MEM32(edx) = 0xDA301010u;
    MEM32(edx + 0xB4) = 0x100C0;
    MEM32(edx + 0x68) = 0xC0;
    MEM32(edx + 0x20) = 0x300C0000;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xEC) = 0x1FF;
    edx = ebx + 0x32C;
    ecx = 0x3C;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(edx + 0xDC) = esi;
    MEM32(edx + 0xA8) = esi;
    MEM32(edx + 0x28) = esi;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 0x8C) = esi;
    MEM32(edx + 0xB8) = esi;
    MEM32(edx + 0x2C) = esi;
    MEM32(edx + 0x4C) = esi;
    MEM32(edx + 0xAC) = esi;
    MEM32(edx + 0xB0) = esi;
    POP32(esp, esi);
    eax = 0x100C0;
    MEM32(edx + 0xE4) = ebp;
    MEM32(edx + 0xE8) = ebp;
    POP32(esp, ebp);
    MEM32(edx + 0xD4) = 0x11102;
    MEM32(edx + 0xD8) = 0x4021;
    MEM32(edx + 0xE0) = 0x10000;
    MEM32(edx + 0x88) = 0xC8C40000u;
    MEM32(edx) = 0xDCD41010u;
    MEM32(edx + 0xB4) = eax;
    MEM32(edx + 0x68) = eax;
    MEM32(edx + 4) = 0xDCDA1010u;
    MEM32(edx + 0x6C) = 0xC0;
    MEM32(edx + 0x20) = 0x300C0000;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xEC) = 0x1FF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001579D0
 * Original: 0x001579D0 - 0x00157B6F (415 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001579D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001579D0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = ebx + 0x23C;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    ecx = 0x3C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xDC) = esi;
    MEM32(edx + 0xA8) = esi;
    MEM32(edx + 0x28) = esi;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 4) = esi;
    MEM32(edx + 0x6C) = esi;
    MEM32(edx + 0x2C) = esi;
    MEM32(edx + 0x4C) = esi;
    MEM32(edx + 0xAC) = esi;
    MEM32(edx + 0xB0) = esi;
    MEM32(edx + 0xD4) = 0x11102;
    MEM32(edx + 0xD8) = 0xC021;
    MEM32(edx + 0xE0) = 0x10000;
    MEM32(edx + 0x88) = 0xC8C40000u;
    MEM32(edx) = 0xDA301010u;
    MEM32(edx + 0xB4) = 0x100C0;
    MEM32(edx + 0x68) = 0xC0;
    MEM32(edx + 0x8C) = 0xCBC40000u;
    MEM32(edx + 0xB8) = 0x100D0;
    MEM32(edx + 0x20) = 0x10C0D00;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xE4) = 0xFFFFFFFFu;
    MEM32(edx + 0xE8) = 0xFFFFFFFFu;
    MEM32(edx + 0xEC) = 0x1F0;
    edx = ebx + 0x41C;
    ecx = 0x3C;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0xD00;
    POP32(esp, edi);
    MEM32(edx + 0xDC) = esi;
    MEM32(edx + 0xA8) = esi;
    MEM32(edx + 0xB4) = eax;
    MEM32(edx + 0x68) = eax;
    MEM32(edx + 0x28) = esi;
    MEM32(edx + 0x48) = esi;
    eax = 0x100C0;
    MEM32(edx + 0x2C) = esi;
    MEM32(edx + 0x4C) = esi;
    MEM32(edx + 0x90) = esi;
    MEM32(edx + 0xBC) = esi;
    MEM32(edx + 0x30) = esi;
    MEM32(edx + 0x50) = esi;
    MEM32(edx + 0xAC) = esi;
    MEM32(edx + 0xB0) = esi;
    POP32(esp, esi);
    MEM32(edx + 0xD4) = 0x11103;
    MEM32(edx + 0xD8) = 0xC021;
    MEM32(edx + 0xE0) = 0x10000;
    MEM32(edx + 0x88) = 0x11C8CB31;
    MEM32(edx) = 0x11D8DB31;
    MEM32(edx + 0x8C) = 0xCDC40000u;
    MEM32(edx + 4) = 0xDDD41010u;
    MEM32(edx + 0xB8) = eax;
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 8) = 0xDCDA1010u;
    MEM32(edx + 0x70) = 0xC0;
    MEM32(edx + 0x20) = 0x300C0000;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xE4) = 0xFFFFFFF0u;
    MEM32(edx + 0xE8) = 0xFFFFFFFFu;
    MEM32(edx + 0xEC) = 0x1FF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157B70
 * Original: 0x00157B70 - 0x00157F8A (1050 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157B70(void)
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

loc_00157B70: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 6);
    PUSH32(esp, 0x210);
    MEM32(esp + 0x3C) = esi;
    PUSH32(esp, 0x00157B8Fu); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_00157B8F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x210);
    PUSH32(esp, ebx);
    ecx = eax;
    MEM32(esi + 0x10C) = eax;
    PUSH32(esp, 0x00157BA6u); RECOMP_ABI_CALL(0x00216A30u, sub_00216A30); /* call 0x00216A30 */

loc_00157BA6: ;
    MEM32(esp + 0x28) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00157BB0: ;
    xmm1 = XMM_SCALAR(MEMF(0x30EA34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2E73D8); /* mulss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00157BD9u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_00157BD9: ;
    MEMF(esp + esi * 4 + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x30EA34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E73D8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00157BFDu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_00157BFD: ;
    MEMF(esp + esi * 4 + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00157BB0; /* jl: less (signed <) */

loc_00157C0D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x140) = xmm0.f[0]; /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00157C32: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157C66; /* jne: not equal / not zero */

loc_00157C36: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30EA38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2F25FC); /* subss */
    goto loc_00157D17;

loc_00157C66: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00157CDC; /* jge: greater or equal (signed >=) */

loc_00157C6B: ;
    xmm3 = XMM_SCALAR(MEMF(0x2E740C)); /* movss */
    eax = edi + -1;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2F25F8)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E4514)); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30EA38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x2F25FC); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    goto loc_00157D1D;

loc_00157CDC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30EA38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2F25FC); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F25F4)); /* movss */

loc_00157D17: ;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_00157D1D: ;
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00157D27u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_00157D27: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00157D31u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_00157D31: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00157D3Fu); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_00157D3F: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00157D49u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_00157D49: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC8D4)); /* fmul dword ptr [0x2dc8d4] */
    eax = MEM32(esp + 0x38);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC8D4)); /* fmul dword ptr [0x2dc8d4] */
    ecx = esi + esi * 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + ecx * 8;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = edi + 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00157D90;

    /* nop */

loc_00157D90: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8D4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + ecx + 0x3C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + ecx + 0xC0)); /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    MEM16(eax + 0xC) = LO16(edi);
    MEM16(eax + 0xE) = LO16(ebx);
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0x14) = xmm7.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + ecx + 0x40)); /* movss */
    MEM16(eax + 0xC) = LO16(edx);
    MEM16(eax + 0xE) = LO16(ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + -16) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + ecx + 0xC4)); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    MEM16(eax + 0xC) = LO16(edi);
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0x14) = xmm7.f[0]; /* movss */
    MEM16(eax + 0xE) = LO16(ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + ecx + 0x44)); /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    MEM16(eax + 0xC) = LO16(edx);
    MEM16(eax + 0xE) = LO16(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + ecx + 0xC8)); /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    MEM16(eax + 0xC) = LO16(edi);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEM16(eax + 0xE) = LO16(ebx);
    MEMF(eax + 0x14) = xmm7.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    MEM16(eax + 0xC) = LO16(edx);
    MEM16(eax + 0xE) = LO16(ebx);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00157D90; /* jle: less or equal (signed <=) */

loc_00157F66: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00157C32; /* jl: less (signed <) */

loc_00157F70: ;
    ecx = MEM32(esp + 0x30);
    ecx = MEM32(ecx + 0x10C);
    PUSH32(esp, 0x00157F7Fu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00157F7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157F90
 * Original: 0x00157F90 - 0x0015838D (1021 bytes, 245 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157F90(void)
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

loc_00157F90: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x140);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00157FC2; /* jne: not equal / not zero */

loc_00157FAC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x210);
    PUSH32(esp, 0x00157FB9u); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_00157FB9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x140) = eax;

loc_00157FC2: ;
    ecx = MEM32(esi + 0x140);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x210);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00157FD4u); RECOMP_ABI_CALL(0x00216A30u, sub_00216A30); /* call 0x00216A30 */

loc_00157FD4: ;
    MEM32(esp + 0x18) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00157FE0: ;
    xmm1 = XMM_SCALAR(MEMF(0x30EA34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2E73D8); /* mulss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00158009u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_00158009: ;
    MEMF(esp + esi * 4 + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x30EA34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E73D8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015802Du); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0015802D: ;
    MEMF(esp + esi * 4 + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00157FE0; /* jl: less (signed <) */

loc_0015803D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x140) = xmm0.f[0]; /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00158070;

    /* nop */
    goto loc_00158070;

    /* nop */

loc_00158070: ;
    xmm0 = XMM_SCALAR(MEMF(0x30EA38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC3C4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x2E0C7C)); /* movss */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    eax = edi + 1;
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    ebp = MEM32(esp + 0x2C);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001580CCu); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_001580CC: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001580D6u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_001580D6: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001580E4u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_001580E4: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001580EEu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_001580EE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC8D4)); /* fmul dword ptr [0x2dc8d4] */
    xmm2 = XMM_SCALAR(MEMF(0x2E0C7C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x30EA00)); /* movss */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC8D4)); /* fmul dword ptr [0x2dc8d4] */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = xmm1; /* movaps */
    xmm1 = xmm4; /* movaps */
    eax = esi + esi * 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    eax = ecx + eax * 8;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    edx = edi + 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00158160: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8D4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + ecx + 0x3C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + ecx + 0xC0)); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 4) = xmm7.f[0]; /* movss */
    MEM16(eax + 0xC) = LO16(edi);
    MEM16(eax + 0xE) = LO16(ebx);
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + -8) = xmm7.f[0]; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + -4) = xmm7.f[0]; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 4) = xmm7.f[0]; /* movss */
    MEM16(eax + 0xC) = LO16(edx);
    MEM16(eax + 0xE) = LO16(ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + -16) = xmm7.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(eax + -8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + ecx + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEMF(eax + -4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + ecx + 0xC4)); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 4) = xmm7.f[0]; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    MEM16(eax + 0xC) = LO16(edi);
    MEM16(eax + 0xE) = LO16(ebx);
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm7.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + -4) = xmm7.f[0]; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(eax + 4) = xmm7.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm7 = xmm3; /* movaps */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    MEM16(eax + 0xC) = LO16(edx);
    MEM16(eax + 0xE) = LO16(ebx);
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = XMM_SCALAR(MEMF(esp + ecx + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + ecx + 0xC8)); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 4) = xmm7.f[0]; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    MEM16(eax + 0xC) = LO16(edi);
    MEM16(eax + 0xE) = LO16(ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + -8) = xmm7.f[0]; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + -4) = xmm7.f[0]; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 4) = xmm7.f[0]; /* movss */
    xmm7 = xmm3; /* movaps */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    MEM16(eax + 0xC) = LO16(edx);
    MEM16(eax + 0xE) = LO16(ebx);
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00158160; /* jle: less or equal (signed <=) */

loc_00158366: ;
    edi = MEM32(esp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00158070; /* jl: less (signed <) */

loc_00158373: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(edx + 0x140);
    PUSH32(esp, 0x00158382u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00158382: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00158390
 * Original: 0x00158390 - 0x00158402 (114 bytes, 29 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158390(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00158390: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0x128) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC340); /* comiss */
    MEM32(esi + 0x13C) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001583DE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC340)) */

loc_001583BA: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi + 0x110;
    PUSH32(esp, 0x001583CAu); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_001583CA: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi + 0x11C;
    PUSH32(esp, 0x001583DAu); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_001583DA: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_001583DE: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi + 0x110;
    PUSH32(esp, 0x001583EEu); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_001583EE: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi + 0x11C;
    PUSH32(esp, 0x001583FEu); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_001583FE: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00158410
 * Original: 0x00158410 - 0x00158470 (96 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158410(void)
{

loc_00158410: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x00158425u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_00158425: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x44000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00158448u); RECOMP_ABI_CALL(0x0020C980u, sub_0020C980); /* call 0x0020C980 */

loc_00158448: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x44000000);
    PUSH32(esp, 0x43C70000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0015846Eu); RECOMP_ABI_CALL(0x0020C980u, sub_0020C980); /* call 0x0020C980 */

loc_0015846E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00158470
 * Original: 0x00158470 - 0x00158482 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158470(void)
{

loc_00158470: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00158478u); RECOMP_ABI_CALL(0x00209680u, sub_00209680); /* call 0x00209680 */

loc_00158478: ;
    MEM32(esi) = 0x2F2600;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00158490
 * Original: 0x00158490 - 0x001584A2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158490(void)
{

loc_00158490: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00158498u); RECOMP_ABI_CALL(0x00209680u, sub_00209680); /* call 0x00209680 */

loc_00158498: ;
    MEM32(esi) = 0x2F2614;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001584B0
 * Original: 0x001584B0 - 0x001584C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001584B0(void)
{

loc_001584B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001584B8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_001584B8: ;
    MEM32(esi) = 0x2F2628;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001584D0
 * Original: 0x001584D0 - 0x001584F8 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001584D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001584D0: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001584D9u); RECOMP_ABI_CALL(0x0020FA20u, sub_0020FA20); /* call 0x0020FA20 */

loc_001584D9: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001584E2u); RECOMP_ABI_CALL(0x0020FA20u, sub_0020FA20); /* call 0x0020FA20 */

loc_001584E2: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001584EBu); RECOMP_ABI_CALL(0x0020FA20u, sub_0020FA20); /* call 0x0020FA20 */

loc_001584EB: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 3);
    PUSH32(esp, 0x001584F4u); RECOMP_ABI_CALL(0x0020FA20u, sub_0020FA20); /* call 0x0020FA20 */

loc_001584F4: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00158500
 * Original: 0x00158500 - 0x00158505 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158500: ;
    g_seh_ebp = ebp; sub_002003E0(); return; /* tail jmp 0x002003E0 */

}

/**
 * sub_00158510
 * Original: 0x00158510 - 0x0015854A (58 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158510(void)
{

loc_00158510: ;
    MEM8(0x3BE2E8) = 0;
    MEM32(0x3BE2EC) = 0x40000000;
    MEM32(0x3BE2F0) = 0x50404040;
    MEM32(0x3BE2F4) = 0x60608060;
    MEM32(0x3BE2F8) = 0x70C0C0C0;
    MEM32(0x3BE2FC) = 0x80FFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00158550
 * Original: 0x00158550 - 0x00158564 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158550: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30EA14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00158570
 * Original: 0x00158570 - 0x00158650 (224 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158570(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00158570: ;
    xmm1 = XMM_SCALAR(MEMF(0x30EA34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2F25F4)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E083C); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(0x3BE2E0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001585B1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0015859E: ;
    edi = edi;

loc_001585A0: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001585A0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_001585A9: ;
    MEMF(0x3BE2E0) = xmm0.f[0]; /* movss */

loc_001585B1: ;
    xmm2 = XMM_SCALAR(MEMF(0x2E0A1C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001585D7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001585BE: ;
    edi = edi;

loc_001585C0: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001585C0; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_001585CF: ;
    MEMF(0x3BE2E0) = xmm0.f[0]; /* movss */

loc_001585D7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC340); /* comiss */
    ecx = 0x3BECF8;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00158610; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC340)) */

loc_001585EB: ;
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    MEMF(0x3BE320) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00158609u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00158609: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    goto loc_00158627;

loc_00158610: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    MEMF(0x3BE320) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00158622u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00158622: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);

loc_00158627: ;
    ecx = 0x3BED04;
    PUSH32(esp, 0x00158631u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00158631: ;
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3BE320); /* comiss */
    MEM32(0x30EA18) = ecx;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015864F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3BE320)) */

loc_00158647: ;
    MEMF(0x3BE320) = xmm0.f[0]; /* movss */

loc_0015864F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00158650
 * Original: 0x00158650 - 0x0015869A (74 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158650: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = edx; /* cmove */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) ecx = eax; /* cmove */
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30EA1C) = eax;
    MEM32(0x30EA24) = ecx;
    MEM32(0x30EA20) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001586A0
 * Original: 0x001586A0 - 0x001586CD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001586A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001586A0: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x001586A7u); RECOMP_ABI_CALL(0x0020FA90u, sub_0020FA90); /* call 0x0020FA90 */

loc_001586A7: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x3BE320);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001586CCu); RECOMP_ABI_CALL(0x00158390u, sub_00158390); /* call 0x00158390 */

loc_001586CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001586D0
 * Original: 0x001586D0 - 0x001586DA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001586D0(void)
{

loc_001586D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x3BE319) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001586E0
 * Original: 0x001586E0 - 0x0015873F (95 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001586E0(void)
{

loc_001586E0: ;
    PUSH32(esp, 0x3BECD0);
    ecx = 0x3BEC58;
    PUSH32(esp, 0x001586EFu); RECOMP_ABI_CALL(0x0020B800u, sub_0020B800); /* call 0x0020B800 */

loc_001586EF: ;
    PUSH32(esp, 0x3BECA8);
    ecx = 0x3BEC58;
    PUSH32(esp, 0x001586FEu); RECOMP_ABI_CALL(0x0020B800u, sub_0020B800); /* call 0x0020B800 */

loc_001586FE: ;
    ecx = 0x3BEC58;
    PUSH32(esp, 0x00158708u); RECOMP_ABI_CALL(0x00209700u, sub_00209700); /* call 0x00209700 */

loc_00158708: ;
    ecx = 0x3BED4C;
    PUSH32(esp, 0x00158712u); RECOMP_ABI_CALL(0x001FA1D0u, sub_001FA1D0); /* call 0x001FA1D0 */

loc_00158712: ;
    PUSH32(esp, 0);
    ecx = 0x3BED10;
    PUSH32(esp, 0x0015871Eu); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_0015871E: ;
    PUSH32(esp, 0);
    ecx = 0x3BECF8;
    PUSH32(esp, 0x0015872Au); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_0015872A: ;
    PUSH32(esp, 0);
    ecx = 0x3BED04;
    PUSH32(esp, 0x00158736u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00158736: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015873Du); RECOMP_ABI_CALL(0x001F32E0u, sub_001F32E0); /* call 0x001F32E0 */

loc_0015873D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00158740
 * Original: 0x00158740 - 0x001587C3 (131 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158740: ;
    SET_LO8(eax, MEM8(0x3BE31A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001587C2; /* jne: not equal / not zero */

loc_00158749: ;
    edx = MEM32(0x3BE300);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    edx = MEM32(esp + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_0015878C; /* jne: not equal / not zero */

loc_0015876C: ;
    _fa = (uint32_t)(MEM32(0x3BE304)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3BE304), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015878C; /* jne: not equal / not zero */

loc_00158774: ;
    _fa = (uint32_t)(MEM32(0x3BE308)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3BE308), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015878C; /* jne: not equal / not zero */

loc_0015877C: ;
    _fa = (uint32_t)(MEM32(0x3BE30C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3BE30C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015878C; /* jne: not equal / not zero */

loc_00158784: ;
    _fa = (uint32_t)(MEM32(0x3BE310)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3BE310), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015878E; /* je: equal / zero */

loc_0015878C: ;
    SET_LO8(eax, 1);

loc_0015878E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x3BE308) = edi;
    POP32(esp, edi);
    MEM32(0x3BE30C) = esi;
    POP32(esp, esi);
    MEM32(0x3BE304) = ebx;
    MEM32(0x3BE300) = ecx;
    MEM32(0x3BE310) = edx;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001587C2; /* je: equal / zero */

loc_001587B3: ;
    PUSH32(esp, 0x3BE300);
    ecx = 0x3BE858;
    PUSH32(esp, 0x001587C2u); RECOMP_ABI_CALL(0x0015A250u, sub_0015A250); /* call 0x0015A250 */

loc_001587C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001587D0
 * Original: 0x001587D0 - 0x00158814 (68 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001587D0(void)
{

loc_001587D0: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEMF(0x30EA04) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, ecx);
    MEMF(0x30EA08) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, edx);
    ecx = 0x3BE858;
    MEMF(0x30EA0C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00158813u); RECOMP_ABI_CALL(0x0015A220u, sub_0015A220); /* call 0x0015A220 */

loc_00158813: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00158820
 * Original: 0x00158820 - 0x0015888B (107 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158820(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00158820: ;
    xmm0 = XMM_SCALAR(MEMF(0x3BE2E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3BE314); /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x2F25F4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x30EA34)); /* movss */
    MEMF(0x3BE314) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00158864; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00158853: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00158853; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0015885C: ;
    MEMF(0x3BE314) = xmm0.f[0]; /* movss */

loc_00158864: ;
    xmm2 = XMM_SCALAR(MEMF(0x2E0A1C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00158888; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00158871: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00158871; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00158880: ;
    MEMF(0x3BE314) = xmm0.f[0]; /* movss */

loc_00158888: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00158890
 * Original: 0x00158890 - 0x001588A6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158890: ;
    PUSH32(esp, 0x30890);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001588A5u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_001588A5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001588B0
 * Original: 0x001588B0 - 0x00158909 (89 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001588B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001588B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30890);
    PUSH32(esp, 0x31080);
    esi = ecx;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 0x110;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esi + 0x104) = edi;
    MEM32(esi + 0x108) = edi;
    MEM32(esi) = 0x2F263C;
    PUSH32(esp, 0x001588E2u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_001588E2: ;
    MEM32(esi + 0x148) = edi;
    MEM32(esi + 0x10C) = edi;
    MEM32(esi + 0x140) = edi;
    MEM32(esi + 0x50C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x510) = 0x6E;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00158910
 * Original: 0x00158910 - 0x001589AF (159 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158910: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0xC); /* subss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(esp) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001589B0
 * Original: 0x001589B0 - 0x00158AAA (250 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001589B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001589B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2F2660);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001589C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001589C5u); } /* indirect call */
    }

loc_001589C8: ;
    ecx = esi;
    MEM32(esi + 0xC) = 0x32;
    MEM32(esi + 0x38) = 0xC;
    MEM32(esi + 0x3C) = 0x25;
    MEM32(esi + 0x48) = 0x10;
    MEM32(esi + 0x4C) = 0x22;
    PUSH32(esp, 0x001589F2u); RECOMP_ABI_CALL(0x00157880u, sub_00157880); /* call 0x00157880 */

loc_001589F2: ;
    ecx = esi;
    PUSH32(esp, 0x001589F9u); RECOMP_ABI_CALL(0x001579D0u, sub_001579D0); /* call 0x001579D0 */

loc_001589F9: ;
    ecx = esi;
    PUSH32(esp, 0x00158A00u); RECOMP_ABI_CALL(0x00157B70u, sub_00157B70); /* call 0x00157B70 */

loc_00158A00: ;
    ecx = esi;
    PUSH32(esp, 0x00158A07u); RECOMP_ABI_CALL(0x00157F90u, sub_00157F90); /* call 0x00157F90 */

loc_00158A07: ;
    edi = esi + 0x110;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00158A16u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00158A16: ;
    ebx = esi + 0x11C;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x00158A25u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00158A25: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00158A2Eu); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_00158A2E: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x00158A37u); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_00158A37: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x130) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x12C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F265C)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2F2658)); /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x134) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x138) = edx;
    MEM32(esi + 0x148) = 0x4140CC;
    eax = MEM32(0x4140CC);
    MEM32(esi + 0x144) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x13C) = 0x80808080u;
    MEM32(esi + 0x50C) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00158AB0
 * Original: 0x00158AB0 - 0x00158B2E (126 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158AB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00158ABAu); RECOMP_ABI_CALL(0x00212E90u, sub_00212E90); /* call 0x00212E90 */

loc_00158ABA: ;
    edi = MEM32(esi + 0x10C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158AD6; /* je: equal / zero */

loc_00158AC6: ;
    ecx = edi;
    PUSH32(esp, 0x00158ACDu); RECOMP_ABI_CALL(0x00216A50u, sub_00216A50); /* call 0x00216A50 */

loc_00158ACD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00158AD3u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00158AD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00158AD6: ;
    edi = MEM32(esi + 0x140);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x10C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00158AF6; /* je: equal / zero */

loc_00158AE6: ;
    ecx = edi;
    PUSH32(esp, 0x00158AEDu); RECOMP_ABI_CALL(0x00216A50u, sub_00216A50); /* call 0x00216A50 */

loc_00158AED: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00158AF3u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00158AF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00158AF6: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x110;
    MEM32(esi + 0x140) = ebx;
    PUSH32(esp, 0x00158B08u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00158B08: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x11C;
    PUSH32(esp, 0x00158B14u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00158B14: ;
    ecx = MEM32(esi + 0x50C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158B24; /* je: equal / zero */

loc_00158B1E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00158B24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158B22u); } /* indirect call */
    }

loc_00158B24: ;
    POP32(esp, edi);
    MEM32(esi + 0x50C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00158B30
 * Original: 0x00158B30 - 0x00158CA8 (376 bytes, 116 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158B30(void)
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

loc_00158B30: ;
    eax = 0x1024;
    PUSH32(esp, 0x00158B3Au); RECOMP_ABI_CALL(0x00237830u, sub_00237830); /* call 0x00237830 */

loc_00158B3A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F266C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    esi = ecx;
    PUSH32(esp, 0x00158B4Eu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00158B4E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158B6D; /* je: equal / zero */

loc_00158B55: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x100);
    PUSH32(esp, 8);
    ecx = eax;
    PUSH32(esp, 0x00158B6Bu); RECOMP_ABI_CALL(0x00215D10u, sub_00215D10); /* call 0x00215D10 */

loc_00158B6B: ;
    goto loc_00158B6F;

loc_00158B6D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00158B6F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEM32(esi + 0x50C) = eax;
    edx = MEM32(eax + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00158B89u); RECOMP_ABI_CALL(0x0028C530u, sub_0028C530); /* call 0x0028C530 */

loc_00158B89: ;
    eax = MEM32(esi + 0x510);
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = 0x100;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ebx = eax;
    ecx = 1;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = esp + 0x34;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x20) = ecx;
    /* nop */

loc_00158BD0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00158BE8; /* jge: greater or equal (signed >=) */

loc_00158BD4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    goto loc_00158C6A;

loc_00158BE8: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2E0C7C); /* mulss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x10) = esi;
    goto loc_00158C20;

    /* nop */

loc_00158C20: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC39C)); /* fmul dword ptr [0x2dc39c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC340)); /* fadd dword ptr [0x2dc340] */
    PUSH32(esp, 0x00158C41u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_00158C41: ;
    fp_pop(); /* fstp st(0) */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, LO8(eax));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM16(edi + -2) = LO16(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00158C20; /* jl: less (signed <) */

loc_00158C58: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);

loc_00158C6A: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x100 (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00158BD0; /* jl: less (signed <) */

loc_00158C7F: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00158C9Du); RECOMP_ABI_CALL(0x0029C13Eu, sub_0029C13E); /* call 0x0029C13E */

loc_00158C9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1024) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1024;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00158CB0
 * Original: 0x00158CB0 - 0x00158F1E (622 bytes, 160 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158CB0(void)
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

loc_00158CB0: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x30EA24);
    ecx = MEM32(0x30EA1C);
    edx = MEM32(0x30EA20);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 4) = esi;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00158CE3; /* jge: greater or equal (signed >=) */

loc_00158CDD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158CE3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    esi = eax;
    esi = esi >> 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = esi;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00158D0A; /* jge: greater or equal (signed >=) */

loc_00158D04: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158D0A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    esi = eax;
    esi = esi >> 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = esi;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00158D31; /* jge: greater or equal (signed >=) */

loc_00158D2B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158D31: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00158D50; /* jge: greater or equal (signed >=) */

loc_00158D4A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158D50: ;
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = eax;
    eax = edx;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00158D93; /* jge: greater or equal (signed >=) */

loc_00158D8D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158D93: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    eax = edx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00158DB9; /* jge: greater or equal (signed >=) */

loc_00158DB3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158DB9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00158DDF; /* jge: greater or equal (signed >=) */

loc_00158DD9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158DDF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 8) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00158DFE; /* jge: greater or equal (signed >=) */

loc_00158DF8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158DFE: ;
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x9C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0xA4) = edx;
    edx = ecx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 0xA8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00158E4E; /* jge: greater or equal (signed >=) */

loc_00158E48: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158E4E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00158E74; /* jge: greater or equal (signed >=) */

loc_00158E6E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158E74: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00158E9B; /* jge: greater or equal (signed >=) */

loc_00158E95: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158E9B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00158EBA; /* jge: greater or equal (signed >=) */

loc_00158EB4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00158EBA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    xmm5 = XMM_SCALAR(MEMF(0x2E740C)); /* movss */
    esi = 1;
    edi = esp + 0x2C;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_00158ED5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esi + -1;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00158EF9u); RECOMP_ABI_CALL(0x00158910u, sub_00158910); /* call 0x00158910 */

loc_00158EF9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00158ED5; /* jl: less (signed <) */

loc_00158F05: ;
    PUSH32(esp, 0x24);
    edx = esp + 0x20;
    ecx = 0x28;
    PUSH32(esp, 0x00158F15u); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_00158F15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00158F20
 * Original: 0x00158F20 - 0x001590C2 (418 bytes, 110 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158F20(void)
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

loc_00158F20: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x148);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00158F52; /* je: equal / zero */

loc_00158F33: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(ebp + 0x144)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6921A0); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_00158F5B;

loc_00158F52: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00158F5B: ;
    ecx = MEM32(ebp + 0x148);
    edx = MEM32(ecx);
    edi = MEM32(esp + 0x44);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x144) = edx;
    MEM32(esp + 0x18) = ebx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    esi = ebp + 0x130;
    goto loc_00158F90;

    /* nop */
    edi = edi;

loc_00158F90: ;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30E9FC); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00158FB1u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00158FB1: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2F2690)); /* fmul qword ptr [0x2f2690] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x2F2688)); /* fadd qword ptr [0x2f2688] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x128)); /* fmul dword ptr [ebp + 0x128] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + -4); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    fp_top() = RECOMP_FP_PC(MEMF(esi) - fp_top()); /* fsubr dword ptr [esi] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015900D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00159004: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00159004; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0015900D: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00159029; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0015901A: ;
    /* nop */

loc_00159020: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00159020; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00159029: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    edx = edi;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edx + 0xC) = ecx;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    edx = edi + 0x10;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x38);
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEM32(edx + 4) = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    MEM32(edx + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    MEM32(edx + 0xC) = ecx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00158F90; /* jl: less (signed <) */

loc_001590B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_001590D0
 * Original: 0x001590D0 - 0x00159170 (160 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001590D0(void)
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

loc_001590D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x001590DEu); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_001590DE: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x001590E7u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_001590E7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x80808080u);
    esi = eax;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = 0x40101010;
    MEM32(esp + 0x34) = 0x40000000;
    PUSH32(esp, 0x00159110u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_00159110: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00159168; /* jle: less or equal (signed <=) */

loc_0015911A: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00159126: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    eax = ebx;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esp + eax * 4 + 0x1C);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00159146u); RECOMP_ABI_CALL(0x0020C2D0u, sub_0020C2D0); /* call 0x0020C2D0 */

loc_00159146: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00159158u); RECOMP_ABI_CALL(0x0020C2D0u, sub_0020C2D0); /* call 0x0020C2D0 */

loc_00159158: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00159126; /* jl: less (signed <) */

loc_00159168: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00159170
 * Original: 0x00159170 - 0x00159258 (232 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159170(void)
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

loc_00159170: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7025E915);
    ecx = edi;
    PUSH32(esp, 0x00159184u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00159184: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159213; /* je: equal / zero */

loc_0015918C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00159195u); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_00159195: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001591AB; /* jle: less or equal (signed <=) */

loc_001591A4: ;
    ebp = 0xFF;
    goto loc_001591B1;

loc_001591AB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001591B1; /* jge: greater or equal (signed >=) */

loc_001591AF: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001591B1: ;
    ecx = edi;
    PUSH32(esp, 0x001591B8u); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_001591B8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001591CE; /* jle: less or equal (signed <=) */

loc_001591C7: ;
    ebx = 0xFF;
    goto loc_001591D4;

loc_001591CE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001591D4; /* jge: greater or equal (signed >=) */

loc_001591D2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001591D4: ;
    ecx = edi;
    PUSH32(esp, 0x001591DBu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_001591DB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001591F1; /* jle: less or equal (signed <=) */

loc_001591EA: ;
    esi = 0xFF;
    goto loc_001591F7;

loc_001591F1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001591F7; /* jge: greater or equal (signed >=) */

loc_001591F5: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001591F7: ;
    ecx = edi;
    PUSH32(esp, 0x001591FEu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_001591FE: ;
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015920Eu); RECOMP_ABI_CALL(0x00158550u, sub_00158550); /* call 0x00158550 */

loc_0015920E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00159213: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8D6C605Fu);
    ecx = edi;
    PUSH32(esp, 0x00159221u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00159221: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015922E; /* je: equal / zero */

loc_00159225: ;
    ecx = edi;
    PUSH32(esp, 0x0015922Cu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0015922C: ;
    fp_pop(); /* fstp st(0) */

loc_0015922E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00159230: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xF17ED4F7u);
    ecx = edi;
    PUSH32(esp, 0x0015923Du); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015923D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159255; /* je: equal / zero */

loc_00159241: ;
    ecx = edi;
    PUSH32(esp, 0x00159248u); RECOMP_ABI_CALL(0x001EF210u, sub_001EF210); /* call 0x001EF210 */

loc_00159248: ;
    MEM32(esi * 4 + 0x3BE2EC) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159230; /* jl: less (signed <) */

loc_00159255: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00159260
 * Original: 0x00159260 - 0x001592A3 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159260: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159291; /* je: equal / zero */

loc_00159269: ;
    eax = MEM32(0x3BECD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015927F; /* je: equal / zero */

loc_00159272: ;
    eax = MEM32(0x3BECD0);
    ecx = 0x3BECD0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0015927Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015927Cu); } /* indirect call */
    }

loc_0015927F: ;
    MEM8(0x3BE31A) = LO8(ebx);
    MEM32(0x3BECD8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00159291: ;
    MEM8(0x3BE31A) = LO8(ebx);
    MEM32(0x3BECD8) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001592B0
 * Original: 0x001592B0 - 0x001592E9 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001592B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001592B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x3BE31B) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001592DE; /* je: equal / zero */

loc_001592BD: ;
    eax = MEM32(0x3BECB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001592D3; /* je: equal / zero */

loc_001592C6: ;
    eax = MEM32(0x3BECA8);
    ecx = 0x3BECA8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001592D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001592D0u); } /* indirect call */
    }

loc_001592D3: ;
    MEM32(0x3BECB0) = 0;
    esp += 4; return; /* ret */

loc_001592DE: ;
    MEM32(0x3BECB0) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001592F0
 * Original: 0x001592F0 - 0x00159367 (119 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001592F0(void)
{

loc_001592F0: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM8(0x3BE324) = LO8(eax);
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(0x3BE334) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(0x3BE338) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(0x6437B8);
    MEMF(0x3BE33C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(0x30EA28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(0x30EA2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(0x30EA30) = xmm0.f[0]; /* movss */
    MEM32(0x3BED20) = eax;
    ecx = MEM32(eax);
    MEM32(0x3BED1C) = ecx;
    MEM8(0x3BE31C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00159370
 * Original: 0x00159370 - 0x0015939B (43 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159370: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x3BE318) = LO8(eax);
    MEM32(0x30EA1C) = 0x80808080u;
    MEM8(0x3BE319) = LO8(eax);
    MEM8(0x3BE31A) = LO8(eax);
    MEM8(0x3BE31B) = LO8(eax);
    MEM8(0x3BE31C) = LO8(eax);
    MEM8(0x3BE2E8) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001593A0
 * Original: 0x001593A0 - 0x00159C54 (2228 bytes, 525 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001593A0(void)
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

loc_001593A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6437B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00159C4C; /* je: equal / zero */

loc_001593BD: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x30EA00); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001593DF; /* jnp: not parity */

loc_001593D2: ;
    MEMF(0x30EA00) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001593DFu); RECOMP_ABI_CALL(0x00157F90u, sub_00157F90); /* call 0x00157F90 */

loc_001593DF: ;
    eax = MEM32(0x30E9F8);
    eax = eax & 0xFFFFFEFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2F26A4);
    PUSH32(esp, 0xFF000FF0u);
    MEM32(0x30E9F8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159400u); RECOMP_ABI_CALL(0x0028B340u, sub_0028B340); /* call 0x0028B340 */

loc_00159400: ;
    eax = MEM32(esi + 0x50C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159414; /* jne: not equal / not zero */

loc_0015940D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159414u); RECOMP_ABI_CALL(0x00158B30u, sub_00158B30); /* call 0x00158B30 */

loc_00159414: ;
    ecx = MEM32(esi + 0x50C);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159422u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00159422: ;
    edx = MEM32(0x3BECFC);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159430u); RECOMP_ABI_CALL(0x002112D0u, sub_002112D0); /* call 0x002112D0 */

loc_00159430: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x3BE320)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001594A6; /* jnp: not parity */

loc_0015944D: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015946F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00159467: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0015947A;

loc_0015946F: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015947A; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00159474: ;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */

loc_0015947A: ;
    eax = MEM32(0x3BED08);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159487u); RECOMP_ABI_CALL(0x002112D0u, sub_002112D0); /* call 0x002112D0 */

loc_00159487: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x23C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159496u); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_00159496: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001594A1u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_001594A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001594B2;

loc_001594A6: ;
    edx = esi + 0x14C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001594B2u); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_001594B2: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001594BDu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_001594BD: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001594C8u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_001594C8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001594D3u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_001594D3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001594DEu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_001594DE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001594E9u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_001594E9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159521u); RECOMP_ABI_CALL(0x0028C7B0u, sub_0028C7B0); /* call 0x0028C7B0 */

loc_00159521: ;
    xmm1 = XMM_SCALAR(MEMF(0x2F26A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x643808); /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x643818)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x60;
    ecx = 0x25;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159566u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_00159566: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159571u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159571: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015957Cu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015957C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159587u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159587: ;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159592u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159592: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015959Du); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015959D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595A8u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_001595A8: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595B4u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_001595B4: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595C0u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_001595C0: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x3F);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595CCu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_001595CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595D5u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_001595D5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595DEu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_001595DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595E7u); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_001595E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595EFu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_001595EF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3BE314); /* subss */
    ecx = esp + 0x24;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159674u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_00159674: ;
    eax = MEM32(0x6437B4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    PUSH32(esp, 0x7B5320);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = edx;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001596BAu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_001596BA: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001596C7u); RECOMP_ABI_CALL(0x0022F6A5u, sub_0022F6A5); /* call 0x0022F6A5 */

loc_001596C7: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x24;
    ecx = 0x17;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001596D7u); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_001596D7: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001596DEu); RECOMP_ABI_CALL(0x00158CB0u, sub_00158CB0); /* call 0x00158CB0 */

loc_001596DE: ;
    eax = MEM32(esi + 0x10C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001596ECu); RECOMP_ABI_CALL(0x002105A0u, sub_002105A0); /* call 0x002105A0 */

loc_001596EC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    edx = esp + 0x84;
    ecx = 0x26;
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159755u); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_00159755: ;
    PUSH32(esp, 0x210);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159763u); RECOMP_ABI_CALL(0x0028AB00u, sub_0028AB00); /* call 0x0028AB00 */

loc_00159763: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015976Eu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015976E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159779u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159779: ;
    SET_LO8(eax, MEM8(0x30E9F8));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00159B88; /* je: equal / zero */

loc_00159789: ;
    edi = MEM32(esi + 0x114);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159B88; /* je: equal / zero */

loc_00159797: ;
    PUSH32(esp, 0xB5E50);
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    ecx = esp + 0x14C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001597ADu); RECOMP_ABI_CALL(0x00015B30u, sub_00015B30); /* call 0x00015B30 */

loc_001597AD: ;
    edx = esp + 0x140;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001597BCu); RECOMP_ABI_CALL(0x00158F20u, sub_00158F20); /* call 0x00158F20 */

loc_001597BC: ;
    PUSH32(esp, 0xB5E50);
    PUSH32(esp, 9);
    PUSH32(esp, 0x10);
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001597D2u); RECOMP_ABI_CALL(0x00015B30u, sub_00015B30); /* call 0x00015B30 */

loc_001597D2: ;
    ecx = MEM32(esi + 0x13C);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001597F0; /* jge: greater or equal (signed >=) */

loc_001597EA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_001597F0: ;
    edx = ZX8(MEM8(esi + 0x13D));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F25F0)); /* fmul dword ptr [0x2f25f0] */
    eax = ZX8(MEM8(esi + 0x13E));
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esp + 0x130) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(0x2F25F0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2EBAF4)); /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEM32(esp + 0xA0) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0xA4) = edx;
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    xmm2 = XMM_SCALAR(MEMF(0x2F269C)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xAC) = ecx;
    MEM32(esp + 0xB0) = edx;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x130)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xB8) = ecx;
    MEM32(esp + 0xBC) = edx;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2E7500)); /* movss */
    MEM32(esp + 0xC0) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0xC4) = ecx;
    MEM32(esp + 0xC8) = edx;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    MEM32(esp + 0xCC) = eax;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0xD0) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0xD4) = edx;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2F2698)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM32(esp + 0xD8) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0xDC) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0xE0) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xE8) = ecx;
    MEM32(esp + 0xEC) = edx;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    xmm3 = XMM_SCALAR(MEMF(0x2E0C7C)); /* movss */
    MEM32(esp + 0xF0) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0xF4) = ecx;
    MEM32(esp + 0xF8) = edx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0xFC) = eax;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x100) = ecx;
    MEM32(esp + 0x104) = edx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    xmm3 = XMM_SCALAR(MEMF(0x2E4514)); /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x108) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x10C) = ecx;
    MEM32(esp + 0x110) = edx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x114) = eax;
    MEM32(esp + 0x118) = ecx;
    MEM32(esp + 0x11C) = edx;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x120) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x124) = ecx;
    MEM32(esp + 0x128) = edx;
    PUSH32(esp, 0x24);
    edx = esp + 0xA4;
    ecx = 0x28;
    MEM32(esp + 0x130) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159AE2u); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_00159AE2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159AEAu); RECOMP_ABI_CALL(0x002112D0u, sub_002112D0); /* call 0x002112D0 */

loc_00159AEA: ;
    xmm0 = XMM_SCALAR(MEMF(0x3BE320)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00159B16; /* jnp: not parity */

loc_00159B02: ;
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B0Au); RECOMP_ABI_CALL(0x002112D0u, sub_002112D0); /* call 0x002112D0 */

loc_00159B0A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x41C;
    PUSH32(esp, ecx);
    goto loc_00159B1D;

loc_00159B16: ;
    edx = esi + 0x32C;
    PUSH32(esp, edx);

loc_00159B1D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B22u); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_00159B22: ;
    eax = MEM32(esi + 0x140);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B30u); RECOMP_ABI_CALL(0x002105A0u, sub_002105A0); /* call 0x002105A0 */

loc_00159B30: ;
    SET_LO8(eax, MEM8(0x30E9F8));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00159B5D; /* je: equal / zero */

loc_00159B3C: ;
    PUSH32(esp, 8);
    edx = esp + 0x144;
    ecx = 0x26;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B4Fu); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_00159B4F: ;
    PUSH32(esp, 0x210);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B5Du); RECOMP_ABI_CALL(0x0028AB00u, sub_0028AB00); /* call 0x0028AB00 */

loc_00159B5D: ;
    eax = MEM32(0x30E9F8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00159B88; /* je: equal / zero */

loc_00159B67: ;
    PUSH32(esp, 8);
    edx = esp + 0x164;
    ecx = 0x26;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B7Au); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_00159B7A: ;
    PUSH32(esp, 0x210);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B88u); RECOMP_ABI_CALL(0x0028AB00u, sub_0028AB00); /* call 0x0028AB00 */

loc_00159B88: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B93u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159B93: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159B9Eu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159B9E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159BA9u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159BA9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159BB4u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159BB4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159BBFu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159BBF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159BCAu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159BCA: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159BD8u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159BD8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159BE3u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159BE3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159BEEu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159BEE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159BF9u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159BF9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C04u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00159C04: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C0Du); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00159C0D: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C19u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00159C19: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C22u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00159C22: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C2Bu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00159C2B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C34u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00159C34: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C3Du); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00159C3D: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C47u); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_00159C47: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159C4Cu); RECOMP_ABI_CALL(0x0028B340u, sub_0028B340); /* call 0x0028B340 */

loc_00159C4C: ;
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
 * sub_00159C60
 * Original: 0x00159C60 - 0x00159C77 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159C60: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x2F26A8;
    esp += 4; return; /* ret */

}

/**
 * sub_00159C80
 * Original: 0x00159C80 - 0x00159C97 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159C80: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x2F26D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00159CA0
 * Original: 0x00159CA0 - 0x00159DBB (283 bytes, 68 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159CA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24363B);
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
    PUSH32(esp, 0x00159CD5u); RECOMP_ABI_CALL(0x000187A0u, sub_000187A0); /* call 0x000187A0 */

loc_00159CD5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x10;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0xA8) = 0;
    MEM32(esp + 0x58) = 1;
    MEM32(esp + 0x5C) = 7;
    PUSH32(esp, 0x00159D02u); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_00159D02: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D7B; /* je: equal / zero */

loc_00159D09: ;
    eax = MEM32(esp + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D34; /* je: equal / zero */

loc_00159D14: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_00159D34: ;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    MEM32(esp + 4) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00159D50: ;
    ecx = MEM32(esp + esi * 4 + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D5D; /* je: equal / zero */

loc_00159D58: ;
    PUSH32(esp, 0x00159D5Du); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00159D5D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159D50; /* jl: less (signed <) */

loc_00159D63: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x88);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00159D7B: ;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    MEM32(esp + 4) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00159D90: ;
    ecx = MEM32(esp + esi * 4 + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D9D; /* je: equal / zero */

loc_00159D98: ;
    PUSH32(esp, 0x00159D9Du); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00159D9D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159D90; /* jl: less (signed <) */

loc_00159DA3: ;
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
 * sub_00159DC0
 * Original: 0x00159DC0 - 0x00159F03 (323 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159DC0: ;
    ecx = MEM32(0x7934C0);
    PUSH32(esp, 0x90E2739);
    PUSH32(esp, 0x00159DD0u); RECOMP_ABI_CALL(0x000C2740u, sub_000C2740); /* call 0x000C2740 */

loc_00159DD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 0x3BECF8;
    if (CMP_EQ(_fa, _fb)) goto loc_00159DEF; /* je: equal / zero */

loc_00159DD9: ;
    PUSH32(esp, 0x90E2739);
    PUSH32(esp, 0x00159DE3u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00159DE3: ;
    PUSH32(esp, 0x90E2739);
    ecx = 0x3BED04;
    goto loc_00159DFD;

loc_00159DEF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00159DF6u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00159DF6: ;
    PUSH32(esp, 0);
    ecx = 0x3BECF8;

loc_00159DFD: ;
    PUSH32(esp, 0x00159E02u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00159E02: ;
    PUSH32(esp, 0);
    ecx = 0x3BECF8;
    PUSH32(esp, 0x00159E0Eu); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_00159E0E: ;
    PUSH32(esp, 0);
    ecx = 0x3BED04;
    PUSH32(esp, 0x00159E1Au); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_00159E1A: ;
    PUSH32(esp, 0xABD8FA7Eu);
    ecx = 0x3BED10;
    PUSH32(esp, 0x00159E29u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00159E29: ;
    PUSH32(esp, 0);
    ecx = 0x3BED10;
    PUSH32(esp, 0x00159E35u); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_00159E35: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0x3BED4C;
    MEMF(0x3BE314) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00159E4Au); RECOMP_ABI_CALL(0x001FA170u, sub_001FA170); /* call 0x001FA170 */

loc_00159E4A: ;
    ecx = 0x3BE340;
    PUSH32(esp, 0x00159E54u); RECOMP_ABI_CALL(0x001589B0u, sub_001589B0); /* call 0x001589B0 */

loc_00159E54: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x3BE340);
    PUSH32(esp, 0x00159E60u); RECOMP_ABI_CALL(0x0020FA80u, sub_0020FA80); /* call 0x0020FA80 */

loc_00159E60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3BE858;
    PUSH32(esp, 0x00159E6Du); RECOMP_ABI_CALL(0x00159F10u, sub_00159F10); /* call 0x00159F10 */

loc_00159E6D: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x3BE858);
    PUSH32(esp, 0x00159E79u); RECOMP_ABI_CALL(0x0020FA80u, sub_0020FA80); /* call 0x0020FA80 */

loc_00159E79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFD8F0u);
    ecx = 0x3BED24;
    PUSH32(esp, 0x00159E8Bu); RECOMP_ABI_CALL(0x002096E0u, sub_002096E0); /* call 0x002096E0 */

loc_00159E8B: ;
    PUSH32(esp, 0x2710);
    ecx = 0x3BED38;
    PUSH32(esp, 0x00159E9Au); RECOMP_ABI_CALL(0x002096E0u, sub_002096E0); /* call 0x002096E0 */

loc_00159E9A: ;
    PUSH32(esp, 0xFFFFFFECu);
    ecx = 0x3BEC58;
    PUSH32(esp, 0x00159EA6u); RECOMP_ABI_CALL(0x002096E0u, sub_002096E0); /* call 0x002096E0 */

loc_00159EA6: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E6ED8)); /* movss */
    PUSH32(esp, 0);
    MEMF(0x3BEC94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2EC498)); /* movss */
    PUSH32(esp, 0x3BECD0);
    ecx = 0x3BEC58;
    MEMF(0x3BEC98) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00159ED7u); RECOMP_ABI_CALL(0x0020B770u, sub_0020B770); /* call 0x0020B770 */

loc_00159ED7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3BECA8);
    ecx = 0x3BEC58;
    PUSH32(esp, 0x00159EE8u); RECOMP_ABI_CALL(0x0020B770u, sub_0020B770); /* call 0x0020B770 */

loc_00159EE8: ;
    eax = 1;
    PUSH32(esp, 0x159CA0);
    MEM32(0x3BECD8) = eax;
    MEM32(0x3BECB0) = eax;
    PUSH32(esp, 0x00159F01u); RECOMP_ABI_CALL(0x001F32E0u, sub_001F32E0); /* call 0x001F32E0 */

loc_00159F01: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00159F10
 * Original: 0x00159F10 - 0x0015A1C1 (689 bytes, 134 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159F10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2F26F8);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00159F25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159F22u); } /* indirect call */
    }

loc_00159F25: ;
    eax = MEM32(esi + 8);
    edx = esi + 0x118;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x58) = eax;
    ecx = 0x22;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x4C) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x68) = eax;
    ecx = 0x32;
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x6C) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    ecx = 0x3C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0xD00;
    MEM32(edx + 0xB8) = eax;
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 0xD4) = 0x11104;
    MEM32(edx + 0xD8) = 0x421;
    MEM32(edx + 0xE0) = ebx;
    MEM32(edx + 0xDC) = ebx;
    MEM32(edx + 0xA8) = ebx;
    MEM32(edx + 0x88) = 0xC8C120E2u;
    MEM32(edx) = 0xD8D130F2u;
    MEM32(edx + 0x28) = ebx;
    MEM32(edx + 0x48) = ebx;
    MEM32(edx + 0x8C) = 0xC9C120E2u;
    MEM32(edx + 4) = 0xD9D130F2u;
    MEM32(edx + 0x2C) = ebx;
    MEM32(edx + 0x4C) = ebx;
    MEM32(edx + 0x90) = 0xCAC120E2u;
    MEM32(edx + 8) = 0xDAD130F2u;
    eax = 0x500;
    MEM32(edx + 0xBC) = eax;
    MEM32(edx + 0x70) = eax;
    MEM32(edx + 0x30) = ebx;
    MEM32(edx + 0x50) = ebx;
    MEM32(edx + 0x94) = 0xC200D20;
    MEM32(edx + 0xC) = 0x1C301D30;
    MEM32(edx + 0x34) = ebx;
    MEM32(edx + 0x54) = ebx;
    MEM32(edx + 0x20) = 0x405;
    MEM32(edx + 0x24) = 0x80;
    MEM32(edx + 0xAC) = ebx;
    MEM32(edx + 0xB0) = ebx;
    MEM32(edx + 0xE4) = 0xFFFFF000u;
    MEM32(edx + 0xE8) = 0xFFFFF111u;
    MEM32(edx + 0xEC) = 0x1FF;
    eax = 0x400;
    MEM32(edx + 0xC0) = eax;
    MEM32(edx + 0x74) = eax;
    ebp = 0xC00;
    MEM32(edx + 0xB4) = ebp;
    MEM32(edx + 0x68) = ebp;
    edx = esi + 0x208;
    ecx = 0x3C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xD4) = 0x11101;
    MEM32(edx + 0xD8) = 0x421;
    MEM32(edx + 0xE0) = ebx;
    MEM32(edx + 0xDC) = ebx;
    MEM32(edx + 0xA8) = ebx;
    MEM32(edx + 0x88) = 0xC8C1C9C1u;
    xmm0 = XMM_SCALAR(MEMF(0x2DC084)); /* movss */
    MEM32(edx + 0xB4) = ebp;
    MEM32(edx + 0x68) = ebp;
    MEM32(edx + 0x48) = ebx;
    MEM32(edx + 0xB0) = ebx;
    MEM32(edx) = 0xD8D1D9D1u;
    MEM32(edx + 0x20) = 0x10A000C;
    MEM32(edx + 0x24) = 0x80;
    MEM32(edx + 0xE4) = 0xFFFFFFF1u;
    MEM32(edx + 0xE8) = 0xFFFFFFFFu;
    MEM32(edx + 0xEC) = 0x1F1;
    eax = 0x555555;
    MEM32(edx + 0x28) = eax;
    MEM32(edx + 0xAC) = eax;
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    MEMF(esi + 0x110) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD418)); /* movss */
    edx = esi + 0x2F8;
    MEMF(esi + 0x114) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xE0) = ebx;
    MEM32(edx + 0xDC) = ebx;
    MEM32(edx + 0xA8) = ebx;
    MEM32(edx + 0x88) = ebx;
    MEM32(edx + 0xB4) = ebx;
    MEM32(edx + 0x68) = ebp;
    MEM32(edx + 0x28) = ebx;
    MEM32(edx + 0x48) = ebx;
    MEM32(edx + 0xAC) = ebx;
    MEM32(edx + 0xB0) = ebx;
    MEM32(edx + 0xD4) = 0x11101;
    MEM32(edx + 0xD8) = 0x2621;
    MEM32(edx) = 0xDA30DA30u;
    MEM32(edx + 0x20) = 0xA00;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xEC) = 0x1FF;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0xE4) = eax;
    MEM32(edx + 0xE8) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x3E8) = ebx;
    MEM32(esi + 0x3EC) = ebx;
    MEM32(esi + 0x3F0) = ebx;
    MEM32(esi + 0x3F4) = ebx;
    MEM32(esi + 0x3FC) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A1D0
 * Original: 0x0015A1D0 - 0x0015A220 (80 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A1D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0015A1D9u); RECOMP_ABI_CALL(0x00212E90u, sub_00212E90); /* call 0x00212E90 */

loc_0015A1D9: ;
    ecx = MEM32(esi + 0x3E8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A1EB; /* je: equal / zero */

loc_0015A1E5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0015A1EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015A1E9u); } /* indirect call */
    }

loc_0015A1EB: ;
    ecx = MEM32(esi + 0x3EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0x3E8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0015A201; /* je: equal / zero */

loc_0015A1FB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0015A201u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015A1FFu); } /* indirect call */
    }

loc_0015A201: ;
    ecx = MEM32(esi + 0x3F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0x3EC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0015A217; /* je: equal / zero */

loc_0015A211: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0015A217u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015A215u); } /* indirect call */
    }

loc_0015A217: ;
    MEM32(esi + 0x3F0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015A220
 * Original: 0x0015A220 - 0x0015A24D (45 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A220(void)
{

loc_0015A220: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x10C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x110) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x114) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015A250
 * Original: 0x0015A250 - 0x0015A292 (66 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A250: ;
    eax = MEM32(ecx + 0x3FC);
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x3F8) = esi;
    MEM32(ecx + 0x3FC) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0015A270: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0xFF000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015A285; /* jne: not equal / not zero */

loc_0015A278: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015A270; /* jl: less (signed <) */

loc_0015A281: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015A285: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x3FC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015A2A0
 * Original: 0x0015A2A0 - 0x0015A2B7 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A2A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x104) = ecx;
    MEM32(eax + 0x108) = ecx;
    MEM32(eax) = 0x2F270C;
    esp += 4; return; /* ret */

}

/**
 * sub_0015A2C0
 * Original: 0x0015A2C0 - 0x0015A43A (378 bytes, 133 insns)
 * Category: game_render
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A2C0(void)
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

loc_0015A2C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A2D0u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015A2D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015A2D8u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015A2D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015A2E0u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015A2E0: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015A2EFu); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0015A2EF: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0015A2F6u); RECOMP_ABI_CALL(0x0028AEF0u, sub_0028AEF0); /* call 0x0028AEF0 */

loc_0015A2F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A301u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A301: ;
    esi = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0015A312u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A312: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ebx = MEM32(esp + 0x30);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ebx);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0015A337u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A337: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015A349u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A349: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A357u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A357: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    PUSH32(esp, esi);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0015A370u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A370: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    PUSH32(esp, ebx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0015A389u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A389: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015A39Eu); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A39E: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A3AFu); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A3AF: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0015A3C8u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A3C8: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0015A3E1u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A3E1: ;
    ebx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015A3F9u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A3F9: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A407u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A407: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0015A414u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A414: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0015A41Du); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A41D: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015A42Eu); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A42E: ;
    PUSH32(esp, 0x0015A433u); RECOMP_ABI_CALL(0x0028AF30u, sub_0028AF30); /* call 0x0028AF30 */

loc_0015A433: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015A440
 * Original: 0x0015A440 - 0x0015A587 (327 bytes, 91 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A440: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A449u); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_0015A449: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A455u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015A455: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015A45Eu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015A45E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015A467u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015A467: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A472u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A472: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A47Du); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A47D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A488u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A488: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A493u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A493: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, 0x0015A49Du); RECOMP_ABI_CALL(0x0028AEF0u, sub_0028AEF0); /* call 0x0028AEF0 */

loc_0015A49D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A4A8u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A4A8: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x30EA44); /* cvtsi2ss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x30EA40); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015A4D4u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A4D4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A4E2u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A4E2: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x30EA44); /* cvtsi2ss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x30EA48); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015A50Eu); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A50E: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A51Bu); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A51B: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x30EA4C); /* cvtsi2ss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x30EA48); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015A547u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A547: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A551u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A551: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x30EA4C); /* cvtsi2ss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x30EA40); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015A57Du); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A57D: ;
    PUSH32(esp, 0x0015A582u); RECOMP_ABI_CALL(0x0028AF30u, sub_0028AF30); /* call 0x0028AF30 */

loc_0015A582: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015A590
 * Original: 0x0015A590 - 0x0015A6D9 (329 bytes, 104 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A590(void)
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

loc_0015A590: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = edx;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 2));
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(eax + 6));
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 4);
    esi = ecx;
    ecx = ecx & 0xFF00FF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(eax + 0xA));
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(eax + 8);
    edi = ecx;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFF00FF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(eax + 0xE));
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(eax + 0xC);
    ebx = ecx;
    ebx = ebx & 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFF00FF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(eax + 0x10);
    eax = ZX8(MEM8(eax + 0x12));
    edx = ecx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    ecx = ecx & 0xFF00FF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x38);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015A646u); RECOMP_ABI_CALL(0x0028C530u, sub_0028C530); /* call 0x0028C530 */

loc_0015A646: ;
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0x30) = 0;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x200;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015A660;

    /* nop */

loc_0015A660: ;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    edx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E5694)); /* fmul dword ptr [0x2e5694] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015A67Eu); RECOMP_ABI_CALL(0x001F9EA0u, sub_001F9EA0); /* call 0x001F9EA0 */

loc_0015A67E: ;
    MEM32(ebp + -512) = eax;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015A690u); RECOMP_ABI_CALL(0x001F9EA0u, sub_001F9EA0); /* call 0x001F9EA0 */

loc_0015A690: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ebp + -256) = eax;
    PUSH32(esp, 0x0015A6A2u); RECOMP_ABI_CALL(0x001F9EA0u, sub_001F9EA0); /* call 0x001F9EA0 */

loc_0015A6A2: ;
    edx = MEM32(esp + 0x58);
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015A6B5u); RECOMP_ABI_CALL(0x001F9EA0u, sub_001F9EA0); /* call 0x001F9EA0 */

loc_0015A6B5: ;
    MEM32(ebp + 0x100) = eax;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0015A660; /* jl: less (signed <) */

loc_0015A6CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0015A6E0
 * Original: 0x0015A6E0 - 0x0015AB3A (1114 bytes, 341 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A6E0(void)
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

loc_0015A6E0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243658);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0015A7B6; /* jne: not equal / not zero */

loc_0015A70A: ;
    PUSH32(esp, 0x2F2770);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0015A718u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0015A718: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A737; /* je: equal / zero */

loc_0015A71F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12);
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    ecx = eax;
    PUSH32(esp, 0x0015A735u); RECOMP_ABI_CALL(0x00215D10u, sub_00215D10); /* call 0x00215D10 */

loc_0015A735: ;
    goto loc_0015A739;

loc_0015A737: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015A739: ;
    PUSH32(esp, 0x2F274C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    MEM32(esi + 0x3E8) = eax;
    PUSH32(esp, 0x0015A74Du); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0015A74D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A76C; /* je: equal / zero */

loc_0015A754: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12);
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    ecx = eax;
    PUSH32(esp, 0x0015A76Au); RECOMP_ABI_CALL(0x00215D10u, sub_00215D10); /* call 0x00215D10 */

loc_0015A76A: ;
    goto loc_0015A76E;

loc_0015A76C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015A76E: ;
    PUSH32(esp, 0x2F2728);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    MEM32(esi + 0x3EC) = eax;
    PUSH32(esp, 0x0015A782u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0015A782: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A7A1; /* je: equal / zero */

loc_0015A789: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12);
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    ecx = eax;
    PUSH32(esp, 0x0015A79Fu); RECOMP_ABI_CALL(0x00215D10u, sub_00215D10); /* call 0x00215D10 */

loc_0015A79F: ;
    goto loc_0015A7A3;

loc_0015A7A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015A7A3: ;
    PUSH32(esp, 0x3BE2EC);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x3F0) = eax;
    PUSH32(esp, 0x0015A7B6u); RECOMP_ABI_CALL(0x0015A590u, sub_0015A590); /* call 0x0015A590 */

loc_0015A7B6: ;
    _fa = (uint32_t)(MEM8(esi + 0x3FC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3FC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015A7EB; /* je: equal / zero */

loc_0015A7BF: ;
    edi = MEM32(0x6437BC);
    eax = MEM32(esi + 0x3F8);
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + edi * 4 + 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0015A7DEu); RECOMP_ABI_CALL(0x0015A590u, sub_0015A590); /* call 0x0015A590 */

loc_0015A7DE: ;
    MEM32(esi + 0x3FC) = MEM32(esi + 0x3FC) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0x3FC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x3F4) = edi;

loc_0015A7EB: ;
    SET_LO8(eax, MEM8(0x3BE31A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A7FC; /* je: equal / zero */

loc_0015A7F4: ;
    edi = MEM32(esi + 0x3F0);
    goto loc_0015A809;

loc_0015A7FC: ;
    edx = MEM32(esi + 0x3F4);
    edi = MEM32(esi + edx * 4 + 0x3E8);

loc_0015A809: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0015A81Du); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0015A81D: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0015A832u); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_0015A832: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8F);
    MEM32(esp + 0x88) = 0;
    PUSH32(esp, 0x0015A849u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015A849: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x0015A852u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015A852: ;
    eax = MEM32(esi + 0x3FC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015A86D; /* je: equal / zero */

loc_0015A860: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0015A869u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015A869: ;
    PUSH32(esp, 0);
    goto loc_0015A87E;

loc_0015A86D: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0015A879u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015A879: ;
    PUSH32(esp, 0x303);

loc_0015A87E: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0015A885u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015A885: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0015A891u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015A891: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x93);
    PUSH32(esp, 0x0015A89Du); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015A89D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A8A8u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A8A8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A8B3u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A8B3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A8BEu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A8BE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015A8C9u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A8C9: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015A8D7u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A8D7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015A8E2u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A8E2: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A8EDu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A8ED: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A8F8u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A8F8: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015A903u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A903: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015A90Eu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015A90E: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2F8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015A91Du); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_0015A91D: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015A929u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015A929: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015A932u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015A932: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015A93Au); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015A93A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0015A942u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0015A942: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015A951u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0015A951: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 8);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015A962u); RECOMP_ABI_CALL(0x0028AEF0u, sub_0028AEF0); /* call 0x0028AEF0 */

loc_0015A962: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x41F4CCCC);
    PUSH32(esp, 0x43190000);
    PUSH32(esp, 0x429E199A);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0015A97Au); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A97A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0015A989u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A989: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A994u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A994: ;
    eax = MEM32(0x30EA60);
    ecx = MEM32(0x30EA5C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015A9AFu); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A9AF: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A9BDu); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A9BD: ;
    fp_push(MEMF(0x30EA5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    edx = MEM32(0x30EA60);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015A9E5u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015A9E5: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015A9F2u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015A9F2: ;
    fp_push(MEMF(0x30EA60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30EA5C)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015AA26u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015AA26: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015AA30u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015AA30: ;
    fp_push(MEMF(0x30EA60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    ecx = MEM32(0x30EA5C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015AA58u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015AA58: ;
    PUSH32(esp, 0x0015AA5Du); RECOMP_ABI_CALL(0x0028AF30u, sub_0028AF30); /* call 0x0028AF30 */

loc_0015AA5D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AA66u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015AA66: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015AA6Fu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015AA6F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015AA78u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015AA78: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x0015AA84u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015AA84: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0015AA8Du); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015AA8D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AA98u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AA98: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AAA3u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AAA3: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AAB1u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AAB1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015AABCu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AABC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015AAC7u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AAC7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015AAD2u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AAD2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AADDu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AADD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AAE8u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AAE8: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015AAF6u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AAF6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015AB01u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AB01: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AB0Bu); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_0015AB0B: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015AB15u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0015AB15: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x80) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0015AB29u); RECOMP_ABI_CALL(0x00216900u, sub_00216900); /* call 0x00216900 */

loc_0015AB29: ;
    ecx = MEM32(esp + 0x78);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015AB40
 * Original: 0x0015AB40 - 0x0015B0C6 (1414 bytes, 434 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015AB40(void)
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

loc_0015AB40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243658);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0015AB66u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0015AB66: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0015AB74u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0015AB74: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 7);
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x0015AB93u); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0015AB93: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ebp = eax;
    PUSH32(esp, 8);
    MEM32(esp + 0x3C) = ebp;
    PUSH32(esp, 0x0015ABA5u); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0015ABA5: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x0015ABBDu); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0015ABBD: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015ABC8u); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0015ABC8: ;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    PUSH32(esp, 0x0015ABDCu); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_0015ABDC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8F);
    MEM32(esp + 0xD8) = ebx;
    PUSH32(esp, 0x0015ABEEu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015ABEE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x0015ABF6u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015ABF6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0015ABFEu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015ABFE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x93);
    PUSH32(esp, 0x0015AC09u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015AC09: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0015AC10: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015AC19u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AC19: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015AC23u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AC23: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015AC10; /* jl: less (signed <) */

loc_0015AC2C: ;
    edx = esi + 0x118;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015AC38u); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_0015AC38: ;
    xmm1 = XMM_SCALAR(MEMF(0x2F27A0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x110)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2F279C); /* mulss */
    PUSH32(esp, 2);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015ACA5u); RECOMP_ABI_CALL(0x0028C7B0u, sub_0028C7B0); /* call 0x0028C7B0 */

loc_0015ACA5: ;
    PUSH32(esp, 0x0015ACAAu); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0015ACAA: ;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F2798)); /* fmul dword ptr [0x2f2798] */
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E0C7C)); /* fmul dword ptr [0x2e0c7c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC880)); /* fmul dword ptr [0x2dc880] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0015ACD5u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0015ACD5: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    edx = MEM32(esp + 0x1C);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, ebx);
    edi = eax;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0015ACF7u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0015ACF7: ;
    ebx = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x48);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = MEM32(esp + 0x34);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0015AD23u); RECOMP_ABI_CALL(0x0015A2C0u, sub_0015A2C0); /* call 0x0015A2C0 */

loc_0015AD23: ;
    _fa = (uint32_t)(MEM8(0x30EA3C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x30EA3C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AD45; /* je: equal / zero */

loc_0015AD2C: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015AD3Bu); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0015AD3B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0015AD45u); RECOMP_ABI_CALL(0x0015A440u, sub_0015A440); /* call 0x0015A440 */

loc_0015AD45: ;
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    ebp = esi + 0x208;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E4514)); /* fmul dword ptr [0x2e4514] */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC880)); /* fmul dword ptr [0x2dc880] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0015AD67u); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_0015AD67: ;
    PUSH32(esp, 1);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AD75u); RECOMP_ABI_CALL(0x0028C7B0u, sub_0028C7B0); /* call 0x0028C7B0 */

loc_0015AD75: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0015AD91u); RECOMP_ABI_CALL(0x0015A2C0u, sub_0015A2C0); /* call 0x0015A2C0 */

loc_0015AD91: ;
    _fa = (uint32_t)(MEM8(0x30EA3C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x30EA3C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015ADBD; /* je: equal / zero */

loc_0015AD9A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015ADA9u); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0015ADA9: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0015ADB7u); RECOMP_ABI_CALL(0x0015A440u, sub_0015A440); /* call 0x0015A440 */

loc_0015ADB7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015ADBDu); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_0015ADBD: ;
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E0C7C)); /* fmul dword ptr [0x2e0c7c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0015ADD2u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0015ADD2: ;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F2798)); /* fmul dword ptr [0x2f2798] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10C)); /* fmul dword ptr [esi + 0x10c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F2794)); /* fmul dword ptr [0x2f2794] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0015AE0Fu); RECOMP_ABI_CALL(0x0015A2C0u, sub_0015A2C0); /* call 0x0015A2C0 */

loc_0015AE0F: ;
    _fa = (uint32_t)(MEM8(0x30EA3C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x30EA3C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AE3B; /* je: equal / zero */

loc_0015AE18: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015AE27u); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0015AE27: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0015AE35u); RECOMP_ABI_CALL(0x0015A440u, sub_0015A440); /* call 0x0015A440 */

loc_0015AE35: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015AE3Bu); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_0015AE3B: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x1C);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0015AE64u); RECOMP_ABI_CALL(0x0015A2C0u, sub_0015A2C0); /* call 0x0015A2C0 */

loc_0015AE64: ;
    _fa = (uint32_t)(MEM8(0x30EA3C)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x30EA3C), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015AE8A; /* je: equal / zero */

loc_0015AE6D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015AE7Cu); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0015AE7C: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0015AE8Au); RECOMP_ABI_CALL(0x0015A440u, sub_0015A440); /* call 0x0015A440 */

loc_0015AE8A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x0015AE93u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015AE93: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0015AE9Cu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015AE9C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0015AEA5u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015AEA5: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x114)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC39C); /* mulss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015AEC9; /* jle: less or equal (signed <=) */

loc_0015AEC4: ;
    ecx = 0xFF;

loc_0015AEC9: ;
    eax = ecx;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0015AEE0u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015AEE0: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015AEF2u); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0015AEF2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AEF9u); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_0015AEF9: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AF05u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015AF05: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015AF0Eu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015AF0E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015AF17u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015AF17: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AF22u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AF22: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AF2Du); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AF2D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AF38u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AF38: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AF43u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AF43: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AF51u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AF51: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015AF5Cu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015AF5C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015AF7Cu); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0015AF7C: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015AF8Bu); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0015AF8B: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 8);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015AF9Cu); RECOMP_ABI_CALL(0x0028AEF0u, sub_0028AEF0); /* call 0x0028AEF0 */

loc_0015AF9C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015AFA7u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015AFA7: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015AFB9u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015AFB9: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015AFC7u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015AFC7: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    edi = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015AFDCu); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015AFDC: ;
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015AFE9u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015AFE9: ;
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015AFFDu); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015AFFD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015B007u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0015B007: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0015B018u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0015B018: ;
    PUSH32(esp, 0x0015B01Du); RECOMP_ABI_CALL(0x0028AF30u, sub_0028AF30); /* call 0x0028AF30 */

loc_0015B01D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015B026u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015B026: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015B02Fu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015B02F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015B038u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0015B038: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x0015B044u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015B044: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0015B04Du); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0015B04D: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 3;

loc_0015B055: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015B060u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015B060: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015B06Bu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0015B06B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015B055; /* jne: not equal / not zero */

loc_0015B071: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015B07Bu); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0015B07B: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015B085u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0015B085: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015B08Fu); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0015B08F: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015B099u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0015B099: ;
    ecx = esp + 0x68;
    MEM32(esp + 0xD0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0015B0ADu); RECOMP_ABI_CALL(0x00216900u, sub_00216900); /* call 0x00216900 */

loc_0015B0AD: ;
    ecx = MEM32(esp + 0xC8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015B0D0
 * Original: 0x0015B0D0 - 0x0015B124 (84 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0015B0D0: ;
    eax = MEM32(0x30EA3C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0015B0F3; /* jne: not equal / not zero */

loc_0015B0DD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x114)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015B0F3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0015B0EE: ;
    PUSH32(esp, 0x0015B0F3u); RECOMP_ABI_CALL(0x0015AB40u, sub_0015AB40); /* call 0x0015AB40 */

loc_0015B0F3: ;
    eax = MEM32(0x30EA3C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015B120; /* jne: not equal / not zero */

loc_0015B0FD: ;
    eax = MEM32(esi + 0x3F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B120; /* je: equal / zero */

loc_0015B107: ;
    _fa = (uint32_t)(MEM8(esi + 0x3FC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3FC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015B119; /* jne: not equal / not zero */

loc_0015B110: ;
    SET_LO8(eax, MEM8(0x3BE31A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B120; /* je: equal / zero */

loc_0015B119: ;
    ecx = esi;
    PUSH32(esp, 0x0015B120u); RECOMP_ABI_CALL(0x0015A6E0u, sub_0015A6E0); /* call 0x0015A6E0 */

loc_0015B120: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015B130
 * Original: 0x0015B130 - 0x0015B265 (309 bytes, 114 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B130: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 9) = eax;
    MEM32(esp + 0xD) = eax;
    MEM32(esp + 0x11) = eax;
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    MEM32(esp + 0x21) = eax;
    MEM16(esp + 0x25) = LO16(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x27) = LO8(eax);
    MEM8(esp) = LO8(eax);
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x30), g_mxcsr, 1); /* cvttss2si */
    MEM32(esp + 1) = ecx;
    MEM16(esp + 5) = LO16(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM8(esp + 7) = LO8(ecx);
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x14) = 0;
    ebp = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E7 (32-bit) */
    esi = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0015B197; /* jle: less or equal (signed <=) */

loc_0015B190: ;
    eax = 0x3E7;
    goto loc_0015B19B;

loc_0015B197: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015B1C0; /* jle: less or equal (signed <=) */

loc_0015B19B: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, 0x2F0804);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015B1ABu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B1AB: ;
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x2F07FC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015B1BBu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B1BB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015B1D3;

loc_0015B1C0: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x2DE4CC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015B1D0u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B1D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015B1D3: ;
    eax = esp + 0xC;
    esi = eax;
    /* nop */

loc_0015B1E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B1E0; /* jne: not equal / not zero */

loc_0015B1E7: ;
    edi = esp + 0x14;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_0015B1F0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B1F0; /* jne: not equal / not zero */

loc_0015B1F8: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    PUSH32(esp, ebp);
    ecx = eax;
    edx = esp + 0x10;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x2F07F4);
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
    PUSH32(esp, 0x0015B216u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B216: ;
    eax = esp + 0x18;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    /* nop */

loc_0015B220: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B220; /* jne: not equal / not zero */

loc_0015B227: ;
    edi = esp + 0x14;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0015B230: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B230; /* jne: not equal / not zero */

loc_0015B238: ;
    edx = MEM32(esp + 0x38);
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
    POP32(esp, edi);
    eax = esp + 0x10;
    ecx = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);

loc_0015B255: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B255; /* jne: not equal / not zero */

loc_0015B25F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015B270
 * Original: 0x0015B270 - 0x0015B382 (274 bytes, 98 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015B270: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x110);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0xC) = 0;
    ecx = 0x3F;
    edi = esp + 0xD;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, ebp);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x10;
    PUSH32(esp, 0x2F27B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015B2A4u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B2A4: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015B2AEu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B2AE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, edx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0015B2C7u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0015B2C7: ;
    ecx = MEM32(esp + 8);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015B377; /* jle: less or equal (signed <=) */

loc_0015B2D5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x11C);
    PUSH32(esp, esi);
    edi = edi;

loc_0015B2E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, 0x2F27AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015B2F1u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B2F1: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015B2FBu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B2FB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x0015B309u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0015B309: ;
    esi = eax;
    ecx = ebx;
    /* nop */

loc_0015B310: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015B334; /* jne: not equal / not zero */

loc_0015B318: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B330; /* je: equal / zero */

loc_0015B31C: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015B334; /* jne: not equal / not zero */

loc_0015B326: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015B310; /* jne: not equal / not zero */

loc_0015B330: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0015B339;

loc_0015B334: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0015B339: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B355; /* je: equal / zero */

loc_0015B33D: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0015B2E0; /* jl: less (signed <) */

loc_0015B346: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0015B355: ;
    eax = MEM32(esp + 0x118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B373; /* je: equal / zero */

loc_0015B360: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015B370u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_0015B370: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015B373: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);

loc_0015B377: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x104)) >> 32) & 1);
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015B390
 * Original: 0x0015B390 - 0x0015B48E (254 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015B390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B3ADu); RECOMP_ABI_CALL(0x0015B270u, sub_0015B270); /* call 0x0015B270 */

loc_0015B3AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B486; /* jne: not equal / not zero */

loc_0015B3B5: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, esi);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    ecx = esp + 0x14;
    PUSH32(esp, 0x2F27B4);
    PUSH32(esp, ecx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B3D9u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B3D9: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B3E3u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B3E3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B3FEu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0015B3FE: ;
    edx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x110) = 0;
    ecx = 0x3F;
    edi = esp + 0x111;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x118;
    PUSH32(esp, 0x2F27AC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B431u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B431: ;
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B43Eu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B43E: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B450u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0015B450: ;
    eax = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x14;
    PUSH32(esp, 0x2F27B4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B469u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B469: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B473u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B473: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B486u); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_0015B486: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015B490
 * Original: 0x0015B490 - 0x0015B538 (168 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015B490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0015B4BD; /* jne: not equal / not zero */

loc_0015B4A7: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F27C8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B4B5u); RECOMP_ABI_CALL(0x0015B390u, sub_0015B390); /* call 0x0015B390 */

loc_0015B4B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0015B4BD: ;
    MEM8(esp + 8) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, edx);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, 0x2F27C8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B4E4u); RECOMP_ABI_CALL(0x0015B270u, sub_0015B270); /* call 0x0015B270 */

loc_0015B4E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015B530; /* jne: not equal / not zero */

loc_0015B4E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x108) = 0;
    ecx = 0x3F;
    edi = esp + 0x109;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x10C;
    PUSH32(esp, 0x2F27C0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B51Au); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B51A: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x10C;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B530u); RECOMP_ABI_CALL(0x0015B390u, sub_0015B390); /* call 0x0015B390 */

loc_0015B530: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015B540
 * Original: 0x0015B540 - 0x0015B5D8 (152 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015B540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edx = ecx;
    MEM8(esp + 8) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edx;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B572u); RECOMP_ABI_CALL(0x0015B490u, sub_0015B490); /* call 0x0015B490 */

loc_0015B572: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x2F27EC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B582u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B582: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B58Cu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B58C: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B597u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B597: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B5A6u); RECOMP_ABI_CALL(0x00121E50u, sub_00121E50); /* call 0x00121E50 */

loc_0015B5A6: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x2F27DC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B5B6u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B5B6: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B5C0u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B5C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B5D0u); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_0015B5D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015B5E0
 * Original: 0x0015B5E0 - 0x0015B6BA (218 bytes, 71 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015B5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B5E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 8) = 0;
    ecx = 0x3F;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x108) = 0;
    ecx = 0x3F;
    edi = esp + 0x109;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x110;
    PUSH32(esp, 0x2E845C);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B638u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B638: ;
    eax = esp + 0x118;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x2F2810);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B64Fu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B64F: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B659u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B659: ;
    esi = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B664u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B664: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B673u); RECOMP_ABI_CALL(0x00121E50u, sub_00121E50); /* call 0x00121E50 */

loc_0015B673: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B6B2; /* je: equal / zero */

loc_0015B67A: ;
    ecx = esp + 0x108;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x2F27F8);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B691u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B691: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B69Bu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B69B: ;
    PUSH32(esp, esi);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B6A3u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B6A3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B6B2u); RECOMP_ABI_CALL(0x00121E50u, sub_00121E50); /* call 0x00121E50 */

loc_0015B6B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0015B6C0
 * Original: 0x0015B6C0 - 0x0015B7A7 (231 bytes, 79 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015B6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B6C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM8(esp + 0x10) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B6F5u); RECOMP_ABI_CALL(0x0015B490u, sub_0015B490); /* call 0x0015B490 */

loc_0015B6F5: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B706u); RECOMP_ABI_CALL(0x0015B5E0u, sub_0015B5E0); /* call 0x0015B5E0 */

loc_0015B706: ;
    edx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x110) = 0;
    ecx = 0x3F;
    edi = esp + 0x111;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x118;
    PUSH32(esp, 0x2E845C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B738u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B738: ;
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, 0x2F27DC);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B74Fu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B74F: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B759u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B759: ;
    ecx = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B76Bu); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_0015B76B: ;
    edx = esp + 0x110;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x2F2824);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B782u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B782: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B78Cu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B78C: ;
    edx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B79Eu); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_0015B79E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0015B7B0
 * Original: 0x0015B7B0 - 0x0015B897 (231 bytes, 79 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015B7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM8(esp + 0x10) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B7E5u); RECOMP_ABI_CALL(0x0015B490u, sub_0015B490); /* call 0x0015B490 */

loc_0015B7E5: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B7F6u); RECOMP_ABI_CALL(0x0015B5E0u, sub_0015B5E0); /* call 0x0015B5E0 */

loc_0015B7F6: ;
    edx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x110) = 0;
    ecx = 0x3F;
    edi = esp + 0x111;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x118;
    PUSH32(esp, 0x2E845C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B828u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B828: ;
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, 0x2F27DC);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B83Fu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B83F: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B849u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B849: ;
    ecx = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B85Bu); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_0015B85B: ;
    edx = esp + 0x110;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x2F2824);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B872u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B872: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B87Cu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B87C: ;
    edx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B88Eu); RECOMP_ABI_CALL(0x00121DA0u, sub_00121DA0); /* call 0x00121DA0 */

loc_0015B88E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0015B8A0
 * Original: 0x0015B8A0 - 0x0015B8C3 (35 bytes, 13 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B8A0(void)
{

loc_0015B8A0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015B8C0u); RECOMP_ABI_CALL(0x0015B6C0u, sub_0015B6C0); /* call 0x0015B6C0 */

loc_0015B8C0: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0015B8D0
 * Original: 0x0015B8D0 - 0x0015B8F3 (35 bytes, 13 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B8D0(void)
{

loc_0015B8D0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015B8F0u); RECOMP_ABI_CALL(0x0015B7B0u, sub_0015B7B0); /* call 0x0015B7B0 */

loc_0015B8F0: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0015B900
 * Original: 0x0015B900 - 0x0015B920 (32 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015B900(void)
{

loc_0015B900: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015B91Du); RECOMP_ABI_CALL(0x0015B7B0u, sub_0015B7B0); /* call 0x0015B7B0 */

loc_0015B91D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0015B920
 * Original: 0x0015B920 - 0x0015B9F0 (208 bytes, 74 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015B920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = 0;
    ecx = 0x3F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x2F27EC);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B957u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015B957: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B961u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015B961: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B97Cu); RECOMP_ABI_CALL(0x00122060u, sub_00122060); /* call 0x00122060 */

loc_0015B97C: ;
    PUSH32(esp, 0x2F2830);
    PUSH32(esp, 0);
    PUSH32(esp, 0x84);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B98Du); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0015B98D: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015B9DB; /* je: equal / zero */

loc_0015B996: ;
    ebx = MEM32(esp + 0xC);
    edi = esi + 4;
    MEM8(edi) = 0;
    MEM8(esi + 0x44) = 0;
    MEM32(esi) = 0x2F27A4;
    edx = MEM32(0x413FC0);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B9B6u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0015B9B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015B9C4u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015B9C4: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    MEM8(esi + 0x44) = 0;
    MEM32(ecx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0015B9DB: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ecx + eax * 4) = esi;
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0015B9F0
 * Original: 0x0015B9F0 - 0x0015BA9A (170 bytes, 55 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015B9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015B9F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = 0;
    ecx = 0x3F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, esi);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x14;
    PUSH32(esp, 0x2F2810);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA26u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BA26: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA30u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015BA30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA4Bu); RECOMP_ABI_CALL(0x00122060u, sub_00122060); /* call 0x00122060 */

loc_0015BA4B: ;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, 0x2F27F8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA5Bu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BA5B: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA65u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015BA65: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BA80u); RECOMP_ABI_CALL(0x00122060u, sub_00122060); /* call 0x00122060 */

loc_0015BA80: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015BAA0
 * Original: 0x0015BAA0 - 0x0015BAF8 (88 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015BAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BAA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 8) = 0;
    ecx = 0x3F;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x2F2824);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BAD5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BAD5: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BADFu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015BADF: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BAF1u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0015BAF1: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015BB00
 * Original: 0x0015BB00 - 0x0015BB58 (88 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015BB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BB00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 8) = 0;
    ecx = 0x3F;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x2F2824);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BB35u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BB35: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BB3Fu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015BB3F: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BB51u); RECOMP_ABI_CALL(0x00122000u, sub_00122000); /* call 0x00122000 */

loc_0015BB51: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015BB60
 * Original: 0x0015BB60 - 0x0015BC98 (312 bytes, 113 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015BB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BB60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x58) = LO8(ebx);
    ecx = 0x3F;
    edi = esp + 0x59;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BBA4u); RECOMP_ABI_CALL(0x0015B9F0u, sub_0015B9F0); /* call 0x0015B9F0 */

loc_0015BBA4: ;
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BBB9u); RECOMP_ABI_CALL(0x0015BAA0u, sub_0015BAA0); /* call 0x0015BAA0 */

loc_0015BBB9: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x2DEA44);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BBCDu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BBCD: ;
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BC26; /* je: equal / zero */

loc_0015BBD8: ;
    edx = MEM32(0x413FC0);
    MEM8(esp + 0x18) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0x19;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BBF8u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0015BBF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BC0Au); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015BC0A: ;
    eax = MEM32(esp + 0xC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, 0x2E8464);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BC23u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BC23: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015BC26: ;
    PUSH32(esp, 0x2F2854);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x84);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BC36u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0015BC36: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BC83; /* je: equal / zero */

loc_0015BC3F: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edi = esi + 0x44;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esi + 4) = LO8(ebx);
    MEM8(edi) = LO8(ebx);
    MEM32(esi) = 0x2F27A4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BC5Du); RECOMP_ABI_CALL(0x000C9230u, sub_000C9230); /* call 0x000C9230 */

loc_0015BC5D: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BC6Du); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BC6D: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0015BC83: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(edx + eax * 4) = esi;
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0015BCA0
 * Original: 0x0015BCA0 - 0x0015BDE2 (322 bytes, 115 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015BCA0(void)
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

loc_0015BCA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x58) = LO8(ebx);
    ecx = 0x3F;
    edi = esp + 0x59;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BCE4u); RECOMP_ABI_CALL(0x0015B9F0u, sub_0015B9F0); /* call 0x0015B9F0 */

loc_0015BCE4: ;
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x14) = 0xBF800000u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BCF9u); RECOMP_ABI_CALL(0x0015BB00u, sub_0015BB00); /* call 0x0015BB00 */

loc_0015BCF9: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x60;
    PUSH32(esp, 0x2EB7F8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BD12u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BD12: ;
    esi = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BD70; /* je: equal / zero */

loc_0015BD1D: ;
    MEM8(esp + 0x18) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0x19;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x413FC0);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, ecx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BD3Du); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0015BD3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BD4Fu); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015BD4F: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x64;
    PUSH32(esp, 0x2F28A0);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BD6Du); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BD6D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015BD70: ;
    PUSH32(esp, 0x2F2878);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x84);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BD80u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0015BD80: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BDCD; /* je: equal / zero */

loc_0015BD89: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edi = esi + 0x44;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esi + 4) = LO8(ebx);
    MEM8(edi) = LO8(ebx);
    MEM32(esi) = 0x2F27A4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BDA7u); RECOMP_ABI_CALL(0x000C9230u, sub_000C9230); /* call 0x000C9230 */

loc_0015BDA7: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BDB7u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BDB7: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0015BDCD: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(edx + eax * 4) = esi;
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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
 * sub_0015BDF0
 * Original: 0x0015BDF0 - 0x0015BECB (219 bytes, 78 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015BDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BDF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x18) = 0;
    ecx = 0x3F;
    edi = esp + 0x19;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BE32u); RECOMP_ABI_CALL(0x0015B9F0u, sub_0015B9F0); /* call 0x0015B9F0 */

loc_0015BE32: ;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x18) = 0xBF800000u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BE47u); RECOMP_ABI_CALL(0x0015BB00u, sub_0015BB00); /* call 0x0015BB00 */

loc_0015BE47: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BE58u); RECOMP_ABI_CALL(0x0015B130u, sub_0015B130); /* call 0x0015B130 */

loc_0015BE58: ;
    PUSH32(esp, 0x2F28A8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x84);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BE69u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0015BE69: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BEB7; /* je: equal / zero */

loc_0015BE72: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edi = esi + 0x44;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esi + 4) = 0;
    MEM8(edi) = 0;
    MEM32(esi) = 0x2F27A4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BE92u); RECOMP_ABI_CALL(0x000C9230u, sub_000C9230); /* call 0x000C9230 */

loc_0015BE92: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BEA2u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BEA2: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0015BEB7: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + eax * 4) = esi;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0015BED0
 * Original: 0x0015BED0 - 0x0015BFBD (237 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015BED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = 0;
    ecx = 0x3F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, 0x2F27DC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF08u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015BF08: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF12u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015BF12: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF2Du); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0015BF2D: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015BFB2; /* je: equal / zero */

loc_0015BF36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015BFB2; /* ja: above (unsigned >) */

loc_0015BF3B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x15BFC0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0015BF42u) goto loc_0015BF42;
    if (_jt == 0x0015BF5Eu) goto loc_0015BF5E;
    if (_jt == 0x0015BF7Au) goto loc_0015BF7A;
    if (_jt == 0x0015BF96u) goto loc_0015BF96;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015BF42: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF56u); RECOMP_ABI_CALL(0x0015B920u, sub_0015B920); /* call 0x0015B920 */

loc_0015BF56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0015BF5E: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF72u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_0015BF72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0015BF7A: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BF8Eu); RECOMP_ABI_CALL(0x0015BCA0u, sub_0015BCA0); /* call 0x0015BCA0 */

loc_0015BF8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0015BF96: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015BFAAu); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_0015BFAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0015BFB2: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0015BFD0
 * Original: 0x0015BFD0 - 0x0015C12C (348 bytes, 115 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015BFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015BFD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x304) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x304;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = 0;
    ecx = 0x3F;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x2F27B4);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C009u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015C009: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C013u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015C013: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    MEM32(esp + 0x14) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C02Cu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0015C02C: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015C120; /* jle: less or equal (signed <=) */

loc_0015C036: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0x2F27AC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C04Au); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015C04A: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C054u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015C054: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C062u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0015C062: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x110) = 0;
    ecx = 0x3F;
    edi = esp + 0x111;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x118;
    PUSH32(esp, 0x2E845C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C096u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015C096: ;
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x11C;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C0B4u); RECOMP_ABI_CALL(0x0015BED0u, sub_0015BED0); /* call 0x0015BED0 */

loc_0015C0B4: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x210) = 0;
    ecx = 0x3F;
    edi = esp + 0x211;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x218;
    PUSH32(esp, 0x2F28D0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C0E9u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015C0E9: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    ecx = esp + 0x220;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C110u); RECOMP_ABI_CALL(0x0015BFD0u, sub_0015BFD0); /* call 0x0015BFD0 */

loc_0015C110: ;
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(esp + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C036; /* jl: less (signed <) */

loc_0015C120: ;
    eax = MEM32(ebp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0015C130
 * Original: 0x0015C130 - 0x0015C176 (70 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015C130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 8) = 0;
    ecx = 0x3F;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, 0);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F27C8);
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015C16Fu); RECOMP_ABI_CALL(0x0015BFD0u, sub_0015BFD0); /* call 0x0015BFD0 */

loc_0015C16F: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015C180
 * Original: 0x0015C180 - 0x0015C27B (251 bytes, 59 insns)
 * CC: cdecl, 26 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C180: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x68) = esi;
    esi = MEM32(esp + 0x10);
    MEM32(eax + 0x6C) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(eax + 0x70) = esi;
    esi = MEM32(esp + 0x18);
    MEM32(eax + 0x74) = esi;
    esi = MEM32(esp + 0x1C);
    MEM32(eax + 0x78) = esi;
    esi = MEM32(esp + 0x20);
    MEM32(eax + 0x7C) = esi;
    esi = MEM32(esp + 0x24);
    MEM32(eax + 0x80) = esi;
    esi = MEM32(esp + 0x28);
    MEM32(eax + 0x84) = esi;
    esi = MEM32(esp + 0x2C);
    MEM32(eax + 0x88) = esi;
    esi = MEM32(esp + 0x30);
    MEM32(eax + 0x8C) = esi;
    esi = MEM32(esp + 0x34);
    MEM32(eax + 0x90) = esi;
    esi = MEM32(esp + 0x38);
    MEM32(eax + 0x94) = esi;
    esi = MEM32(esp + 0x3C);
    MEM32(eax + 0x98) = esi;
    esi = MEM32(esp + 0x40);
    MEM32(eax + 0x9C) = esi;
    esi = MEM32(esp + 0x44);
    MEM32(eax + 0xA0) = esi;
    esi = MEM32(esp + 0x48);
    MEM32(eax + 0xA4) = esi;
    esi = MEM32(esp + 0x4C);
    MEM32(eax + 0xA8) = esi;
    esi = MEM32(esp + 0x50);
    MEM32(eax + 0xAC) = esi;
    esi = MEM32(esp + 0x54);
    MEM32(eax + 0xB0) = esi;
    esi = MEM32(esp + 0x58);
    MEM32(eax + 0xB4) = esi;
    esi = MEM32(esp + 0x5C);
    MEM32(eax + 0xB8) = esi;
    esi = MEM32(esp + 0x60);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xBC) = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    esi = MEM32(esp + 0x64);
    MEM32(eax + 0xC0) = esi;
    esi = MEM32(esp + 0x68);
    MEM32(eax + 0xC4) = esi;
    eax = MEM32(esp + 0x6C);
    MEM32(edx + ecx) = eax;
    POP32(esp, esi);
    esp += 108; return; /* ret 104 */

}

/**
 * sub_0015C280
 * Original: 0x0015C280 - 0x0015C2D4 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C280: ;
    MEM32(ecx + 0x64) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x60) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C2E0
 * Original: 0x0015C2E0 - 0x0015C310 (48 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C2E0: ;
    eax = MEM32(ecx + 0x910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015C30D; /* jge: greater or equal (signed >=) */

loc_0015C2EB: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x8D0) = edx;
    eax = MEM32(ecx + 0x910);
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0x8F0) = edx;
    MEM32(ecx + 0x910) = MEM32(ecx + 0x910) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x910)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015C30D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015C310
 * Original: 0x0015C310 - 0x0015C7FE (1262 bytes, 597 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C310(void)
{

loc_0015C310: ;
    PUSH32(esp, 0x0015C315u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015C315: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015C34Eu); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C34E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015C387u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C387: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xD);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015C3C0u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C3C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0015C3F9u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C3F9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0015C432u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C432: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 5);
    PUSH32(esp, 0x0015C46Bu); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C46B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0015C4A4u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C4A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0015C4DDu); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C4DD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0015C516u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C516: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 9);
    PUSH32(esp, 0x0015C54Fu); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C54F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0015C588u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C588: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0015C5C1u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C5C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0015C5FAu); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C5FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0015C633u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C633: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x0015C66Cu); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C66C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x0015C6A5u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C6A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x0015C6DEu); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C6DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0015C717u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C717: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x0015C750u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C750: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x0015C789u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C789: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0015C7C2u); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C7C2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x0015C7FBu); RECOMP_ABI_CALL(0x0015C180u, sub_0015C180); /* call 0x0015C180 */

loc_0015C7FB: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C800
 * Original: 0x0015C800 - 0x0015C8D9 (217 bytes, 70 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015C800: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebp = ecx;
    eax = 0x19;
    ecx = ebp + edi * 4 + 0x68;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    esi = 0x1A;
    MEM32(esp + 0x20) = ecx;
    goto loc_0015C830;

    /* nop */

loc_0015C830: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C8CF; /* je: equal / zero */

loc_0015C839: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_0015C868; /* jle: less or equal (signed <=) */

loc_0015C841: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C8A8; /* je: equal / zero */

loc_0015C845: ;
    ecx = esi + eax;
    ecx = MEM32(ebp + ecx * 4);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4), ebx (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) & LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015C841; /* jl: less (signed <) */

loc_0015C864: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C8A8; /* je: equal / zero */

loc_0015C868: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C879; /* je: equal / zero */

loc_0015C86F: ;
    MEM32(esp + 0x10) = 0x17;
    goto loc_0015C8A8;

loc_0015C879: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x19 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015C891; /* jge: greater or equal (signed >=) */

loc_0015C87E: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015C891; /* je: equal / zero */

loc_0015C887: ;
    MEM32(esp + 0x10) = 0x18;
    goto loc_0015C8A8;

loc_0015C891: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0015C8A0u); RECOMP_ABI_CALL(0x0015ECD0u, sub_0015ECD0); /* call 0x0015ECD0 */

loc_0015C8A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015C8A8; /* jne: not equal / not zero */

loc_0015C8A4: ;
    MEM32(esp + 0x10) = ebx;

loc_0015C8A8: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x64;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x19) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x19;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x240) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x240 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x20) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0015C830; /* jl: less (signed <) */

loc_0015C8CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015C8E0
 * Original: 0x0015C8E0 - 0x0015C91C (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015C8E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0015C8ECu); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_0015C8EC: ;
    esi = eax;
    edi = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x184); PUSH32(esp, 0x0015C8FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015C8F5u); } /* indirect call */
    }

loc_0015C8FB: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x188); PUSH32(esp, 0x0015C90Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015C904u); } /* indirect call */
    }

loc_0015C90A: ;
    PUSH32(esp, 0x8ACC9813u);
    ecx = 0x37DD10;
    PUSH32(esp, 0x0015C919u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_0015C919: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015C920
 * Original: 0x0015C920 - 0x0015C940 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C920: ;
    SET_LO8(ecx, MEM8(0x3BF670));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x8ACC9813u);
    ecx = 0x37DD10;
    MEM8(0x3BF670) = LO8(eax);
    PUSH32(esp, 0x0015C93Fu); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_0015C93F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C940
 * Original: 0x0015C940 - 0x0015C976 (54 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C940(void)
{

loc_0015C940: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0015C94Au); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_0015C94A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xAC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC404); /* addss */
    ecx = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015C966u); RECOMP_ABI_CALL(0x00057F50u, sub_00057F50); /* call 0x00057F50 */

loc_0015C966: ;
    PUSH32(esp, 0x8ACC9813u);
    ecx = 0x37DD10;
    PUSH32(esp, 0x0015C975u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_0015C975: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C980
 * Original: 0x0015C980 - 0x0015C9A8 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C980(void)
{

loc_0015C980: ;
    PUSH32(esp, 0);
    ecx = 0x34ABC8;
    PUSH32(esp, 0x0015C98Cu); RECOMP_ABI_CALL(0x000CEAA0u, sub_000CEAA0); /* call 0x000CEAA0 */

loc_0015C98C: ;
    PUSH32(esp, 0);
    ecx = 0x34ABC8;
    PUSH32(esp, 0x0015C998u); RECOMP_ABI_CALL(0x000C8B20u, sub_000C8B20); /* call 0x000C8B20 */

loc_0015C998: ;
    PUSH32(esp, 0x8ACC9813u);
    ecx = 0x37DD10;
    PUSH32(esp, 0x0015C9A7u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_0015C9A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015C9B0
 * Original: 0x0015C9B0 - 0x0015CA91 (225 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015C9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015C9B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243686);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x4F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4F4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x0015C9D3u); RECOMP_ABI_CALL(0x00209100u, sub_00209100); /* call 0x00209100 */

loc_0015C9D3: ;
    ecx = esp + 0xD0;
    MEM32(esp + 0x4FC) = 0;
    PUSH32(esp, 0x0015C9EAu); RECOMP_ABI_CALL(0x001EEF80u, sub_001EEF80); /* call 0x001EEF80 */

loc_0015C9EA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E9238);
    ecx = esp + 8;
    MEM8(esp + 0x504) = 1;
    PUSH32(esp, 0x0015CA02u); RECOMP_ABI_CALL(0x00209810u, sub_00209810); /* call 0x00209810 */

loc_0015CA02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CA46; /* je: equal / zero */

loc_0015CA06: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    PUSH32(esp, 0x0015CA16u); RECOMP_ABI_CALL(0x001EF500u, sub_001EF500); /* call 0x001EF500 */

loc_0015CA16: ;
    ecx = 0x323338;
    PUSH32(esp, 0x0015CA20u); RECOMP_ABI_CALL(0x000960C0u, sub_000960C0); /* call 0x000960C0 */

loc_0015CA20: ;
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    ecx = 0x323338;
    PUSH32(esp, 0x0015CA32u); RECOMP_ABI_CALL(0x000960D0u, sub_000960D0); /* call 0x000960D0 */

loc_0015CA32: ;
    ecx = esp + 0xD0;
    PUSH32(esp, 0x0015CA3Eu); RECOMP_ABI_CALL(0x001EEFA0u, sub_001EEFA0); /* call 0x001EEFA0 */

loc_0015CA3E: ;
    ecx = esp;
    PUSH32(esp, 0x0015CA46u); RECOMP_ABI_CALL(0x00209980u, sub_00209980); /* call 0x00209980 */

loc_0015CA46: ;
    PUSH32(esp, 0x8ACC9813u);
    ecx = 0x37DD10;
    PUSH32(esp, 0x0015CA55u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_0015CA55: ;
    ecx = esp + 0xD0;
    MEM8(esp + 0x4FC) = 0;
    PUSH32(esp, 0x0015CA69u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0015CA69: ;
    ecx = esp;
    MEM32(esp + 0x4FC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0015CA7Cu); RECOMP_ABI_CALL(0x00209200u, sub_00209200); /* call 0x00209200 */

loc_0015CA7C: ;
    ecx = MEM32(esp + 0x4F4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x500) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x500;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015CAA0
 * Original: 0x0015CAA0 - 0x0015CAC7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015CAA0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015CAA3: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0015CAB0u); RECOMP_ABI_CALL(0x0015ECB0u, sub_0015ECB0); /* call 0x0015ECB0 */

loc_0015CAB0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x16 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CAA3; /* jl: less (signed <) */

loc_0015CAB6: ;
    PUSH32(esp, 0x8ACC9813u);
    ecx = 0x37DD10;
    PUSH32(esp, 0x0015CAC5u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_0015CAC5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015CAD0
 * Original: 0x0015CAD0 - 0x0015CB18 (72 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CAD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CB14; /* je: equal / zero */

loc_0015CAD9: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0015CAE3u); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_0015CAE3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CB14; /* je: equal / zero */

loc_0015CAEA: ;
    MEM32(eax + 0xEB8) = esi;
    MEM8(eax + 0xEC0) = 1;
    MEM32(eax + 0xEBC) = 2;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x8ACC9813u;
    ecx = 0x37DD10;
    g_seh_ebp = ebp; sub_00152580(); return; /* tail jmp 0x00152580 */

loc_0015CB14: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015CB20
 * Original: 0x0015CB20 - 0x0015CBA7 (135 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015CB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CB52; /* je: equal / zero */

loc_0015CB28: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0015CB32u); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_0015CB32: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CB52; /* je: equal / zero */

loc_0015CB39: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xAC4); /* addss */
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015CB52u); RECOMP_ABI_CALL(0x00057F50u, sub_00057F50); /* call 0x00057F50 */

loc_0015CB52: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CB66; /* je: equal / zero */

loc_0015CB59: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x34ABC8;
    PUSH32(esp, 0x0015CB66u); RECOMP_ABI_CALL(0x000CDA60u, sub_000CDA60); /* call 0x000CDA60 */

loc_0015CB66: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CB7B; /* je: equal / zero */

loc_0015CB6E: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0015CB7Bu); RECOMP_ABI_CALL(0x0015ECB0u, sub_0015ECB0); /* call 0x0015ECB0 */

loc_0015CB7B: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CB91; /* je: equal / zero */

loc_0015CB82: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = 0x3BF678;
    PUSH32(esp, 0x0015CB91u); RECOMP_ABI_CALL(0x0015C2E0u, sub_0015C2E0); /* call 0x0015C2E0 */

loc_0015CB91: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CBA5; /* je: equal / zero */

loc_0015CB98: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = 0x343468;
    PUSH32(esp, 0x0015CBA5u); RECOMP_ABI_CALL(0x000CE860u, sub_000CE860); /* call 0x000CE860 */

loc_0015CBA5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015CBB0
 * Original: 0x0015CBB0 - 0x0015CC84 (212 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CBB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015CC80; /* jle: less or equal (signed <=) */

loc_0015CBC1: ;
    _fa = (uint32_t)(MEM32(0x35F7C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x35F7C8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CC80; /* jne: not equal / not zero */

loc_0015CBCE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F28F4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    MEM32(esi + 0x910) = eax;
    PUSH32(esp, 0x0015CBE9u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0015CBE9: ;
    PUSH32(esp, 0x2F28D8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    ebx = eax;
    PUSH32(esp, 0x0015CBFCu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0015CBFC: ;
    edi = eax;
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015CC09u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0015CC09: ;
    ecx = MEM32(esi + 0x910);
    ebp = eax;
    eax = MEM32(esi + ecx * 4 + 0x8D0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CC2F; /* je: equal / zero */

loc_0015CC1F: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0015CC2Du); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015CC2D: ;
    goto loc_0015CC3D;

loc_0015CC2F: ;
    PUSH32(esp, 0x2E7CEC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015CC3Au); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015CC3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015CC3D: ;
    edx = MEM32(esi + 0x910);
    eax = MEM32(esi + edx * 4 + 0x8F0);
    PUSH32(esp, 0x400);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0015CC58u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015CC58: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = 0x35F798;
    PUSH32(esp, 0x0015CC6Eu); RECOMP_ABI_CALL(0x00100740u, sub_00100740); /* call 0x00100740 */

loc_0015CC6E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015CC74u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0015CC74: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015CC7Au); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0015CC7A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0015CC80: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015CC90
 * Original: 0x0015CC90 - 0x0015CF66 (726 bytes, 187 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015CC90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7130720F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7130720F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015CE44; /* ja: above (unsigned >) */

loc_0015CC9F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015CE1B; /* je: equal / zero */

loc_0015CCA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41C69953) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41C69953 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015CD8A; /* ja: above (unsigned >) */

loc_0015CCB0: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015CD61; /* je: equal / zero */

loc_0015CCB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x341DD437) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x341DD437 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015CD2D; /* ja: above (unsigned >) */

loc_0015CCBD: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015CD07; /* je: equal / zero */

loc_0015CCBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4051F27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4051F27 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CCF7; /* je: equal / zero */

loc_0015CCC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32028039) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32028039 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CF16; /* jne: not equal / not zero */

loc_0015CCD1: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CCDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CCE6: ;
    eax = eax + eax * 2 + 0x60;
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x0015CCF2u); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CCF2: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CCF7: ;
    _fb = (uint32_t)(0x8B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8B8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0015CD02u); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CD02: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CD07: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CD13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CD1C: ;
    edx = eax + eax * 2 + 0x7B;
    ecx = ecx + edx * 8;
    PUSH32(esp, 0x0015CD28u); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CD28: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CD2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DA66C89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3DA66C89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CF16; /* jne: not equal / not zero */

loc_0015CD38: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CD44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CD4D: ;
    eax = eax + eax * 2 + 0xFC;
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x0015CD5Cu); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CD5C: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CD61: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CD6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CD76: ;
    edx = eax + eax * 2 + 0x96;
    ecx = ecx + edx * 8;
    PUSH32(esp, 0x0015CD85u); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CD85: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CD8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5019688C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5019688C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CDF2; /* je: equal / zero */

loc_0015CD91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51BE63BE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x51BE63BE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CDC9; /* je: equal / zero */

loc_0015CD98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69300E11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x69300E11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CF16; /* jne: not equal / not zero */

loc_0015CDA3: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CDAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CDB8: ;
    eax = eax + eax * 2 + 0x30;
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x0015CDC4u); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CDC4: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CDC9: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CDD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CDDE: ;
    edx = eax + eax * 2 + 0x84;
    ecx = ecx + edx * 8;
    PUSH32(esp, 0x0015CDEDu); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CDED: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CDF2: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CDFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CE07: ;
    eax = eax + eax * 2 + 0xD2;
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x0015CE16u); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CE16: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CE1B: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CE27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CE30: ;
    edx = eax + eax * 2 + 0xA8;
    ecx = ecx + edx * 8;
    PUSH32(esp, 0x0015CE3Fu); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CE3F: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CE44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDA618F92u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDA618F92u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015CF01; /* ja: above (unsigned >) */

loc_0015CE4F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015CEE3; /* je: equal / zero */

loc_0015CE55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF31AE33u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF31AE33u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CEBA; /* je: equal / zero */

loc_0015CE5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD228ECDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD228ECDAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CE94; /* je: equal / zero */

loc_0015CE63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD5E5007Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD5E5007Fu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015CF16; /* jne: not equal / not zero */

loc_0015CE6E: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CE7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CE83: ;
    eax = eax + eax * 2 + 0x48;
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x0015CE8Fu); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CE8F: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CE94: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CEA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CEA9: ;
    edx = eax + eax * 2 + 0x69;
    ecx = ecx + edx * 8;
    PUSH32(esp, 0x0015CEB5u); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CEB5: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CEBA: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CEC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CECF: ;
    eax = eax + eax * 2 + 0x102;
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x0015CEDEu); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CEDE: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CEE3: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CEEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CEF0: ;
    edx = eax + eax * 2 + 0x18;
    ecx = ecx + edx * 8;
    PUSH32(esp, 0x0015CEFCu); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CEFC: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CF01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF085FF47u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF085FF47u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CF56; /* je: equal / zero */

loc_0015CF08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF5A01909u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF5A01909u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CF38; /* je: equal / zero */

loc_0015CF0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFB5470C1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFB5470C1u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015CF1B; /* je: equal / zero */

loc_0015CF16: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0015CF1B: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CF23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CF28: ;
    eax = eax + eax * 2;
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x0015CF33u); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CF33: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CF38: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015CF61; /* jl: less (signed <) */

loc_0015CF40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015CF61; /* jge: greater or equal (signed >=) */

loc_0015CF45: ;
    edx = eax + eax * 2 + 0x72;
    ecx = ecx + edx * 8;
    PUSH32(esp, 0x0015CF51u); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CF51: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0015CF56: ;
    _fb = (uint32_t)(0x8A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8A0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0015CF61u); RECOMP_ABI_CALL(0x0015CB20u, sub_0015CB20); /* call 0x0015CB20 */

loc_0015CF61: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015CF70
 * Original: 0x0015CF70 - 0x0015DBA0 (3120 bytes, 876 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015CF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015CF70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = 0x19;
    ebp = ecx;
    MEM32(ebp) = eax;
    edx = 0xF9474539u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x18;
    MEM32(ebp) = eax;
    edx = 0x52D72675;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x30;
    MEM32(ebp) = eax;
    edx = 0xEB49361Au;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x48;
    MEM32(ebp) = eax;
    edx = 0xB4C29B16u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x60;
    MEM32(ebp) = eax;
    edx = 0xAFB86188u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x78;
    MEM32(ebp) = eax;
    edx = 0x15F64434;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x90;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0xA8;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0x10;
    MEM32(ebp + 8) = esi;
    edi = 0xEBF96C3Fu;
    MEM32(ecx + 0x910) = ebx;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x5A4C395F;
    MEM32(ebp + 0x10) = ebx;
    eax = 0xB5606098u;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x72E3C22D;
    esi = 0x19;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0xC0;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0xD8;
    MEM32(ebp) = eax;
    edx = 0xDF8D8D53u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0xF0;
    MEM32(ebp) = eax;
    edx = 0x9D0186FDu;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x108;
    MEM32(ebp) = eax;
    edx = 0x1934AD6C;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x120;
    MEM32(ebp) = eax;
    edx = 0xE2D3425Eu;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x138;
    MEM32(ebp) = eax;
    edx = 0xB01E276Au;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x150;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x168;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0x11;
    MEM32(ebp + 8) = esi;
    edi = 0xEBF96C3Fu;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x5A4C395F;
    MEM32(ebp + 0x10) = ebx;
    eax = 0xB13E5081u;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x180;
    MEM32(ebp) = eax;
    edx = 0xC4ED7736u;
    MEM32(ebp + 4) = edx;
    esi = 0x19;
    MEM32(ebp + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xC) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x198;
    edx = 0x73E0CBBF;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x1B0;
    MEM32(ebp) = eax;
    edx = 0xCE72EF22u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x1C8;
    MEM32(ebp) = eax;
    edx = 0xB3F7E9CFu;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x1E0;
    MEM32(ebp) = eax;
    edx = 0x1BCF4372;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x1F8;
    MEM32(ebp) = eax;
    edx = 0x7179DE12;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x210;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x228;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0x13;
    MEM32(ebp + 8) = esi;
    edi = 0xEBF96C3Fu;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x5A4C395F;
    MEM32(ebp + 0x10) = ebx;
    eax = 0x55F5C3A5;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x240;
    MEM32(ebp) = eax;
    edx = 0x5987CA22;
    MEM32(ebp + 4) = edx;
    esi = 0x19;
    MEM32(ebp + 8) = esi;
    edi = 0xC30B9C2Du;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x1664E4E8;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x258;
    MEM32(ebp) = eax;
    edx = 0xB7469049u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xC) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x270;
    edx = 0xFF7E23E;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x288;
    MEM32(ebp) = eax;
    edx = 0xFB105F39u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x2A0;
    MEM32(ebp) = eax;
    edx = 0x94D9F609u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x2B8;
    MEM32(ebp) = eax;
    edx = 0x716850F6;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x2D0;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x2E8;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0x12;
    MEM32(ebp + 8) = esi;
    edi = 0xEBF96C3Fu;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x5A4C395F;
    MEM32(ebp + 0x10) = ebx;
    eax = 0x3B9FB5BC;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x300;
    MEM32(ebp) = eax;
    edx = 0xCAF63ABDu;
    MEM32(ebp + 4) = edx;
    esi = 0x19;
    MEM32(ebp + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xC) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x318;
    MEM32(ebp) = eax;
    edx = 0x39674D80;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x330;
    MEM32(ebp) = eax;
    edx = 0xD13C42AAu;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x348;
    MEM32(ebp) = eax;
    edx = 0x158F5009;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x360;
    MEM32(ebp) = eax;
    edx = 0xFA8A953Au;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x378;
    MEM32(ebp) = eax;
    edx = 0x826AF723u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x390;
    MEM32(ebp) = eax;
    edx = 0x45891613;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x3A8;
    MEM32(ebp) = eax;
    edx = 0x97CDD5F3u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x3C0;
    MEM32(ebp) = eax;
    edx = 0x96CDD460u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x3D8;
    MEM32(ebp) = eax;
    edx = 0x55BA8A3E;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x3F0;
    MEM32(ebp) = eax;
    edx = 0x4D7ED2CD;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x408;
    MEM32(ebp) = eax;
    edx = 0x518DE3A3;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x420;
    MEM32(ebp) = eax;
    edx = 0x5A75ECE8;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x438;
    MEM32(ebp) = eax;
    edx = 0x5C9AED19;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x450;
    MEM32(ebp) = eax;
    edx = 0xAB56B63Au;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x468;
    MEM32(ebp) = eax;
    edx = 0xFB8A96CDu;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x480;
    MEM32(ebp) = eax;
    edx = 0x5FA0A1A9;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x498;
    MEM32(ebp) = eax;
    edx = 0xF0D2A048u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x4B0;
    MEM32(ebp) = eax;
    edx = 0x65E90DDF;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x4C8;
    MEM32(ebp) = eax;
    edx = 0x3B8531E5;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x4E0;
    MEM32(ebp) = eax;
    edx = 0x3564D23A;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x4F8;
    MEM32(ebp) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x510;
    MEM32(ebp) = eax;
    edx = 0x78F37781;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x528;
    MEM32(ebp) = eax;
    edx = 0xBE4E017Eu;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x540;
    MEM32(ebp) = eax;
    edx = 0xB1CA58A5u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x558;
    MEM32(ebp) = eax;
    edx = 0x381A654B;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x570;
    MEM32(ebp) = eax;
    edx = 0x9F017A12u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x588;
    MEM32(ebp) = eax;
    edx = 0x62F4E44D;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x5A0;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0xC;
    MEM32(ebp + 8) = esi;
    edi = 0x7FBD4D1B;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x5A4C395F;
    MEM32(ebp + 0x10) = ebx;
    eax = 0x1B571E38;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x5B8;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 8;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    eax = 0xC0A9A521u;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x5D0;
    MEM32(ebp) = eax;
    edx = 0x87AEFF18u;
    MEM32(ebp + 4) = edx;
    esi = 0x19;
    MEM32(ebp + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xC) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x5E8;
    MEM32(ebp) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 4) = edx;
    esi = 0xA;
    MEM32(ebp + 8) = esi;
    edi = 0x7FBD4D1B;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x5A4C395F;
    eax = 0xF10A2104u;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    eax = 0x186A0;
    esi = 0x19;
    ebp = ecx + 0x600;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x14C45D47;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    eax = 0x186A0;
    ebp = ecx + 0x618;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x14) = eax;
    eax = 0x3D090;
    ebp = ecx + 0x630;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    edi = 0x47908C6B;
    MEM32(ebp + 0xC) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x1E71EE97;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    eax = 0x3D090;
    ebp = ecx + 0x648;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x14) = eax;
    eax = 0x7A120;
    ebp = ecx + 0x660;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x389E8B6B;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x678;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0x15;
    MEM32(ebp + 8) = esi;
    edi = 0x7FBD4D1B;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x5A4C395F;
    MEM32(ebp + 0x10) = ebx;
    eax = 0xA96B2000u;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x690;
    MEM32(ebp) = eax;
    edx = 0x727EE84D;
    MEM32(ebp + 4) = edx;
    esi = 0x19;
    MEM32(ebp + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xC) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x6A8;
    MEM32(ebp) = eax;
    edx = 0x64E90C4C;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    edx = 0x718A0B58;
    ebp = ecx + 0x6C0;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0xC350;
    edi = 0x7FBD4D1B;
    ebp = ecx + 0x6D8;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0xB83B2C37u;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x6F0;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0x14;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    ebx = 0xEAAC2C76u;
    MEM32(ebp + 0x10) = ebx;
    eax = 0x6CA63427;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x708;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0xB;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x5A4C395F;
    MEM32(ebp + 0x10) = ebx;
    eax = 0x187DEBE6;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x720;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 7;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    eax = 0xF22A525Du;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x738;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0xD;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    eax = 0x186F9C79;
    MEM32(ebp + 0x14) = eax;
    eax = 0x186A0;
    ebp = ecx + 0x750;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0x19;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x14C45D47;
    MEM32(ebp + 0x10) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x14) = eax;
    eax = 0x186A0;
    ebp = ecx + 0x768;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    eax = 0x3D090;
    edi = 0x47908C6B;
    ebp = ecx + 0x780;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x1E71EE97;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    eax = 0x3D090;
    ebp = ecx + 0x798;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x14) = eax;
    eax = 0x7A120;
    ebp = ecx + 0x7B0;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x389E8B6B;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x7C8;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 9;
    MEM32(ebp + 8) = esi;
    edi = 0x7FBD4D1B;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x5A4C395F;
    MEM32(ebp + 0x10) = ebx;
    eax = 0x661ABEEA;
    MEM32(ebp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x7E0;
    MEM32(ebp) = eax;
    edx = 0xBB98C470u;
    MEM32(ebp + 4) = edx;
    esi = 0x19;
    MEM32(ebp + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xC) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    eax = 0x3D090;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x7F8;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    edi = 0x47908C6B;
    MEM32(ebp + 0xC) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x1E71EE97;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x810;
    MEM32(ebp) = eax;
    edx = 0x2E5E91C8;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0xC) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x828;
    MEM32(ebp) = eax;
    edx = 0xDCCEB092u;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x840;
    MEM32(ebp) = eax;
    edx = 0x23CDD7A6;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x858;
    MEM32(ebp) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 4) = edx;
    esi = 0xE;
    MEM32(ebp + 8) = esi;
    edi = 0x47908C6B;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x5A4C395F;
    MEM32(ebp + 0x10) = ebx;
    eax = 0x389C03A;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x870;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0xF;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = ebx;
    eax = 0xFD923F98u;
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x888;
    eax = 0x3D090;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    esi = 0x19;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = edi;
    ebx = 0x1E71EE97;
    MEM32(ebp + 0x10) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x14) = eax;
    ebp = ecx + 0x8A0;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = edx;
    _fb = (uint32_t)(0x8B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8B8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = esi;
    MEM32(ecx) = eax;
    edi = 0xEBF96C3Fu;
    MEM32(ebp + 0xC) = edi;
    edx = 0x879460E9u;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = esi;
    ebx = 0x7C240AE3;
    MEM32(ebp + 0x10) = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(ebp + 0x14) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = ebx;
    POP32(esp, esi);
    MEM32(ecx + 0x14) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015DBA0
 * Original: 0x0015DBA0 - 0x0015E22D (1677 bytes, 493 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015DBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015DBA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x19;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x2C) = eax;
    ecx = esi + 0x18;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -24) = eax;
    MEM32(ecx + -20) = eax;
    MEM32(ecx + -16) = edx;
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -24) = eax;
    MEM32(ecx + -20) = eax;
    MEM32(ecx + -16) = edx;
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x180) = eax;
    MEM32(esi + 0x184) = eax;
    MEM32(esi + 0x188) = edx;
    MEM32(esi + 0x18C) = eax;
    MEM32(esi + 0x190) = eax;
    MEM32(esi + 0x194) = eax;
    ecx = esi + 0x180;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -24) = eax;
    MEM32(ecx + -20) = eax;
    MEM32(ecx + -16) = edx;
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -24) = eax;
    MEM32(ecx + -20) = eax;
    MEM32(ecx + -16) = edx;
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(esi + 0x240) = eax;
    MEM32(esi + 0x244) = eax;
    MEM32(esi + 0x248) = edx;
    MEM32(esi + 0x24C) = eax;
    MEM32(esi + 0x250) = eax;
    MEM32(esi + 0x254) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x240;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x300;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -24) = eax;
    MEM32(ecx + -20) = eax;
    MEM32(ecx + -16) = edx;
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(esi + 0x348) = eax;
    MEM32(esi + 0x34C) = eax;
    MEM32(esi + 0x350) = edx;
    MEM32(esi + 0x354) = eax;
    MEM32(esi + 0x358) = eax;
    MEM32(esi + 0x35C) = eax;
    ecx = esi + 0x348;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(esi + 0x390) = eax;
    MEM32(esi + 0x394) = eax;
    MEM32(esi + 0x398) = edx;
    MEM32(esi + 0x39C) = eax;
    MEM32(esi + 0x3A0) = eax;
    MEM32(esi + 0x3A4) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x390;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3D8) = eax;
    MEM32(esi + 0x3DC) = eax;
    MEM32(esi + 0x3E0) = edx;
    MEM32(esi + 0x3E4) = eax;
    MEM32(esi + 0x3E8) = eax;
    MEM32(esi + 0x3EC) = eax;
    ecx = esi + 0x3D8;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x420;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -24) = eax;
    MEM32(ecx + -20) = eax;
    MEM32(ecx + -16) = edx;
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x4B0) = eax;
    MEM32(esi + 0x4B4) = eax;
    MEM32(esi + 0x4B8) = edx;
    MEM32(esi + 0x4BC) = eax;
    MEM32(esi + 0x4C0) = eax;
    MEM32(esi + 0x4C4) = eax;
    ecx = esi + 0x4B0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -24) = eax;
    MEM32(ecx + -20) = eax;
    MEM32(ecx + -16) = edx;
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -24) = eax;
    MEM32(ecx + -20) = eax;
    MEM32(ecx + -16) = edx;
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -24) = eax;
    MEM32(ecx + -20) = eax;
    MEM32(ecx + -16) = edx;
    MEM32(ecx + -12) = eax;
    MEM32(ecx + -8) = eax;
    MEM32(ecx + -4) = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    ecx = esi + 0x540;
    edi = 0xE;

loc_0015E0C7: ;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015E0C7; /* jne: not equal / not zero */

loc_0015E0DE: ;
    ecx = esi + 0x690;
    edi = 0xE;
    /* nop */

loc_0015E0F0: ;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015E0F0; /* jne: not equal / not zero */

loc_0015E107: ;
    MEM32(esi + 0x7E0) = eax;
    MEM32(esi + 0x7E4) = eax;
    MEM32(esi + 0x7E8) = edx;
    MEM32(esi + 0x7EC) = eax;
    MEM32(esi + 0x7F0) = eax;
    MEM32(esi + 0x7F4) = eax;
    ecx = esi + 0x7E0;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(esi + 0x810) = eax;
    MEM32(esi + 0x814) = eax;
    MEM32(esi + 0x818) = edx;
    MEM32(esi + 0x81C) = eax;
    MEM32(esi + 0x820) = eax;
    MEM32(esi + 0x824) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x810;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8A0) = eax;
    MEM32(esi + 0x8A4) = eax;
    MEM32(esi + 0x8A8) = edx;
    MEM32(esi + 0x8AC) = eax;
    MEM32(esi + 0x8B0) = eax;
    MEM32(esi + 0x8B4) = eax;
    ecx = esi;
    MEM32(esi + 0x8B8) = eax;
    MEM32(esi + 0x8BC) = eax;
    MEM32(esi + 0x8C0) = edx;
    MEM32(esi + 0x8C4) = eax;
    MEM32(esi + 0x8C8) = eax;
    MEM32(esi + 0x8CC) = eax;
    PUSH32(esp, 0x0015E228u); RECOMP_ABI_CALL(0x0015CF70u, sub_0015CF70); /* call 0x0015CF70 */

loc_0015E228: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E230
 * Original: 0x0015E230 - 0x0015E44B (539 bytes, 170 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E230: ;
    eax = MEM32(0x413F90);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E255; /* je: equal / zero */

loc_0015E242: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + eax * 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E255; /* je: equal / zero */

loc_0015E24A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015E255; /* jge: greater or equal (signed >=) */

loc_0015E24F: ;
    MEM32(esi + eax * 4) = ecx;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015E255: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x0015E261u); RECOMP_ABI_CALL(0x0015C800u, sub_0015C800); /* call 0x0015C800 */

loc_0015E261: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015E436; /* ja: above (unsigned >) */

loc_0015E26A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x15E44C); /* switch: 22 entries, 22 targets */
    if (_jt == 0x0015E271u) goto loc_0015E271;
    if (_jt == 0x0015E283u) goto loc_0015E283;
    if (_jt == 0x0015E295u) goto loc_0015E295;
    if (_jt == 0x0015E2A7u) goto loc_0015E2A7;
    if (_jt == 0x0015E2B9u) goto loc_0015E2B9;
    if (_jt == 0x0015E2CBu) goto loc_0015E2CB;
    if (_jt == 0x0015E2DDu) goto loc_0015E2DD;
    if (_jt == 0x0015E2F4u) goto loc_0015E2F4;
    if (_jt == 0x0015E30Bu) goto loc_0015E30B;
    if (_jt == 0x0015E322u) goto loc_0015E322;
    if (_jt == 0x0015E339u) goto loc_0015E339;
    if (_jt == 0x0015E350u) goto loc_0015E350;
    if (_jt == 0x0015E367u) goto loc_0015E367;
    if (_jt == 0x0015E37Eu) goto loc_0015E37E;
    if (_jt == 0x0015E395u) goto loc_0015E395;
    if (_jt == 0x0015E3ACu) goto loc_0015E3AC;
    if (_jt == 0x0015E3C3u) goto loc_0015E3C3;
    if (_jt == 0x0015E3DAu) goto loc_0015E3DA;
    if (_jt == 0x0015E3F1u) goto loc_0015E3F1;
    if (_jt == 0x0015E408u) goto loc_0015E408;
    if (_jt == 0x0015E41Fu) goto loc_0015E41F;
    if (_jt == 0x0015E440u) goto loc_0015E440;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015E271: ;
    ecx = esi;
    PUSH32(esp, 0x0015E278u); RECOMP_ABI_CALL(0x0015C8E0u, sub_0015C8E0); /* call 0x0015C8E0 */

loc_0015E278: ;
    ecx = esi;
    PUSH32(esp, 0x0015E27Fu); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E27F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E283: ;
    ecx = esi;
    PUSH32(esp, 0x0015E28Au); RECOMP_ABI_CALL(0x0015C920u, sub_0015C920); /* call 0x0015C920 */

loc_0015E28A: ;
    ecx = esi;
    PUSH32(esp, 0x0015E291u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E291: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E295: ;
    ecx = esi;
    PUSH32(esp, 0x0015E29Cu); RECOMP_ABI_CALL(0x0015C940u, sub_0015C940); /* call 0x0015C940 */

loc_0015E29C: ;
    ecx = esi;
    PUSH32(esp, 0x0015E2A3u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E2A3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E2A7: ;
    ecx = esi;
    PUSH32(esp, 0x0015E2AEu); RECOMP_ABI_CALL(0x0015C980u, sub_0015C980); /* call 0x0015C980 */

loc_0015E2AE: ;
    ecx = esi;
    PUSH32(esp, 0x0015E2B5u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E2B5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E2B9: ;
    ecx = esi;
    PUSH32(esp, 0x0015E2C0u); RECOMP_ABI_CALL(0x0015C9B0u, sub_0015C9B0); /* call 0x0015C9B0 */

loc_0015E2C0: ;
    ecx = esi;
    PUSH32(esp, 0x0015E2C7u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E2C7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E2CB: ;
    ecx = esi;
    PUSH32(esp, 0x0015E2D2u); RECOMP_ABI_CALL(0x0015CAA0u, sub_0015CAA0); /* call 0x0015CAA0 */

loc_0015E2D2: ;
    ecx = esi;
    PUSH32(esp, 0x0015E2D9u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E2D9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E2DD: ;
    PUSH32(esp, 0x87912831u);
    ecx = esi;
    PUSH32(esp, 0x0015E2E9u); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E2E9: ;
    ecx = esi;
    PUSH32(esp, 0x0015E2F0u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E2F0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E2F4: ;
    PUSH32(esp, 0x28416B1F);
    ecx = esi;
    PUSH32(esp, 0x0015E300u); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E300: ;
    ecx = esi;
    PUSH32(esp, 0x0015E307u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E307: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E30B: ;
    PUSH32(esp, 0x55C024CC);
    ecx = esi;
    PUSH32(esp, 0x0015E317u); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E317: ;
    ecx = esi;
    PUSH32(esp, 0x0015E31Eu); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E31E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E322: ;
    PUSH32(esp, 0x579B5B99);
    ecx = esi;
    PUSH32(esp, 0x0015E32Eu); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E32E: ;
    ecx = esi;
    PUSH32(esp, 0x0015E335u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E335: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E339: ;
    PUSH32(esp, 0xF3356BF7u);
    ecx = esi;
    PUSH32(esp, 0x0015E345u); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E345: ;
    ecx = esi;
    PUSH32(esp, 0x0015E34Cu); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E34C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E350: ;
    PUSH32(esp, 0x98E9176);
    ecx = esi;
    PUSH32(esp, 0x0015E35Cu); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E35C: ;
    ecx = esi;
    PUSH32(esp, 0x0015E363u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E363: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E367: ;
    PUSH32(esp, 0x24A16E5B);
    ecx = esi;
    PUSH32(esp, 0x0015E373u); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E373: ;
    ecx = esi;
    PUSH32(esp, 0x0015E37Au); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E37A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E37E: ;
    PUSH32(esp, 0x4A5D84BC);
    ecx = esi;
    PUSH32(esp, 0x0015E38Au); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E38A: ;
    ecx = esi;
    PUSH32(esp, 0x0015E391u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E391: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E395: ;
    PUSH32(esp, 0x2D0807CE);
    ecx = esi;
    PUSH32(esp, 0x0015E3A1u); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E3A1: ;
    ecx = esi;
    PUSH32(esp, 0x0015E3A8u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E3A8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E3AC: ;
    PUSH32(esp, 0x774D4842);
    ecx = esi;
    PUSH32(esp, 0x0015E3B8u); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E3B8: ;
    ecx = esi;
    PUSH32(esp, 0x0015E3BFu); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E3BF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E3C3: ;
    PUSH32(esp, 0xDD9DD0ABu);
    ecx = esi;
    PUSH32(esp, 0x0015E3CFu); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E3CF: ;
    ecx = esi;
    PUSH32(esp, 0x0015E3D6u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E3D6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E3DA: ;
    PUSH32(esp, 0x1678F628);
    ecx = esi;
    PUSH32(esp, 0x0015E3E6u); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E3E6: ;
    ecx = esi;
    PUSH32(esp, 0x0015E3EDu); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E3ED: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E3F1: ;
    PUSH32(esp, 0xE53D989Fu);
    ecx = esi;
    PUSH32(esp, 0x0015E3FDu); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E3FD: ;
    ecx = esi;
    PUSH32(esp, 0x0015E404u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E404: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E408: ;
    PUSH32(esp, 0xBC8AC23Au);
    ecx = esi;
    PUSH32(esp, 0x0015E414u); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E414: ;
    ecx = esi;
    PUSH32(esp, 0x0015E41Bu); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E41B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E41F: ;
    PUSH32(esp, 0x467B211C);
    ecx = esi;
    PUSH32(esp, 0x0015E42Bu); RECOMP_ABI_CALL(0x0015CAD0u, sub_0015CAD0); /* call 0x0015CAD0 */

loc_0015E42B: ;
    ecx = esi;
    PUSH32(esp, 0x0015E432u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E432: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015E436: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E447; /* je: equal / zero */

loc_0015E43B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E447; /* je: equal / zero */

loc_0015E440: ;
    ecx = esi;
    PUSH32(esp, 0x0015E447u); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_0015E447: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015E4B0
 * Original: 0x0015E4B0 - 0x0015E857 (935 bytes, 220 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015E4B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7130720F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7130720F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015E70C; /* ja: above (unsigned >) */

loc_0015E4BF: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E5D0; /* je: equal / zero */

loc_0015E4C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41C69953) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41C69953 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015E58F; /* ja: above (unsigned >) */

loc_0015E4D0: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E579; /* je: equal / zero */

loc_0015E4D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x341DD437) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x341DD437 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015E532; /* ja: above (unsigned >) */

loc_0015E4DD: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E51C; /* je: equal / zero */

loc_0015E4DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4051F27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4051F27 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E507; /* je: equal / zero */

loc_0015E4E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32028039) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32028039 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E811; /* jne: not equal / not zero */

loc_0015E4F1: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0x32028039;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E507: ;
    MEM32(esp + 4) = 0x4051F27;
    MEM32(esp + 8) = 0;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E51C: ;
    edx = MEM32(esp + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = 0x341DD437;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E532: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DA66C89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3DA66C89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E811; /* jne: not equal / not zero */

loc_0015E53D: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E55B; /* jne: not equal / not zero */

loc_0015E546: ;
    MEM32(esp + 4) = 0x3DA66C89;
    MEM32(esp + 8) = 0;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E55B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E811; /* jne: not equal / not zero */

loc_0015E564: ;
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0x3DA66C89;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E579: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0x41C69953;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E58F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5019688C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5019688C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E5D0; /* je: equal / zero */

loc_0015E596: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51BE63BE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x51BE63BE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E5BA; /* je: equal / zero */

loc_0015E59D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69300E11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x69300E11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E811; /* jne: not equal / not zero */

loc_0015E5A8: ;
    edx = MEM32(esp + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E5BA: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0x51BE63BE;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E5D0: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E5EA; /* jne: not equal / not zero */

loc_0015E5D9: ;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E5EA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E600; /* jne: not equal / not zero */

loc_0015E5EF: ;
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E600: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E616; /* jne: not equal / not zero */

loc_0015E605: ;
    MEM32(esp + 8) = 2;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E616: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E62C; /* jne: not equal / not zero */

loc_0015E61B: ;
    MEM32(esp + 8) = 3;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E62C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E642; /* jne: not equal / not zero */

loc_0015E631: ;
    MEM32(esp + 8) = 4;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E642: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E658; /* jne: not equal / not zero */

loc_0015E647: ;
    MEM32(esp + 8) = 5;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E658: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x28 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E66E; /* jne: not equal / not zero */

loc_0015E65D: ;
    MEM32(esp + 8) = 6;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E66E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E684; /* jne: not equal / not zero */

loc_0015E673: ;
    MEM32(esp + 8) = 7;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E684: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E69A; /* jne: not equal / not zero */

loc_0015E689: ;
    MEM32(esp + 8) = 8;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E69A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x46 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E6B0; /* jne: not equal / not zero */

loc_0015E69F: ;
    MEM32(esp + 8) = 9;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E6B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x50 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E6C6; /* jne: not equal / not zero */

loc_0015E6B5: ;
    MEM32(esp + 8) = 0xA;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E6C6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x5A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E6DC; /* jne: not equal / not zero */

loc_0015E6CB: ;
    MEM32(esp + 8) = 0xB;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E6DC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E6F2; /* jne: not equal / not zero */

loc_0015E6E1: ;
    MEM32(esp + 8) = 0xC;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E6F2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x6E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E811; /* jne: not equal / not zero */

loc_0015E6FB: ;
    MEM32(esp + 8) = 0xD;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E70C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDA618F92u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDA618F92u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015E7FC; /* ja: above (unsigned >) */

loc_0015E717: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E7E6; /* je: equal / zero */

loc_0015E71D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF31AE33u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF31AE33u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E75E; /* je: equal / zero */

loc_0015E724: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD228ECDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD228ECDAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E748; /* je: equal / zero */

loc_0015E72B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD5E5007Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD5E5007Fu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E811; /* jne: not equal / not zero */

loc_0015E736: ;
    edx = MEM32(esp + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E748: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0xD228ECDAu;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E75E: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E778; /* jne: not equal / not zero */

loc_0015E767: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xAF31AE33u);
    PUSH32(esp, 0x0015E773u); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); /* call 0x0015CC90 */

loc_0015E773: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0015E778: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E78E; /* jne: not equal / not zero */

loc_0015E77D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xAF31AE33u);
    PUSH32(esp, 0x0015E789u); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); /* call 0x0015CC90 */

loc_0015E789: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0015E78E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E7A4; /* jne: not equal / not zero */

loc_0015E793: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xAF31AE33u);
    PUSH32(esp, 0x0015E79Fu); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); /* call 0x0015CC90 */

loc_0015E79F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0015E7A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E7BA; /* jne: not equal / not zero */

loc_0015E7A9: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xAF31AE33u);
    PUSH32(esp, 0x0015E7B5u); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); /* call 0x0015CC90 */

loc_0015E7B5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0015E7BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E7D0; /* jne: not equal / not zero */

loc_0015E7BF: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xAF31AE33u);
    PUSH32(esp, 0x0015E7CBu); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); /* call 0x0015CC90 */

loc_0015E7CB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0015E7D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E811; /* jne: not equal / not zero */

loc_0015E7D5: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xAF31AE33u);
    PUSH32(esp, 0x0015E7E1u); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); /* call 0x0015CC90 */

loc_0015E7E1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0015E7E6: ;
    edx = MEM32(esp + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = 0xDA618F92u;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E7FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF085FF47u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF085FF47u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E842; /* je: equal / zero */

loc_0015E803: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF5A01909u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF5A01909u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E82C; /* je: equal / zero */

loc_0015E80A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFB5470C1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFB5470C1u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E816; /* je: equal / zero */

loc_0015E811: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_0015E816: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0xFB5470C1u;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E82C: ;
    edx = MEM32(esp + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = 0xF5A01909u;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

loc_0015E842: ;
    MEM32(esp + 4) = 0xF085FF47u;
    MEM32(esp + 8) = 0;
    g_seh_ebp = ebp; sub_0015CC90(); return; /* tail jmp 0x0015CC90 */

}

/**
 * sub_0015E860
 * Original: 0x0015E860 - 0x0015E874 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E860(void)
{

loc_0015E860: ;
    PUSH32(esp, edi);
    ecx = 0x138;
    eax = 0x3F800000;
    edi = 0x3BFF90;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015E880
 * Original: 0x0015E880 - 0x0015E8AA (42 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E880: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015E8A7; /* jge: greater or equal (signed >=) */

loc_0015E889: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015E8A7; /* jge: greater or equal (signed >=) */

loc_0015E892: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = eax + eax * 2;
    ecx = ecx + eax * 8;
    MEMF(ecx * 4 + 0x3BFF90) = xmm0.f[0]; /* movss */

loc_0015E8A7: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015E8B0
 * Original: 0x0015E8B0 - 0x0015E8DB (43 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E8B0(void)
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

loc_0015E8B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015E8D2; /* jge: greater or equal (signed >=) */

loc_0015E8B9: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015E8D2; /* jge: greater or equal (signed >=) */

loc_0015E8C2: ;
    eax = eax + eax * 2;
    ecx = ecx + eax * 8;
    fp_push(MEMF(ecx * 4 + 0x3BFF90)); /* fld float */
    esp += 12; return; /* ret 8 */

loc_0015E8D2: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015E8E0
 * Original: 0x0015E8E0 - 0x0015E9A5 (197 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E8E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D36FF61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D36FF61 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015E94F; /* ja: above (unsigned >) */

loc_0015E8EB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E949; /* je: equal / zero */

loc_0015E8ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21C653DC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21C653DC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015E925; /* ja: above (unsigned >) */

loc_0015E8F4: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E993; /* je: equal / zero */

loc_0015E8FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x158959F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x158959F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E91F; /* je: equal / zero */

loc_0015E901: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD2BF2E9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD2BF2E9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E919; /* je: equal / zero */

loc_0015E908: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A012696) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A012696 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E993; /* jne: not equal / not zero */

loc_0015E913: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0015E919: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_0015E91F: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_0015E925: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x441E81BB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x441E81BB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E943; /* je: equal / zero */

loc_0015E92C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x51A1FDE4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x51A1FDE4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E940; /* je: equal / zero */

loc_0015E933: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x54CB6691) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x54CB6691 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E993; /* jne: not equal / not zero */

loc_0015E93A: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_0015E940: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015E943: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_0015E949: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_0015E94F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC75D2731u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC75D2731u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015E985; /* ja: above (unsigned >) */

loc_0015E956: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E97F; /* je: equal / zero */

loc_0015E958: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63275F61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63275F61 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E979; /* je: equal / zero */

loc_0015E95F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C278B8Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8C278B8Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E973; /* je: equal / zero */

loc_0015E966: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA974E596u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA974E596u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015E993; /* jne: not equal / not zero */

loc_0015E96D: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_0015E973: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0015E979: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_0015E97F: ;
    eax = 0xB;
    esp += 4; return; /* ret */

loc_0015E985: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE106C88Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE106C88Eu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E99F; /* je: equal / zero */

loc_0015E98C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFCA17162u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFCA17162u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E999; /* je: equal / zero */

loc_0015E993: ;
    eax = 0xD;
    esp += 4; return; /* ret */

loc_0015E999: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_0015E99F: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0015E9B0
 * Original: 0x0015E9B0 - 0x0015EB20 (368 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015E9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015E9B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74326692) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74326692 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015EA78; /* ja: above (unsigned >) */

loc_0015E9BF: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015EA72; /* je: equal / zero */

loc_0015E9C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24CAB649) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24CAB649 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015EA27; /* ja: above (unsigned >) */

loc_0015E9CC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015EA21; /* je: equal / zero */

loc_0015E9CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED8242F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xED8242F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015EA03; /* ja: above (unsigned >) */

loc_0015E9D5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015E9FD; /* je: equal / zero */

loc_0015E9D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A4C50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A4C50 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EB0E; /* je: equal / zero */

loc_0015E9E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10EF284) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10EF284 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015E9FA; /* je: equal / zero */

loc_0015E9E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x901CB81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x901CB81 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EB0E; /* jne: not equal / not zero */

loc_0015E9F4: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_0015E9FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015E9FD: ;
    eax = 0xE;
    esp += 4; return; /* ret */

loc_0015EA03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C772733) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C772733 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EA1B; /* je: equal / zero */

loc_0015EA0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D0190E3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D0190E3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EB0E; /* jne: not equal / not zero */

loc_0015EA15: ;
    eax = 0x12;
    esp += 4; return; /* ret */

loc_0015EA1B: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_0015EA21: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0015EA27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x526CCBD8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x526CCBD8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015EA54; /* ja: above (unsigned >) */

loc_0015EA2E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015EA4E; /* je: equal / zero */

loc_0015EA30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x361C4356) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x361C4356 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EA48; /* je: equal / zero */

loc_0015EA37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x472B18C6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x472B18C6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EB0E; /* jne: not equal / not zero */

loc_0015EA42: ;
    eax = 0x14;
    esp += 4; return; /* ret */

loc_0015EA48: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_0015EA4E: ;
    eax = 0xD;
    esp += 4; return; /* ret */

loc_0015EA54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6202BE28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6202BE28 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EA6C; /* je: equal / zero */

loc_0015EA5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x702EAE92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x702EAE92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EB0E; /* jne: not equal / not zero */

loc_0015EA66: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_0015EA6C: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_0015EA72: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_0015EA78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC7C7851Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC7C7851Au (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015EAD7; /* ja: above (unsigned >) */

loc_0015EA7F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015EAD1; /* je: equal / zero */

loc_0015EA81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB5118B0Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB5118B0Eu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015EAB7; /* ja: above (unsigned >) */

loc_0015EA88: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015EAB1; /* je: equal / zero */

loc_0015EA8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82AB01A0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82AB01A0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EAAB; /* je: equal / zero */

loc_0015EA91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA192D2E6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA192D2E6u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EAA5; /* je: equal / zero */

loc_0015EA98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB4A33D61u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB4A33D61u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EB0E; /* jne: not equal / not zero */

loc_0015EA9F: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_0015EAA5: ;
    eax = 0x17;
    esp += 4; return; /* ret */

loc_0015EAAB: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0015EAB1: ;
    eax = 0x15;
    esp += 4; return; /* ret */

loc_0015EAB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBD917739u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBD917739u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EACB; /* je: equal / zero */

loc_0015EABE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE35B9C2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBE35B9C2u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EB0E; /* jne: not equal / not zero */

loc_0015EAC5: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_0015EACB: ;
    eax = 0x16;
    esp += 4; return; /* ret */

loc_0015EAD1: ;
    eax = 0x10;
    esp += 4; return; /* ret */

loc_0015EAD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEACFD3FDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEACFD3FDu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015EB00; /* ja: above (unsigned >) */

loc_0015EADE: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015EAFA; /* je: equal / zero */

loc_0015EAE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE95194B5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE95194B5u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EAF4; /* je: equal / zero */

loc_0015EAE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEA647D8Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEA647D8Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EB0E; /* jne: not equal / not zero */

loc_0015EAEE: ;
    eax = 0x11;
    esp += 4; return; /* ret */

loc_0015EAF4: ;
    eax = 0x13;
    esp += 4; return; /* ret */

loc_0015EAFA: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_0015EB00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC3680DBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFC3680DBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EB1A; /* je: equal / zero */

loc_0015EB07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFB4769Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFB4769Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EB14; /* je: equal / zero */

loc_0015EB0E: ;
    eax = 0x18;
    esp += 4; return; /* ret */

loc_0015EB14: ;
    eax = 0xF;
    esp += 4; return; /* ret */

loc_0015EB1A: ;
    eax = 0xB;
    esp += 4; return; /* ret */

}

/**
 * sub_0015EB20
 * Original: 0x0015EB20 - 0x0015EB2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015EB20: ;
    ecx = 0x3C0470;
    g_seh_ebp = ebp; sub_0015E860(); return; /* tail jmp 0x0015E860 */

}

/**
 * sub_0015EB30
 * Original: 0x0015EB30 - 0x0015EB49 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EB30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0015EB30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x3C0470;
    PUSH32(esp, 0x0015EB44u); RECOMP_ABI_CALL(0x0015E8B0u, sub_0015E8B0); /* call 0x0015E8B0 */

loc_0015EB44: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015EB50
 * Original: 0x0015EB50 - 0x0015EC14 (196 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EB50(void)
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

loc_0015EB50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x59E94C40);
    ecx = esi;
    PUSH32(esp, 0x0015EB65u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0015EB65: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x44CA79F0);
    ecx = esi;
    PUSH32(esp, 0x0015EB73u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015EB73: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EB84; /* je: equal / zero */

loc_0015EB77: ;
    ecx = esi;
    PUSH32(esp, 0x0015EB7Eu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0015EB7E: ;
    MEMF(0x30EA64) = (float)fp_top(); fp_pop(); /* fstp */

loc_0015EB84: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x47A78B3D);
    ecx = esi;
    PUSH32(esp, 0x0015EB93u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015EB93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015EC05; /* je: equal / zero */

loc_0015EB97: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* nop */

loc_0015EBA0: ;
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0015EBA8u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015EBA8: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0015EBB1u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015EBB1: ;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0015EBBAu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0015EBBA: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015EBC4u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015EBC4: ;
    ebx = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015EBD4u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015EBD4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015EBDAu); RECOMP_ABI_CALL(0x0015E9B0u, sub_0015E9B0); /* call 0x0015E9B0 */

loc_0015EBDA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015EBE4u); RECOMP_ABI_CALL(0x0015E8E0u, sub_0015E8E0); /* call 0x0015E8E0 */

loc_0015EBE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3C0470;
    PUSH32(esp, 0x0015EBF2u); RECOMP_ABI_CALL(0x0015E880u, sub_0015E880); /* call 0x0015E880 */

loc_0015EBF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47A78B3D);
    ecx = esi;
    PUSH32(esp, 0x0015EBFFu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015EBFF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015EBA0; /* jne: not equal / not zero */

loc_0015EC03: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0015EC05: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0015EC10u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0015EC10: ;
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
 * sub_0015EC20
 * Original: 0x0015EC20 - 0x0015EC23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EC20(void)
{

loc_0015EC20: ;
    SET_LO8(eax, MEM8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0015EC30
 * Original: 0x0015EC30 - 0x0015EC44 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EC30(void)
{

loc_0015EC30: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, 0x660E4490);
    MEM8(ecx) = LO8(eax);
    PUSH32(esp, 0x0015EC40u); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_0015EC40: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015EC50
 * Original: 0x0015EC50 - 0x0015EC69 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EC50(void)
{

loc_0015EC50: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, eax);
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015EC65u); RECOMP_ABI_CALL(0x00152AA0u, sub_00152AA0); /* call 0x00152AA0 */

loc_0015EC65: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015EC70
 * Original: 0x0015EC70 - 0x0015EC89 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EC70(void)
{

loc_0015EC70: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, eax);
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015EC85u); RECOMP_ABI_CALL(0x00152A80u, sub_00152A80); /* call 0x00152A80 */

loc_0015EC85: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015EC90
 * Original: 0x0015EC90 - 0x0015ECA9 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EC90(void)
{

loc_0015EC90: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, eax);
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015ECA5u); RECOMP_ABI_CALL(0x00152A90u, sub_00152A90); /* call 0x00152A90 */

loc_0015ECA5: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015ECB0
 * Original: 0x0015ECB0 - 0x0015ECC4 (20 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ECB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015ECB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015ECC1; /* jge: greater or equal (signed >=) */

loc_0015ECB9: ;
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax + ecx + 0x3C) = LO8(edx);

loc_0015ECC1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015ECD0
 * Original: 0x0015ECD0 - 0x0015ECE5 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ECD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015ECD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015ECE0; /* jge: greater or equal (signed >=) */

loc_0015ECD9: ;
    SET_LO8(eax, MEM8(eax + ecx + 0x3C));
    esp += 8; return; /* ret 4 */

loc_0015ECE0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015ECF0
 * Original: 0x0015ECF0 - 0x0015ED07 (23 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ECF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015ECF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4AC8D6DB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4AC8D6DB (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x842158) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015ED10
 * Original: 0x0015ED10 - 0x0015ED2B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ED10(void)
{

loc_0015ED10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x15;
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
    POP32(esp, edi);
    MEM8(0x3C0478) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015ED30
 * Original: 0x0015ED30 - 0x0015ED44 (20 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ED30(void)
{

loc_0015ED30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = 0x15;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015ED50
 * Original: 0x0015ED50 - 0x0015EDFA (170 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015ED50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015ED50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0015ED5Bu); RECOMP_ABI_CALL(0x0015EC30u, sub_0015EC30); /* call 0x0015EC30 */

loc_0015ED5B: ;
    PUSH32(esp, 0x4A364A32);
    ecx = esi;
    PUSH32(esp, 0x0015ED67u); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_0015ED67: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015ED6Eu); RECOMP_ABI_CALL(0x00202680u, sub_00202680); /* call 0x00202680 */

loc_0015ED6E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015ED75u); RECOMP_ABI_CALL(0x00150C20u, sub_00150C20); /* call 0x00150C20 */

loc_0015ED75: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015ED7Cu); RECOMP_ABI_CALL(0x00063F80u, sub_00063F80); /* call 0x00063F80 */

loc_0015ED7C: ;
    PUSH32(esp, 0xB5D9D774u);
    PUSH32(esp, 0x0015ED86u); RECOMP_ABI_CALL(0x000D4A30u, sub_000D4A30); /* call 0x000D4A30 */

loc_0015ED86: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015ED8Fu); RECOMP_ABI_CALL(0x0014F580u, sub_0014F580); /* call 0x0014F580 */

loc_0015ED8F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    PUSH32(esp, 0xCC87A64Du);
    MEM8(esi + 0x24) = 1;
    MEM8(esi + 0x25) = 0;
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015EDAEu); RECOMP_ABI_CALL(0x0015ECF0u, sub_0015ECF0); /* call 0x0015ECF0 */

loc_0015EDAE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015EDB5u); RECOMP_ABI_CALL(0x0015EC50u, sub_0015EC50); /* call 0x0015EC50 */

loc_0015EDB5: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0015EDBEu); RECOMP_ABI_CALL(0x0015EC70u, sub_0015EC70); /* call 0x0015EC70 */

loc_0015EDBE: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0015EDC7u); RECOMP_ABI_CALL(0x0015EC90u, sub_0015EC90); /* call 0x0015EC90 */

loc_0015EDC7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0015EDD0: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0015EDDAu); RECOMP_ABI_CALL(0x0015ECB0u, sub_0015ECB0); /* call 0x0015ECB0 */

loc_0015EDDA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EDD0; /* jl: less (signed <) */

loc_0015EDE0: ;
    edi = 7;

loc_0015EDE5: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0015EDEFu); RECOMP_ABI_CALL(0x0015ECB0u, sub_0015ECB0); /* call 0x0015ECB0 */

loc_0015EDEF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x16 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EDE5; /* jl: less (signed <) */

loc_0015EDF5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EE00
 * Original: 0x0015EE00 - 0x0015EE0C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EE00(void)
{

loc_0015EE00: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x3C04E8);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EE10
 * Original: 0x0015EE10 - 0x0015EE1C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EE10(void)
{

loc_0015EE10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x3C04D8);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EE20
 * Original: 0x0015EE20 - 0x0015EE65 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015EE20: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x6C) = eax;
    MEM32(ecx + 0x70) = eax;
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x30) = eax;
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x50) = eax;
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0015EE70
 * Original: 0x0015EE70 - 0x0015EF20 (176 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015EE70: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(edx + 0x9A0) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x9A4) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x9A8) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x9AC) = 0;
    ecx = 0x10;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x40;
    edi = edx + 0x40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x10;
    edi = edx + 0x140;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    esi = edx + 0x580;
    ebx = edx + 0x180;
    ebp = 4;
    edi = edi;

loc_0015EED0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    ecx = 0x40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(esi) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015EED0; /* jne: not equal / not zero */

loc_0015EEEB: ;
    esi = edx + 0x990;
    _fb = (uint32_t)(0x590) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x590;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 4;
    /* nop */

loc_0015EF00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    ecx = 0x40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(esi) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015EF00; /* jne: not equal / not zero */

loc_0015EF1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EF20
 * Original: 0x0015EF20 - 0x0015EF27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EF20(void)
{

loc_0015EF20: ;
    eax = MEM32(ecx + 0x9AC);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EF30
 * Original: 0x0015EF30 - 0x0015EF38 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EF30(void)
{

loc_0015EF30: ;
    PUSH32(esp, 0x0015EF35u); RECOMP_ABI_CALL(0x0015EE20u, sub_0015EE20); /* call 0x0015EE20 */

loc_0015EF35: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0015EF40
 * Original: 0x0015EF40 - 0x0015EF81 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015EF40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3C04E8) = eax;
    MEM32(0x3C04EC) = eax;
    MEM32(0x3C04F0) = eax;
    MEM32(0x3C04F4) = eax;
    MEM32(0x3C04D8) = eax;
    MEM32(0x3C04DC) = eax;
    MEM32(0x3C04E0) = eax;
    MEM32(0x3C04E4) = eax;
    ecx = 0x3C0900;
    /* nop */

loc_0015EF70: ;
    PUSH32(esp, 0x0015EF75u); RECOMP_ABI_CALL(0x0015EE20u, sub_0015EE20); /* call 0x0015EE20 */

loc_0015EF75: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C2700) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3C2700 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015EF70; /* jl: less (signed <) */

loc_0015EF80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015EF90
 * Original: 0x0015EF90 - 0x0015EFB8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015EF90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x3C0700);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015EFA1u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0015EFA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015EFB0; /* jge: greater or equal (signed >=) */

loc_0015EFA8: ;
    eax = 0x3C04FC;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0015EFB0: ;
    eax = MEM32(eax * 4 + 0x3C0500);
    esp += 4; return; /* ret */

}

/**
 * sub_0015EFC0
 * Original: 0x0015EFC0 - 0x0015EFDA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EFC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015EFC0: ;
    ecx = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    eax = MEM32(ecx + 0x3C0900);
    ecx = ecx + 0x3C0900;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015EFE0
 * Original: 0x0015EFE0 - 0x0015F013 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015EFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0015EFE0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C713AB3);
    ecx = 0x414150;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015EFFDu); RECOMP_ABI_CALL(0x00122000u, sub_00122000); /* call 0x00122000 */

loc_0015EFFD: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015F00F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0015F00B: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0015F00F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F020
 * Original: 0x0015F020 - 0x0015F2D7 (695 bytes, 238 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015F020(void)
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

loc_0015F020: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebp = ecx;
    eax = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015F035u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0015F035: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F2C7; /* je: equal / zero */

loc_0015F03D: ;
    SET_LO8(eax, MEM8(0x413FCC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F04D; /* je: equal / zero */

loc_0015F046: ;
    MEM32(ebp + 0x70) = 1;

loc_0015F04D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x48FFA5CA);
    ecx = esi;
    PUSH32(esp, 0x0015F05Bu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F05B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F072; /* je: equal / zero */

loc_0015F05F: ;
    ecx = esi;
    PUSH32(esp, 0x0015F066u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F066: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F06Cu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F06C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = eax;

loc_0015F072: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x594CDBC2);
    ecx = esi;
    PUSH32(esp, 0x0015F080u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F080: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F097; /* je: equal / zero */

loc_0015F084: ;
    ecx = esi;
    PUSH32(esp, 0x0015F08Bu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F08B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F091u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F091: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;

loc_0015F097: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD2C285D);
    ecx = esi;
    PUSH32(esp, 0x0015F0A5u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F0A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F0B3; /* je: equal / zero */

loc_0015F0A9: ;
    ecx = esi;
    PUSH32(esp, 0x0015F0B0u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0015F0B0: ;
    MEMF(ebp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0015F0B3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7801DB51);
    ecx = esi;
    PUSH32(esp, 0x0015F0C1u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F0C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F0CF; /* je: equal / zero */

loc_0015F0C5: ;
    ecx = esi;
    PUSH32(esp, 0x0015F0CCu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0015F0CC: ;
    MEMF(ebp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0015F0CF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA4B29974u);
    ecx = esi;
    PUSH32(esp, 0x0015F0DDu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F0DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F0EB; /* je: equal / zero */

loc_0015F0E1: ;
    ecx = esi;
    PUSH32(esp, 0x0015F0E8u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0015F0E8: ;
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0015F0EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD0CF5CC6u);
    ecx = esi;
    PUSH32(esp, 0x0015F0F9u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F0F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F110; /* je: equal / zero */

loc_0015F0FD: ;
    ecx = esi;
    PUSH32(esp, 0x0015F104u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F104: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F10Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F10A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;

loc_0015F110: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A3CF931);
    ecx = esi;
    PUSH32(esp, 0x0015F11Eu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F11E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F135; /* je: equal / zero */

loc_0015F122: ;
    ecx = esi;
    PUSH32(esp, 0x0015F129u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F129: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F12Fu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F12F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;

loc_0015F135: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x29F4E852);
    ecx = esi;
    PUSH32(esp, 0x0015F143u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F143: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F15A; /* je: equal / zero */

loc_0015F147: ;
    ecx = esi;
    PUSH32(esp, 0x0015F14Eu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F14E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F154u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F154: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x60) = eax;

loc_0015F15A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E42225B);
    ecx = esi;
    PUSH32(esp, 0x0015F168u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F168: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F17F; /* je: equal / zero */

loc_0015F16C: ;
    ecx = esi;
    PUSH32(esp, 0x0015F173u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F173: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F179u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F179: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x64) = eax;

loc_0015F17F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xDFA2EFB1u);
    ecx = esi;
    PUSH32(esp, 0x0015F18Du); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F18D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F1A4; /* je: equal / zero */

loc_0015F191: ;
    ecx = esi;
    PUSH32(esp, 0x0015F198u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F198: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F19Eu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F19E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x68) = eax;

loc_0015F1A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1BD670A0);
    ecx = esi;
    PUSH32(esp, 0x0015F1B2u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F1B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F1C0; /* je: equal / zero */

loc_0015F1B6: ;
    ecx = esi;
    PUSH32(esp, 0x0015F1BDu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_0015F1BD: ;
    MEM32(ebp + 0x6C) = eax;

loc_0015F1C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x9BFE7755u);
    ecx = esi;
    PUSH32(esp, 0x0015F1D1u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F1D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F204; /* je: equal / zero */

loc_0015F1D5: ;
    ebx = ebp + 0x20;

loc_0015F1D8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015F1F3; /* jge: greater or equal (signed >=) */

loc_0015F1DD: ;
    ecx = esi;
    PUSH32(esp, 0x0015F1E4u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F1E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F1EAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F1EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F1F3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x9BFE7755u);
    ecx = esi;
    PUSH32(esp, 0x0015F200u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F200: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F1D8; /* jne: not equal / not zero */

loc_0015F204: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0xC58FD0F);
    ecx = esi;
    PUSH32(esp, 0x0015F213u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F213: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F243; /* je: equal / zero */

loc_0015F217: ;
    ebx = ebp + 0x30;
    /* nop */

loc_0015F220: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015F232; /* jge: greater or equal (signed >=) */

loc_0015F225: ;
    ecx = esi;
    PUSH32(esp, 0x0015F22Cu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0015F22C: ;
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F232: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC58FD0F);
    ecx = esi;
    PUSH32(esp, 0x0015F23Fu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F23F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F220; /* jne: not equal / not zero */

loc_0015F243: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1CBA3FD);
    ecx = esi;
    PUSH32(esp, 0x0015F252u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F252: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F28C; /* je: equal / zero */

loc_0015F256: ;
    ebx = ebp + 0x40;
    /* nop */

loc_0015F260: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015F27B; /* jge: greater or equal (signed >=) */

loc_0015F265: ;
    ecx = esi;
    PUSH32(esp, 0x0015F26Cu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F26C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F272u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F272: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F27B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1CBA3FD);
    ecx = esi;
    PUSH32(esp, 0x0015F288u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F288: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F260; /* jne: not equal / not zero */

loc_0015F28C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7433FFB7);
    ecx = esi;
    PUSH32(esp, 0x0015F29Bu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F29B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F2C5; /* je: equal / zero */

loc_0015F29F: ;
    ebx = ebp + 0x50;

loc_0015F2A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015F2B4; /* jge: greater or equal (signed >=) */

loc_0015F2A7: ;
    ecx = esi;
    PUSH32(esp, 0x0015F2AEu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_0015F2AE: ;
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F2B4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7433FFB7);
    ecx = esi;
    PUSH32(esp, 0x0015F2C1u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F2C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F2A2; /* jne: not equal / not zero */

loc_0015F2C5: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0015F2C7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0015F2D2u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0015F2D2: ;
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
 * sub_0015F2E0
 * Original: 0x0015F2E0 - 0x0015F36F (143 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015F2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F2E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0015F369; /* je: equal / zero */

loc_0015F2F5: ;
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015F300u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0015F300: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F318; /* je: equal / zero */

loc_0015F307: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x40);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015F318u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015F318: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x48) = 0;
    ecx = 0x1F;
    edi = esp + 0x49;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x2F2910);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015F341u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015F341: ;
    eax = MEM32(esi + 0x70);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F369; /* jne: not equal / not zero */

loc_0015F34C: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015F356u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F356: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2DE4E4);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015F369u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0015F369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F370
 * Original: 0x0015F370 - 0x0015F3FA (138 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015F370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0015F3F4; /* je: equal / zero */

loc_0015F385: ;
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015F390u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0015F390: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F3A8; /* je: equal / zero */

loc_0015F397: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x40);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015F3A8u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015F3A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x48) = 0;
    ecx = 0x1F;
    edi = esp + 0x49;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x2F2910);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015F3D1u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015F3D1: ;
    edx = esp + 0x54;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015F3DBu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F3DB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015F3E9u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0015F3E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F3F4; /* je: equal / zero */

loc_0015F3ED: ;
    MEM32(esi + 0x70) = 1;

loc_0015F3F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F400
 * Original: 0x0015F400 - 0x0015F5E4 (484 bytes, 152 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F400: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0015F5DC; /* je: equal / zero */

loc_0015F413: ;
    PUSH32(esp, 0x0015F418u); RECOMP_ABI_CALL(0x0015EE70u, sub_0015EE70); /* call 0x0015EE70 */

loc_0015F418: ;
    eax = MEM32(ebx + 0x14);
    MEM32(edi + 0x9A0) = eax;
    ecx = MEM32(ebx + 0x18);
    MEM32(edi + 0x9A4) = ecx;
    edx = MEM32(ebx + 0x1C);
    MEM32(edi + 0x9A8) = edx;
    eax = MEM32(ebx + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9629B206u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9629B206u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015F471; /* ja: above (unsigned >) */

loc_0015F43D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015F465; /* je: equal / zero */

loc_0015F43F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x901716B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x901716B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F459; /* je: equal / zero */

loc_0015F446: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1BCC7E15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1BCC7E15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F478; /* jne: not equal / not zero */

loc_0015F44D: ;
    MEM32(edi + 0x9AC) = 3;
    goto loc_0015F48E;

loc_0015F459: ;
    MEM32(edi + 0x9AC) = 4;
    goto loc_0015F48E;

loc_0015F465: ;
    MEM32(edi + 0x9AC) = 5;
    goto loc_0015F48E;

loc_0015F471: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBA23275Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBA23275Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F484; /* je: equal / zero */

loc_0015F478: ;
    MEM32(edi + 0x9AC) = 0;
    goto loc_0015F48E;

loc_0015F484: ;
    MEM32(edi + 0x9AC) = 1;

loc_0015F48E: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F499u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_0015F499: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F4C2; /* je: equal / zero */

loc_0015F4A0: ;
    ecx = eax;
    esi = ecx + 1;

loc_0015F4A5: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F4A5; /* jne: not equal / not zero */

loc_0015F4AC: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015F4C2; /* jae: above or equal (unsigned >=) */

loc_0015F4B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015F4BFu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0015F4BF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F4C2: ;
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F4CDu); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0015F4CD: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0015F5DB; /* je: equal / zero */

loc_0015F4DE: ;
    edx = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x100);
    ecx = edi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0015F4F3u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015F4F3: ;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, 0x40);
    eax = edi + 0x140;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0015F507u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015F507: ;
    edx = edi + 0x580;
    eax = ebx + 0x30;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x1C) = eax;
    ebp = edi + 0x180;

loc_0015F520: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F532; /* jl: less (signed <) */

loc_0015F524: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015F532; /* jge: greater or equal (signed >=) */

loc_0015F529: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + -16);
    goto loc_0015F534;

loc_0015F532: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015F534: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F544u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015F544: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F557; /* jl: less (signed <) */

loc_0015F548: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015F557; /* jge: greater or equal (signed >=) */

loc_0015F54D: ;
    edx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    goto loc_0015F55A;

loc_0015F557: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0015F55A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x100;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0015F520; /* jl: less (signed <) */

loc_0015F580: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edi + 0x990;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x50;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x590) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x590;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015F591: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F59F; /* jl: less (signed <) */

loc_0015F595: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015F59F; /* jge: greater or equal (signed >=) */

loc_0015F59A: ;
    eax = MEM32(ebx + -16);
    goto loc_0015F5A1;

loc_0015F59F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015F5A1: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x100);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F5B1u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015F5B1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F5C0; /* jl: less (signed <) */

loc_0015F5B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015F5C0; /* jge: greater or equal (signed >=) */

loc_0015F5BA: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    goto loc_0015F5C3;

loc_0015F5C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0015F5C3: ;
    MEMF(ebp) = xmm0.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F591; /* jl: less (signed <) */

loc_0015F5DA: ;
    POP32(esp, ebp);

loc_0015F5DB: ;
    POP32(esp, esi);

loc_0015F5DC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015F5F0
 * Original: 0x0015F5F0 - 0x0015F626 (54 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F5F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F5FBu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F5FB: ;
    ecx = MEM32(0x413FC0);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x0015F609u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0015F609: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F622; /* je: equal / zero */

loc_0015F610: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0015F622u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0015F622: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0015F630
 * Original: 0x0015F630 - 0x0015F648 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F630: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0015F638u); RECOMP_ABI_CALL(0x0015EFE0u, sub_0015EFE0); /* call 0x0015EFE0 */

loc_0015F638: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F644; /* je: equal / zero */

loc_0015F63C: ;
    eax = MEM32(esi + 0x9AC);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0015F644: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F650
 * Original: 0x0015F650 - 0x0015F844 (500 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015F650: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0015F70E; /* jne: not equal / not zero */

loc_0015F663: ;
    PUSH32(esp, 0x0015F668u); RECOMP_ABI_CALL(0x0015EF40u, sub_0015EF40); /* call 0x0015EF40 */

loc_0015F668: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2D896BF3);
    ecx = ebp;
    PUSH32(esp, 0x0015F676u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0015F676: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x29F4E852);
    ecx = ebp;
    PUSH32(esp, 0x0015F685u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F685: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F6BE; /* je: equal / zero */

loc_0015F689: ;
    /* nop */

loc_0015F690: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015F6AD; /* jae: above or equal (unsigned >=) */

loc_0015F695: ;
    ecx = ebp;
    PUSH32(esp, 0x0015F69Cu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F69C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F6A2u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F6A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x3C04E8) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015F6AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x29F4E852);
    ecx = ebp;
    PUSH32(esp, 0x0015F6BAu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F6BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F690; /* jne: not equal / not zero */

loc_0015F6BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFA1BC4F8u);
    ecx = ebp;
    PUSH32(esp, 0x0015F6CCu); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0015F6CC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x2E42225B);
    ecx = ebp;
    PUSH32(esp, 0x0015F6DBu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F6DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F70E; /* je: equal / zero */

loc_0015F6DF: ;
    /* nop */

loc_0015F6E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015F6FD; /* jae: above or equal (unsigned >=) */

loc_0015F6E5: ;
    ecx = ebp;
    PUSH32(esp, 0x0015F6ECu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F6EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F6F2u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F6F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x3C04D8) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015F6FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2E42225B);
    ecx = ebp;
    PUSH32(esp, 0x0015F70Au); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F70A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F6E0; /* jne: not equal / not zero */

loc_0015F70E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x903153FBu);
    ecx = ebp;
    PUSH32(esp, 0x0015F71Cu); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0015F71C: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F75D; /* je: equal / zero */

loc_0015F726: ;
    eax = 0x3C0978;
    goto loc_0015F730;

    /* nop */

loc_0015F730: ;
    ecx = MEM32(eax + -120);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F738; /* je: equal / zero */

loc_0015F737: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015F738: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F73E; /* je: equal / zero */

loc_0015F73D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015F73E: ;
    ecx = MEM32(eax + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F746; /* je: equal / zero */

loc_0015F745: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015F746: ;
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F751; /* je: equal / zero */

loc_0015F750: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015F751: ;
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C2778) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C2778 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F730; /* jl: less (signed <) */

loc_0015F75D: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7A95AD2);
    ecx = ebp;
    PUSH32(esp, 0x0015F76Du); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F76D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F80C; /* je: equal / zero */

loc_0015F775: ;
    eax = edi + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015F7F7; /* jge: greater or equal (signed >=) */

loc_0015F77D: ;
    ecx = ebp;
    PUSH32(esp, 0x0015F784u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_0015F784: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F78Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015F78A: ;
    SET_LO8(edx, MEM8(esp + 0x1C));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0015F7C7; /* je: equal / zero */

loc_0015F797: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x3C0900;
    edi = edi;

loc_0015F7A0: ;
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F7AA; /* je: equal / zero */

loc_0015F7A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F7B8; /* je: equal / zero */

loc_0015F7AA: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x78;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C2700) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3C2700 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F7A0; /* jl: less (signed <) */

loc_0015F7B6: ;
    ecx = ebx;

loc_0015F7B8: ;
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    MEM32(edx + 0x3C0974) = 1;

loc_0015F7C7: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    PUSH32(esp, 0x7F);
    esi = ecx + 0x3C0900;
    PUSH32(esp, 0x3C0700);
    PUSH32(esp, eax);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0015F7DFu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0015F7DF: ;
    MEM32(eax * 4 + 0x3C0500) = esi;
    ecx = MEM32(0x3C04F8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C04F8) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015F7F7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7A95AD2);
    ecx = ebp;
    PUSH32(esp, 0x0015F804u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_0015F804: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015F775; /* jne: not equal / not zero */

loc_0015F80C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x0015F817u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_0015F817: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40 (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0015F840; /* jge: greater or equal (signed >=) */

loc_0015F81D: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x78);
    _fb = (uint32_t)(0x3C0900) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x3C0900;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx;

loc_0015F828: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F835; /* je: equal / zero */

loc_0015F82D: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0015F835u); RECOMP_ABI_CALL(0x0015F020u, sub_0015F020); /* call 0x0015F020 */

loc_0015F835: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C2700) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C2700 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F828; /* jl: less (signed <) */

loc_0015F840: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F850
 * Original: 0x0015F850 - 0x0015F86D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F850: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F85Au); RECOMP_ABI_CALL(0x0015EF90u, sub_0015EF90); /* call 0x0015EF90 */

loc_0015F85A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015F86C; /* je: equal / zero */

loc_0015F861: ;
    PUSH32(esp, eax);
    ecx = 0x3C2700;
    PUSH32(esp, 0x0015F86Cu); RECOMP_ABI_CALL(0x0015F400u, sub_0015F400); /* call 0x0015F400 */

loc_0015F86C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015F870
 * Original: 0x0015F870 - 0x0015F88A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F870: ;
    PUSH32(esp, esi);
    esi = 0x3C0900;

loc_0015F876: ;
    ecx = esi;
    PUSH32(esp, 0x0015F87Du); RECOMP_ABI_CALL(0x0015F2E0u, sub_0015F2E0); /* call 0x0015F2E0 */

loc_0015F87D: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C2700) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C2700 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F876; /* jl: less (signed <) */

loc_0015F888: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F890
 * Original: 0x0015F890 - 0x0015F8AA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F890: ;
    PUSH32(esp, esi);
    esi = 0x3C0900;

loc_0015F896: ;
    ecx = esi;
    PUSH32(esp, 0x0015F89Du); RECOMP_ABI_CALL(0x0015F370u, sub_0015F370); /* call 0x0015F370 */

loc_0015F89D: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C2700) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C2700 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015F896; /* jl: less (signed <) */

loc_0015F8A8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015F8B0
 * Original: 0x0015F8B0 - 0x0015FA54 (420 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015F8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015F8B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2436B1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x50C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + 0x18;
    PUSH32(esp, 0x0015F8D4u); RECOMP_ABI_CALL(0x00209100u, sub_00209100); /* call 0x00209100 */

loc_0015F8D4: ;
    eax = MEM32(esp + 0x51C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEM32(esp + 0x51C) = 0;
    PUSH32(esp, 0x0015F8F2u); RECOMP_ABI_CALL(0x00209810u, sub_00209810); /* call 0x00209810 */

loc_0015F8F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FA22; /* jne: not equal / not zero */

loc_0015F8FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0xF0;
    PUSH32(esp, 0x0015F908u); RECOMP_ABI_CALL(0x001EEF80u, sub_001EEF80); /* call 0x001EEF80 */

loc_0015F908: ;
    ecx = esp + 8;
    MEM8(esp + 0x51C) = 1;
    PUSH32(esp, 0x0015F919u); RECOMP_ABI_CALL(0x00208F10u, sub_00208F10); /* call 0x00208F10 */

loc_0015F919: ;
    PUSH32(esp, 0x2F2944);
    PUSH32(esp, 1);
    ecx = esp + 0x28;
    MEM8(esp + 0x524) = 2;
    PUSH32(esp, 0x0015F931u); RECOMP_ABI_CALL(0x00209A50u, sub_00209A50); /* call 0x00209A50 */

loc_0015F931: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F937u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0015F937: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    esi = eax;
    PUSH32(esp, 0x0015F945u); RECOMP_ABI_CALL(0x00209A50u, sub_00209A50); /* call 0x00209A50 */

loc_0015F945: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0015F950u); RECOMP_ABI_CALL(0x002092A0u, sub_002092A0); /* call 0x002092A0 */

loc_0015F950: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0015F959u); RECOMP_ABI_CALL(0x00209A50u, sub_00209A50); /* call 0x00209A50 */

loc_0015F959: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0015F964u); RECOMP_ABI_CALL(0x00208EC0u, sub_00208EC0); /* call 0x00208EC0 */

loc_0015F964: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0015F96Du); RECOMP_ABI_CALL(0x00209980u, sub_00209980); /* call 0x00209980 */

loc_0015F96D: ;
    PUSH32(esp, 0x2F291C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0x0015F97Eu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0015F97E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x2000);
    PUSH32(esp, edi);
    ecx = esp + 0xF8;
    PUSH32(esp, 0x0015F995u); RECOMP_ABI_CALL(0x001EEF50u, sub_001EEF50); /* call 0x001EEF50 */

loc_0015F995: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esp + 0xF4;
    PUSH32(esp, 0x0015F9A6u); RECOMP_ABI_CALL(0x001EF500u, sub_001EF500); /* call 0x001EF500 */

loc_0015F9A6: ;
    edx = MEM32(esp + 0x528);
    PUSH32(esp, edx);
    eax = esp + 0xF4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015F9BBu); RECOMP_ABI_CALL(0x0015F650u, sub_0015F650); /* call 0x0015F650 */

loc_0015F9BB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xF0;
    PUSH32(esp, 0x0015F9CAu); RECOMP_ABI_CALL(0x001EEFA0u, sub_001EEFA0); /* call 0x001EEFA0 */

loc_0015F9CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0xF8;
    PUSH32(esp, 0x0015F9DAu); RECOMP_ABI_CALL(0x001EEF50u, sub_001EEF50); /* call 0x001EEF50 */

loc_0015F9DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015F9E0u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0015F9E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015F9E6u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0015F9E6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, 0x0015F9F2u); RECOMP_ABI_CALL(0x00208F00u, sub_00208F00); /* call 0x00208F00 */

loc_0015F9F2: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0015F9FBu); RECOMP_ABI_CALL(0x00209980u, sub_00209980); /* call 0x00209980 */

loc_0015F9FB: ;
    ecx = esp + 8;
    MEM8(esp + 0x51C) = 1;
    PUSH32(esp, 0x0015FA0Cu); RECOMP_ABI_CALL(0x00208DF0u, sub_00208DF0); /* call 0x00208DF0 */

loc_0015FA0C: ;
    ecx = esp + 0xF0;
    MEM8(esp + 0x51C) = 0;
    PUSH32(esp, 0x0015FA20u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0015FA20: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0015FA22: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0015FA2Bu); RECOMP_ABI_CALL(0x00209980u, sub_00209980); /* call 0x00209980 */

loc_0015FA2B: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x514) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0015FA3Fu); RECOMP_ABI_CALL(0x00209200u, sub_00209200); /* call 0x00209200 */

loc_0015FA3F: ;
    ecx = MEM32(esp + 0x50C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x518) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x518;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FA60
 * Original: 0x0015FA60 - 0x0015FA72 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FA60(void)
{

loc_0015FA60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0015FA68u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0015FA68: ;
    MEM32(esi) = 0x2F296C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FA80
 * Original: 0x0015FA80 - 0x0015FACC (76 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FA80: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edx + 0x154) = LO8(eax);
    MEM32(edx + 0x158) = eax;
    MEM32(edx + 0x15C) = 2;
    MEMF(edx + 0x150) = xmm0.f[0]; /* movss */
    ecx = 0x20;
    edi = edx + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x20;
    edi = edx + 0x90;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x10;
    edi = edx + 0x110;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FAD0
 * Original: 0x0015FAD0 - 0x0015FB05 (53 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FAD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FB02; /* je: equal / zero */

loc_0015FAD8: ;
    PUSH32(esp, ebx);
    edx = eax;
    PUSH32(esp, esi);
    esi = edx + 1;
    /* nop */

loc_0015FAE0: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FAE0; /* jne: not equal / not zero */

loc_0015FAE7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0015FB02; /* jge: greater or equal (signed >=) */

loc_0015FAF3: ;
    edx = ecx + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0015FAF8: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FAF8; /* jne: not equal / not zero */

loc_0015FB02: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015FB10
 * Original: 0x0015FB10 - 0x0015FB4D (61 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FB10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FB4A; /* je: equal / zero */

loc_0015FB18: ;
    PUSH32(esp, ebx);
    edx = eax;
    PUSH32(esp, esi);
    esi = edx + 1;
    /* nop */

loc_0015FB20: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FB20; /* jne: not equal / not zero */

loc_0015FB27: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0015FB4A; /* jge: greater or equal (signed >=) */

loc_0015FB33: ;
    edx = ecx + 0x90;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0015FB40;

    /* nop */

loc_0015FB40: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FB40; /* jne: not equal / not zero */

loc_0015FB4A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015FB50
 * Original: 0x0015FB50 - 0x0015FB95 (69 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FB50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x150) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FB92; /* je: equal / zero */

loc_0015FB66: ;
    PUSH32(esp, ebx);
    edx = eax;
    PUSH32(esp, esi);
    esi = edx + 1;
    /* nop */

loc_0015FB70: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FB70; /* jne: not equal / not zero */

loc_0015FB77: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0015FB92; /* jge: greater or equal (signed >=) */

loc_0015FB80: ;
    edx = ecx + 0x110;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0015FB88: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FB88; /* jne: not equal / not zero */

loc_0015FB92: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015FBA0
 * Original: 0x0015FBA0 - 0x0015FBAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FBA0: ;
    ecx = 0x3DA7B8;
    g_seh_ebp = ebp; sub_001FA170(); return; /* tail jmp 0x001FA170 */

}

/**
 * sub_0015FBB0
 * Original: 0x0015FBB0 - 0x0015FC12 (98 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FBB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FBB0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x8C) = eax;
    MEM32(edx + 0x90) = eax;
    MEMF(edx + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x98) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x94) = xmm0.f[0]; /* movss */
    MEM32(edx + 0xA0) = eax;
    MEM8(edx + 0xA4) = LO8(eax);
    SET_LO8(eax, MEM8(edx + 8));
    SET_LO8(eax, LO8(eax) & 0xF8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edi);
    MEM8(edx + 8) = LO8(eax);
    ecx = 0x20;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 9;
    MEM32(edx + 0xA8) = 0xD;
    MEM32(edx + 0xAC) = 2;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FC20
 * Original: 0x0015FC20 - 0x0015FC55 (53 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FC20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FC52; /* je: equal / zero */

loc_0015FC28: ;
    PUSH32(esp, ebx);
    edx = eax;
    PUSH32(esp, esi);
    esi = edx + 1;
    /* nop */

loc_0015FC30: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FC30; /* jne: not equal / not zero */

loc_0015FC37: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0015FC52; /* jge: greater or equal (signed >=) */

loc_0015FC43: ;
    edx = ecx + 9;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0015FC48: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FC48; /* jne: not equal / not zero */

loc_0015FC52: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015FC60
 * Original: 0x0015FC60 - 0x0015FCE9 (137 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FC60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0015FCE5; /* je: equal / zero */

loc_0015FC6B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1F);
    ebx = esi + 0x88;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FC7Bu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0015FC7B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FCE4; /* jl: less (signed <) */

loc_0015FC82: ;
    MEM32(esi + eax * 4 + 0x88) = 0;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = eax + 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FCE3; /* je: equal / zero */

loc_0015FCA4: ;
    eax = MEM32(esi + edi * 4 + 0x88);
    MEM32(esi + edi * 4 + 0x88) = 0;
    ecx = MEM32(esi);
    PUSH32(esp, 0x1F);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x0015FCC4u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0015FCC4: ;
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
    edi = edi & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FCA4; /* jne: not equal / not zero */

loc_0015FCE3: ;
    POP32(esp, edi);

loc_0015FCE4: ;
    POP32(esp, ebx);

loc_0015FCE5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015FCF0
 * Original: 0x0015FCF0 - 0x0015FCFC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FCF0(void)
{

loc_0015FCF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0015FCF8u); RECOMP_ABI_CALL(0x0015FBB0u, sub_0015FBB0); /* call 0x0015FBB0 */

loc_0015FCF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FD00
 * Original: 0x0015FD00 - 0x0015FD35 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FD00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x209040);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x15FCF0);
    PUSH32(esp, 0x20);
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0xB0);
    eax = esi + 0x160;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FD2Au); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_0015FD2A: ;
    ecx = esi;
    PUSH32(esp, 0x0015FD31u); RECOMP_ABI_CALL(0x0015FA80u, sub_0015FA80); /* call 0x0015FA80 */

loc_0015FD31: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FD40
 * Original: 0x0015FD40 - 0x0015FD59 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FD40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FD40: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0xB0);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x160;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015FD58u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_0015FD58: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FD60
 * Original: 0x0015FD60 - 0x0015FDA5 (69 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FD60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0015FD68u); RECOMP_ABI_CALL(0x0015FA80u, sub_0015FA80); /* call 0x0015FA80 */

loc_0015FD68: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM8(esi + 0x154) = 1;
    PUSH32(esp, 0x0015FD79u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015FD79: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x3C3138);
    PUSH32(esp, eax);
    MEM32(esi + 0x158) = eax;
    PUSH32(esp, 0x0015FD8Cu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0015FD8C: ;
    MEM32(eax * 4 + 0x3C30B8) = esi;
    eax = MEM32(0x3C30B0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C30B0) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015FDB0
 * Original: 0x0015FDB0 - 0x0015FDDE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FDB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FDBAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015FDBA: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x3C3138);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015FDC7u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0015FDC7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015FDD6; /* jge: greater or equal (signed >=) */

loc_0015FDCE: ;
    eax = 0x3C30B4;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0015FDD6: ;
    eax = MEM32(eax * 4 + 0x3C30B8);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FDE0
 * Original: 0x0015FDE0 - 0x0015FE5C (124 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015FDE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FDED; /* jne: not equal / not zero */

loc_0015FDE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0015FDED: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebp = 0x3C330C;
    PUSH32(esp, edi);

loc_0015FDF6: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FE3C; /* je: equal / zero */

loc_0015FDFC: ;
    eax = ebp + -340;
    MEM32(esp + 0x10) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + 0x98;
    edi = edi;

loc_0015FE10: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FE30; /* je: equal / zero */

loc_0015FE17: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FE30; /* je: equal / zero */

loc_0015FE1D: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 8);
    ebx = MEM32(eax + 0x28);
    PUSH32(esp, 0x0015FE2Cu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0015FE2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FE52; /* je: equal / zero */

loc_0015FE30: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FE10; /* jl: less (signed <) */

loc_0015FE3C: ;
    _fb = (uint32_t)(0x1760) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1760;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DA90C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3DA90C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FDF6; /* jl: less (signed <) */

loc_0015FE4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0015FE52: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FE60
 * Original: 0x0015FE60 - 0x0015FEBA (90 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FE60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C31B8;
    goto loc_0015FE70;

    /* nop */

loc_0015FE70: ;
    SET_LO8(edx, MEM8(ecx + 0x154));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, MEM8(ecx + 0x18B4));
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FE8B; /* jne: not equal / not zero */

loc_0015FE85: ;
    eax = ecx + 0x1760;

loc_0015FE8B: ;
    SET_LO8(edx, MEM8(ecx + 0x3014));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FE9B; /* jne: not equal / not zero */

loc_0015FE95: ;
    eax = ecx + 0x2EC0;

loc_0015FE9B: ;
    SET_LO8(edx, MEM8(ecx + 0x4774));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FEAB; /* jne: not equal / not zero */

loc_0015FEA5: ;
    eax = ecx + 0x4620;

loc_0015FEAB: ;
    _fb = (uint32_t)(0x5D80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5D80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DA7B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3DA7B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FE70; /* jl: less (signed <) */

loc_0015FEB9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015FEC0
 * Original: 0x0015FEC0 - 0x0015FEEB (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FEC0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015FECBu); RECOMP_ABI_CALL(0x0015FDB0u, sub_0015FDB0); /* call 0x0015FDB0 */

loc_0015FECB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015FEE9; /* jne: not equal / not zero */

loc_0015FED2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015FED8u); RECOMP_ABI_CALL(0x0015FE60u, sub_0015FE60); /* call 0x0015FE60 */

loc_0015FED8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FEE6; /* je: equal / zero */

loc_0015FEDE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0015FEE6u); RECOMP_ABI_CALL(0x0015FD60u, sub_0015FD60); /* call 0x0015FD60 */

loc_0015FEE6: ;
    eax = esi;
    POP32(esp, esi);

loc_0015FEE9: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FEF0
 * Original: 0x0015FEF0 - 0x0015FF2D (61 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FEF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0015FEFDu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0015FEFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x200;

loc_0015FF08: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FF1E; /* je: equal / zero */

loc_0015FF0C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xB0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FF08; /* jl: less (signed <) */

loc_0015FF18: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015FF1E: ;
    eax = ecx + 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015FF30
 * Original: 0x0015FF30 - 0x0015FF58 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FF30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x204;

loc_0015FF38: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FF4C; /* je: equal / zero */

loc_0015FF3D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xB0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FF38; /* jl: less (signed <) */

loc_0015FF49: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015FF4C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015FF60
 * Original: 0x0015FF60 - 0x0015FFA2 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FF60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x2B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2B4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 8;
    PUSH32(esp, ebx);
    edi = edi;

loc_0015FF70: ;
    SET_LO8(ebx, MEM8(ecx + -176));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FF7B; /* je: equal / zero */

loc_0015FF7A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015FF7B: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FF81; /* je: equal / zero */

loc_0015FF80: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015FF81: ;
    SET_LO8(ebx, MEM8(ecx + 0xB0));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FF8C; /* je: equal / zero */

loc_0015FF8B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015FF8C: ;
    SET_LO8(ebx, MEM8(ecx + 0x160));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FF97; /* je: equal / zero */

loc_0015FF96: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015FF97: ;
    _fb = (uint32_t)(0x2C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015FF70; /* jne: not equal / not zero */

loc_0015FFA0: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015FFB0
 * Original: 0x0015FFB0 - 0x0015FFED (61 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FFB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x204;

loc_0015FFC0: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FFCA; /* je: equal / zero */

loc_0015FFC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015FFDD; /* je: equal / zero */

loc_0015FFC9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015FFCA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xB0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015FFC0; /* jl: less (signed <) */

loc_0015FFD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0015FFDD: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0015FFF0
 * Original: 0x0015FFF0 - 0x0016002A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015FFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015FFF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C330C;
    edi = edi;

loc_00160000: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016000A; /* je: equal / zero */

loc_00160005: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016001D; /* je: equal / zero */

loc_00160009: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016000A: ;
    _fb = (uint32_t)(0x1760) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1760;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DA90C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3DA90C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00160000; /* jl: less (signed <) */

loc_00160019: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0016001D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1760);
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C31B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C31B8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00160030
 * Original: 0x00160030 - 0x00160057 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00160038u); RECOMP_ABI_CALL(0x0015FBB0u, sub_0015FBB0); /* call 0x0015FBB0 */

loc_00160038: ;
    SET_LO8(eax, MEM8(esi + 8));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, LO8(eax) | 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0xA4) = 1;
    MEM32(esi + 4) = 0x65B6A3A2;
    MEM8(esi + 8) = LO8(eax);
    MEMF(esi) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00160060
 * Original: 0x00160060 - 0x00160084 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160060: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016007C; /* je: equal / zero */

loc_00160069: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016007C; /* je: equal / zero */

loc_00160073: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00160079u); RECOMP_ABI_CALL(0x000D2DB0u, sub_000D2DB0); /* call 0x000D2DB0 */

loc_00160079: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016007C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0015FBB0(); return; /* tail jmp 0x0015FBB0 */

}

/**
 * sub_00160090
 * Original: 0x00160090 - 0x001600C3 (51 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160090: ;
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001600BF; /* je: equal / zero */

loc_001600AB: ;
    PUSH32(esp, 0x001600B0u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001600B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x90) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001600BF; /* je: equal / zero */

loc_001600B8: ;
    ecx = esi;
    PUSH32(esp, 0x001600BFu); RECOMP_ABI_CALL(0x00160060u, sub_00160060); /* call 0x00160060 */

loc_001600BF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001600D0
 * Original: 0x001600D0 - 0x00160107 (55 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001600D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001600D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    MEM32(ecx + 0xA8) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00160104; /* ja: above (unsigned >) */

loc_001600DF: ;
    eax = ZX8(MEM8(eax + 0x160110));
    { uint32_t _jt = MEM32(eax * 4 + 0x160108); /* switch: 2 entries, 2 targets */
    if (_jt == 0x001600EDu) goto loc_001600ED;
    if (_jt == 0x001600FAu) goto loc_001600FA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001600ED: ;
    MEM32(ecx + 0xAC) = 0;
    esp += 8; return; /* ret 4 */

loc_001600FA: ;
    MEM32(ecx + 0xAC) = 1;

loc_00160104: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001600ED
 * Original: 0x001600ED - 0x00160107 (26 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001600ED(void)
{

loc_001600ED: ;
    MEM32(ecx + 0xAC) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001600FA
 * Original: 0x001600FA - 0x00160107 (13 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001600FA(void)
{

loc_001600FA: ;
    MEM32(ecx + 0xAC) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160120
 * Original: 0x00160120 - 0x001601D2 (178 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160120: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016012Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0016012A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x701683AC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x701683AC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016018C; /* ja: above (unsigned >) */

loc_00160134: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00160186; /* je: equal / zero */

loc_00160136: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F84FBCC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F84FBCC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0016016C; /* ja: above (unsigned >) */

loc_0016013D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00160166; /* je: equal / zero */

loc_0016013F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B3A74BB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B3A74BB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160160; /* je: equal / zero */

loc_00160146: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22211235) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x22211235 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016015A; /* je: equal / zero */

loc_0016014D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B358195) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B358195 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001601C0; /* jne: not equal / not zero */

loc_00160154: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0016015A: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_00160160: ;
    eax = 0xB;
    esp += 4; return; /* ret */

loc_00160166: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0016016C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58597A6B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58597A6B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160180; /* je: equal / zero */

loc_00160173: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65C601D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65C601D2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001601C0; /* jne: not equal / not zero */

loc_0016017A: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_00160180: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_00160186: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_0016018C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEE1B7E71u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEE1B7E71u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001601B2; /* ja: above (unsigned >) */

loc_00160193: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001601AC; /* je: equal / zero */

loc_00160195: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE40A6B4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBE40A6B4u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001601A9; /* je: equal / zero */

loc_0016019C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE751CD25u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE751CD25u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001601C0; /* jne: not equal / not zero */

loc_001601A3: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_001601A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001601AC: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_001601B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA068FC0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA068FC0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001601CC; /* je: equal / zero */

loc_001601B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFEE0541Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFEE0541Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001601C6; /* je: equal / zero */

loc_001601C0: ;
    eax = 0xD;
    esp += 4; return; /* ret */

loc_001601C6: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_001601CC: ;
    eax = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_001601E0
 * Original: 0x001601E0 - 0x00160233 (83 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001601E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001601E0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(edi + 0x154) = 0;
    esi = edi + 0x160;
    ebp = 0x20;

loc_001601F7: ;
    _fa = (uint32_t)(MEM8(esi + 0xA4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xA4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160207; /* jne: not equal / not zero */

loc_00160200: ;
    ecx = esi;
    PUSH32(esp, 0x00160207u); RECOMP_ABI_CALL(0x00160060u, sub_00160060); /* call 0x00160060 */

loc_00160207: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001601F7; /* jne: not equal / not zero */

loc_00160210: ;
    eax = MEM32(edi + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016022F; /* je: equal / zero */

loc_0016021A: ;
    PUSH32(esp, eax);
    ecx = 0x3C30B0;
    PUSH32(esp, 0x00160225u); RECOMP_ABI_CALL(0x0015FC60u, sub_0015FC60); /* call 0x0015FC60 */

loc_00160225: ;
    MEM32(edi + 0x158) = 0;

loc_0016022F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00160240
 * Original: 0x00160240 - 0x00160273 (51 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160240: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x160;
    edi = 0x20;

loc_00160252: ;
    SET_LO8(eax, MEM8(esi + 0xA4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160264; /* je: equal / zero */

loc_0016025C: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00160264u); RECOMP_ABI_CALL(0x00160090u, sub_00160090); /* call 0x00160090 */

loc_00160264: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00160252; /* jne: not equal / not zero */

loc_0016026D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160280
 * Original: 0x00160280 - 0x00160298 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160280: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016028Au); RECOMP_ABI_CALL(0x0015FEF0u, sub_0015FEF0); /* call 0x0015FEF0 */

loc_0016028A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160295; /* je: equal / zero */

loc_0016028E: ;
    ecx = eax;
    PUSH32(esp, 0x00160295u); RECOMP_ABI_CALL(0x00160060u, sub_00160060); /* call 0x00160060 */

loc_00160295: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001602A0
 * Original: 0x001602A0 - 0x001602B9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001602A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001602A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001602AAu); RECOMP_ABI_CALL(0x0015FDB0u, sub_0015FDB0); /* call 0x0015FDB0 */

loc_001602AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001602B8; /* je: equal / zero */

loc_001602B1: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_001601E0(); return; /* tail jmp 0x001601E0 */

loc_001602B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001602C0
 * Original: 0x001602C0 - 0x001602F9 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001602C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001602C0: ;
    PUSH32(esp, esi);
    esi = 0x3C31B8;

loc_001602C6: ;
    _fa = (uint32_t)(MEM8(esi + 0x154)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x154), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001602D6; /* jne: not equal / not zero */

loc_001602CF: ;
    ecx = esi;
    PUSH32(esp, 0x001602D6u); RECOMP_ABI_CALL(0x001601E0u, sub_001601E0); /* call 0x001601E0 */

loc_001602D6: ;
    _fb = (uint32_t)(0x1760) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1760;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DA7B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3DA7B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001602C6; /* jl: less (signed <) */

loc_001602E4: ;
    eax = MEM32(0x3DA7C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001602F8; /* je: equal / zero */

loc_001602EE: ;
    ecx = 0x3DA7B8;
    g_seh_ebp = ebp; sub_001FA1D0(); return; /* tail jmp 0x001FA1D0 */

loc_001602F8: ;
    esp += 4; return; /* ret */

}
