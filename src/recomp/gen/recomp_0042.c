/**
 * Mercenaries - Recompiled code chunk 42
 * Functions: 250 (0x002067D0 - 0x002111B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002067D0
 * Original: 0x002067D0 - 0x002067EB (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002067D0(void)
{

loc_002067D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(0x690AC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002067E2u); RECOMP_ABI_CALL(0x00206720u, sub_00206720); /* call 0x00206720 */

loc_002067E2: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002067F0
 * Original: 0x002067F0 - 0x00206837 (71 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002067F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002067F0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    MEM32(0x79355C) = ecx;
    MEM32(0x30EE94) = eax;
    MEM32(0x30EE98) = 0xF;
    MEM8(0x30EE9C) = LO8(ecx);
    MEM8(0x30EE58) = LO8(eax);
    MEM8(0x30EE59) = LO8(ecx);
    MEM32(0x30EE50) = 0x11;
    MEM32(0x30EE54) = 0xFF;
    MEM8(0x30EE9D) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00206840
 * Original: 0x00206840 - 0x00206847 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206840(void)
{

loc_00206840: ;
    MEM32(ecx) = 0x2F4078;
    esp += 4; return; /* ret */

}

/**
 * sub_00206850
 * Original: 0x00206850 - 0x0020686F (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206850: ;
    ecx = MEM32(0x793568);
    eax = MEM32(0x793564);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x793564);
    MEM32(0x79356C) = eax;
    MEM32(0x793568) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00206870
 * Original: 0x00206870 - 0x0020689E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206870(void)
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

loc_00206870: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x79356C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206896; /* je: equal / zero */

loc_0020687B: ;
    eax = MEM32(0x6921A8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0020689C; /* jge: greater or equal (signed >=) */

loc_0020688E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00206896: ;
    fp_push((double)SMEM32(0x6921A8)); /* fild */

loc_0020689C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002068A0
 * Original: 0x002068A0 - 0x002068A8 (8 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002068A0(void)
{

loc_002068A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002068A7u); RECOMP_ABI_CALL(0x00289300u, sub_00289300); /* call 0x00289300 */

loc_002068A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002068B0
 * Original: 0x002068B0 - 0x002068E5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002068B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002068B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002068D9; /* je: equal / zero */

loc_002068BA: ;
    /* nop */

loc_002068C0: ;
    eax = MEM32(esi + 8);
    MEM32(0x793560) = eax;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002068D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002068CDu); } /* indirect call */
    }

loc_002068D0: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002068C0; /* jne: not equal / not zero */

loc_002068D9: ;
    MEM32(0x793560) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002068F0
 * Original: 0x002068F0 - 0x00206906 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002068F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002068F0: ;
    ecx = 0x30F154;
    PUSH32(esp, 0x002068FAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_002068FA: ;
    eax = MEM32(0x793564);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x793564) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00206910
 * Original: 0x00206910 - 0x0020691B (11 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206910(void)
{

loc_00206910: ;
    PUSH32(esp, 0x2068F0);
    PUSH32(esp, 0x0020691Au); RECOMP_ABI_CALL(0x00289300u, sub_00289300); /* call 0x00289300 */

loc_0020691A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00206920
 * Original: 0x00206920 - 0x0020692B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206920: ;
    _fb = (uint32_t)(0xB00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00207270(); return; /* tail jmp 0x00207270 */

}

/**
 * sub_00206930
 * Original: 0x00206930 - 0x0020698D (93 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206930: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246EF8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, 0x00206956u); RECOMP_ABI_CALL(0x00207110u, sub_00207110); /* call 0x00207110 */

loc_00206956: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0020696Cu); RECOMP_ABI_CALL(0x00227790u, sub_00227790); /* call 0x00227790 */

loc_0020696C: ;
    ecx = esp + 4;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0020697Du); RECOMP_ABI_CALL(0x00207270u, sub_00207270); /* call 0x00207270 */

loc_0020697D: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00206990
 * Original: 0x00206990 - 0x002069D0 (64 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206990: ;
    SET_LO8(eax, MEM8(ecx + 0xB04));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx + 0xB00;
    if (CMP_NE(_fa, _fb)) goto loc_002069AC; /* jne: not equal / not zero */

loc_002069A1: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x002069A8u); RECOMP_ABI_CALL(0x002071F0u, sub_002071F0); /* call 0x002071F0 */

loc_002069A8: ;
    MEM8(esi + 4) = 1;

loc_002069AC: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esp + 0x14));
    edx = eax + eax * 2;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    ecx = ecx + edx * 8;
    PUSH32(esp, 0x002069CCu); RECOMP_ABI_CALL(0x00227D10u, sub_00227D10); /* call 0x00227D10 */

loc_002069CC: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002069D0
 * Original: 0x002069D0 - 0x00206A25 (85 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002069D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002069D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x002069EAu); RECOMP_ABI_CALL(0x00227740u, sub_00227740); /* call 0x00227740 */

loc_002069EA: ;
    SET_LO8(eax, MEM8(esi + 0xB04));
    _fb = (uint32_t)(0xB00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206A05; /* jne: not equal / not zero */

loc_002069FA: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x00206A01u); RECOMP_ABI_CALL(0x002071F0u, sub_002071F0); /* call 0x002071F0 */

loc_00206A01: ;
    MEM8(esi + 4) = 1;

loc_00206A05: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    eax = ZX16(LO16(ebx));
    PUSH32(esp, edi);
    eax = eax + eax * 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = edx + eax * 8;
    PUSH32(esp, 0x00206A1Eu); RECOMP_ABI_CALL(0x00227D10u, sub_00227D10); /* call 0x00227D10 */

loc_00206A1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206A30
 * Original: 0x00206A30 - 0x00206A91 (97 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00206A38u); RECOMP_ABI_CALL(0x00227720u, sub_00227720); /* call 0x00227720 */

loc_00206A38: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    MEMF(esi + 0xB0C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB14) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(esi + 0xB2A));
    SET_LO8(eax, LO8(eax) & 0xF8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0xB2A) = LO8(eax);
    MEM32(esi + 0xB18) = 0;
    MEMF(esi + 0xB1C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xB20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB24) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00206AA0
 * Original: 0x00206AA0 - 0x00206AED (77 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206AA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246F18);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00206ACAu); RECOMP_ABI_CALL(0x00206930u, sub_00206930); /* call 0x00206930 */

loc_00206ACA: ;
    ecx = esi + 0xB00;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00206ADDu); RECOMP_ABI_CALL(0x00207270u, sub_00207270); /* call 0x00207270 */

loc_00206ADD: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00206AF0
 * Original: 0x00206AF0 - 0x00206B06 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206AF0(void)
{

loc_00206AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00206AF8u); RECOMP_ABI_CALL(0x00206930u, sub_00206930); /* call 0x00206930 */

loc_00206AF8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0xB18) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206B10
 * Original: 0x00206B10 - 0x00206CC8 (440 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206B10: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB00);
    ecx = ZX16(MEM16(eax + 0x20));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x48); /* mulss */
    ebx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00206B44u); RECOMP_ABI_CALL(0x002069D0u, sub_002069D0); /* call 0x002069D0 */

loc_00206B44: ;
    SET_LO8(edx, MEM8(esi + 0xB2A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206CBE; /* je: equal / zero */

loc_00206B53: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = MEM32(esi + 0xB00);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    SET_LO16(ecx, MEM16(ecx + 0x20));
    eax = ebx + 1;
    ebx = ZX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00206BFC; /* jl: less (signed <) */

loc_00206B8A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206BF2; /* je: equal / zero */

loc_00206B8F: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00206B9Eu); RECOMP_ABI_CALL(0x002069D0u, sub_002069D0); /* call 0x002069D0 */

loc_00206B9E: ;
    eax = MEM32(esi + 0xB00);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x20));
    SET_LO16(ecx, LO16(ecx) - 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00206BBAu); RECOMP_ABI_CALL(0x00206990u, sub_00206990); /* call 0x00206990 */

loc_00206BBA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    goto loc_00206C0A;

loc_00206BF2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    goto loc_00206C03;

loc_00206BFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);

loc_00206C03: ;
    ecx = esi;
    PUSH32(esp, 0x00206C0Au); RECOMP_ABI_CALL(0x002069D0u, sub_002069D0); /* call 0x002069D0 */

loc_00206C0A: ;
    edx = MEM32(esi + 0xB00);
    eax = ZX16(MEM16(edx + 0x20));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x48); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00206C46u); RECOMP_ABI_CALL(0x001F7F80u, sub_001F7F80); /* call 0x001F7F80 */

loc_00206C46: ;
    ecx = MEM32(eax);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    edx = edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x10); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x14); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 0x18); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0x10) = xmm3.f[0]; /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x18) = xmm1.f[0]; /* movss */

loc_00206CBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206CD0
 * Original: 0x00206CD0 - 0x00206D59 (137 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206CD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0xB00);
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00206CF0; /* jne: not equal / not zero */

loc_00206CE7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00206CF0: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x20);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00206D4B; /* jle: less or equal (signed <=) */

loc_00206D10: ;
    edi = ebp + 0xB28;
    goto loc_00206D20;

loc_00206D18: ;
    edx = MEM32(esp + 0x14);
    /* nop */

loc_00206D20: ;
    ecx = MEM32(ebp + 0xB20);
    eax = MEM32(ebp + 0xB24);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x00206D36u); RECOMP_ABI_CALL(0x00227EC0u, sub_00227EC0); /* call 0x00227EC0 */

loc_00206D36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + esi * 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00206D4B; /* je: equal / zero */

loc_00206D3D: ;
    eax = MEM32(esp + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM8(esp + 0x13) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00206D18; /* jl: less (signed <) */

loc_00206D4B: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206D60
 * Original: 0x00206D60 - 0x00206EC7 (359 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00206D60: ;
    eax = MEM32(ecx + 0xB20);
    MEM32(ecx + 0xB24) = eax;
    SET_LO8(eax, MEM8(ecx + 0xB2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    MEM16(ecx + 0xB28) = 0;
    SET_LO8(edx, LO8(eax));
    if (TEST_NZ(_fa, _fb)) goto loc_00206E13; /* jne: not equal / not zero */

loc_00206D86: ;
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00206D8F; /* jne: not equal / not zero */

loc_00206D8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00206DBF; /* jne: not equal / not zero */

loc_00206D8F: ;
    esi = MEM32(ecx + 0xB00);
    esi = ZX16(MEM16(esi + 0x20));
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xB1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0xB20); /* addss */
    MEMF(ecx + 0xB20) = xmm0.f[0]; /* movss */

loc_00206DBF: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xB20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00206EB7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00206DD8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206EA3; /* je: equal / zero */

loc_00206DE0: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00206EAB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00206DE9: ;
    xmm2 = xmm1; /* movaps */
    /* nop */

loc_00206DF0: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_00206DF0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00206DFF: ;
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEMF(ecx + 0xB20) = xmm2.f[0]; /* movss */
    MEM8(ecx + 0xB2A) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00206E13: ;
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00206E1C; /* jne: not equal / not zero */

loc_00206E18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00206E50; /* jne: not equal / not zero */

loc_00206E1C: ;
    esi = MEM32(ecx + 0xB00);
    esi = ZX16(MEM16(esi + 0x20));
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xB1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xB20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 0xB20) = xmm1.f[0]; /* movss */

loc_00206E50: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xB20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00206EB7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xB20)) */

loc_00206E5C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206EA3; /* je: equal / zero */

loc_00206E60: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xB20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00206EAB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xB20)) */

loc_00206E69: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xB20)); /* movss */
    /* nop */

loc_00206E80: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00206E80; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_00206E8F: ;
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEMF(ecx + 0xB20) = xmm3.f[0]; /* movss */
    MEM8(ecx + 0xB2A) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00206EA3: ;
    MEMF(ecx + 0xB20) = xmm0.f[0]; /* movss */

loc_00206EAB: ;
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0xB2A) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00206EB7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206EC3; /* je: equal / zero */

loc_00206EBB: ;
    SET_LO8(eax, LO8(eax) & 0xFB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ecx + 0xB2A) = LO8(eax);

loc_00206EC3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206ED0
 * Original: 0x00206ED0 - 0x00206EE9 (25 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206ED0(void)
{

loc_00206ED0: ;
    eax = MEM32(ecx + 0xB20);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00206EE6u); RECOMP_ABI_CALL(0x00206B10u, sub_00206B10); /* call 0x00206B10 */

loc_00206EE6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206EF0
 * Original: 0x00206EF0 - 0x00206F9E (174 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206EF0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    esi = ecx;
    eax = MEM32(esi + 0xB18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00206F08u); RECOMP_ABI_CALL(0x00227790u, sub_00227790); /* call 0x00227790 */

loc_00206F08: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xB20) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00206F81; /* je: equal / zero */

loc_00206F18: ;
    SET_LO8(edx, MEM8(esi + 0xB2A));
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    SET_LO8(edx, LO8(edx) & 0xFB);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esi + 0xB2A) = LO8(edx);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00206F55u); RECOMP_ABI_CALL(0x00206ED0u, sub_00206ED0); /* call 0x00206ED0 */

loc_00206F55: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 0xB0C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esi + 0xB10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esi + 0xB14) = xmm0.f[0]; /* movss */
    goto loc_00206F88;

loc_00206F81: ;
    MEM8(esi + 0xB2A) = MEM8(esi + 0xB2A) & 0xFB;
    _fa = (uint32_t)(MEM8(esi + 0xB2A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00206F88: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0xB1C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206FA0
 * Original: 0x00206FA0 - 0x00207045 (165 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00206FA0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB00);
    ecx = ZX16(MEM16(eax + 0x20));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00206FCA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00206FBD: ;
    xmm2.f[0] = (float)(int32_t)MEM32(esp + 0x24); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = xmm2; /* movaps */

loc_00206FCA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00206FDC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00206FD7: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00206FE4;

loc_00206FDC: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00206FE4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00206FE1: ;
    xmm0 = xmm2; /* movaps */

loc_00206FE4: ;
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esi + 0xB20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00207012u); RECOMP_ABI_CALL(0x00206ED0u, sub_00206ED0); /* call 0x00206ED0 */

loc_00207012: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esi + 0xB0C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 0xB10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esi + 0xB14) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207050
 * Original: 0x00207050 - 0x002070F5 (165 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00207050: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB00);
    ecx = ZX16(MEM16(eax + 0x20));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020707A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0020706D: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = xmm2; /* movaps */

loc_0020707A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020708C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00207087: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00207094;

loc_0020708C: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00207094; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00207091: ;
    xmm0 = xmm2; /* movaps */

loc_00207094: ;
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esi + 0xB20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x002070C2u); RECOMP_ABI_CALL(0x00206ED0u, sub_00206ED0); /* call 0x00206ED0 */

loc_002070C2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esi + 0xB0C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 0xB10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esi + 0xB14) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207100
 * Original: 0x00207100 - 0x0020710D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207100(void)
{

loc_00207100: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM8(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00207110
 * Original: 0x00207110 - 0x0020711F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207110(void)
{

loc_00207110: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM8(eax + 4) = 0;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207120
 * Original: 0x00207120 - 0x0020714C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207120: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, 0x301344);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207136u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00207136: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x00207147u); RECOMP_ABI_CALL(0x0021A860u, sub_0021A860); /* call 0x0021A860 */

loc_00207147: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00207150
 * Original: 0x00207150 - 0x0020717F (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207150: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x22), LO16(edx) (16-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x30);
    if (CMP_BE(_fa, _fb)) goto loc_0020717D; /* jbe: below or equal (unsigned <=) */

loc_0020715C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00207160: ;
    eax = MEM32(ecx + 0x18);
    ebx = MEM32(eax + esi + 4);
    eax = eax + esi + 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ebx;
    eax = ZX16(MEM16(ecx + 0x22));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207160; /* jl: less (signed <) */

loc_0020717B: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0020717D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00207180
 * Original: 0x00207180 - 0x002071AF (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207180: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x22), LO16(edx) (16-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x30);
    if (CMP_BE(_fa, _fb)) goto loc_002071AD; /* jbe: below or equal (unsigned <=) */

loc_0020718C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00207190: ;
    eax = MEM32(ecx + 0x18);
    ebx = MEM32(eax + esi + 4);
    eax = eax + esi + 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    eax = ZX16(MEM16(ecx + 0x22));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207190; /* jl: less (signed <) */

loc_002071AB: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002071AD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002071B0
 * Original: 0x002071B0 - 0x002071E9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002071B0: ;
    edx = MEM32(0x793574);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(0x793578);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x793574) = edx;
    MEM32(0x793578) = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002071E7; /* je: equal / zero */

loc_002071D8: ;
    ecx = esi;
    PUSH32(esp, 0x002071DFu); RECOMP_ABI_CALL(0x00207120u, sub_00207120); /* call 0x00207120 */

loc_002071DF: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00207180(); return; /* tail jmp 0x00207180 */

loc_002071E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002071F0
 * Original: 0x002071F0 - 0x00207204 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002071F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002071FF; /* jne: not equal / not zero */

loc_002071FA: ;
    PUSH32(esp, 0x002071FFu); RECOMP_ABI_CALL(0x002071B0u, sub_002071B0); /* call 0x002071B0 */

loc_002071FF: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00207210
 * Original: 0x00207210 - 0x00207254 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207210: ;
    edx = MEM32(0x793574);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(0x793578);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x793574) = edx;
    MEM32(0x793578) = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207252; /* je: equal / zero */

loc_00207238: ;
    ecx = esi;
    PUSH32(esp, 0x0020723Fu); RECOMP_ABI_CALL(0x00207150u, sub_00207150); /* call 0x00207150 */

loc_0020723F: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00207248u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00207248: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = 0;

loc_00207252: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00207260
 * Original: 0x00207260 - 0x0020726B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207260: ;
    MEM32(ecx + 0x3C) = MEM32(ecx + 0x3C) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020726A; /* jne: not equal / not zero */

loc_00207265: ;
    g_seh_ebp = ebp; sub_00207210(); return; /* tail jmp 0x00207210 */

loc_0020726A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00207270
 * Original: 0x00207270 - 0x0020728D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207270: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207285; /* je: equal / zero */

loc_00207279: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207285; /* je: equal / zero */

loc_00207280: ;
    PUSH32(esp, 0x00207285u); RECOMP_ABI_CALL(0x00207260u, sub_00207260); /* call 0x00207260 */

loc_00207285: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00207290
 * Original: 0x00207290 - 0x002072F8 (104 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207290: ;
    edx = MEM32(0x793580);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x79357C) = MEM32(0x79357C) - eax;
    _fa = (uint32_t)(MEM32(0x79357C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x793580) = edx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002072BE; /* je: equal / zero */

loc_002072B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002072BBu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002072BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002072BE: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002072D5; /* je: equal / zero */

loc_002072C5: ;
    ecx = edi;
    PUSH32(esp, 0x002072CCu); RECOMP_ABI_CALL(0x00227DC0u, sub_00227DC0); /* call 0x00227DC0 */

loc_002072CC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002072D2u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_002072D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002072D5: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002072E5; /* je: equal / zero */

loc_002072DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002072E2u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002072E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002072E5: ;
    esi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002072F5; /* je: equal / zero */

loc_002072EC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002072F2u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002072F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002072F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00207300
 * Original: 0x00207300 - 0x002077CD (1229 bytes, 367 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207300: ;
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x160);
    eax = MEM32(edi + 0xC);
    edx = MEM32(edi + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    esi = ecx;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x10) = ebp;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00207695; /* jl: less (signed <) */

loc_00207349: ;
    MEM32(esp + 0x14) = ebp;
    /* nop */

loc_00207350: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0020735Cu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_0020735C: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x544E4A43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x544E4A43 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002075E4; /* ja: above (unsigned >) */

loc_0020736B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002075D0; /* je: equal / zero */

loc_00207371: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43544C58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43544C58 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020755C; /* je: equal / zero */

loc_0020737C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x454D414E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x454D414E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207534; /* je: equal / zero */

loc_00207387: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F464E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F464E49 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207686; /* jne: not equal / not zero */

loc_00207392: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002073A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002073A3u); } /* indirect call */
    }

loc_002073A6: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(esi + 0x20) = LO16(ecx);
    ecx = MEM32(esp + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002073C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002073C0u); } /* indirect call */
    }

loc_002073C3: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM16(esi + 0x22) = LO16(ecx);
    ecx = MEM32(esp + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002073E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002073E2u); } /* indirect call */
    }

loc_002073E5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x28); /* divss */
    ecx = MEM32(esp + 0x58);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0020740Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207409u); } /* indirect call */
    }

loc_0020740C: ;
    edi = ZX16(MEM16(esi + 0x22));
    PUSH32(esp, 0x3013E4);
    ecx = edi + edi * 2;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00207422u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00207422: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020743B; /* je: equal / zero */

loc_0020742B: ;
    PUSH32(esp, 0xB5E50);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00207439u); RECOMP_ABI_CALL(0x00015B30u, sub_00015B30); /* call 0x00015B30 */

loc_00207439: ;
    goto loc_0020743D;

loc_0020743B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020743D: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebp) (16-bit) */
    MEM32(esi + 0x18) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00207474; /* je: equal / zero */

loc_00207449: ;
    PUSH32(esp, 0x3013C4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00207456u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00207456: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020746D; /* je: equal / zero */

loc_0020745D: ;
    edx = ZX16(LO16(edi));
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00207468u); RECOMP_ABI_CALL(0x00227FA0u, sub_00227FA0); /* call 0x00227FA0 */

loc_00207468: ;
    MEM32(esi + 0x28) = eax;
    goto loc_00207477;

loc_0020746D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    goto loc_00207477;

loc_00207474: ;
    MEM32(esi + 0x28) = ebp;

loc_00207477: ;
    ecx = MEM32(esp + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0020748Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207488u); } /* indirect call */
    }

loc_0020748B: ;
    ebx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002074A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002074A4u); } /* indirect call */
    }

loc_002074A7: ;
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, 0x3013A4);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002074B8u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_002074B8: ;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    if (CMP_GE(_fas, _fbs)) goto loc_00207507; /* jge: greater or equal (signed >=) */

loc_002074D7: ;
    PUSH32(esp, 0x301384);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x34) = ebp;
    PUSH32(esp, 0x002074EAu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_002074EA: ;
    edi = MEM32(esp + 0x16C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = eax;
    ebx = eax;
    MEM32(esi + 0x30) = 0;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00207686;

loc_00207507: ;
    PUSH32(esp, 0x301364);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esi + 0x34) = ebx;
    PUSH32(esp, 0x00207518u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00207518: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x38) = edi;
    edi = MEM32(esp + 0x160);
    MEM32(esi + 0x30) = eax;
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00207686;

loc_00207534: ;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 0x100);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207547u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00207547: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00207551u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00207551: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    goto loc_00207686;

loc_0020755C: ;
    ecx = MEM32(esp + 0x58);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00207575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207572u); } /* indirect call */
    }

loc_00207575: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    ecx = MEM32(esp + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x20;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0020759Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00207597u); } /* indirect call */
    }

loc_0020759A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = MEM32(esp + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x40;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002075BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002075BCu); } /* indirect call */
    }

loc_002075BF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    goto loc_00207686;

loc_002075D0: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002075DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002075DCu); } /* indirect call */
    }

loc_002075DF: ;
    goto loc_00207686;

loc_002075E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x544E5645) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x544E5645 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020762D; /* je: equal / zero */

loc_002075EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x746E6F6A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x746E6F6A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207686; /* jne: not equal / not zero */

loc_002075F6: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00207616u); RECOMP_ABI_CALL(0x002278C0u, sub_002278C0); /* call 0x002278C0 */

loc_00207616: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    goto loc_00207686;

loc_0020762D: ;
    ecx = MEM32(esp + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00207641u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020763Eu); } /* indirect call */
    }

loc_00207641: ;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 0x100);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207654u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00207654: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020765Fu); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_0020765F: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0x20));
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00207686u); RECOMP_ABI_CALL(0x00227E80u, sub_00227E80); /* call 0x00227E80 */

loc_00207686: ;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207350; /* jge: greater or equal (signed >=) */

loc_00207695: ;
    edx = MEM32(esi + 0x38);
    edi = MEM32(0x79357C);
    ecx = MEM32(0x793580);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x79357C) = edi;
    eax = MEM32(esi + 0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x793580) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002076E4; /* je: equal / zero */

loc_002076BC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x22), LO16(ebp) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002076E4; /* jbe: below or equal (unsigned <=) */

loc_002076C4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002076C6: ;
    eax = MEM32(esi + 0x18);
    ebx = MEM32(edx + eax + 4);
    edi = MEM32(esi + 0x30);
    eax = edx + eax + 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    eax = ZX16(MEM16(esi + 0x22));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002076C6; /* jl: less (signed <) */

loc_002076E4: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002076EEu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002076EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x22), LO16(ebp) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00207723; /* jbe: below or equal (unsigned <=) */

loc_002076FC: ;
    ebx = ZX16(MEM16(esi + 0x22));
    edx = MEM32(esi + 0x18);

loc_00207703: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D7780B6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5D7780B6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207719; /* je: equal / zero */

loc_0020770D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F9229B7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F9229B7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020771B; /* jne: not equal / not zero */

loc_00207715: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020771B; /* jge: greater or equal (signed >=) */

loc_00207719: ;
    edi = eax;

loc_0020771B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207703; /* jl: less (signed <) */

loc_00207723: ;
    SET_LO16(eax, MEM16(esi + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002077A0; /* jbe: below or equal (unsigned <=) */

loc_0020772D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002077A0; /* jl: less (signed <) */

loc_00207731: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    edx = ZX16(LO16(eax));
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm4.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] / xmm4.f[0]; /* divss */
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002077A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002077D0
 * Original: 0x002077D0 - 0x00207877 (167 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002077D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002077D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00207873; /* je: equal / zero */

loc_002077DF: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002077EDu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_002077ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207873; /* jl: less (signed <) */

loc_002077F8: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + eax * 4) = 0;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi * 4;
    MEM32(esi + 4) = ecx;
    _fa = (uint32_t)(MEM32(eax + edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207872; /* je: equal / zero */

loc_00207820: ;
    PUSH32(esp, ebx);

loc_00207821: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0;
    ebx = MEM32(esi + 4);
    ecx = MEM32(esi + 0xC);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ebx;
    ebx = MEM32(esi + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00207849u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00207849: ;
    ecx = MEM32(ebx);
    edx = MEM32(esi + 8);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi + 0xC);
    eax = edi * 4;
    _fa = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207821; /* jne: not equal / not zero */

loc_00207871: ;
    POP32(esp, ebx);

loc_00207872: ;
    POP32(esp, edi);

loc_00207873: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207880
 * Original: 0x00207880 - 0x002078D2 (82 bytes, 24 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207880: ;
    PUSH32(esp, esi);
    esi = MEM32(0x7935A0);
    PUSH32(esp, 0x2E3DF0);
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x10);
    MEM32(0x7935A0) = esi;
    PUSH32(esp, 0x0020789Cu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0020789C: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x2E3DBC);
    MEM32(esi) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x002078BBu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_002078BB: ;
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x793584);
    MEM32(esi + 0xC) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x793584) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002078E0
 * Original: 0x002078E0 - 0x00207949 (105 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002078E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002078E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207947; /* je: equal / zero */

loc_002078E7: ;
    eax = MEM32(esi + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207935; /* je: equal / zero */

loc_002078F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx + 4;

loc_002078F8: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    edi = edx;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(edx + 0x1C);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00207912u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_00207912: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020792C; /* je: equal / zero */

loc_0020791C: ;
    ecx = edi;
    PUSH32(esp, 0x00207923u); RECOMP_ABI_CALL(0x00207290u, sub_00207290); /* call 0x00207290 */

loc_00207923: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00207929u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00207929: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020792C: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002078F8; /* jne: not equal / not zero */

loc_00207933: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00207935: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020793Eu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0020793E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00207944u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00207944: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00207947: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00207950
 * Original: 0x00207950 - 0x00207960 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207950(void)
{

loc_00207950: ;
    PUSH32(esp, 0x800);
    ecx = 0x793584;
    PUSH32(esp, 0x0020795Fu); RECOMP_ABI_CALL(0x0014AA10u, sub_0014AA10); /* call 0x0014AA10 */

loc_0020795F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00207960
 * Original: 0x00207960 - 0x00207A6D (269 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207960: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207A68; /* jl: less (signed <) */

loc_00207977: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00207980;

    /* nop */

loc_00207980: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0020798Cu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_0020798C: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D696E61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x6D696E61 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207A57; /* jne: not equal / not zero */

loc_0020799A: ;
    PUSH32(esp, 0x301404);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x002079A7u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_002079A7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002079BF; /* je: equal / zero */

loc_002079AE: ;
    MEM32(eax + 0x1C) = edi;
    MEM16(eax + 0x22) = LO16(edi);
    MEM32(eax + 0x18) = edi;
    MEM32(eax + 0x3C) = edi;
    esi = eax;
    goto loc_002079C1;

loc_002079BF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002079C1: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002079CDu); RECOMP_ABI_CALL(0x00207300u, sub_00207300); /* call 0x00207300 */

loc_002079CD: ;
    ecx = MEM32(0x793588);
    edx = MEM32(0x793594);
    eax = MEM32(esi + 0x1C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002079E5u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_002079E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002079F3; /* jge: greater or equal (signed >=) */

loc_002079EC: ;
    eax = 0x793598;
    goto loc_002079FC;

loc_002079F3: ;
    ecx = MEM32(0x793590);
    eax = ecx + eax * 4;

loc_002079FC: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207A12; /* je: equal / zero */

loc_00207A00: ;
    ecx = esi;
    PUSH32(esp, 0x00207A07u); RECOMP_ABI_CALL(0x00207290u, sub_00207290); /* call 0x00207290 */

loc_00207A07: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00207A0Du); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00207A0D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00207A57;

loc_00207A12: ;
    eax = MEM32(0x793584);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(eax + edx * 4) = esi;
    eax = MEM32(0x793584);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x793588);
    edx = MEM32(0x793594);
    eax = MEM32(esi + 0x1C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207A40u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00207A40: ;
    ecx = MEM32(0x793590);
    MEM32(ecx + eax * 4) = esi;
    eax = MEM32(0x79358C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x79358C) = eax;

loc_00207A57: ;
    edx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207980; /* jge: greater or equal (signed >=) */

loc_00207A66: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00207A68: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00207A70
 * Original: 0x00207A70 - 0x00207A7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207A70: ;
    ecx = 0x793584;
    g_seh_ebp = ebp; sub_002078E0(); return; /* tail jmp 0x002078E0 */

}

/**
 * sub_00207A80
 * Original: 0x00207A80 - 0x00207ABB (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207A80: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    PUSH32(esp, esi);
    MEM32(eax) = 0;
    edx = eax + 4;
    esi = 0x40;
    /* nop */

loc_00207AA0: ;
    MEMF(edx + 0xC) = xmm1.f[0]; /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00207AA0; /* jne: not equal / not zero */

loc_00207AB9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00207AC0
 * Original: 0x00207AC0 - 0x00207B74 (180 bytes, 68 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207AC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00207B6E; /* jle: less or equal (signed <=) */

loc_00207AD6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x1C;
    /* nop */

loc_00207AE0: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    PUSH32(esp, 0x00207AEEu); RECOMP_ABI_CALL(0x00237C80u, sub_00237C80); /* call 0x00237C80 */

loc_00207AEE: ;
    ecx = MEM32(esp + 0x1C);
    eax = eax & MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00207B54; /* je: equal / zero */

loc_00207AFB: ;
    ecx = MEM32(esp + 0x18);
    eax = ZX16(LO16(edi));
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + 0xA80);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207B1B; /* jl: less (signed <) */

loc_00207B0F: ;
    PUSH32(esp, eax);
    edx = esi + -24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00207B19u); RECOMP_ABI_CALL(0x00206ED0u, sub_00206ED0); /* call 0x00206ED0 */

loc_00207B19: ;
    goto loc_00207B54;

loc_00207B1B: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207B54; /* je: equal / zero */

loc_00207B23: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    ebp = MEM32(edx);
    ecx = esi + -24;
    MEM32(ecx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ecx + 8) = ebp;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + -8) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + -4) = edx;
    eax = MEM32(eax + 0x18);
    MEM32(esi) = eax;

loc_00207B54: ;
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(ecx);
    eax = MEM32(ebp + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207AE0; /* jl: less (signed <) */

loc_00207B6C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00207B6E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00207B80
 * Original: 0x00207B80 - 0x00207C46 (198 bytes, 74 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207B80(void)
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

loc_00207B80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00207C40; /* jle: less or equal (signed <=) */

loc_00207B96: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC404)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x1C;

loc_00207BA5: ;
    ecx = MEM32(esp + 0x18);
    eax = ZX16(LO16(ebx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm1 = XMM_SCALAR(MEMF(eax + ecx + 0x18)); /* movss */
    edi = eax + ecx + 4;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00207BEE; /* jnp: not parity */

loc_00207BC2: ;
    ecx = edi;
    esi = MEM32(ecx);
    eax = edx + -24;
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(eax + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(edi + 0x10);
    MEM32(edx + -8) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(edx + -4) = ecx;
    eax = MEM32(edi + 0x18);
    goto loc_00207C24;

loc_00207BEE: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207C26; /* je: equal / zero */

loc_00207BF6: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = MEM32(esi);
    ecx = edx + -24;
    MEM32(ecx) = edi;
    edi = MEM32(esi + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(esi + 8);
    MEM32(ecx + 8) = edi;
    esi = MEM32(esi + 0xC);
    MEM32(ecx + 0xC) = esi;
    ecx = MEM32(eax + 0x10);
    MEM32(edx + -8) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(edx + -4) = ecx;
    eax = MEM32(eax + 0x18);

loc_00207C24: ;
    MEM32(edx) = eax;

loc_00207C26: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx);
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207BA5; /* jl: less (signed <) */

loc_00207C3E: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00207C40: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00207C50
 * Original: 0x00207C50 - 0x00207D37 (231 bytes, 84 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207C50(void)
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

loc_00207C50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00207D31; /* jle: less or equal (signed <=) */

loc_00207C66: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x1C;
    /* nop */

loc_00207C70: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    PUSH32(esp, 0x00207C7Eu); RECOMP_ABI_CALL(0x00237C80u, sub_00237C80); /* call 0x00237C80 */

loc_00207C7E: ;
    ecx = MEM32(esp + 0x1C);
    eax = eax & MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00207D17; /* je: equal / zero */

loc_00207C8F: ;
    ecx = MEM32(esp + 0x18);
    eax = ZX16(LO16(edi));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC404); /* ucomiss */
    ecx = eax + ecx + 4;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00207CDE; /* jnp: not parity */

loc_00207CB0: ;
    eax = ecx;
    ebp = MEM32(eax);
    edx = esi + -24;
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(edx + 8) = ebp;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(ecx + 0x10);
    MEM32(esi + -8) = edx;
    eax = MEM32(ecx + 0x14);
    MEM32(esi + -4) = eax;
    ecx = MEM32(ecx + 0x18);
    MEM32(esi) = ecx;
    goto loc_00207D17;

loc_00207CDE: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D17; /* je: equal / zero */

loc_00207CE6: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ebp = MEM32(ecx);
    edx = esi + -24;
    MEM32(edx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(ecx + 8);
    MEM32(edx + 8) = ebp;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + -8) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + -4) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi) = edx;

loc_00207D17: ;
    eax = MEM32(esp + 0x10);
    ebp = MEM32(eax);
    eax = MEM32(ebp + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207C70; /* jl: less (signed <) */

loc_00207D2F: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00207D31: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00207D40
 * Original: 0x00207D40 - 0x00207DCF (143 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207D40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00207DC9; /* jle: less or equal (signed <=) */

loc_00207D52: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x1C;
    /* nop */

loc_00207D60: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D83; /* je: equal / zero */

loc_00207D68: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    PUSH32(esp, 0x00207D76u); RECOMP_ABI_CALL(0x00237C80u, sub_00237C80); /* call 0x00237C80 */

loc_00207D76: ;
    ecx = MEM32(esp + 0x18);
    eax = eax & MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00207DB3; /* je: equal / zero */

loc_00207D83: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    edi = MEM32(edx);
    ecx = esi + -24;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + -8) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + -4) = edx;
    eax = MEM32(eax + 0x18);
    MEM32(esi) = eax;

loc_00207DB3: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx);
    eax = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207D60; /* jl: less (signed <) */

loc_00207DC7: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00207DC9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207DD0
 * Original: 0x00207DD0 - 0x00207F1C (332 bytes, 96 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207DD0(void)
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

loc_00207DD0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00207F14; /* jle: less or equal (signed <=) */

loc_00207E0D: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, esi);
    esi = edi + 0x1C;

loc_00207E16: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    PUSH32(esp, 0x00207E24u); RECOMP_ABI_CALL(0x00237C80u, sub_00237C80); /* call 0x00237C80 */

loc_00207E24: ;
    ecx = MEM32(esp + 0x48);
    eax = eax & MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00207F01; /* je: equal / zero */

loc_00207E35: ;
    ecx = ZX16(LO16(ebx));
    ecx = (uint32_t)(int32_t)SMEM16(ebp + ecx * 2 + 0xA80);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207F01; /* jl: less (signed <) */

loc_00207E49: ;
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC404); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ecx);
    ecx = ebp;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00207E6C; /* jp: parity */

loc_00207E5E: ;
    edx = esi + -24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00207E67u); RECOMP_ABI_CALL(0x00206ED0u, sub_00206ED0); /* call 0x00206ED0 */

loc_00207E67: ;
    goto loc_00207F01;

loc_00207E6C: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207E76u); RECOMP_ABI_CALL(0x00206ED0u, sub_00206ED0); /* call 0x00206ED0 */

loc_00207E76: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edi = esi + -24;
    eax = esp + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207E8Eu); RECOMP_ABI_CALL(0x001F7F80u, sub_001F7F80); /* call 0x001F7F80 */

loc_00207E8E: ;
    ecx = MEM32(eax);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + -8); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + -4); /* subss */
    edi = MEM32(esp + 0x20);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + -8) = xmm3.f[0]; /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm2.f[0]; /* movss */

loc_00207F01: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207E16; /* jl: less (signed <) */

loc_00207F12: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00207F14: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00207F20
 * Original: 0x00207F20 - 0x00208046 (294 bytes, 93 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207F20(void)
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

loc_00207F20: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0020803F; /* jle: less or equal (signed <=) */

loc_00207F37: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x18;
    /* nop */

loc_00207F40: ;
    eax = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(0x2DC404)); /* movss */
    edx = ZX16(LO16(ebp));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    xmm1 = XMM_SCALAR(MEMF(edx + eax + 0x18)); /* movss */
    edi = edx + eax + 4;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0020802B; /* jnp: not parity */

loc_00207F69: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00207FA7; /* jp: parity */

loc_00207F76: ;
    eax = edi;
    ebx = MEM32(eax);
    edx = esi + -20;
    MEM32(edx) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(edx + 8) = ebx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(edi + 0x10);
    MEM32(esi + -4) = edx;
    eax = MEM32(edi + 0x14);
    MEM32(esi) = eax;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 4) = edx;
    goto loc_0020802B;

loc_00207FA7: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ebx = esi + -20;
    ecx = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00207FBBu); RECOMP_ABI_CALL(0x001F7F80u, sub_001F7F80); /* call 0x001F7F80 */

loc_00207FBB: ;
    edx = MEM32(eax);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(ebx) = edx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0x20);
    MEM32(ebx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ebx + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + -4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + -4) = xmm3.f[0]; /* movss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */

loc_0020802B: ;
    edx = MEM32(ecx);
    eax = MEM32(edx + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207F40; /* jl: less (signed <) */

loc_0020803C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0020803F: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208050
 * Original: 0x00208050 - 0x00208191 (321 bytes, 102 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208050(void)
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

loc_00208050: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00208189; /* jle: less or equal (signed <=) */

loc_0020806A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x18;
    /* nop */

loc_00208070: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp;
    PUSH32(esp, 0x0020807Eu); RECOMP_ABI_CALL(0x00237C80u, sub_00237C80); /* call 0x00237C80 */

loc_0020807E: ;
    ecx = MEM32(esp + 0x2C);
    eax = eax & MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00208176; /* je: equal / zero */

loc_0020808F: ;
    edx = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(0x2DC404)); /* movss */
    ecx = ZX16(LO16(ebp));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    xmm1 = XMM_SCALAR(MEMF(ecx + edx + 0x18)); /* movss */
    edi = ecx + edx + 4;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00208176; /* jnp: not parity */

loc_002080B8: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002080F6; /* jp: parity */

loc_002080C5: ;
    ecx = edi;
    edx = MEM32(ecx);
    eax = esi + -20;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(edi + 0x10);
    MEM32(esi + -4) = edx;
    eax = MEM32(edi + 0x14);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0x18);
    MEM32(esi + 4) = ecx;
    goto loc_00208176;

loc_002080F6: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ebx = esi + -20;
    eax = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020810Au); RECOMP_ABI_CALL(0x001F7F80u, sub_001F7F80); /* call 0x001F7F80 */

loc_0020810A: ;
    ecx = MEM32(eax);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(ebx + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebx + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + -4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi); /* subss */
    ebx = MEM32(esp + 0x20);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + -4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */

loc_00208176: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208070; /* jl: less (signed <) */

loc_00208187: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00208189: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002081A0
 * Original: 0x002081A0 - 0x00208200 (96 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002081A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002081A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_002081FA; /* jl: less (signed <) */

loc_002081A9: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002081FA; /* jge: greater or equal (signed >=) */

loc_002081B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC404)); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    esi = MEM32(edx);
    ecx = eax + 4;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x1C) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002081FA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00208200
 * Original: 0x00208200 - 0x00208296 (150 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208200: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00208290; /* jle: less or equal (signed <=) */

loc_00208214: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0x1C;
    goto loc_00208220;

    /* nop */

loc_00208220: ;
    edx = MEM32(esp + 0x18);
    ecx = ZX16(LO16(edi));
    ecx = (uint32_t)(int32_t)SMEM16(edx + ecx * 2 + 0xA80);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208242; /* jl: less (signed <) */

loc_00208234: ;
    PUSH32(esp, ecx);
    eax = esi + -24;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x00208240u); RECOMP_ABI_CALL(0x00206ED0u, sub_00206ED0); /* call 0x00206ED0 */

loc_00208240: ;
    goto loc_0020827E;

loc_00208242: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020827E; /* je: equal / zero */

loc_0020824A: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    ebx = MEM32(edx);
    ecx = esi + -24;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(edx + 0xC);
    ebx = MEM32(esp + 0x10);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + -8) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + -4) = edx;
    eax = MEM32(eax + 0x18);
    MEM32(esi) = eax;

loc_0020827E: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208220; /* jl: less (signed <) */

loc_0020828E: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00208290: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002082A0
 * Original: 0x002082A0 - 0x00208516 (630 bytes, 137 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002082A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002082A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x6C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0020850D; /* jle: less or equal (signed <=) */

loc_002082C2: ;
    MEM32(esp + 0x18) = ebx;
    esi = ecx + 0x1C;
    MEM32(esp + 0x1C) = eax;
    goto loc_002082D3;

loc_002082CF: ;
    ecx = MEM32(esp + 0x6C);

loc_002082D3: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    edx = MEM32(ebp + 8);
    edx = MEM32(edx);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(eax + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = ecx + edx;
    if (CMP_L(_fas, _fbs)) goto loc_002083F4; /* jl: less (signed <) */

loc_002082F0: ;
    ecx = SX8(LO8(eax));
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208305u); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_00208305: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208311u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00208311: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    goto loc_0020849D;

loc_002083F4: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x3C)); /* movss */

loc_0020849D: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0xB4;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002084B4u); RECOMP_ABI_CALL(0x001F7D90u, sub_001F7D90); /* call 0x001F7D90 */

loc_002084B4: ;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    edx = esi + -24;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_002082CF; /* jne: not equal / not zero */

loc_0020850D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208520
 * Original: 0x00208520 - 0x002085B5 (149 bytes, 64 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208520: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002085AF; /* jl: less (signed <) */

loc_0020852F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002085AF; /* jge: greater or equal (signed >=) */

loc_00208534: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    eax = ecx + ecx * 4;
    PUSH32(esp, ebp);
    ebp = edx + eax * 8;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    PUSH32(esp, 0x0020854Fu); RECOMP_ABI_CALL(0x00237C80u, sub_00237C80); /* call 0x00237C80 */

loc_0020854F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00208562; /* je: equal / zero */

loc_00208559: ;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 4);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0020856D;

loc_00208562: ;
    eax = ~eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 4);
    edx = ~edx;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0020856D: ;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = eax;
    SET_LO8(eax, MEM8(ebp + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208588; /* jl: less (signed <) */

loc_00208579: ;
    PUSH32(esp, 1);
    eax = SX8(LO8(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00208588u); RECOMP_ABI_CALL(0x00208520u, sub_00208520); /* call 0x00208520 */

loc_00208588: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002085A6; /* je: equal / zero */

loc_00208590: ;
    SET_LO8(eax, MEM8(ebp + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002085A6; /* jl: less (signed <) */

loc_00208597: ;
    PUSH32(esp, 1);
    ecx = SX8(LO8(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002085A6u); RECOMP_ABI_CALL(0x00208520u, sub_00208520); /* call 0x00208520 */

loc_002085A6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_002085AF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002085C0
 * Original: 0x002085C0 - 0x002085E1 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002085C0(void)
{

loc_002085C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    eax = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002085F0
 * Original: 0x002085F0 - 0x0020860A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002085F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002085F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00208610
 * Original: 0x00208610 - 0x0020865A (74 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 0x1C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00208638; /* je: equal / zero */

loc_00208620: ;
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020862F; /* jne: not equal / not zero */

loc_00208626: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;

loc_0020862F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00208635u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00208635: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208638: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208647; /* je: equal / zero */

loc_0020863E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00208644u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00208644: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208647: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208657; /* je: equal / zero */

loc_0020864E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00208654u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00208654: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208657: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00208660
 * Original: 0x00208660 - 0x002087CE (366 bytes, 128 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00208660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM8(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi);
    ecx = eax + eax * 4;
    PUSH32(esp, edi);
    edi = edx + ecx * 8;
    ecx = MEM32(esi + 4);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, edi);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208692u); RECOMP_ABI_CALL(0x0022FA9Eu, sub_0022FA9E); /* call 0x0022FA9E */

loc_00208692: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020869Du); RECOMP_ABI_CALL(0x0022F9BCu, sub_0022F9BC); /* call 0x0022F9BC */

loc_0020869D: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002086D8u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_002086D8: ;
    SET_LO8(eax, MEM8(edi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208710; /* jl: less (signed <) */

loc_002086DF: ;
    edx = MEM32(esi + 4);
    eax = SX8(LO8(eax));
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002086F6u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_002086F6: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208704u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00208704: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208710u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00208710: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208721; /* jl: less (signed <) */

loc_00208719: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208721u); RECOMP_ABI_CALL(0x00208660u, sub_00208660); /* call 0x00208660 */

loc_00208721: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208732; /* jl: less (signed <) */

loc_0020872A: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208732u); RECOMP_ABI_CALL(0x00208660u, sub_00208660); /* call 0x00208660 */

loc_00208732: ;
    SET_LO8(eax, MEM8(edi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002087C5; /* jge: greater or equal (signed >=) */

loc_0020873D: ;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002087C5; /* jbe: below or equal (unsigned <=) */

loc_00208746: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00208748: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208757u); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_00208757: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x2C);
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(eax + 0x30);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 0x38);
    MEM32(ecx + 0x38) = edx;
    eax = MEM32(eax + 0x3C);
    MEM32(ecx + 0x3C) = eax;
    eax = MEM32(esi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00208748; /* jb: below (unsigned <) */

loc_002087C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002087D0
 * Original: 0x002087D0 - 0x002088AE (222 bytes, 84 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002087D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002087D0: ;
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
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002087ED; /* jne: not equal / not zero */

loc_002087E8: ;
    edi = 0x6438E0;

loc_002087ED: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208832; /* jne: not equal / not zero */

loc_002087F4: ;
    PUSH32(esp, 0x301428);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208802u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00208802: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208814; /* je: equal / zero */

loc_00208809: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208810u); RECOMP_ABI_CALL(0x00203BE0u, sub_00203BE0); /* call 0x00203BE0 */

loc_00208810: ;
    esi = eax;
    goto loc_00208816;

loc_00208814: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00208816: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020881Eu); RECOMP_ABI_CALL(0x00203C90u, sub_00203C90); /* call 0x00203C90 */

loc_0020881E: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020882Eu); RECOMP_ABI_CALL(0x00204770u, sub_00204770); /* call 0x00204770 */

loc_0020882E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208869; /* jne: not equal / not zero */

loc_00208832: ;
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0xC);
    ebx = MEM32(edx);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020884Bu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0020884B: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208859u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00208859: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208867u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00208867: ;
    goto loc_00208894;

loc_00208869: ;
    eax = MEM32(ebp + 0xC);
    edi = MEM32(esi);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020887Du); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0020887D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208884u); RECOMP_ABI_CALL(0x00203BF0u, sub_00203BF0); /* call 0x00203BF0 */

loc_00208884: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020888Bu); RECOMP_ABI_CALL(0x00203C80u, sub_00203C80); /* call 0x00203C80 */

loc_0020888B: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00208891u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00208891: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208894: ;
    esi = MEM32(ebp + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002088A3u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_002088A3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002088B0
 * Original: 0x002088B0 - 0x00208902 (82 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002088B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002088B0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002088F3; /* je: equal / zero */

loc_002088BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002088CEu); RECOMP_ABI_CALL(0x002186C0u, sub_002186C0); /* call 0x002186C0 */

loc_002088CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002088DF; /* jl: less (signed <) */

loc_002088D2: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + eax * 8);
    ebx = MEM32(ecx + eax * 8 + 4);
    MEM32(esp + 8) = edx;

loc_002088DF: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);
    MEM8(eax) = LO8(ebx);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_002088FA; /* jge: greater or equal (signed >=) */

loc_002088EB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002088F3: ;
    ecx = MEM32(esp + 0x10);
    MEM8(ecx) = 0xFF;

loc_002088FA: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208910
 * Original: 0x00208910 - 0x00208DE3 (1235 bytes, 397 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208910: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xAC);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C454B53) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x4C454B53 (32-bit) */
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00208DD8; /* jne: not equal / not zero */

loc_0020892D: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00208939u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_00208939: ;
    _fa = (uint32_t)(MEM32(esp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x534E424E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x70), 0x534E424E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208DD8; /* jne: not equal / not zero */

loc_00208947: ;
    ecx = MEM32(esp + 0x88);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    eax = esp + 0x10;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00208961u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020895Eu); } /* indirect call */
    }

loc_00208961: ;
    ecx = MEM32(esp + 0xC);
    edx = esp + 0x90;
    MEM32(ebp + 8) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00208977u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_00208977: ;
    _fa = (uint32_t)(MEM32(esp + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49425346) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x90), 0x49425346 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208DD7; /* jne: not equal / not zero */

loc_00208988: ;
    ecx = MEM32(esp + 0xA8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002089A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020899Du); } /* indirect call */
    }

loc_002089A0: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3014F0);
    ecx = edi + edi * 4;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0x002089BCu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_002089BC: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002089D5; /* je: equal / zero */

loc_002089C5: ;
    PUSH32(esp, 0x2085C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002089D3u); RECOMP_ABI_CALL(0x00015B30u, sub_00015B30); /* call 0x00015B30 */

loc_002089D3: ;
    goto loc_002089D7;

loc_002089D5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002089D7: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    MEM32(ebp) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00208A11; /* jl: less (signed <) */

loc_002089DF: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 0x3014C8);
    edx = ebx;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002089F3u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_002089F3: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208A0C; /* je: equal / zero */

loc_002089FC: ;
    PUSH32(esp, 0xB5E50);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208A0Au); RECOMP_ABI_CALL(0x00015B30u, sub_00015B30); /* call 0x00015B30 */

loc_00208A0A: ;
    goto loc_00208A0E;

loc_00208A0C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00208A0E: ;
    MEM32(ebp + 4) = edi;

loc_00208A11: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x3014A0);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00208A27u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00208A27: ;
    PUSH32(esp, 0x301478);
    PUSH32(esp, 2);
    PUSH32(esp, 0x100);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00208A3Cu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00208A3C: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x301450);
    ecx = esi * 8;
    ebx = eax;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x00208A59u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00208A59: ;
    edi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208A78; /* je: equal / zero */

loc_00208A64: ;
    PUSH32(esp, 0x209440);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208A72u); RECOMP_ABI_CALL(0x00015B30u, sub_00015B30); /* call 0x00015B30 */

loc_00208A72: ;
    ecx = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00208A7A;

loc_00208A78: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00208A7A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    eax = MEM32(ebp + 8);
    edi = ebp + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_00208A8E; /* jne: not equal / not zero */

loc_00208A86: ;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = edx;

loc_00208A8E: ;
    SET_LO8(eax, MEM8(edi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208A99; /* je: equal / zero */

loc_00208A95: ;
    MEM8(edi + 0xD) = 0;

loc_00208A99: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00208CA9; /* jbe: below or equal (unsigned <=) */

loc_00208AA6: ;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = edx;
    goto loc_00208AC0;

    /* nop */
    edi = edi;

loc_00208AC0: ;
    ecx = MEM32(esp + 0xB4);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00208AD1u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_00208AD1: ;
    _fa = (uint32_t)(MEM32(esp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x544E4F4A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x5C), 0x544E4F4A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208DD6; /* jne: not equal / not zero */

loc_00208ADF: ;
    esi = MEM32(ebp);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x74);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00208AF7u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00208AF7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00208AFDu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00208AFD: ;
    MEM32(esi + 0x1C) = eax;
    SET_LO8(edx, MEM8(ebx + 1));
    eax = ebx + 1;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00208B20; /* je: equal / zero */

loc_00208B0F: ;
    /* nop */

loc_00208B10: ;
    ecx = eax;
    SET_LO8(edx, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = ecx + 1;
    if (CMP_NE(_fa, _fb)) goto loc_00208B10; /* jne: not equal / not zero */

loc_00208B1C: ;
    /* nop */

loc_00208B20: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208B2E; /* je: equal / zero */

loc_00208B26: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208B34; /* jl: less (signed <) */

loc_00208B2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00208B34; /* jg: greater (signed >) */

loc_00208B2E: ;
    MEM8(ecx) = 0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00208B20;

loc_00208B34: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00208B3Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00208B3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00208B42: ;
    ecx = MEM32(esp + 0x74);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00208B5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208B58u); } /* indirect call */
    }

loc_00208B5B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + ebx * 4 + 0x4C) = xmm0.f[0]; /* movss */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00208B42; /* jb: below (unsigned <) */

loc_00208B6D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    ecx = esi;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x3C);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00208BC0: ;
    ecx = MEM32(esp + 0x74);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00208BD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208BD6u); } /* indirect call */
    }

loc_00208BD9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + ebx * 4 + 0x40) = xmm0.f[0]; /* movss */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00208BC0; /* jb: below (unsigned <) */

loc_00208BEB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    PUSH32(esp, 0x100);
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, 0x00208C1Fu); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00208C1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00208C25u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00208C25: ;
    ebx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x18);
    MEM32(ebx + -8) = eax;
    MEM32(ebx + -4) = 0;
    MEM32(ebx) = 0;
    SET_LO8(eax, MEM8(edi + 0xC));
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208C7F; /* jne: not equal / not zero */

loc_00208C4A: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00208C7F; /* jge: greater or equal (signed >=) */

loc_00208C52: ;
    esi = MEM32(edi);
    eax = esi + eax * 8;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    edx = MEM32(edi + 8);
    SET_LO8(ecx, MEM8(edi + 0xD));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(edi + 8) = edx;
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00208C7F; /* je: equal / zero */

loc_00208C6C: ;
    SET_LO8(ecx, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208C7F; /* jne: not equal / not zero */

loc_00208C73: ;
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00208C7Cu); RECOMP_ABI_CALL(0x001EC6E0u, sub_001EC6E0); /* call 0x001EC6E0 */

loc_00208C7C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208C7F: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = ebx;
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = esi;
    if (CMP_B(_fa, _fb)) goto loc_00208AC0; /* jb: below (unsigned <) */

loc_00208CA9: ;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xD), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208CC9; /* je: equal / zero */

loc_00208CAF: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(edi + 0xD) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00208CC9; /* jne: not equal / not zero */

loc_00208CBA: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00208CC6u); RECOMP_ABI_CALL(0x001EC6E0u, sub_001EC6E0); /* call 0x001EC6E0 */

loc_00208CC6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208CC9: ;
    PUSH32(esp, ebx);
    MEM8(ebp + 0x1C) = 1;
    PUSH32(esp, 0x00208CD3u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00208CD3: ;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00208D52; /* jbe: below or equal (unsigned <=) */

loc_00208CE3: ;
    ebx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = eax;
    goto loc_00208CF0;

    /* nop */

loc_00208CF0: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208D34; /* je: equal / zero */

loc_00208CF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00208D04u); RECOMP_ABI_CALL(0x002186C0u, sub_002186C0); /* call 0x002186C0 */

loc_00208D04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208D15; /* jl: less (signed <) */

loc_00208D08: ;
    edx = MEM32(edi);
    ecx = MEM32(edx + eax * 8);
    esi = MEM32(edx + eax * 8 + 4);
    MEM32(esp + 0x28) = ecx;

loc_00208D15: ;
    eax = MEM32(esp + 0x18);
    edx = esi + esi * 2;
    ecx = MEM32(eax + edx * 4 + 4);
    eax = eax + edx * 4 + 4;
    MEM32(ebx + 8) = ecx;
    edx = MEM32(ebp);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(edx + ecx + 0x1C);
    MEM32(eax) = edx;

loc_00208D34: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00208CF0; /* jb: below (unsigned <) */

loc_00208D52: ;
    eax = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00208DB9; /* jbe: below or equal (unsigned <=) */

loc_00208D5F: ;
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208D66: ;
    esi = MEM32(ebp);
    ecx = MEM32(edi + -8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00208D7Au); RECOMP_ABI_CALL(0x002088B0u, sub_002088B0); /* call 0x002088B0 */

loc_00208D7A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208DD6; /* je: equal / zero */

loc_00208D7E: ;
    eax = MEM32(edi + -4);
    edx = esi + 0x25;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00208D8Du); RECOMP_ABI_CALL(0x002088B0u, sub_002088B0); /* call 0x002088B0 */

loc_00208D8D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208DD6; /* je: equal / zero */

loc_00208D91: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x26;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00208D9Fu); RECOMP_ABI_CALL(0x002088B0u, sub_002088B0); /* call 0x002088B0 */

loc_00208D9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208DD6; /* je: equal / zero */

loc_00208DA3: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00208D66; /* jb: below (unsigned <) */

loc_00208DB9: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208DC9; /* je: equal / zero */

loc_00208DC0: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00208DC9u); RECOMP_ABI_CALL(0x00208660u, sub_00208660); /* call 0x00208660 */

loc_00208DC9: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00208DD3u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00208DD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00208DD6: ;
    POP32(esp, ebx);

loc_00208DD7: ;
    POP32(esp, esi);

loc_00208DD8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208DF0
 * Original: 0x00208DF0 - 0x00208DF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208DF0(void)
{

loc_00208DF0: ;
    MEM32(ecx) = 0x301518;
    esp += 4; return; /* ret */

}

/**
 * sub_00208E00
 * Original: 0x00208E00 - 0x00208E25 (37 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208E00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_00208E10;

    /* nop */

loc_00208E10: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208E10; /* jne: not equal / not zero */

loc_00208E17: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00208E20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208E1Du); } /* indirect call */
    }

loc_00208E20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208E30
 * Original: 0x00208E30 - 0x00208E51 (33 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00208E38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208E35u); } /* indirect call */
    }

loc_00208E38: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00208E4D; /* je: equal / zero */

loc_00208E43: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00208E4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00208E4Au); } /* indirect call */
    }

loc_00208E4D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208E60
 * Original: 0x00208E60 - 0x00208EB7 (87 bytes, 40 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208E60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208EAF; /* je: equal / zero */

loc_00208E6B: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208EAF; /* je: equal / zero */

loc_00208E73: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00208EAF; /* jb: below (unsigned <) */

loc_00208E7C: ;
    PUSH32(esp, 0x3A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00208E84u); RECOMP_ABI_CALL(0x00238170u, sub_00238170); /* call 0x00238170 */

loc_00208E84: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208EAF; /* je: equal / zero */

loc_00208E8B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00208EAF; /* jle: less or equal (signed <=) */

loc_00208E91: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00208EAF; /* jge: greater or equal (signed >=) */

loc_00208E98: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208EA0u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_00208EA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 3) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00208EAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00208EC0
 * Original: 0x00208EC0 - 0x00208EFB (59 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208EC0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_GE(_fas, _fbs)) goto loc_00208EDD; /* jge: greater or equal (signed >=) */

loc_00208ECD: ;
    eax = edi;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00208ED3: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208ED3; /* jne: not equal / not zero */

loc_00208EDA: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);

loc_00208EDD: ;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, MEM8(ecx + 0x14));
    SET_LO8(eax, LO8(eax) | 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ecx + 4) = edi;
    MEM8(ecx + 0x14) = LO8(eax);
    MEM32(ecx + 0x10) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208F00
 * Original: 0x00208F00 - 0x00208F05 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208F00: ;
    MEM8(ecx + 0x14) = MEM8(ecx + 0x14) & 0xFE;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00208F10
 * Original: 0x00208F10 - 0x00208F30 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208F10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x14));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(eax) = 0x30153C;
    MEM8(eax + 0x14) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00208F30
 * Original: 0x00208F30 - 0x00208F40 (16 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208F30: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00208F40
 * Original: 0x00208F40 - 0x00208F87 (71 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208F40: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00208F83; /* je: equal / zero */

loc_00208F4B: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(eax + 0x10) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00208F74; /* jge: greater or equal (signed >=) */

loc_00208F62: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208F82; /* je: equal / zero */

loc_00208F66: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00208F66; /* jne: not equal / not zero */

loc_00208F6F: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00208F74: ;
    edx = ecx;
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
    ecx = edx;
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

loc_00208F82: ;
    POP32(esp, esi);

loc_00208F83: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208F90
 * Original: 0x00208F90 - 0x00208FC9 (57 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208F90: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ecx + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00208FB9; /* je: equal / zero */

loc_00208FAB: ;
    goto loc_00208FB0;

    /* nop */

loc_00208FB0: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00208FB0; /* jne: not equal / not zero */

loc_00208FB9: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_00208FC6; /* jge: greater or equal (signed >=) */

loc_00208FC3: ;
    MEM32(ecx + 8) = eax;

loc_00208FC6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208FD0
 * Original: 0x00208FD0 - 0x00209005 (53 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208FD0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00208FF6; /* je: equal / zero */

loc_00208FD9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00208FEC; /* je: equal / zero */

loc_00208FDC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00209002; /* jne: not equal / not zero */

loc_00208FDF: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = eax;
    esp += 12; return; /* ret 8 */

loc_00208FEC: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x10) = edx;
    esp += 12; return; /* ret 8 */

loc_00208FF6: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = edx;

loc_00209002: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209010
 * Original: 0x00209010 - 0x00209015 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209010: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_00209020
 * Original: 0x00209020 - 0x0020902A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209020: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00209030
 * Original: 0x00209030 - 0x00209034 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209030(void)
{

loc_00209030: ;
    SET_LO8(eax, MEM8(ecx + 4));
    esp += 4; return; /* ret */

}

/**
 * sub_00209040
 * Original: 0x00209040 - 0x00209041 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209040(void)
{

loc_00209040: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00209050
 * Original: 0x00209050 - 0x0020906F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209050: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x301518;
    if (TEST_Z(_fa, _fb)) goto loc_00209069; /* je: equal / zero */

loc_00209060: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00209066u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00209066: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00209069: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209070
 * Original: 0x00209070 - 0x002090DE (110 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209070: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x17) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0020908Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020908Au); } /* indirect call */
    }

loc_0020908D: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_002090C3; /* je: equal / zero */

loc_00209099: ;
    /* nop */

loc_002090A0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002090D5; /* je: equal / zero */

loc_002090A4: ;
    MEM8(edi) = LO8(eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x20) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002090BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002090B7u); } /* indirect call */
    }

loc_002090BA: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002090A0; /* jne: not equal / not zero */

loc_002090C3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002090D5; /* jle: less or equal (signed <=) */

loc_002090C7: ;
    eax = MEM32(esp + 0x14);
    MEM8(edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_002090D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002090E0
 * Original: 0x002090E0 - 0x002090FE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002090E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002090E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002090E8u); RECOMP_ABI_CALL(0x00208DF0u, sub_00208DF0); /* call 0x00208DF0 */

loc_002090E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002090F8; /* je: equal / zero */

loc_002090EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002090F5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_002090F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002090F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209100
 * Original: 0x00209100 - 0x002091F3 (243 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209100: ;
    eax = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fa = (uint32_t)(MEM8(0x7AB5A8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x7AB5A8), LO8(ebx) (8-bit) */
    MEM32(eax) = 0x301568;
    MEM8(eax + 4) = LO8(ebx);
    MEM32(eax + 0x88) = ebx;
    MEM32(eax + 0x8C) = ebx;
    MEM32(eax + 0x90) = ebx;
    MEM32(eax + 0x94) = ebx;
    MEM32(eax + 0x98) = ebx;
    MEM32(eax + 0x9C) = ebx;
    MEM32(eax + 0xCC) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0020919F; /* jne: not equal / not zero */

loc_00209149: ;
    ecx = MEM32(0x30F17C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00209190; /* jle: less or equal (signed <=) */

loc_00209153: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x30F194);
    edx = 0x7935A8;

loc_00209161: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x30F198)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x30F198) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020917D; /* jge: greater or equal (signed >=) */

loc_00209169: ;
    MEM32(ecx * 4 + 0x30F180) = edx;
    ecx = MEM32(0x30F194);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x30F194) = ecx;

loc_0020917D: ;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x8000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00209161; /* jne: not equal / not zero */

loc_00209186: ;
    POP32(esp, esi);
    MEM8(0x7AB5A8) = 1;
    goto loc_002091A5;

loc_00209190: ;
    ecx = MEM32(0x30F194);
    MEM8(0x7AB5A8) = 1;
    goto loc_002091A5;

loc_0020919F: ;
    ecx = MEM32(0x30F194);

loc_002091A5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002091BD; /* je: equal / zero */

loc_002091A9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x30F194) = ecx;
    ecx = MEM32(ecx * 4 + 0x30F180);
    MEM32(eax + 0xCC) = ecx;

loc_002091BD: ;
    MEM32(eax + 0xA0) = ebx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 0xA4;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(eax + 0xB4) = ebx;
    MEM32(eax + 0xC0) = ebx;
    MEM32(eax + 0xC4) = ebx;
    MEM32(eax + 0xC8) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00209200
 * Original: 0x00209200 - 0x0020929E (158 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209200: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246F38);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x301568;
    SET_LO8(eax, MEM8(esi + 4));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00209236; /* je: equal / zero */

loc_00209231: ;
    PUSH32(esp, 0x00209236u); RECOMP_ABI_CALL(0x00209980u, sub_00209980); /* call 0x00209980 */

loc_00209236: ;
    eax = MEM32(esi + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xBC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00209261; /* je: equal / zero */

loc_00209252: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209258u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00209258: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC0) = ebx;

loc_00209261: ;
    MEM32(esi + 0xC4) = ebx;
    eax = MEM32(0x30F194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x30F198)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x30F198) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00209287; /* jge: greater or equal (signed >=) */

loc_00209274: ;
    ecx = MEM32(esi + 0xCC);
    MEM32(eax * 4 + 0x30F180) = ecx;
    MEM32(0x30F194) = MEM32(0x30F194) + 1;
    _fa = (uint32_t)(MEM32(0x30F194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00209287: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x301518;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002092A0
 * Original: 0x002092A0 - 0x0020941D (381 bytes, 125 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002092A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002092A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x8C);
    eax = MEM32(ebx + 0x90);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) ebp = eax; /* cmovg */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x8000 (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_002092F6; /* jl: less (signed <) */

loc_002092CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x7FF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002092F6; /* jne: not equal / not zero */

loc_002092D5: ;
    eax = MEM32(esp + 0x14);
    esi = ebp;
    esi = esi & 0xFFFFF800u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x002092EAu); RECOMP_ABI_CALL(0x00209A70u, sub_00209A70); /* call 0x00209A70 */

loc_002092EA: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x8C) = MEM32(ebx + 0x8C) + esi;
    _fa = (uint32_t)(MEM32(ebx + 0x8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = esi;

loc_002092F6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209416; /* je: equal / zero */

loc_002092FE: ;
    eax = MEM32(ebx + 0x8C);
    edx = MEM32(ebx + 0xC);
    ecx = eax + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0020934A; /* jl: less (signed <) */

loc_0020930F: ;
    edx = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020934A; /* jl: less (signed <) */

loc_00209316: ;
    esi = MEM32(ebx + 0xCC);
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp;
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = edx;
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
    eax = MEM32(ebx + 0x8C);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx + 0x8C) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0020934A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020935Bu); RECOMP_ABI_CALL(0x00229F5Bu, sub_00229F5B); /* call 0x00229F5B */

loc_0020935B: ;
    goto loc_00209360;

    /* nop */

loc_00209360: ;
    esi = MEM32(ebx + 0x8C);
    eax = MEM32(ebx + 0x90);
    MEM32(esp + 0x10) = esi;
    esi = esi & 0xFFFFF800u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00209386; /* jl: less (signed <) */

loc_00209381: ;
    edi = 0x8000;

loc_00209386: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209395; /* jne: not equal / not zero */

loc_0020938B: ;
    eax = MEM32(ebx + 0xC);
    ecx = edi + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002093BC; /* je: equal / zero */

loc_00209395: ;
    edx = MEM32(ebx + 0xCC);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(ebx + 0x8C) = esi;
    PUSH32(esp, 0x002093AAu); RECOMP_ABI_CALL(0x00209A70u, sub_00209A70); /* call 0x00209A70 */

loc_002093AA: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 0xC) = edi;
    MEM32(ebx + 0x8C) = eax;

loc_002093BC: ;
    edx = MEM32(ebx + 0x8C);
    eax = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 8);
    esi = MEM32(ebx + 0xCC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = ecx;
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
    ecx = edx;
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
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 0x8C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    MEM32(ebx + 0x8C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00209360; /* jne: not equal / not zero */

loc_00209415: ;
    POP32(esp, edi);

loc_00209416: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209420
 * Original: 0x00209420 - 0x0020943E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209420: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00209428u); RECOMP_ABI_CALL(0x00209200u, sub_00209200); /* call 0x00209200 */

loc_00209428: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209438; /* je: equal / zero */

loc_0020942F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00209435u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00209435: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00209438: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209440
 * Original: 0x00209440 - 0x00209450 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209440(void)
{

loc_00209440: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00209450
 * Original: 0x00209450 - 0x002094AA (90 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209450: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0020945Eu); RECOMP_ABI_CALL(0x00208E30u, sub_00208E30); /* call 0x00208E30 */

loc_0020945E: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00209475u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209472u); } /* indirect call */
    }

loc_00209475: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esi + 0x18);
    MEM32(esi) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00209492u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020948Fu); } /* indirect call */
    }

loc_00209492: ;
    ecx = MEM32(esp + 4);
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002094A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020949Eu); } /* indirect call */
    }

loc_002094A1: ;
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002094B0
 * Original: 0x002094B0 - 0x002094E1 (49 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002094B0(void)
{

loc_002094B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x18) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002094BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002094BCu); } /* indirect call */
    }

loc_002094BF: ;
    ecx = esi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x002094C9u); RECOMP_ABI_CALL(0x00209450u, sub_00209450); /* call 0x00209450 */

loc_002094C9: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002094D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002094CEu); } /* indirect call */
    }

loc_002094D1: ;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 4) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002094F0
 * Original: 0x002094F0 - 0x00209517 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002094F0(void)
{

loc_002094F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00209501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002094FEu); } /* indirect call */
    }

loc_00209501: ;
    ecx = esi;
    PUSH32(esp, 0x00209508u); RECOMP_ABI_CALL(0x00209450u, sub_00209450); /* call 0x00209450 */

loc_00209508: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00209510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020950Du); } /* indirect call */
    }

loc_00209510: ;
    MEM32(esi + 0x14) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00209520
 * Original: 0x00209520 - 0x002095B7 (151 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209520: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020959F; /* jl: less (signed <) */

loc_00209533: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020953Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020953Cu); } /* indirect call */
    }

loc_0020953F: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00209549u); RECOMP_ABI_CALL(0x00208E30u, sub_00208E30); /* call 0x00208E30 */

loc_00209549: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    MEM32(esp + 0x20) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00209555u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209552u); } /* indirect call */
    }

loc_00209555: ;
    ecx = esp + 8;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00209562u); RECOMP_ABI_CALL(0x00209450u, sub_00209450); /* call 0x00209450 */

loc_00209562: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0020956Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209568u); } /* indirect call */
    }

loc_0020956B: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx);
    MEM32(esp + 0xC) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0020957Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020957Cu); } /* indirect call */
    }

loc_0020957F: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esp + 0x28);
    ecx = 7;
    esi = esp + 8;
    edi = eax;
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
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0020959F: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002095C0
 * Original: 0x002095C0 - 0x00209623 (99 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002095C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002095C0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002095F1; /* jl: less (signed <) */

loc_002095D1: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002095DDu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_002095DD: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209609; /* je: equal / zero */

loc_002095E6: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002095D1; /* jge: greater or equal (signed >=) */

loc_002095F1: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00209609: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    ecx = 7;
    esi = esp + 8;
    edi = eax;
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
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209630
 * Original: 0x00209630 - 0x0020966E (62 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209630(void)
{

loc_00209630: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 8);
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00209642u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020963Fu); } /* indirect call */
    }

loc_00209642: ;
    ecx = esi;
    PUSH32(esp, 0x00209649u); RECOMP_ABI_CALL(0x00209450u, sub_00209450); /* call 0x00209450 */

loc_00209649: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00209651u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020964Eu); } /* indirect call */
    }

loc_00209651: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00209667u); RECOMP_ABI_CALL(0x002095C0u, sub_002095C0); /* call 0x002095C0 */

loc_00209667: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209670
 * Original: 0x00209670 - 0x00209677 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209670(void)
{

loc_00209670: ;
    MEM32(ecx) = 0x3015A0;
    esp += 4; return; /* ret */

}

/**
 * sub_00209680
 * Original: 0x00209680 - 0x00209694 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209680: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x3015A0;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002096A0
 * Original: 0x002096A0 - 0x002096BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002096A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002096A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002096A8u); RECOMP_ABI_CALL(0x00209670u, sub_00209670); /* call 0x00209670 */

loc_002096A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002096B8; /* je: equal / zero */

loc_002096AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002096B5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_002096B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002096B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002096C0
 * Original: 0x002096C0 - 0x002096D6 (22 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002096C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002096C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002096D3u); RECOMP_ABI_CALL(0x0004D110u, sub_0004D110); /* call 0x0004D110 */

loc_002096D3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002096E0
 * Original: 0x002096E0 - 0x00209700 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002096E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002096E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002096E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002096E5u); } /* indirect call */
    }

loc_002096E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002096FC; /* jne: not equal / not zero */

loc_002096EC: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = 0x30F19C;
    PUSH32(esp, 0x002096FCu); RECOMP_ABI_CALL(0x002096C0u, sub_002096C0); /* call 0x002096C0 */

loc_002096FC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209700
 * Original: 0x00209700 - 0x00209719 (25 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209700: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00209708u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209705u); } /* indirect call */
    }

loc_00209708: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209717; /* je: equal / zero */

loc_0020970C: ;
    PUSH32(esp, esi);
    ecx = 0x30F19C;
    PUSH32(esp, 0x00209717u); RECOMP_ABI_CALL(0x000AE4E0u, sub_000AE4E0); /* call 0x000AE4E0 */

loc_00209717: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00209720
 * Original: 0x00209720 - 0x0020972B (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209720: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00209730
 * Original: 0x00209730 - 0x00209750 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209730: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020974E; /* je: equal / zero */

loc_0020973A: ;
    /* nop */

loc_00209740: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00209745u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209742u); } /* indirect call */
    }

loc_00209745: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209740; /* jne: not equal / not zero */

loc_0020974E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00209750
 * Original: 0x00209750 - 0x0020975A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209750(void)
{

loc_00209750: ;
    eax = MEM32(esp + 4);
    MEM32(0x7AB5AC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00209760
 * Original: 0x00209760 - 0x00209781 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00209760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209760: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(0x7AB5AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7AB5AC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209774; /* je: equal / zero */

loc_0020976C: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x7AB5AC); PUSH32(esp, 0x00209772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020976Cu); } /* indirect call */
    }

loc_00209772: ;
    goto loc_0020977F;

loc_00209774: ;
    eax = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020977F; /* je: equal / zero */

loc_0020977D: ;
    goto loc_00209774;

loc_0020977F: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00209790
 * Original: 0x00209790 - 0x00209803 (115 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209790: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x3A (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_002097A4; /* jne: not equal / not zero */

loc_0020979F: ;
    MEM8(ebx) = 0;
    goto loc_002097AA;

loc_002097A4: ;
    MEM32(ebx) = 0x5C3A64;

loc_002097AA: ;
    edx = eax;
    /* nop */

loc_002097B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002097B0; /* jne: not equal / not zero */

loc_002097B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_002097C0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002097C0; /* jne: not equal / not zero */

loc_002097C8: ;
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
    eax = ebx;
    POP32(esp, edi);
    edx = eax + 1;
    POP32(esp, esi);
    /* nop */

loc_002097E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002097E0; /* jne: not equal / not zero */

loc_002097E7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0;
    if ((_fa == 0)) goto loc_002097FF; /* je: equal / zero */

loc_002097F0: ;
    _fa = (uint32_t)(MEM8(ecx + ebx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + ebx), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002097FA; /* jne: not equal / not zero */

loc_002097F6: ;
    MEM8(ecx + ebx) = 0x5C;

loc_002097FA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002097F0; /* jb: below (unsigned <) */

loc_002097FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00209810
 * Original: 0x00209810 - 0x002098DA (202 bytes, 73 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209810: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209820; /* je: equal / zero */

loc_0020981B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00209820u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020981Du); } /* indirect call */
    }

loc_00209820: ;
    ecx = esi;
    PUSH32(esp, 0x00209827u); RECOMP_ABI_CALL(0x00209020u, sub_00209020); /* call 0x00209020 */

loc_00209827: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002098D3; /* je: equal / zero */

loc_00209833: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002098D3; /* je: equal / zero */

loc_0020983C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x78);
    PUSH32(esp, eax);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00209849u); RECOMP_ABI_CALL(0x00209790u, sub_00209790); /* call 0x00209790 */

loc_00209849: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00209861u); RECOMP_ABI_CALL(0x0022A7A4u, sub_0022A7A4); /* call 0x0022A7A4 */

loc_00209861: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020986D; /* jne: not equal / not zero */

loc_00209866: ;
    PUSH32(esp, 0x0020986Bu); RECOMP_ABI_CALL(0x00209760u, sub_00209760); /* call 0x00209760 */

loc_0020986B: ;
    goto loc_00209877;

loc_0020986D: ;
    MEM32(esi + 0x88) = eax;
    MEM8(esi + 4) = 1;

loc_00209877: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00209886u); RECOMP_ABI_CALL(0x00208E60u, sub_00208E60); /* call 0x00208E60 */

loc_00209886: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00209890u); RECOMP_ABI_CALL(0x0022A709u, sub_0022A709); /* call 0x0022A709 */

loc_00209890: ;
    MEM32(esi + 0xA0) = eax;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002098CB; /* je: equal / zero */

loc_0020989E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x8C) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002098B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002098B0u); } /* indirect call */
    }

loc_002098B3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002098BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002098B7u); } /* indirect call */
    }

loc_002098BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esi + 0x90) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002098CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002098C8u); } /* indirect call */
    }

loc_002098CB: ;
    SET_LO8(eax, MEM8(esi + 4));
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_002098D3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002098E0
 * Original: 0x002098E0 - 0x0020997B (155 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002098E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002098E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002098F0; /* je: equal / zero */

loc_002098EB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002098F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002098EDu); } /* indirect call */
    }

loc_002098F0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209974; /* je: equal / zero */

loc_002098F8: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209974; /* je: equal / zero */

loc_002098FD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x78);
    PUSH32(esp, eax);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020990Au); RECOMP_ABI_CALL(0x00209790u, sub_00209790); /* call 0x00209790 */

loc_0020990A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00209925u); RECOMP_ABI_CALL(0x0022A7A4u, sub_0022A7A4); /* call 0x0022A7A4 */

loc_00209925: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209934; /* je: equal / zero */

loc_0020992A: ;
    MEM32(esi + 0x88) = eax;
    MEM8(esi + 4) = 1;

loc_00209934: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00209943u); RECOMP_ABI_CALL(0x00208E60u, sub_00208E60); /* call 0x00208E60 */

loc_00209943: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020994Du); RECOMP_ABI_CALL(0x0022A709u, sub_0022A709); /* call 0x0022A709 */

loc_0020994D: ;
    MEM32(esi + 0xA0) = eax;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00209976; /* je: equal / zero */

loc_0020995B: ;
    MEM32(esi + 0x8C) = 0;
    MEM32(esi + 0x90) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00209974: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00209976: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209980
 * Original: 0x00209980 - 0x002099B2 (50 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209980: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00209988u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209985u); } /* indirect call */
    }

loc_00209988: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002099B0; /* je: equal / zero */

loc_0020998C: ;
    ecx = MEM32(esi + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00209998u); RECOMP_ABI_CALL(0x0022AC56u, sub_0022AC56); /* call 0x0022AC56 */

loc_00209998: ;
    edx = MEM32(esi + 0x88);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002099A4u); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_002099A4: ;
    MEM8(esi + 4) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00209020(); return; /* tail jmp 0x00209020 */

loc_002099B0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002099C0
 * Original: 0x002099C0 - 0x00209A06 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002099C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002099C0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1B8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x78);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002099D7u); RECOMP_ABI_CALL(0x00209790u, sub_00209790); /* call 0x00209790 */

loc_002099D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x78;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002099E9u); RECOMP_ABI_CALL(0x0022AD8Bu, sub_0022AD8B); /* call 0x0022AD8B */

loc_002099E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002099F7; /* jne: not equal / not zero */

loc_002099EE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1B8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002099F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002099FDu); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_002099FD: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1B8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00209A10
 * Original: 0x00209A10 - 0x00209A43 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209A10: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00209A24u); RECOMP_ABI_CALL(0x0022AD8Bu, sub_0022AD8B); /* call 0x0022AD8B */

loc_00209A24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209A32; /* jne: not equal / not zero */

loc_00209A29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00209A32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209A38u); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_00209A38: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00209A50
 * Original: 0x00209A50 - 0x00209A6A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209A50: ;
    ecx = MEM32(ecx + 0x88);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00209A63u); RECOMP_ABI_CALL(0x0022A1AAu, sub_0022A1AA); /* call 0x0022A1AA */

loc_00209A63: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00209A70
 * Original: 0x00209A70 - 0x00209AC7 (87 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209A70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00209AC2; /* je: equal / zero */

loc_00209A7C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00209AC1; /* jle: less or equal (signed <=) */

loc_00209A85: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209AC1; /* je: equal / zero */

loc_00209A8C: ;
    eax = MEM32(esi + 0x8C);
    ecx = MEM32(esi + 0x88);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00209AA3u); RECOMP_ABI_CALL(0x00229F5Bu, sub_00229F5B); /* call 0x00229F5B */

loc_00209AA3: ;
    eax = MEM32(esi + 0x88);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209AB8u); RECOMP_ABI_CALL(0x00229D14u, sub_00229D14); /* call 0x00229D14 */

loc_00209AB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00209AC1; /* jne: not equal / not zero */

loc_00209ABC: ;
    PUSH32(esp, 0x00209AC1u); RECOMP_ABI_CALL(0x00209760u, sub_00209760); /* call 0x00209760 */

loc_00209AC1: ;
    POP32(esp, edi);

loc_00209AC2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209AD0
 * Original: 0x00209AD0 - 0x00209B25 (85 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209AD0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209B21; /* je: equal / zero */

loc_00209AE4: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209B21; /* jl: less (signed <) */

loc_00209AED: ;
    SET_LO8(edx, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209B21; /* je: equal / zero */

loc_00209AF4: ;
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209B09u); RECOMP_ABI_CALL(0x00229E01u, sub_00229E01); /* call 0x00229E01 */

loc_00209B09: ;
    eax = MEM32(esi + 0x8C);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;

loc_00209B21: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209B30
 * Original: 0x00209B30 - 0x00209B80 (80 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209B7C; /* je: equal / zero */

loc_00209B3A: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00209B6A; /* je: equal / zero */

loc_00209B43: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00209B5C; /* je: equal / zero */

loc_00209B46: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00209B7C; /* jne: not equal / not zero */

loc_00209B49: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00209B4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209B4Bu); } /* indirect call */
    }

loc_00209B4E: ;
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00209B5C: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x8C) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00209B6A: ;
    eax = MEM32(esi + 0x8C);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = eax;

loc_00209B7C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209B80
 * Original: 0x00209B80 - 0x00209B90 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209B80(void)
{

loc_00209B80: ;
    eax = MEM32(ecx + 0x8C);
    esp += 4; return; /* ret */

}

/**
 * sub_00209B90
 * Original: 0x00209B90 - 0x00209BCE (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209B90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE316A5BAu);
    ecx = esi;
    PUSH32(esp, 0x00209BA3u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00209BA3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209BB7; /* je: equal / zero */

loc_00209BA7: ;
    ecx = esi;
    PUSH32(esp, 0x00209BAEu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_00209BAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(0x7AB610) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */

loc_00209BB7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    SET_LO8(eax, MEM8(0x7AB610));
    POP32(esp, esi);
    MEMF(0x7AB5C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00209BD0
 * Original: 0x00209BD0 - 0x00209DD2 (514 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209BD0(void)
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

loc_00209BD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00209BDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209BD8u); } /* indirect call */
    }

loc_00209BDB: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00209BE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209BE3u); } /* indirect call */
    }

loc_00209BE6: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00209CCD; /* ja: above (unsigned >) */

loc_00209BF7: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x209DD4); /* switch: 18 entries, 18 targets */
    if (_jt == 0x00209BFEu) goto loc_00209BFE;
    if (_jt == 0x00209C0Eu) goto loc_00209C0E;
    if (_jt == 0x00209C1Eu) goto loc_00209C1E;
    if (_jt == 0x00209C44u) goto loc_00209C44;
    if (_jt == 0x00209C54u) goto loc_00209C54;
    if (_jt == 0x00209C64u) goto loc_00209C64;
    if (_jt == 0x00209C87u) goto loc_00209C87;
    if (_jt == 0x00209C97u) goto loc_00209C97;
    if (_jt == 0x00209CA7u) goto loc_00209CA7;
    if (_jt == 0x00209CE1u) goto loc_00209CE1;
    if (_jt == 0x00209D04u) goto loc_00209D04;
    if (_jt == 0x00209D1Bu) goto loc_00209D1B;
    if (_jt == 0x00209D5Au) goto loc_00209D5A;
    if (_jt == 0x00209D6Au) goto loc_00209D6A;
    if (_jt == 0x00209D8Du) goto loc_00209D8D;
    if (_jt == 0x00209DABu) goto loc_00209DAB;
    if (_jt == 0x00209DBBu) goto loc_00209DBB;
    if (_jt == 0x00209DCBu) goto loc_00209DCB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00209BFE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015B4); /* addss */
    goto loc_00209C2C;

loc_00209C0E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015BC); /* addss */
    goto loc_00209C2C;

loc_00209C1E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015C0); /* addss */

loc_00209C2C: ;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015B8); /* addss */
    goto loc_00209CC8;

loc_00209C44: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015B4); /* addss */
    goto loc_00209C72;

loc_00209C54: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015BC); /* addss */
    goto loc_00209C72;

loc_00209C64: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015C0); /* addss */

loc_00209C72: ;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015C4); /* addss */
    goto loc_00209CC8;

loc_00209C87: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015B4); /* addss */
    goto loc_00209CB5;

loc_00209C97: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015BC); /* addss */
    goto loc_00209CB5;

loc_00209CA7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015C0); /* addss */

loc_00209CB5: ;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015C8); /* addss */

loc_00209CC8: ;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */

loc_00209CCD: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00209DCB; /* ja: above (unsigned >) */

loc_00209CDA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x209DF8); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00209CE1u) goto loc_00209CE1;
    if (_jt == 0x00209D04u) goto loc_00209D04;
    if (_jt == 0x00209D1Bu) goto loc_00209D1B;
    if (_jt == 0x00209D5Au) goto loc_00209D5A;
    if (_jt == 0x00209D6Au) goto loc_00209D6A;
    if (_jt == 0x00209D8Du) goto loc_00209D8D;
    if (_jt == 0x00209DABu) goto loc_00209DAB;
    if (_jt == 0x00209DBBu) goto loc_00209DBB;
    if (_jt == 0x00209DCBu) goto loc_00209DCB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00209CE1: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00209D04: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00209D1B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00209D5A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_00209D6A: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00209D8D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_00209DBB;

loc_00209DAB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_00209DBB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */

loc_00209DCB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00209E20
 * Original: 0x00209E20 - 0x0020A022 (514 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209E20(void)
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

loc_00209E20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00209E2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209E28u); } /* indirect call */
    }

loc_00209E2B: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00209E36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00209E33u); } /* indirect call */
    }

loc_00209E36: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00209F1D; /* ja: above (unsigned >) */

loc_00209E47: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20A024); /* switch: 18 entries, 18 targets */
    if (_jt == 0x00209E4Eu) goto loc_00209E4E;
    if (_jt == 0x00209E5Eu) goto loc_00209E5E;
    if (_jt == 0x00209E6Eu) goto loc_00209E6E;
    if (_jt == 0x00209E94u) goto loc_00209E94;
    if (_jt == 0x00209EA4u) goto loc_00209EA4;
    if (_jt == 0x00209EB4u) goto loc_00209EB4;
    if (_jt == 0x00209ED7u) goto loc_00209ED7;
    if (_jt == 0x00209EE7u) goto loc_00209EE7;
    if (_jt == 0x00209EF7u) goto loc_00209EF7;
    if (_jt == 0x00209F31u) goto loc_00209F31;
    if (_jt == 0x00209F54u) goto loc_00209F54;
    if (_jt == 0x00209F6Bu) goto loc_00209F6B;
    if (_jt == 0x00209FAAu) goto loc_00209FAA;
    if (_jt == 0x00209FBAu) goto loc_00209FBA;
    if (_jt == 0x00209FDDu) goto loc_00209FDD;
    if (_jt == 0x00209FFBu) goto loc_00209FFB;
    if (_jt == 0x0020A00Bu) goto loc_0020A00B;
    if (_jt == 0x0020A01Bu) goto loc_0020A01B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00209E4E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015B4); /* addss */
    goto loc_00209E7C;

loc_00209E5E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015BC); /* addss */
    goto loc_00209E7C;

loc_00209E6E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015C0); /* addss */

loc_00209E7C: ;
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015B8); /* addss */
    goto loc_00209F18;

loc_00209E94: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015B4); /* addss */
    goto loc_00209EC2;

loc_00209EA4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015BC); /* addss */
    goto loc_00209EC2;

loc_00209EB4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015C0); /* addss */

loc_00209EC2: ;
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015C4); /* addss */
    goto loc_00209F18;

loc_00209ED7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015B4); /* addss */
    goto loc_00209F05;

loc_00209EE7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015BC); /* addss */
    goto loc_00209F05;

loc_00209EF7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015C0); /* addss */

loc_00209F05: ;
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3015C8); /* addss */

loc_00209F18: ;
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */

loc_00209F1D: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020A01B; /* ja: above (unsigned >) */

loc_00209F2A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20A048); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00209F31u) goto loc_00209F31;
    if (_jt == 0x00209F54u) goto loc_00209F54;
    if (_jt == 0x00209F6Bu) goto loc_00209F6B;
    if (_jt == 0x00209FAAu) goto loc_00209FAA;
    if (_jt == 0x00209FBAu) goto loc_00209FBA;
    if (_jt == 0x00209FDDu) goto loc_00209FDD;
    if (_jt == 0x00209FFBu) goto loc_00209FFB;
    if (_jt == 0x0020A00Bu) goto loc_0020A00B;
    if (_jt == 0x0020A01Bu) goto loc_0020A01B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00209F31: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x48) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00209F54: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00209F6B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00209FAA: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */

loc_00209FBA: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x4C) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00209FDD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x48) = xmm1.f[0]; /* movss */
    goto loc_0020A00B;

loc_00209FFB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */

loc_0020A00B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */

loc_0020A01B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020A070
 * Original: 0x0020A070 - 0x0020A093 (35 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A070(void)
{

loc_0020A070: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEM32(ecx + 8) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A0A0
 * Original: 0x0020A0A0 - 0x0020A0C3 (35 bytes, 13 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A0A0(void)
{

loc_0020A0A0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0020A0C0u); RECOMP_ABI_CALL(0x0020BB30u, sub_0020BB30); /* call 0x0020BB30 */

loc_0020A0C0: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020A0D0
 * Original: 0x0020A0D0 - 0x0020A0F3 (35 bytes, 13 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A0D0(void)
{

loc_0020A0D0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0020A0F0u); RECOMP_ABI_CALL(0x0020BB30u, sub_0020BB30); /* call 0x0020BB30 */

loc_0020A0F0: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020A100
 * Original: 0x0020A100 - 0x0020A123 (35 bytes, 13 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A100(void)
{

loc_0020A100: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0020A120u); RECOMP_ABI_CALL(0x0020BB30u, sub_0020BB30); /* call 0x0020BB30 */

loc_0020A120: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020A130
 * Original: 0x0020A130 - 0x0020A16C (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A130: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3015D0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x0020A142u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0020A142: ;
    ecx = MEM32(esp + 0x18);
    esi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020A154u); RECOMP_ABI_CALL(0x002380E4u, sub_002380E4); /* call 0x002380E4 */

loc_0020A154: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020A161u); RECOMP_ABI_CALL(0x0020E050u, sub_0020E050); /* call 0x0020E050 */

loc_0020A161: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020A167u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0020A167: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020A170
 * Original: 0x0020A170 - 0x0020A1BB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A170: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3015F0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x0020A182u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0020A182: ;
    ecx = MEM32(esp + 0x1C);
    esi = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020A194u); RECOMP_ABI_CALL(0x002380E4u, sub_002380E4); /* call 0x002380E4 */

loc_0020A194: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020A1A6; /* jge: greater or equal (signed >=) */

loc_0020A1A2: ;
    MEM8(esi + eax) = 0;

loc_0020A1A6: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020A1B0u); RECOMP_ABI_CALL(0x0020E050u, sub_0020E050); /* call 0x0020E050 */

loc_0020A1B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020A1B6u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0020A1B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020A1C0
 * Original: 0x0020A1C0 - 0x0020A256 (150 bytes, 57 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A1C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0020A1CBu); RECOMP_ABI_CALL(0x0020C140u, sub_0020C140); /* call 0x0020C140 */

loc_0020A1CB: ;
    edi = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020A1E6u); RECOMP_ABI_CALL(0x0020C450u, sub_0020C450); /* call 0x0020C450 */

loc_0020A1E6: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edi = MEM32(esp + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0020A211u); RECOMP_ABI_CALL(0x0020C450u, sub_0020C450); /* call 0x0020C450 */

loc_0020A211: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020A240u); RECOMP_ABI_CALL(0x0020C450u, sub_0020C450); /* call 0x0020C450 */

loc_0020A240: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A24Fu); RECOMP_ABI_CALL(0x0020C450u, sub_0020C450); /* call 0x0020C450 */

loc_0020A24F: ;
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
 * sub_0020A260
 * Original: 0x0020A260 - 0x0020A2A9 (73 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A260(void)
{

loc_0020A260: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5E8); /* addss */
    edx = MEM32(esp + 0xC);
    MEMF(0x7AB608) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5E4); /* addss */
    MEMF(0x7AB604) = xmm0.f[0]; /* movss */
    MEM32(0x7AB5E0) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020A2B0
 * Original: 0x0020A2B0 - 0x0020A2C9 (25 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A2B0(void)
{

loc_0020A2B0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0020A2C6u); RECOMP_ABI_CALL(0x0020D2B0u, sub_0020D2B0); /* call 0x0020D2B0 */

loc_0020A2C6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020A2D0
 * Original: 0x0020A2D0 - 0x0020A2E9 (25 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A2D0(void)
{

loc_0020A2D0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0020A2E6u); RECOMP_ABI_CALL(0x0020D2B0u, sub_0020D2B0); /* call 0x0020D2B0 */

loc_0020A2E6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020A2F0
 * Original: 0x0020A2F0 - 0x0020A3E0 (240 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A2F0(void)
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

loc_0020A2F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0020A2FEu); RECOMP_ABI_CALL(0x0020E1F0u, sub_0020E1F0); /* call 0x0020E1F0 */

loc_0020A2FE: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x20);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A333u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A333: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0020A352u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A352: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E79C0)); /* fmul dword ptr [0x2e79c0] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD6C0)); /* fmul dword ptr [0x2dd6c0] */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020A380u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A380: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A38Bu); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A38B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E79C4)); /* fmul dword ptr [0x2e79c4] */
    ecx = esi;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020A3A7u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A3A7: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0020A3B5u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A3B5: ;
    ecx = esi;
    PUSH32(esp, 0x0020A3BCu); RECOMP_ABI_CALL(0x0020E1F0u, sub_0020E1F0); /* call 0x0020E1F0 */

loc_0020A3BC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0020A3C6u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A3C6: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0020A3D6u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A3D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_0020A3E0
 * Original: 0x0020A3E0 - 0x0020A4AD (205 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A3E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0020A3EBu); RECOMP_ABI_CALL(0x0020D380u, sub_0020D380); /* call 0x0020D380 */

loc_0020A3EB: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0020A420u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A420: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0020A43Fu); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A43F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD6C0)); /* fmul dword ptr [0x2dd6c0] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E79C4); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020A46Eu); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A46E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E79C0); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020A48Fu); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A48F: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0020A49Au); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A49A: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0020A4A6u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A4A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020A4B0
 * Original: 0x0020A4B0 - 0x0020A674 (452 bytes, 165 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A4B0(void)
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

loc_0020A4B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0020A4BEu); RECOMP_ABI_CALL(0x0020D380u, sub_0020D380); /* call 0x0020D380 */

loc_0020A4BE: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD6C0)); /* fmul dword ptr [0x2dd6c0] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD6C0)); /* fmul dword ptr [0x2dd6c0] */
    ebp = MEM32(esp + 0x1C);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ebx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD6C0)); /* fmul dword ptr [0x2dd6c0] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edi = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0020A534u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A534: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A542u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A542: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020A550u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A550: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020A562u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A562: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0020A574u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A574: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0020A58Au); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A58A: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A598u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A598: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A5AAu); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A5AA: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A5B4u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A5B4: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A5C2u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A5C2: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A5D0u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A5D0: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A5E2u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A5E2: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0020A5F4u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A5F4: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0020A60Au); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A60A: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0020A620u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A620: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020A632u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A632: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020A644u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A644: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020A652u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A652: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A660u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A660: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0020A66Au); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020A66A: ;
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
 * sub_0020A680
 * Original: 0x0020A680 - 0x0020A69A (26 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A680: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A695; /* jl: less (signed <) */

loc_0020A688: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020A690; /* jle: less or equal (signed <=) */

loc_0020A68C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A695; /* jne: not equal / not zero */

loc_0020A690: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0020A695: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A6A0
 * Original: 0x0020A6A0 - 0x0020AAFA (1114 bytes, 275 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A6A0(void)
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

loc_0020A6A0: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(0x7AB5C8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEMF(0x7AB5C4) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = esi;
    goto loc_0020A6D0;

    /* nop */

loc_0020A6D0: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E0838)); /* fmul dword ptr [0x2e0838] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020A6E8u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0020A6E8: ;
    MEMF(esp + esi * 4 + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020A6F2u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0020A6F2: ;
    MEMF(esp + esi * 4 + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0020A6D0; /* jl: less (signed <) */

loc_0020A703: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    goto loc_0020A730;

    /* nop */
    /* nop */

loc_0020A730: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    ebx = eax + 1;
    MEM32(esp + 0xC) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E0838)); /* fmul dword ptr [0x2e0838] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E0838)); /* fmul dword ptr [0x2e0838] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0020A75Du); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0020A75D: ;
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0020A767u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0020A767: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020A775u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0020A775: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020A77Fu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0020A77F: ;
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = esi + esi * 2;
    MEM32(eax * 4 + 0x7AB644) = ecx;
    eax = eax * 4 + 0x7AB640;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    eax = esi + esi * 2;
    MEMF(eax * 4 + 0x7AB644) = (float)fp_top(); fp_pop(); /* fstp */
    eax = eax * 4 + 0x7AB640;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    xmm2 = xmm5; /* movaps */
    xmm3 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5 = xmm7; /* movaps */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    eax = esi + esi * 2;
    MEMF(eax * 4 + 0x7AB644) = xmm3.f[0]; /* movss */
    eax = eax * 4 + 0x7AB640;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4 = xmm6; /* movaps */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm5 = xmm7; /* movaps */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    MEMF(eax * 4 + 0x7AB644) = xmm2.f[0]; /* movss */
    eax = eax * 4 + 0x7AB640;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    MEMF(eax * 4 + 0x7AB644) = xmm3.f[0]; /* movss */
    eax = eax * 4 + 0x7AB640;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4 = xmm6; /* movaps */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm5 = xmm7; /* movaps */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    MEMF(eax * 4 + 0x7AB644) = xmm2.f[0]; /* movss */
    eax = eax * 4 + 0x7AB640;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4 = xmm6; /* movaps */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm5 = xmm7; /* movaps */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4 = xmm6; /* movaps */
    xmm5 = xmm7; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4 = xmm6; /* movaps */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm5 = xmm7; /* movaps */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    xmm4 = xmm6; /* movaps */
    xmm5 = xmm7; /* movaps */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = esi + esi * 2;
    eax = eax * 4 + 0x7AB640;
    ecx = 0x20;

loc_0020AA92: ;
    xmm4 = XMM_SCALAR(MEMF(esp + ecx + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + ecx + 0x50)); /* movss */
    edx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm6 = xmm4; /* movaps */
    xmm7 = xmm5; /* movaps */
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx) = xmm6.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx + 8) = xmm7.f[0]; /* movss */
    edx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(edx) = xmm4.f[0]; /* movss */
    MEMF(edx + 4) = xmm3.f[0]; /* movss */
    MEMF(edx + 8) = xmm5.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0020AA92; /* jle: less or equal (signed <=) */

loc_0020AAE4: ;
    eax = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020A730; /* jl: less (signed <) */

loc_0020AAF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020AB00
 * Original: 0x0020AB00 - 0x0020AB16 (22 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AB00: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AB13u); RECOMP_ABI_CALL(0x0004D110u, sub_0004D110); /* call 0x0004D110 */

loc_0020AB13: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020AB20
 * Original: 0x0020AB20 - 0x0020AB46 (38 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AB20: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 0x10);
    MEM32(eax + 0x14) = 0;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0xC);
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020AB50
 * Original: 0x0020AB50 - 0x0020AD2E (478 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AB50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AB50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x7AB608) = xmm0.f[0]; /* movss */
    MEMF(0x7AB604) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB5C8)); /* movss */
    MEM32(0x7AB5E0) = 1;
    MEM32(0x7AB5EC) = 0;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x1C); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(0x7AB5E8) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 4);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x20); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x40); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(0x7AB5E4) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020ABD4u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0020ABD4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = xmm0; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = ecx;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(0x7AB614) = edx;
    MEM32(0x7AB618) = eax;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020AC60u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0020AC60: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    esi = MEM32(esi + 4);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x28) = ecx;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7AB5C8)); /* movss */
    MEM32(0x7AB61C) = eax;
    MEM32(0x7AB620) = ecx;
    MEMF(0x7AB5D8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020ACEEu); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0020ACEE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB5C8)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(0x7AB5D4) = xmm1.f[0]; /* movss */
    MEMF(0x7AB5D0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020AD13u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0020AD13: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5C8); /* addss */
    MEMF(0x7AB5CC) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020AD30
 * Original: 0x0020AD30 - 0x0020AE31 (257 bytes, 48 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AD30(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0020AD30: ;
    eax = MEM32(ecx + 4);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB5E8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x7AB5D8) = xmm2.f[0]; /* movss */
    edx = MEM32(ecx + 4);
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB5E4)); /* movss */
    MEMF(0x7AB5D4) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 4);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x7AB5D0) = xmm2.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x7AB5CC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020ADB5u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0020ADB5: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5C8); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020ADCCu); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0020ADCC: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB5C8)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AB5D8); /* comiss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020ADED; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AB5D8)) */

loc_0020ADE5: ;
    MEMF(0x7AB5D8) = xmm1.f[0]; /* movss */

loc_0020ADED: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AB5D4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020AE08; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0020AE00: ;
    MEMF(0x7AB5D4) = xmm2.f[0]; /* movss */

loc_0020AE08: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AB5D0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020AE19; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AB5D0)) */

loc_0020AE11: ;
    MEMF(0x7AB5D0) = xmm1.f[0]; /* movss */

loc_0020AE19: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB5CC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020AE2E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020AE26: ;
    MEMF(0x7AB5CC) = xmm0.f[0]; /* movss */

loc_0020AE2E: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020AE00
 * Original: 0x0020AE00 - 0x0020AE31 (49 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AE00(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0020AE00: ;
    MEMF(0x7AB5D4) = xmm2.f[0]; /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AB5D0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020AE19; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AB5D0)) */

loc_0020AE11: ;
    MEMF(0x7AB5D0) = xmm1.f[0]; /* movss */

loc_0020AE19: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB5CC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020AE2E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020AE26: ;
    MEMF(0x7AB5CC) = xmm0.f[0]; /* movss */

loc_0020AE2E: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020AE40
 * Original: 0x0020AE40 - 0x0020AE8F (79 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AE40(void)
{

loc_0020AE40: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB5C8)); /* movss */
    MEMF(0x7AB5D8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020AE55u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0020AE55: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB5C8)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(0x7AB5D4) = xmm1.f[0]; /* movss */
    MEMF(0x7AB5D0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020AE7Au); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0020AE7A: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5C8); /* addss */
    MEMF(0x7AB5CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0020AE90
 * Original: 0x0020AE90 - 0x0020AEEB (91 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020AE90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0020AE99u); RECOMP_ABI_CALL(0x0020D380u, sub_0020D380); /* call 0x0020D380 */

loc_0020AE99: ;
    esi = 0x7AB640;
    edi = edi;

loc_0020AEA0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = edi;
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0020AEDBu); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_0020AEDB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7ABD90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7ABD90 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020AEA0; /* jb: below (unsigned <) */

loc_0020AEE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020AEF0
 * Original: 0x0020AEF0 - 0x0020AF5C (108 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AEF0(void)
{

loc_0020AEF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEM32(ecx + 8) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020AF60
 * Original: 0x0020AF60 - 0x0020AF88 (40 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AF60(void)
{

loc_0020AF60: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi + 0x28;
    PUSH32(esp, 0x0020AF76u); RECOMP_ABI_CALL(0x0020AB00u, sub_0020AB00); /* call 0x0020AB00 */

loc_0020AF76: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0020AF7Eu); RECOMP_ABI_CALL(0x0020AEF0u, sub_0020AEF0); /* call 0x0020AEF0 */

loc_0020AF7E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0020AF83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020AF80u); } /* indirect call */
    }

loc_0020AF83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020AF90
 * Original: 0x0020AF90 - 0x0020AF98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AF90: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0020AB20(); return; /* tail jmp 0x0020AB20 */

}

/**
 * sub_0020AFA0
 * Original: 0x0020AFA0 - 0x0020B33B (923 bytes, 203 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AFA0(void)
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

loc_0020AFA0: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0xAC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0020B332; /* jl: less (signed <) */

loc_0020AFBA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_0020B331; /* jl: less (signed <) */

loc_0020AFDF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC0);
    goto loc_0020AFF2;

loc_0020AFEB: ;
    edx = MEM32(esp + 0xBC);

loc_0020AFF2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AFFD; /* jne: not equal / not zero */

loc_0020AFF6: ;
    eax = edx + -1;
    ebx = eax;
    goto loc_0020B000;

loc_0020AFFD: ;
    ebx = edi + -1;

loc_0020B000: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = edx + -1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020B018; /* jl: less (signed <) */

loc_0020B011: ;
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0020B01B;

loc_0020B018: ;
    ecx = edi + 1;

loc_0020B01B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + ebx * 8); /* subss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x7C);
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 8 + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + ebx * 8 + 4); /* subss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x80);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEM32(esp + 0x50) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0xA8) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020B09D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_0020B082: ;
    fp_push(MEMF(esp + 0xA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    goto loc_0020B0A0;

loc_0020B09D: ;
    xmm2 = xmm3; /* movaps */

loc_0020B0A0: ;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + ecx * 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + eax * 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + ecx * 8 + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + eax * 8 + 4); /* subss */
    ecx = MEM32(esp + 0x5C);
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x98);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x9C);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(esp + 0x28) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020B143; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0020B12B: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    goto loc_0020B146;

loc_0020B143: ;
    xmm0 = xmm3; /* movaps */

loc_0020B146: ;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x6C);
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x70);
    MEM32(esp + 0x14) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x18) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x34); /* subss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x44) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEM32(esp + 0x48) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020B1E3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0020B1CA: ;
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0020B1E3: ;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x24) = edx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xB8) / fp_top()); /* fdivr dword ptr [esp + 0xb8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x64);
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + eax * 8)); /* movss */
    MEM32(esp + 0x74) = ecx;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x74); /* addss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x90);
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 8)); /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x68);
    MEMF(esp + 0x84) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + eax * 8 + 4)); /* movss */
    ecx = MEM32(esp + 0x84);
    MEM32(esp + 0x78) = edx;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x78); /* addss */
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x88);
    MEM32(esp + 0xA0) = ebx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xA0); /* subss */
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    ebx = MEM32(esp + 0x94);
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 8 + 4)); /* movss */
    PUSH32(esp, edx);
    MEM32(esp + 0xA8) = ebx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xA8); /* subss */
    ebx = MEM32(esp + 0xB0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0xB8);
    PUSH32(esp, 0x0020B313u); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_0020B313: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020B31Eu); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_0020B31E: ;
    eax = MEM32(esp + 0xBC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020AFEB; /* jle: less or equal (signed <=) */

loc_0020B32E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0020B331: ;
    POP32(esp, edi);

loc_0020B332: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020B340
 * Original: 0x0020B340 - 0x0020B5D1 (657 bytes, 199 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B340(void)
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

loc_0020B340: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(eax));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020B36D; /* je: equal / zero */

loc_0020B35B: ;
    goto loc_0020B360;

    /* nop */

loc_0020B360: ;
    SET_LO8(ecx, MEM8(ebx + eax + 1));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B360; /* jne: not equal / not zero */

loc_0020B369: ;
    MEM32(esp + 0x10) = ebx;

loc_0020B36D: ;
    eax = MEM32(0x7AB5DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0020B38A; /* jne: not equal / not zero */

loc_0020B382: ;
    MEM32(esp + 0x1C) = 0x7ABD90;

loc_0020B38A: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0x0020B395u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_0020B395: ;
    eax = ZX8(MEM8(eax + 4));
    edx = MEM32(esp + 0x48);
    esi = MEM32(esp + 0x40);
    xmm1.f[0] = (float)(int32_t)MEM32(0x30F1B0); /* cvtsi2ss */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB600); /* mulss */
    ecx = edx;
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = edx;
    edx = MEM32(esp + 0x44);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0020B5C3; /* jle: less or equal (signed <=) */

loc_0020B3F6: ;
    ebp = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x34) = esi;
    goto loc_0020B410;

loc_0020B404: ;
    esi = MEM32(esp + 0x34);
    goto loc_0020B410;

    /* nop */

loc_0020B410: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x48) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020B5C7; /* jge: greater or equal (signed >=) */

loc_0020B41E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + ebp) = edi;
    esi = MEM32(esp + 0x3C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x40) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_0020B56A; /* jge: greater or equal (signed >=) */

loc_0020B43B: ;
    goto loc_0020B440;

    /* nop */

loc_0020B440: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + esi));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x0020B44Fu); RECOMP_ABI_CALL(0x0020A680u, sub_0020A680); /* call 0x0020A680 */

loc_0020B44F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B461; /* je: equal / zero */

loc_0020B453: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020B440; /* jl: less (signed <) */

loc_0020B458: ;
    goto loc_0020B56A;

loc_0020B45D: ;
    esi = MEM32(esp + 0x3C);

loc_0020B461: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020B56A; /* jge: greater or equal (signed >=) */

loc_0020B469: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x44) = 0;
    esi = edi;
    goto loc_0020B482;

loc_0020B47E: ;
    ebx = MEM32(esp + 0x10);

loc_0020B482: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020B541; /* jge: greater or equal (signed >=) */

loc_0020B48A: ;
    edx = MEM32(esp + 0x3C);
    SET_LO8(eax, MEM8(esi + edx));
    ecx = MEM32(esp + 0x1C);
    MEM8(esp + 0x28) = LO8(eax);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    ebx = esi;
    PUSH32(esp, 0x0020B4A5u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_0020B4A5: ;
    ecx = ZX8(MEM8(eax + 4));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x44);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB600); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0020B4D5u); RECOMP_ABI_CALL(0x0020A680u, sub_0020A680); /* call 0x0020A680 */

loc_0020B4D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B539; /* jne: not equal / not zero */

loc_0020B4D9: ;
    edx = MEM32(esp + 0x10);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B539; /* je: equal / zero */

loc_0020B4E2: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x2C); /* comiss */
    if ((_fca > _fcb)) goto loc_0020B51C; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x2C)) */

loc_0020B4F3: ;
    _fa = (uint32_t)(MEM8(esp + 0x28)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x28), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B47E; /* jne: not equal / not zero */

loc_0020B4FA: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(MEM8(ebx + eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + eax + 1), 0x6E (8-bit) */
    ebx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_0020B482; /* jne: not equal / not zero */

loc_0020B50D: ;
    ecx = MEM32(esp + 0x44);
    MEM8(esp + 0x40) = 1;
    edi = edi + ecx + -1;
    goto loc_0020B541;

loc_0020B51C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = MEM32(esp + 0x10);
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM8(esp + 0x40) = 1;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0020B53D; /* jnp: not parity */

loc_0020B531: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0020B541;

loc_0020B539: ;
    ebx = MEM32(esp + 0x10);

loc_0020B53D: ;
    _fb = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020B541: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x2C); /* comiss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_0020B566; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 0x2C)) */

loc_0020B55A: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B45D; /* je: equal / zero */

loc_0020B566: ;
    esi = MEM32(esp + 0x3C);

loc_0020B56A: ;
    ebp = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x24);
    MEM32(ebp) = edi;

loc_0020B575: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020B588; /* jge: greater or equal (signed >=) */

loc_0020B579: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + esi));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020B584u); RECOMP_ABI_CALL(0x0020A680u, sub_0020A680); /* call 0x0020A680 */

loc_0020B584: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B59E; /* jne: not equal / not zero */

loc_0020B588: ;
    edx = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020B5AB; /* jge: greater or equal (signed >=) */

loc_0020B58F: ;
    SET_LO8(edx, MEM8(edi + esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B5AB; /* jne: not equal / not zero */

loc_0020B597: ;
    _fa = (uint32_t)(MEM8(edi + esi + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + esi + 1), 0x6E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B5AB; /* jne: not equal / not zero */

loc_0020B59E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B5A8; /* jne: not equal / not zero */

loc_0020B5A3: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020B575;

loc_0020B5A8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0020B575;

loc_0020B5AB: ;
    edx = MEM32(esp + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x30) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0020B404; /* jl: less (signed <) */

loc_0020B5C3: ;
    eax = MEM32(esp + 0x14);

loc_0020B5C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020B5E0
 * Original: 0x0020B5E0 - 0x0020B633 (83 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B5E0(void)
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

loc_0020B5E0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xA);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B5F9u); RECOMP_ABI_CALL(0x0020B340u, sub_0020B340); /* call 0x0020B340 */

loc_0020B5F9: ;
    ecx = MEM32(0x7AB5DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0020B60B; /* jne: not equal / not zero */

loc_0020B606: ;
    ecx = 0x7ABD90;

loc_0020B60B: ;
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0x0020B612u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_0020B612: ;
    ecx = ZX8(MEM8(eax + 5));
    MEM32(esp + 0x58) = ecx;
    fp_push((double)SMEM32(esp + 0x58)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB5FC)); /* fmul dword ptr [0x7ab5fc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x30F1B4)); /* fadd dword ptr [0x30f1b4] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp)); /* fimul dword ptr [esp] */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_0020B640
 * Original: 0x0020B640 - 0x0020B76E (302 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B640(void)
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

loc_0020B640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020B668; /* je: equal / zero */

loc_0020B65B: ;
    eax = edi;
    /* nop */

loc_0020B660: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B660; /* jne: not equal / not zero */

loc_0020B668: ;
    PUSH32(esp, 0xA);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B67Au); RECOMP_ABI_CALL(0x0020B340u, sub_0020B340); /* call 0x0020B340 */

loc_0020B67A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB608)); /* movss */
    esi = eax;
    eax = MEM32(0x7AB5DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0020B69C; /* jne: not equal / not zero */

loc_0020B697: ;
    eax = 0x7ABD90;

loc_0020B69C: ;
    PUSH32(esp, 0x4D);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B6A5u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_0020B6A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    eax = ZX8(MEM8(eax + 5));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB5FC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x30F1B4); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0020B6E7; /* jle: less or equal (signed <=) */

loc_0020B6C8: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AB604)); /* movss */
    ecx = esi + -1;
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x7AB604) = xmm2.f[0]; /* movss */

loc_0020B6E7: ;
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0020B761; /* jle: less or equal (signed <=) */

loc_0020B6FB: ;
    goto loc_0020B700;

loc_0020B6FD: ;
    edi = MEM32(ebp + 8);

loc_0020B700: ;
    edx = MEM32(esp + ebx * 4 + 0x20);
    eax = MEM32(esp + ebx * 4 + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edx + edi;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esp + 0x70;
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
    ecx = edx;
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
    ecx = MEM32(esp + 0x18);
    MEM8(esp + eax + 0x70) = 0;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B734u); RECOMP_ABI_CALL(0x0020E050u, sub_0020E050); /* call 0x0020E050 */

loc_0020B734: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(0x7AB608) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB604)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEMF(0x7AB604) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_0020B6FD; /* jl: less (signed <) */

loc_0020B761: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
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
 * sub_0020B770
 * Original: 0x0020B770 - 0x0020B798 (40 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B770(void)
{

loc_0020B770: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi + 0x14;
    PUSH32(esp, 0x0020B786u); RECOMP_ABI_CALL(0x0020AB00u, sub_0020AB00); /* call 0x0020AB00 */

loc_0020B786: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0020B78Eu); RECOMP_ABI_CALL(0x0020A070u, sub_0020A070); /* call 0x0020A070 */

loc_0020B78E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0020B793u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B790u); } /* indirect call */
    }

loc_0020B793: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020B7A0
 * Original: 0x0020B7A0 - 0x0020B7CA (42 bytes, 12 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B7A0(void)
{

loc_0020B7A0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B7B0u); RECOMP_ABI_CALL(0x0020B770u, sub_0020B770); /* call 0x0020B770 */

loc_0020B7B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020B7D0
 * Original: 0x0020B7D0 - 0x0020B7FF (47 bytes, 18 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B7D0(void)
{

loc_0020B7D0: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B7E0u); RECOMP_ABI_CALL(0x0020B770u, sub_0020B770); /* call 0x0020B770 */

loc_0020B7E0: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020B7FBu); RECOMP_ABI_CALL(0x00209BD0u, sub_00209BD0); /* call 0x00209BD0 */

loc_0020B7FB: ;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0020B800
 * Original: 0x0020B800 - 0x0020B808 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B800: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0020AB20(); return; /* tail jmp 0x0020AB20 */

}

/**
 * sub_0020B810
 * Original: 0x0020B810 - 0x0020B85C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B810: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B85A; /* je: equal / zero */

loc_0020B81A: ;
    /* nop */

loc_0020B820: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B851; /* jne: not equal / not zero */

loc_0020B827: ;
    eax = MEM32(esi + 8);
    MEM32(0x7AB60C) = eax;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020B837u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B834u); } /* indirect call */
    }

loc_0020B837: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020B83Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B83Cu); } /* indirect call */
    }

loc_0020B83F: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0020B847u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020B844u); } /* indirect call */
    }

loc_0020B847: ;
    MEM32(0x7AB60C) = 0;

loc_0020B851: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B820; /* jne: not equal / not zero */

loc_0020B85A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B860
 * Original: 0x0020B860 - 0x0020B8A6 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B860(void)
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

loc_0020B860: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x301610);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x0020B873u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0020B873: ;
    ecx = MEM32(esp + 0x1C);
    esi = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B885u); RECOMP_ABI_CALL(0x002380E4u, sub_002380E4); /* call 0x002380E4 */

loc_0020B885: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B892u); RECOMP_ABI_CALL(0x0020B640u, sub_0020B640); /* call 0x0020B640 */

loc_0020B892: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B89Cu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0020B89C: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0020B8B0
 * Original: 0x0020B8B0 - 0x0020B8F6 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B8B0(void)
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

loc_0020B8B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x301630);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x0020B8C3u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0020B8C3: ;
    ecx = MEM32(esp + 0x1C);
    esi = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B8D5u); RECOMP_ABI_CALL(0x002380E4u, sub_002380E4); /* call 0x002380E4 */

loc_0020B8D5: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B8E2u); RECOMP_ABI_CALL(0x0020B5E0u, sub_0020B5E0); /* call 0x0020B5E0 */

loc_0020B8E2: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020B8ECu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0020B8EC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0020B900
 * Original: 0x0020B900 - 0x0020BA60 (352 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B900: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020BA52; /* je: equal / zero */

loc_0020B912: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(0x842E20);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0020B95Au); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0020B95A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020B966; /* jge: greater or equal (signed >=) */

loc_0020B961: ;
    eax = esi + 0x10;
    goto loc_0020B96C;

loc_0020B966: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 4;

loc_0020B96C: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020B9A0; /* je: equal / zero */

loc_0020B973: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0xC);
    edi = MEM32(eax + 4);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;

loc_0020B9A0: ;
    ecx = MEM32(0x7934C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020B9ACu); RECOMP_ABI_CALL(0x000C2740u, sub_000C2740); /* call 0x000C2740 */

loc_0020B9AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BA59; /* je: equal / zero */

loc_0020B9B4: ;
    ecx = ZX16(MEM16(eax + 0x28));
    edx = ZX16(MEM16(eax + 0x2A));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 4); /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 8); /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEM32(0x7AB624) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(0x7AB628) = ecx;
    MEM32(0x7AB62C) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(0x7AB630) = eax;
    MEM32(0x7AB634) = ecx;
    MEM32(0x7AB638) = edx;

loc_0020BA52: ;
    eax = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0020BA59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020BA60
 * Original: 0x0020BA60 - 0x0020BACA (106 bytes, 41 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA60(void)
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

loc_0020BA60: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BABD; /* je: equal / zero */

loc_0020BA73: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(0x842E24);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020BA90u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0020BA90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020BA9C; /* jge: greater or equal (signed >=) */

loc_0020BA97: ;
    eax = esi + 0x10;
    goto loc_0020BAA2;

loc_0020BA9C: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 4;

loc_0020BAA2: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0020BAAE; /* jne: not equal / not zero */

loc_0020BAA9: ;
    ecx = 0x7ABD90;

loc_0020BAAE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020BAB4u); RECOMP_ABI_CALL(0x00217220u, sub_00217220); /* call 0x00217220 */

loc_0020BAB4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0020BABD: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020BAD0
 * Original: 0x0020BAD0 - 0x0020BB21 (81 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BAD0(void)
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

loc_0020BAD0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x842E24);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020BAEDu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0020BAED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020BAF9; /* jge: greater or equal (signed >=) */

loc_0020BAF4: ;
    eax = esi + 0x10;
    goto loc_0020BAFF;

loc_0020BAF9: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 4;

loc_0020BAFF: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0020BB0B; /* jne: not equal / not zero */

loc_0020BB06: ;
    eax = 0x7ABD90;

loc_0020BB0B: ;
    edx = ZX8(MEM8(eax + 0xA04));
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020BB30
 * Original: 0x0020BB30 - 0x0020BC94 (356 bytes, 87 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BB30: ;
    eax = MEM32(0x7AC814);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020BB49; /* jl: less (signed <) */

loc_0020BB3C: ;
    eax = MEM32(0x7AC804);
    MEM32(0x7AC7E8) = eax;
    esp += 28; return; /* ret 24 */

loc_0020BB49: ;
    ecx = MEM32(0x7AC810);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(0x7AC818) = eax;
    PUSH32(esp, edx);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0020BB6Bu); RECOMP_ABI_CALL(0x0020B900u, sub_0020B900); /* call 0x0020B900 */

loc_0020BB6B: ;
    ecx = MEM32(0x7AC818);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x7AC818);
    ecx = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 4) = ebx;
    eax = MEM32(0x7AC818);
    esi = MEM32(eax + 4);
    edx = ecx;
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx * 4 + 0x301650);
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BBB3; /* je: equal / zero */

loc_0020BBA7: ;
    eax = MEM32(0x7AC818);
    MEM32(eax + 4) = MEM32(eax + 4) | 0x10000;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020BBB3: ;
    _fa = (uint32_t)(MEM8(esp + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x20), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BBC5; /* je: equal / zero */

loc_0020BBB9: ;
    eax = MEM32(0x7AC818);
    MEM32(eax + 4) = MEM32(eax + 4) | 0x20000;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020BBC5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020BBD9; /* je: equal / zero */

loc_0020BBCD: ;
    eax = MEM32(0x7AC818);
    MEM32(eax + 4) = MEM32(eax + 4) | 0x40000;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020BBD9: ;
    eax = MEM32(esp + 0x14);
    ecx = ZX8(MEM8(esp + 0x16));
    edx = eax;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x7AC818);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x7AC818);
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(0x7AB5D8), g_mxcsr, 1); /* cvttss2si */
    MEM16(edx + 0x10) = LO16(ecx);
    ecx = MEM32(0x7AC818);
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(0x7AB5D0), g_mxcsr, 1); /* cvttss2si */
    MEM16(ecx + 0x12) = LO16(eax);
    eax = MEM32(0x7AC818);
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(0x7AB5D4), g_mxcsr, 1); /* cvttss2si */
    MEM16(eax + 0x14) = LO16(edx);
    edx = MEM32(0x7AC818);
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(0x7AB5CC), g_mxcsr, 1); /* cvttss2si */
    MEM16(edx + 0x16) = LO16(ecx);
    edx = MEM32(0x7AC800);
    ecx = MEM32(0x7AC804);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(0x7AC818);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x18) = LO16(eax);
    edx = MEM32(0x7AC818);
    MEM16(edx + 0x1A) = LO16(ebx);
    eax = MEM32(0x7AC814);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM8(0x7AC7E5) = LO8(ebx);
    MEM8(0x7AC7E4) = LO8(ebx);
    MEM32(0x7AC814) = eax;
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0020BCA0
 * Original: 0x0020BCA0 - 0x0020BD1D (125 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BCA0: ;
    SET_LO8(eax, MEM8(0x7AC7E5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020BD1C; /* je: equal / zero */

loc_0020BCA9: ;
    eax = MEM32(0x7AC814);
    ecx = MEM32(0x7AC810);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = eax + -28;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(0x7AC818) = edi;
    ecx = 7;
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
    eax = MEM32(0x7AC800);
    ecx = MEM32(0x7AC804);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(0x7AC818);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x18) = LO16(eax);
    edx = MEM32(0x7AC818);
    MEM16(edx + 0x1A) = 0;
    eax = MEM32(0x7AC814);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x7AC814) = eax;
    MEM8(0x7AC7E5) = 0;
    MEM8(0x7AC7E4) = 0;
    POP32(esp, esi);

loc_0020BD1C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BD20
 * Original: 0x0020BD20 - 0x0020BD89 (105 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BD20: ;
    eax = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7EC)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7F0)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC7F4);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7F8)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7FC)); /* movss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC818);
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x7AC804) = MEM32(0x7AC804) + 0x14;
    _fa = (uint32_t)(MEM32(0x7AC804)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020BD90
 * Original: 0x0020BD90 - 0x0020BDBF (47 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BD90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BD90: ;
    eax = MEM32(0x7AC820);
    ecx = MEM32(eax * 4 + 0x7AC7C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1800);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020BDAAu); RECOMP_ABI_CALL(0x00216A30u, sub_00216A30); /* call 0x00216A30 */

loc_0020BDAA: ;
    MEM32(0x7AC7C0) = eax;
    MEM32(0x7AC7C4) = eax;
    _fb = (uint32_t)(0x23FA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x23FA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC7A4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BDC0
 * Original: 0x0020BDC0 - 0x0020BE43 (131 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BDC0: ;
    eax = MEM32(0x7AC7C4);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7A8)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x7AC7C4);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7AC)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7B0)); /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    ecx = MEM32(0x7AC7B4);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x7AC7C4);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7B8)); /* movss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7BC)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    eax = MEM32(0x7AC7D8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC7C4) = edx;
    MEM16(eax + 0x52) = MEM16(eax + 0x52) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0020BDD7
 * Original: 0x0020BDD7 - 0x0020BE43 (108 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BDD7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BDD7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AC7AC)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7B0)); /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    ecx = MEM32(0x7AC7B4);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x7AC7C4);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7B8)); /* movss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7BC)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    eax = MEM32(0x7AC7D8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC7C4) = edx;
    MEM16(eax + 0x52) = MEM16(eax + 0x52) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0020BDF7
 * Original: 0x0020BDF7 - 0x0020BE43 (76 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BDF7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BDF7: ;
    eax = MEM32(0x7AC7C4);
    ecx = MEM32(0x7AC7B4);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x7AC7C4);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7B8)); /* movss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7BC)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    eax = MEM32(0x7AC7D8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC7C4) = edx;
    MEM16(eax + 0x52) = MEM16(eax + 0x52) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0020BE50
 * Original: 0x0020BE50 - 0x0020BEA4 (84 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BE50: ;
    eax = MEM32(0x7AC814);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C4 (32-bit) */
    MEM32(0x7AC7E0) = 2;
    if (CMP_L(_fas, _fbs)) goto loc_0020BE71; /* jl: less (signed <) */

loc_0020BE66: ;
    eax = MEM32(0x7AC804);
    MEM32(0x7AC7E8) = eax;
    esp += 4; return; /* ret */

loc_0020BE71: ;
    ecx = MEM32(0x7AC810);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC818) = eax;
    MEM32(eax) = 0x1001;
    ecx = MEM32(0x7AC818);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 0x1A) = LO16(eax);
    MEM32(0x7AC814) = MEM32(0x7AC814) + 1;
    _fa = (uint32_t)(MEM32(0x7AC814)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x7AC7E5) = LO8(eax);
    MEM8(0x7AC7E4) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0020BEB0
 * Original: 0x0020BEB0 - 0x0020BF5E (174 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020BEB0: ;
    eax = MEM32(0x7AC814);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020BEC7; /* jl: less (signed <) */

loc_0020BEBC: ;
    eax = MEM32(0x7AC804);
    MEM32(0x7AC7E8) = eax;
    esp += 4; return; /* ret */

loc_0020BEC7: ;
    ecx = MEM32(0x7AC810);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEM32(0x7AC818) = eax;
    MEM32(eax) = 0x2000;
    ecx = MEM32(0x7AC818);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 0x1A) = LO16(eax);
    edx = MEM32(0x7AC814);
    ecx = MEM32(0x7AC810);
    MEM8(0x7AC7E5) = LO8(eax);
    MEM8(0x7AC7E4) = LO8(eax);
    MEM32(0x7AC7E0) = eax;
    eax = MEM32(0x7AC7DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x7AC814) = edx;
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(0x7AC834), g_mxcsr, 1); /* cvttss2si */
    MEM16(eax + 0x10) = LO16(edx);
    xmm1 = XMM_SCALAR(MEMF(0x7AC83C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    MEM16(eax + 0x14) = LO16(ecx);
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(0x7AC838), g_mxcsr, 1); /* cvttss2si */
    MEM16(eax + 0x12) = LO16(edx);
    xmm1 = XMM_SCALAR(MEMF(0x7AC840)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    MEM16(eax + 0x16) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020BF60
 * Original: 0x0020BF60 - 0x0020C007 (167 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0020BF60: ;
    eax = MEM32(0x7AC7E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C004; /* je: equal / zero */

loc_0020BF6D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB5D8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0020BF8D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0020BF80: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB5D4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020BF90; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020BF8D: ;
    xmm1 = xmm0; /* movaps */

loc_0020BF90: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AB5D0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0020BFB0; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0020BFA3: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AB5CC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020BFB3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0020BFB0: ;
    xmm0 = xmm2; /* movaps */

loc_0020BFB3: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AC83C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020BFC6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AC83C)) */

loc_0020BFBC: ;
    MEMF(0x7AC83C) = xmm1.f[0]; /* movss */
    goto loc_0020BFDB;

loc_0020BFC6: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AC834)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020BFDB; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0020BFD3: ;
    MEMF(0x7AC834) = xmm1.f[0]; /* movss */

loc_0020BFDB: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AC840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020BFEF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AC840)) */

loc_0020BFE4: ;
    MEMF(0x7AC840) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0020BFEF: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AC838)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020C004; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020BFFC: ;
    MEMF(0x7AC838) = xmm0.f[0]; /* movss */

loc_0020C004: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020C010
 * Original: 0x0020C010 - 0x0020C041 (49 bytes, 7 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C010(void)
{

loc_0020C010: ;
    xmm0 = XMM_SCALAR(MEMF(0x2F1E98)); /* movss */
    MEMF(0x7AC840) = xmm0.f[0]; /* movss */
    MEMF(0x7AC83C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC424)); /* movss */
    MEMF(0x7AC838) = xmm0.f[0]; /* movss */
    MEMF(0x7AC834) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0020C050
 * Original: 0x0020C050 - 0x0020C0F1 (161 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C050: ;
    eax = MEM32(0x7AC810);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020C05Du); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0020C05D: ;
    ecx = MEM32(0x7AC7D0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020C069u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0020C069: ;
    ecx = MEM32(0x7AC808);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C088; /* je: equal / zero */

loc_0020C07A: ;
    PUSH32(esp, 0x0020C07Fu); RECOMP_ABI_CALL(0x00216A50u, sub_00216A50); /* call 0x00216A50 */

loc_0020C07F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020C085u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0020C085: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C088: ;
    ecx = MEM32(0x7AC80C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x7AC808) = edi;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C0A8; /* je: equal / zero */

loc_0020C09A: ;
    PUSH32(esp, 0x0020C09Fu); RECOMP_ABI_CALL(0x00216A50u, sub_00216A50); /* call 0x00216A50 */

loc_0020C09F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020C0A5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0020C0A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C0A8: ;
    ecx = MEM32(0x7AC7C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x7AC80C) = edi;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C0C8; /* je: equal / zero */

loc_0020C0BA: ;
    PUSH32(esp, 0x0020C0BFu); RECOMP_ABI_CALL(0x00216A50u, sub_00216A50); /* call 0x00216A50 */

loc_0020C0BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020C0C5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0020C0C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C0C8: ;
    ecx = MEM32(0x7AC7CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x7AC7C8) = edi;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C0E8; /* je: equal / zero */

loc_0020C0DA: ;
    PUSH32(esp, 0x0020C0DFu); RECOMP_ABI_CALL(0x00216A50u, sub_00216A50); /* call 0x00216A50 */

loc_0020C0DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020C0E5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0020C0E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C0E8: ;
    MEM32(0x7AC7CC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020C100
 * Original: 0x0020C100 - 0x0020C13E (62 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C100: ;
    eax = MEM32(0x7AC81C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C10F; /* je: equal / zero */

loc_0020C109: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020C10Fu); RECOMP_ABI_CALL(0x002892F0u, sub_002892F0); /* call 0x002892F0 */

loc_0020C10F: ;
    eax = MEM32(0x7AC820);
    ecx = MEM32(eax * 4 + 0x7AC808);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C00);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020C129u); RECOMP_ABI_CALL(0x00216A30u, sub_00216A30); /* call 0x00216A30 */

loc_0020C129: ;
    MEM32(0x7AC800) = eax;
    MEM32(0x7AC804) = eax;
    _fb = (uint32_t)(0x36F88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x36F88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC7E8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C140
 * Original: 0x0020C140 - 0x0020C15E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C140: ;
    SET_LO8(eax, MEM8(0x7AC7E5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C156; /* je: equal / zero */

loc_0020C149: ;
    PUSH32(esp, 0x0020C14Eu); RECOMP_ABI_CALL(0x0020BD20u, sub_0020BD20); /* call 0x0020BD20 */

loc_0020C14E: ;
    MEM8(0x7AC7E4) = 1;
    esp += 4; return; /* ret */

loc_0020C156: ;
    MEM8(0x7AC7E4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C160
 * Original: 0x0020C160 - 0x0020C2C5 (357 bytes, 72 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C160: ;
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC7E8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020C2BF; /* jae: above or equal (unsigned >=) */

loc_0020C176: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB61C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x7AB5E8)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    eax = MEM32(esp);
    xmm1 = XMM_SCALAR(MEMF(0x7AB620)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(esp + 8) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x7AB614)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0xC) = eax;
    MEMF(esp) = xmm1.f[0]; /* movss */
    eax = MEM32(esp);
    xmm1 = XMM_SCALAR(MEMF(0x7AB618)); /* movss */
    MEM32(esp + 0x10) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM32(esp + 0x14) = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    eax = MEM32(esp);
    MEM32(esp + 0x10) = eax;
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AB5E4)); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    eax = MEM32(0x7AC818);
    MEMF(0x7AC7F0) = xmm0.f[0]; /* movss */
    MEMF(0x7AC7EC) = xmm3.f[0]; /* movss */
    eax = MEM32(eax + 0xC);
    MEM32(0x7AC7F4) = eax;
    eax = MEM32(0x7AC7F0);
    PUSH32(esp, eax);
    eax = MEM32(0x7AC7EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020C262u); RECOMP_ABI_CALL(0x0020BF60u, sub_0020BF60); /* call 0x0020BF60 */

loc_0020C262: ;
    MEMF(edx) = xmm3.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7F0)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC818);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(0x7AC804);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC818);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(0x7AC7E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C2B8; /* je: equal / zero */

loc_0020C2AC: ;
    PUSH32(esp, 0x0020C2B1u); RECOMP_ABI_CALL(0x0020BD20u, sub_0020BD20); /* call 0x0020BD20 */

loc_0020C2B1: ;
    MEM8(0x7AC7E4) = 0;

loc_0020C2B8: ;
    MEM8(0x7AC7E5) = 1;

loc_0020C2BF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020C2D0
 * Original: 0x0020C2D0 - 0x0020C44B (379 bytes, 81 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C2D0: ;
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC7E8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020C445; /* jae: above or equal (unsigned >=) */

loc_0020C2E6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB61C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    eax = MEM32(esp);
    xmm1 = XMM_SCALAR(MEMF(0x7AB620)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(esp + 8) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x7AB614)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0xC) = eax;
    xmm3 = XMM_SCALAR(MEMF(0x7AB5E8)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    eax = MEM32(esp);
    xmm1 = XMM_SCALAR(MEMF(0x7AB618)); /* movss */
    MEM32(esp + 0x10) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM32(esp + 0x14) = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    eax = MEM32(esp);
    MEM32(esp + 0x10) = eax;
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x10); /* addss */
    PUSH32(esp, esi);
    esi = ZX8(MEM8(esp + 0x2A));
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7AB5E4)); /* movss */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x28);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, edi);
    edi = eax;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(0x7AC7F0) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC7F0);
    PUSH32(esp, eax);
    MEMF(0x7AC7EC) = xmm3.f[0]; /* movss */
    eax = MEM32(0x7AC7EC);
    PUSH32(esp, eax);
    MEM32(0x7AC7F4) = esi;
    PUSH32(esp, 0x0020C3EAu); RECOMP_ABI_CALL(0x0020BF60u, sub_0020BF60); /* call 0x0020BF60 */

loc_0020C3EA: ;
    MEMF(edx) = xmm3.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7F0)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC7F4);
    MEM32(edx + 8) = eax;
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC818);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(0x7AC7E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020C43E; /* je: equal / zero */

loc_0020C432: ;
    PUSH32(esp, 0x0020C437u); RECOMP_ABI_CALL(0x0020BD20u, sub_0020BD20); /* call 0x0020BD20 */

loc_0020C437: ;
    MEM8(0x7AC7E4) = 0;

loc_0020C43E: ;
    MEM8(0x7AC7E5) = 1;

loc_0020C445: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020C450
 * Original: 0x0020C450 - 0x0020C6D4 (644 bytes, 124 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C450: ;
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC7E8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020C6CE; /* jae: above or equal (unsigned >=) */

loc_0020C466: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB61C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    eax = MEM32(esp);
    xmm1 = XMM_SCALAR(MEMF(0x7AB620)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 8) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x7AB614)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0xC) = eax;
    MEMF(esp) = xmm1.f[0]; /* movss */
    eax = MEM32(esp);
    xmm1 = XMM_SCALAR(MEMF(0x7AB618)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp + 0x10) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x7AB634)); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    eax = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 4);
    MEM32(esp + 0x1C) = eax;
    xmm3 = XMM_SCALAR(MEMF(0x7AB5E8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x7AB638)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(0x7AB62C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 4) = eax;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x7AB630)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 8) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB624); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB628)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEM32(esp + 8) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5E4); /* addss */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x7AC818);
    MEMF(0x7AC7EC) = xmm3.f[0]; /* movss */
    MEMF(0x7AC7F0) = xmm0.f[0]; /* movss */
    eax = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(0x7AC7F4) = eax;
    eax = MEM32(0x7AC7F0);
    PUSH32(esp, eax);
    eax = MEM32(0x7AC7EC);
    MEMF(0x7AC7F8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, eax);
    MEMF(0x7AC7FC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020C64Cu); RECOMP_ABI_CALL(0x0020BF60u, sub_0020BF60); /* call 0x0020BF60 */

loc_0020C64C: ;
    MEMF(edx) = xmm3.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7F0)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC818);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(0x7AC804);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7F8)); /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7FC)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC818);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(0x7AC7E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C6C7; /* je: equal / zero */

loc_0020C6BB: ;
    PUSH32(esp, 0x0020C6C0u); RECOMP_ABI_CALL(0x0020BD20u, sub_0020BD20); /* call 0x0020BD20 */

loc_0020C6C0: ;
    MEM8(0x7AC7E4) = 0;

loc_0020C6C7: ;
    MEM8(0x7AC7E5) = 1;

loc_0020C6CE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020C638
 * Original: 0x0020C638 - 0x0020C6D4 (156 bytes, 31 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C638(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C638: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, eax);
    MEMF(0x7AC7FC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020C64Cu); RECOMP_ABI_CALL(0x0020BF60u, sub_0020BF60); /* call 0x0020BF60 */

loc_0020C64C: ;
    MEMF(edx) = xmm3.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7F0)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC818);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(0x7AC804);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7F8)); /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7FC)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC818);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(0x7AC7E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C6C7; /* je: equal / zero */

loc_0020C6BB: ;
    PUSH32(esp, 0x0020C6C0u); RECOMP_ABI_CALL(0x0020BD20u, sub_0020BD20); /* call 0x0020BD20 */

loc_0020C6C0: ;
    MEM8(0x7AC7E4) = 0;

loc_0020C6C7: ;
    MEM8(0x7AC7E5) = 1;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020C6E0
 * Original: 0x0020C6E0 - 0x0020C97B (667 bytes, 133 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C6E0: ;
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC7E8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020C975; /* jae: above or equal (unsigned >=) */

loc_0020C6F6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB61C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    eax = MEM32(esp);
    xmm1 = XMM_SCALAR(MEMF(0x7AB620)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 8) = eax;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x7AB614)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0xC) = eax;
    MEMF(esp) = xmm1.f[0]; /* movss */
    eax = MEM32(esp);
    xmm1 = XMM_SCALAR(MEMF(0x7AB618)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp + 0x10) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(0x7AB634)); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    eax = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 4);
    xmm3 = XMM_SCALAR(MEMF(0x7AB5E8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x18); /* addss */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x7AB638)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp) = eax;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(0x7AB62C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 4) = eax;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x7AB630)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 8) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB624); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB628)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEM32(esp + 8) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM32(esp + 0xC) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5E4); /* addss */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    MEMF(0x7AC7EC) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    esi = ZX8(MEM8(esp + 0x3E));
    edi = eax;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(0x7AC7F0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x7AC7F0);
    PUSH32(esp, eax);
    eax = MEM32(0x7AC7EC);
    MEMF(0x7AC7F8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, eax);
    MEM32(0x7AC7F4) = esi;
    MEMF(0x7AC7FC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020C8F4u); RECOMP_ABI_CALL(0x0020BF60u, sub_0020BF60); /* call 0x0020BF60 */

loc_0020C8F4: ;
    MEMF(edx) = xmm3.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7F0)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC7F4);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7F8)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AC7FC)); /* movss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC818);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(0x7AC7E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020C96E; /* je: equal / zero */

loc_0020C962: ;
    PUSH32(esp, 0x0020C967u); RECOMP_ABI_CALL(0x0020BD20u, sub_0020BD20); /* call 0x0020BD20 */

loc_0020C967: ;
    MEM8(0x7AC7E4) = 0;

loc_0020C96E: ;
    MEM8(0x7AC7E5) = 1;

loc_0020C975: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020C980
 * Original: 0x0020C980 - 0x0020CF1C (1436 bytes, 286 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C980: ;
    eax = MEM32(0x7AC804);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7AC7E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x7AC7E8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020CF15; /* jae: above or equal (unsigned >=) */

loc_0020C997: ;
    xmm4 = XMM_SCALAR(MEMF(0x7AB61C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7AB620)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB614)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AB634)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AB62C)); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    edx = MEM32(esp + 8);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 4);
    xmm2 = XMM_SCALAR(MEMF(0x7AB618)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x14); /* addss */
    MEM32(esp + 0x10) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    edx = MEM32(esp + 4);
    MEM32(esp + 0x18) = ecx;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    eax = MEM32(esp + 8);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    xmm3 = XMM_SCALAR(MEMF(0x7AB638)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AB630)); /* movss */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x14);
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x7AB624)); /* movss */
    MEM32(esp + 0xC) = eax;
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x7AB628)); /* movss */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 8) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = ecx;
    xmm7.f[0] = xmm7.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM32(esp + 0xC) = edx;
    xmm7.f[0] = xmm7.f[0] + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = eax;
    xmm7.f[0] = xmm7.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    eax = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x40); /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB614)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x54); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(0x7AB618)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x50); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 4) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 8) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB634); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB638)); /* movss */
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB62C); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB630)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB628); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(0x7AC7E5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020CD2B; /* je: equal / zero */

loc_0020CCBC: ;
    PUSH32(esp, 0x0020CCC1u); RECOMP_ABI_CALL(0x0020BD20u, sub_0020BD20); /* call 0x0020BD20 */

loc_0020CCC1: ;
    edx = MEM32(0x7AC804);
    xmm0 = XMM_SCALAR(MEMF(0x7AB5E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5E4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x7AC818);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(0x7AC804);
    MEM32(eax + 8) = edx;
    ecx = MEM32(0x7AC804);
    MEMF(ecx + 0xC) = xmm4.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    MEMF(edx + 0x10) = xmm7.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC818);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0020CD2B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB5E8)); /* movss */
    eax = MEM32(0x7AC804);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5E4); /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC818);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(0x7AC804);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x7AC804);
    MEMF(edx + 0xC) = xmm4.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    MEMF(eax + 0x10) = xmm7.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    ecx = MEM32(edx + 4);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020CD91u); RECOMP_ABI_CALL(0x0020BF60u, sub_0020BF60); /* call 0x0020BF60 */

loc_0020CD91: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB5E8)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5E4); /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC818);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(0x7AC804);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x7AC804);
    MEMF(edx + 0xC) = xmm4.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 0x10) = xmm6.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = eax;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5E8); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm5.f[0] = xmm5.f[0] + MEMF(0x7AB5E4); /* addss */
    MEMF(ecx + 4) = xmm5.f[0]; /* movss */
    edx = MEM32(0x7AC818);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(0x7AC804);
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x7AC804);
    MEMF(edx + 0xC) = xmm5.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    MEMF(eax + 0x10) = xmm7.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = eax;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5E8); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB5E4); /* addss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC818);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(0x7AC804);
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x7AC804);
    MEMF(edx + 0xC) = xmm5.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    MEMF(eax + 0x10) = xmm6.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    ecx = MEM32(edx + 4);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020CEC2u); RECOMP_ABI_CALL(0x0020BF60u, sub_0020BF60); /* call 0x0020BF60 */

loc_0020CEC2: ;
    xmm4.f[0] = xmm4.f[0] + MEMF(0x7AB5E8); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x7AB5E4); /* addss */
    eax = MEM32(0x7AC818);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    MEMF(0x7AC7EC) = xmm4.f[0]; /* movss */
    MEMF(0x7AC7F0) = xmm3.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    MEM32(0x7AC7F4) = ecx;
    MEMF(0x7AC7F8) = xmm5.f[0]; /* movss */
    MEMF(0x7AC7FC) = xmm6.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 4;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(0x7AC7E5) = 1;

loc_0020CF15: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0020CF20
 * Original: 0x0020CF20 - 0x0020CF87 (103 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CF20: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB5C4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    MEMF(0x7AB5F8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB5C0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    edx = ZX8(LO8(edx));
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(0x7AB5F4) = xmm0.f[0]; /* movss */
    MEM32(0x7AB5EC) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020CF90
 * Original: 0x0020CF90 - 0x0020D2AB (795 bytes, 184 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CF90: ;
    eax = MEM32(0x7AC804);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7AC7E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x7AC7E8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020D2A7; /* jae: above or equal (unsigned >=) */

loc_0020CFA4: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x7AB5DC);
    PUSH32(esp, 0x0020CFB5u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_0020CFB5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB600)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB608)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB5FC)); /* movss */
    esi = eax;
    edx = ZX8(MEM8(esi + 4));
    eax = ZX8(MEM8(esi + 5));
    ecx = (uint32_t)(int32_t)SMEM8(esi + 6);
    xmm6.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM8(esi + 7);
    xmm7.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x7AB5E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm4.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(0x7AB604)); /* movss */
    xmm5.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    if (CMP_L(_fas, _fbs)) goto loc_0020D035; /* jl: less (signed <) */

loc_0020D01B: ;
    eax = ZX8(MEM8(esi + 8));
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x7AB608) = xmm2.f[0]; /* movss */
    goto loc_0020D05D;

loc_0020D035: ;
    ecx = ZX8(MEM8(esi + 8));
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x7AB608) = xmm1.f[0]; /* movss */
    edx = ZX8(MEM8(esi + 8));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */

loc_0020D05D: ;
    SET_LO8(eax, MEM8(0x7AC7E5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D0CA; /* je: equal / zero */

loc_0020D066: ;
    PUSH32(esp, 0x0020D06Bu); RECOMP_ABI_CALL(0x0020BD20u, sub_0020BD20); /* call 0x0020BD20 */

loc_0020D06B: ;
    eax = MEM32(0x7AC804);
    MEMF(eax) = xmm3.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    MEMF(ecx + 4) = xmm4.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC830);
    MEM32(edx + 8) = eax;
    ecx = ZX16(MEM16(esi));
    edx = MEM32(0x7AC804);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = ZX16(MEM16(esi + 2));
    ecx = MEM32(0x7AC804);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC818);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0020D0CA: ;
    edx = MEM32(0x7AC804);
    MEMF(edx) = xmm3.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    edx = MEM32(0x7AC830);
    MEM32(ecx + 8) = edx;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(0x7AC804);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = ZX16(MEM16(esi + 2));
    eax = MEM32(0x7AC804);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    ecx = MEM32(edx + 4);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020D125u); RECOMP_ABI_CALL(0x0020BF60u, sub_0020BF60); /* call 0x0020BF60 */

loc_0020D125: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    MEMF(edx) = xmm3.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    MEMF(ecx + 4) = xmm5.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(0x7AC830);
    MEM32(edx + 8) = eax;
    ecx = ZX16(MEM16(esi));
    edx = MEM32(0x7AC804);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    ecx = ZX16(MEM16(esi + 2));
    eax = ZX8(MEM8(esi + 5));
    edx = MEM32(0x7AC804);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = eax;
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    ecx = MEM32(0x7AC804);
    edx = MEM32(0x7AC830);
    MEM32(ecx + 8) = edx;
    ecx = ZX8(MEM8(esi + 4));
    eax = ZX16(MEM16(esi));
    edx = MEM32(0x7AC804);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = ZX16(MEM16(esi + 2));
    ecx = MEM32(0x7AC804);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = eax;
    MEMF(eax) = xmm3.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    MEMF(edx + 4) = xmm5.f[0]; /* movss */
    eax = MEM32(0x7AC804);
    ecx = MEM32(0x7AC830);
    MEM32(eax + 8) = ecx;
    eax = ZX8(MEM8(esi + 4));
    edx = ZX16(MEM16(esi));
    ecx = MEM32(0x7AC804);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = ZX8(MEM8(esi + 5));
    eax = ZX16(MEM16(esi + 2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = MEM32(0x7AC804);
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(0x7AC804);
    eax = MEM32(edx + 4);
    ecx = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0020D245u); RECOMP_ABI_CALL(0x0020BF60u, sub_0020BF60); /* call 0x0020BF60 */

loc_0020D245: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC804) = edx;
    edx = MEM32(0x7AC830);
    MEM32(0x7AC7F4) = edx;
    MEMF(0x7AC7EC) = xmm3.f[0]; /* movss */
    MEMF(0x7AC7F0) = xmm5.f[0]; /* movss */
    eax = ZX16(MEM16(esi));
    ecx = ZX8(MEM8(esi + 4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(0x7AC7F8) = xmm0.f[0]; /* movss */
    eax = ZX16(MEM16(esi + 2));
    edx = ZX8(MEM8(esi + 5));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x7AC818);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(0x7AC7FC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 0x1A) = MEM16(eax + 0x1A) + 4;
    _fa = (uint32_t)(MEM16(eax + 0x1A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(0x7AC7E5) = 1;
    POP32(esp, esi);

loc_0020D2A7: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D2B0
 * Original: 0x0020D2B0 - 0x0020D37C (204 bytes, 53 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D2B0: ;
    eax = MEM32(0x7AC7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D2C9; /* jl: less (signed <) */

loc_0020D2BC: ;
    eax = MEM32(0x7AC7C4);
    MEM32(0x7AC7A4) = eax;
    esp += 20; return; /* ret 16 */

loc_0020D2C9: ;
    edx = MEM32(0x7AC7D0);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(0x7AC7D8) = eax;
    PUSH32(esp, 0x0020D2E8u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0020D2E8: ;
    ecx = MEM32(0x7AC7D8);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x40) = edx;
    eax = MEM32(0x7AC7D8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x48) = ecx;
    edx = MEM32(0x7AC7D8);
    ecx = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x44) = ebx;
    eax = MEM32(0x7AC7D8);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx * 4 + 0x301650);
    MEM32(eax + 0x44) = MEM32(eax + 0x44) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x7AC7D8);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x4C) = ecx;
    edx = MEM32(0x7AC7C0);
    ecx = MEM32(0x7AC7C4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(0x7AC7D8);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x50) = LO16(eax);
    edx = MEM32(0x7AC7D8);
    MEM16(edx + 0x52) = LO16(ebx);
    eax = MEM32(0x7AC7D4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x7AC7A1) = LO8(ebx);
    MEM8(0x7AC7A0) = LO8(ebx);
    MEM32(0x7AC7D4) = eax;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020D380
 * Original: 0x0020D380 - 0x0020D3AB (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D380: ;
    eax = MEM32(0x7AC7C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7AC7A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x7AC7A4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020D3AA; /* jae: above or equal (unsigned >=) */

loc_0020D38D: ;
    SET_LO8(eax, MEM8(0x7AC7A1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D3A3; /* je: equal / zero */

loc_0020D396: ;
    PUSH32(esp, 0x0020D39Bu); RECOMP_ABI_CALL(0x0020BDC0u, sub_0020BDC0); /* call 0x0020BDC0 */

loc_0020D39B: ;
    MEM8(0x7AC7A0) = 1;
    esp += 4; return; /* ret */

loc_0020D3A3: ;
    MEM8(0x7AC7A0) = 0;

loc_0020D3AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D3B0
 * Original: 0x0020D3B0 - 0x0020D44E (158 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D3B0: ;
    eax = MEM32(0x7AC7C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7AC7A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x7AC7A4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020D44B; /* jae: above or equal (unsigned >=) */

loc_0020D3C1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(0x7AC7A8) = xmm0.f[0]; /* movss */
    MEMF(0x7AC7AC) = xmm1.f[0]; /* movss */
    MEMF(0x7AC7B0) = xmm2.f[0]; /* movss */
    ecx = 0x80808080u;
    MEM32(0x7AC7B4) = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    MEMF(edx + 8) = xmm2.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x7AC7C4);
    eax = MEM32(0x7AC7D8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC7C4) = edx;
    MEM16(eax + 0x52) = MEM16(eax + 0x52) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(0x7AC7A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D444; /* je: equal / zero */

loc_0020D438: ;
    PUSH32(esp, 0x0020D43Du); RECOMP_ABI_CALL(0x0020BDC0u, sub_0020BDC0); /* call 0x0020BDC0 */

loc_0020D43D: ;
    MEM8(0x7AC7A0) = 0;

loc_0020D444: ;
    MEM8(0x7AC7A1) = 1;

loc_0020D44B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020D450
 * Original: 0x0020D450 - 0x0020D514 (196 bytes, 42 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D450: ;
    ecx = MEM32(0x7AC7C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7AC7A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x7AC7A4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020D511; /* jae: above or equal (unsigned >=) */

loc_0020D462: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = eax;
    edx = ZX8(LO8(edx));
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x7AC7B4) = edx;
    MEMF(0x7AC7A8) = xmm0.f[0]; /* movss */
    MEMF(0x7AC7AC) = xmm1.f[0]; /* movss */
    MEMF(0x7AC7B0) = xmm2.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(0x7AC7C4);
    MEMF(ecx + 8) = xmm2.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    eax = MEM32(0x7AC7B4);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(0x7AC7C4);
    eax = MEM32(0x7AC7D8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC7C4) = edx;
    MEM16(eax + 0x52) = MEM16(eax + 0x52) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(0x7AC7A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020D50A; /* je: equal / zero */

loc_0020D4FE: ;
    PUSH32(esp, 0x0020D503u); RECOMP_ABI_CALL(0x0020BDC0u, sub_0020BDC0); /* call 0x0020BDC0 */

loc_0020D503: ;
    MEM8(0x7AC7A0) = 0;

loc_0020D50A: ;
    MEM8(0x7AC7A1) = 1;

loc_0020D511: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020D520
 * Original: 0x0020D520 - 0x0020D5F0 (208 bytes, 38 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D520: ;
    eax = MEM32(0x7AC7C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7AC7A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x7AC7A4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020D5ED; /* jae: above or equal (unsigned >=) */

loc_0020D531: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(0x7AC7A8) = xmm0.f[0]; /* movss */
    MEMF(0x7AC7AC) = xmm1.f[0]; /* movss */
    MEMF(0x7AC7B0) = xmm2.f[0]; /* movss */
    MEMF(0x7AC7B8) = xmm3.f[0]; /* movss */
    MEMF(0x7AC7BC) = xmm4.f[0]; /* movss */
    ecx = 0x80808080u;
    MEM32(0x7AC7B4) = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    MEMF(edx + 8) = xmm2.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0x7AC7C4);
    MEMF(ecx + 0x10) = xmm3.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    MEMF(edx + 0x14) = xmm4.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    eax = MEM32(0x7AC7D8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC7C4) = edx;
    MEM16(eax + 0x52) = MEM16(eax + 0x52) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(0x7AC7A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D5E6; /* je: equal / zero */

loc_0020D5DA: ;
    PUSH32(esp, 0x0020D5DFu); RECOMP_ABI_CALL(0x0020BDC0u, sub_0020BDC0); /* call 0x0020BDC0 */

loc_0020D5DF: ;
    MEM8(0x7AC7A0) = 0;

loc_0020D5E6: ;
    MEM8(0x7AC7A1) = 1;

loc_0020D5ED: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020D5F0
 * Original: 0x0020D5F0 - 0x0020D6E6 (246 bytes, 50 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D5F0: ;
    ecx = MEM32(0x7AC7C4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7AC7A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x7AC7A4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020D6E3; /* jae: above or equal (unsigned >=) */

loc_0020D602: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = eax;
    edx = ZX8(LO8(edx));
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x7AC7B4) = edx;
    MEMF(0x7AC7A8) = xmm0.f[0]; /* movss */
    MEMF(0x7AC7AC) = xmm1.f[0]; /* movss */
    MEMF(0x7AC7B0) = xmm2.f[0]; /* movss */
    MEMF(0x7AC7B8) = xmm3.f[0]; /* movss */
    MEMF(0x7AC7BC) = xmm4.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    eax = MEM32(0x7AC7C4);
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(0x7AC7C4);
    MEMF(ecx + 8) = xmm2.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    eax = MEM32(0x7AC7B4);
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(0x7AC7C4);
    MEMF(ecx + 0x10) = xmm3.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    MEMF(edx + 0x14) = xmm4.f[0]; /* movss */
    edx = MEM32(0x7AC7C4);
    eax = MEM32(0x7AC7D8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC7C4) = edx;
    MEM16(eax + 0x52) = MEM16(eax + 0x52) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(0x7AC7A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020D6DC; /* je: equal / zero */

loc_0020D6D0: ;
    PUSH32(esp, 0x0020D6D5u); RECOMP_ABI_CALL(0x0020BDC0u, sub_0020BDC0); /* call 0x0020BDC0 */

loc_0020D6D5: ;
    MEM8(0x7AC7A0) = 0;

loc_0020D6DC: ;
    MEM8(0x7AC7A1) = 1;

loc_0020D6E3: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0020D6F0
 * Original: 0x0020D6F0 - 0x0020D753 (99 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020D6F0: ;
    eax = MEM32(0x7AC814);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C4 (32-bit) */
    MEM32(0x7AC7E0) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_0020D711; /* jl: less (signed <) */

loc_0020D706: ;
    eax = MEM32(0x7AC804);
    MEM32(0x7AC7E8) = eax;
    esp += 4; return; /* ret */

loc_0020D711: ;
    edx = MEM32(0x7AC810);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC818) = eax;
    MEM32(eax) = 0x1000;
    eax = MEM32(0x7AC818);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 0x1A) = LO16(edx);
    eax = MEM32(0x7AC814);
    MEM32(0x7AC7DC) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x7AC814) = eax;
    MEM8(0x7AC7E5) = LO8(edx);
    MEM8(0x7AC7E4) = LO8(edx);
    g_seh_ebp = ebp; sub_0020C010(); return; /* tail jmp 0x0020C010 */

}

/**
 * sub_0020D760
 * Original: 0x0020D760 - 0x0020D82D (205 bytes, 67 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020D760: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0020D77Bu); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0020D77B: ;
    PUSH32(esp, 0x7AC824);
    PUSH32(esp, 0);
    MEM32(0x7AC82C) = eax;
    PUSH32(esp, 0x0020D78Cu); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0020D78C: ;
    PUSH32(esp, 0x7AC828);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0020D798u); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0020D798: ;
    esi = MEM32(esp + 0x58);
    ebx = MEM32(esp + 0x60);
    edi = MEM32(esp + 0x5C);
    ebp = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0020D80F; /* jge: greater or equal (signed >=) */

loc_0020D7C7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020D80F; /* jge: greater or equal (signed >=) */

loc_0020D7CB: ;
    edx = MEM32(esp + 0x10);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(0x7AC824);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020D7E8u); RECOMP_ABI_CALL(0x002898A0u, sub_002898A0); /* call 0x002898A0 */

loc_0020D7E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebp;
    PUSH32(esp, 0x0020D80Fu); RECOMP_ABI_CALL(0x0028C030u, sub_0028C030); /* call 0x0028C030 */

loc_0020D80F: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020D81Bu); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0020D81B: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020D825u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0020D825: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020D830
 * Original: 0x0020D830 - 0x0020D875 (69 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D830: ;
    eax = MEM32(0x7AC828);
    ecx = MEM32(0x7AC824);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020D842u); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0020D842: ;
    edx = MEM32(0x7AC824);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020D84Eu); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0020D84E: ;
    eax = MEM32(0x7AC828);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020D859u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0020D859: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x1000000);
    PUSH32(esp, 0x43);
    MEM32(0x7AC824) = eax;
    MEM32(0x7AC828) = eax;
    PUSH32(esp, 0x0020D871u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020D871: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020D880
 * Original: 0x0020D880 - 0x0020DA3E (446 bytes, 113 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D880: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x1010101);
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x0020D88Fu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020D88F: ;
    eax = MEM32(0x7AC82C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020D89Cu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0020D89C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x7AC82C) = 0;
    PUSH32(esp, 0x0020D8B1u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020D8B1: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020D8BCu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020D8BC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020D8C7u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020D8C7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020D8D2u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020D8D2: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020D8E0u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020D8E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020D8EBu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020D8EB: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    ecx = 0x20;
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020D91Du); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_0020D91D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x0020D926u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020D926: ;
    PUSH32(esp, 0x304);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0020D932u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020D932: ;
    PUSH32(esp, 0x305);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0020D93Eu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020D93E: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0020D94Au); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020D94A: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x88); /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x84); /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)MEM32(esp + 0x8C); /* cvtsi2ss */
    eax = 0x80808080u;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x90); /* cvtsi2ss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x54) = eax;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x14);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0020D9F6u); RECOMP_ABI_CALL(0x0028A990u, sub_0028A990); /* call 0x0028A990 */

loc_0020D9F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020D9FFu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0020D9FF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020DA0Au); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DA0A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020DA15u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DA15: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020DA20u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DA20: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020DA2Bu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DA2B: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0020DA37u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DA37: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020DA40
 * Original: 0x0020DA40 - 0x0020DAE4 (164 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DA40: ;
    PUSH32(esp, 0x301680);
    PUSH32(esp, 0);
    PUSH32(esp, 0x11170);
    PUSH32(esp, 0x0020DA51u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0020DA51: ;
    PUSH32(esp, 0x301660);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC000);
    MEM32(0x7AC810) = eax;
    PUSH32(esp, 0x0020DA67u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0020DA67: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x2C00);
    MEM32(0x7AC7D0) = eax;
    PUSH32(esp, 0x0020DA7Au); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_0020DA7A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x2C00);
    MEM32(0x7AC808) = eax;
    PUSH32(esp, 0x0020DA8Du); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_0020DA8D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x1800);
    MEM32(0x7AC80C) = eax;
    PUSH32(esp, 0x0020DAA0u); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_0020DAA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x1800);
    MEM32(0x7AC7C8) = eax;
    PUSH32(esp, 0x0020DAB3u); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_0020DAB3: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC7CC) = eax;
    MEM32(0x7AC814) = 0;
    MEM32(0x7AC7D4) = 0;
    MEM32(0x7AC7E0) = 0;
    MEM32(0x30F1B8) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0020DAF0
 * Original: 0x0020DAF0 - 0x0020DB34 (68 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DAF0: ;
    eax = MEM32(0x6437BC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = eax;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x7AC820) = ecx;
    _fa = (uint32_t)(MEM32(0x30F1B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30F1B8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DB1A; /* je: equal / zero */

loc_0020DB0B: ;
    MEM32(0x30F1B8) = eax;
    PUSH32(esp, 0x0020DB15u); RECOMP_ABI_CALL(0x0020C100u, sub_0020C100); /* call 0x0020C100 */

loc_0020DB15: ;
    PUSH32(esp, 0x0020DB1Au); RECOMP_ABI_CALL(0x0020BD90u, sub_0020BD90); /* call 0x0020BD90 */

loc_0020DB1A: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DB32; /* jne: not equal / not zero */

loc_0020DB21: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x0020DB29u); RECOMP_ABI_CALL(0x0020B810u, sub_0020B810); /* call 0x0020B810 */

loc_0020DB29: ;
    ecx = esi + 0x28;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0020B810(); return; /* tail jmp 0x0020B810 */

loc_0020DB32: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020DB40
 * Original: 0x0020DB40 - 0x0020E035 (1269 bytes, 382 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DB40: ;
    eax = MEM32(0x7AC820);
    ecx = MEM32(eax * 4 + 0x7AC808);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DB55u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0020DB55: ;
    eax = MEM32(0x7AC814);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E030; /* je: equal / zero */

loc_0020DB64: ;
    _fa = (uint32_t)(MEM32(0x30F1BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30F1BC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DB77; /* jne: not equal / not zero */

loc_0020DB6C: ;
    MEM32(0x7AC814) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0020DB77: ;
    ecx = MEM32(0x7AC820);
    edx = MEM32(ecx * 4 + 0x7AC808);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DB8Cu); RECOMP_ABI_CALL(0x002105A0u, sub_002105A0); /* call 0x002105A0 */

loc_0020DB8C: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DB96u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DB96: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DBA0u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DBA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DBA9u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DBA9: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DBB3u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DBB3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DBBDu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DBBD: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x13);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DBC9u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DBC9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0020DBD1u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DBD1: ;
    PUSH32(esp, 0x207);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x0020DBDDu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DBDD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0020DBE5u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DBE5: ;
    eax = MEM32(0x30F1C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x0020DBF5u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DBF5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x0020DC00u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DC00: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0020DC0Cu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DC0C: ;
    eax = MEM32(0x7AC814);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0020DFE8; /* jle: less or equal (signed <=) */

loc_0020DC22: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    /* nop */

loc_0020DC30: ;
    ecx = MEM32(0x7AC810);
    eax = MEM32(esi + ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020DC9F; /* jg: greater (signed >) */

loc_0020DC42: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0020DC7E; /* je: equal / zero */

loc_0020DC44: ;
    ecx = eax;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020DC5B; /* je: equal / zero */

loc_0020DC4E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020DCB4; /* jne: not equal / not zero */

loc_0020DC51: ;
    PUSH32(esp, 0x0020DC56u); RECOMP_ABI_CALL(0x0020D830u, sub_0020D830); /* call 0x0020D830 */

loc_0020DC56: ;
    goto loc_0020DFC4;

loc_0020DC5B: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x12);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020DC74u); RECOMP_ABI_CALL(0x0020D760u, sub_0020D760); /* call 0x0020D760 */

loc_0020DC74: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = esi;
    goto loc_0020DFC4;

loc_0020DC7E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x16);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x12);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020DC97u); RECOMP_ABI_CALL(0x0020D880u, sub_0020D880); /* call 0x0020D880 */

loc_0020DC97: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020DFC4;

loc_0020DC9F: ;
    ecx = eax;
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0020DF85; /* je: equal / zero */

loc_0020DCAD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0020DF4D; /* je: equal / zero */

loc_0020DCB4: ;
    SET_LO16(ecx, MEM16(esi + 0x1A));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020DCD1; /* jg: greater (signed >) */

loc_0020DCBE: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020DFC4; /* jle: less or equal (signed <=) */

loc_0020DCC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DFC4; /* jne: not equal / not zero */

loc_0020DCD1: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DDFB; /* je: equal / zero */

loc_0020DCDC: ;
    ecx = MEM32(0x7934C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020DCE8u); RECOMP_ABI_CALL(0x000C2740u, sub_000C2740); /* call 0x000C2740 */

loc_0020DCE8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DDE4; /* je: equal / zero */

loc_0020DCF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DCF9u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0020DCF9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DD03u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DD03: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DD0Du); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DD0D: ;
    SET_LO8(eax, MEM8(edi + 0x5C));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020DD53; /* jne: not equal / not zero */

loc_0020DD17: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x1C;
    ecx = 0x20;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020DD48u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_0020DD48: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0x30000;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    goto loc_0020DD54;

loc_0020DD53: ;
    PUSH32(esp, ebx);

loc_0020DD54: ;
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x0020DD5Eu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DD5E: ;
    SET_LO8(eax, MEM8(edi + 0x5C));
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020DDB9; /* jae: above or equal (unsigned >=) */

loc_0020DD70: ;
    ecx = ZX16(MEM16(edi + 0x28));
    edx = ZX16(MEM16(edi + 0x2A));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x2C;
    ecx = 0x20;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020DDB7u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_0020DDB7: ;
    goto loc_0020DE24;

loc_0020DDB9: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x3C;
    ecx = 0x20;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020DDE2u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_0020DDE2: ;
    goto loc_0020DE24;

loc_0020DDE4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DDEBu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0020DDEB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x0020DDF6u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DDF6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020DE24;

loc_0020DDFB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DE02u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0020DE02: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xE);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DE0Cu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DE0C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x12);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DE16u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DE16: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x0020DE21u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DE21: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020DE24: ;
    eax = MEM32(esi + 4);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020DE99; /* ja: above (unsigned >) */

loc_0020DE2F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20E038); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0020DE36u) goto loc_0020DE36;
    if (_jt == 0x0020DE52u) goto loc_0020DE52;
    if (_jt == 0x0020DE6Bu) goto loc_0020DE6B;
    if (_jt == 0x0020DE78u) goto loc_0020DE78;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020DE36: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x0020DE3Fu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DE3F: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0020DE4Bu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DE4B: ;
    PUSH32(esp, 0x8006);
    goto loc_0020DE8F;

loc_0020DE52: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x0020DE5Bu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DE5B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0020DE64u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DE64: ;
    PUSH32(esp, 0x8006);
    goto loc_0020DE8F;

loc_0020DE6B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x0020DE73u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DE73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020DE99;

loc_0020DE78: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x0020DE81u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DE81: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0020DE8Au); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DE8A: ;
    PUSH32(esp, 0x800B);

loc_0020DE8F: ;
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0020DE96u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DE96: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020DE99: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020DEED; /* je: equal / zero */

loc_0020DE9E: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 4), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020DEAB; /* je: equal / zero */

loc_0020DEA7: ;
    PUSH32(esp, 3);
    goto loc_0020DEAD;

loc_0020DEAB: ;
    PUSH32(esp, 1);

loc_0020DEAD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DEB4u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DEB4: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020DEC5; /* je: equal / zero */

loc_0020DEC1: ;
    PUSH32(esp, 3);
    goto loc_0020DEC7;

loc_0020DEC5: ;
    PUSH32(esp, 1);

loc_0020DEC7: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DECFu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DECF: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020DEE0; /* je: equal / zero */

loc_0020DEDC: ;
    PUSH32(esp, 1);
    goto loc_0020DEE2;

loc_0020DEE0: ;
    PUSH32(esp, 2);

loc_0020DEE2: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DEEAu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020DEEA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020DEED: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x12);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    MEM32(esp + 0x50) = ecx;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x50) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = eax;
    PUSH32(esp, 0x0020DF1Au); RECOMP_ABI_CALL(0x0028A1B0u, sub_0028A1B0); /* call 0x0028A1B0 */

loc_0020DF1A: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1A);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020DF27u); RECOMP_ABI_CALL(0x00216BF0u, sub_00216BF0); /* call 0x00216BF0 */

loc_0020DF27: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx * 8 + 0x2E7A20);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(ecx * 8 + 0x2E7A24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020DF4Bu); RECOMP_ABI_CALL(0x0028AB00u, sub_0028AB00); /* call 0x0028AB00 */

loc_0020DF4B: ;
    goto loc_0020DFC4;

loc_0020DF4D: ;
    ecx = MEM32(0x7AC828);
    edx = MEM32(0x7AC824);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020DF60u); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0020DF60: ;
    eax = MEM32(0x7AC824);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020DF6Bu); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0020DF6B: ;
    ecx = MEM32(0x7AC828);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020DF77u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0020DF77: ;
    MEM32(0x7AC824) = ebx;
    MEM32(0x7AC828) = ebx;
    goto loc_0020DFC4;

loc_0020DF85: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0020DF95u); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0020DF95: ;
    PUSH32(esp, 0x7AC824);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020DFA0u); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0020DFA0: ;
    PUSH32(esp, 0x7AC828);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0020DFACu); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_0020DFAC: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020DFBAu); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0020DFBA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020DFC4u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0020DFC4: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x18);
    ecx = MEM32(0x7AC814);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0020DC30; /* jl: less (signed <) */

loc_0020DFE6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0020DFE8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(0x7AC814) = ebx;
    PUSH32(esp, 0x0020DFF6u); RECOMP_ABI_CALL(0x0028A1B0u, sub_0028A1B0); /* call 0x0028A1B0 */

loc_0020DFF6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0020DFFFu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020DFFF: ;
    PUSH32(esp, 0x203);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x0020E00Bu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E00B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x0020E016u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E016: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0020E022u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E022: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0020E02Au); RECOMP_ABI_CALL(0x00289400u, sub_00289400); /* call 0x00289400 */

loc_0020E02A: ;
    MEM32(0x7AC81C) = eax;
    POP32(esp, ebp);

loc_0020E030: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020E050
 * Original: 0x0020E050 - 0x0020E1ED (413 bytes, 126 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E050: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(edi));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020E070; /* je: equal / zero */

loc_0020E067: ;
    SET_LO8(ecx, MEM8(esi + edi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E067; /* jne: not equal / not zero */

loc_0020E070: ;
    ecx = MEM32(0x7AB5E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E0D1; /* jne: not equal / not zero */

loc_0020E07A: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x1C) = LO8(eax);
    ebx = edi + 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0020E0B1; /* je: equal / zero */

loc_0020E087: ;
    goto loc_0020E090;

    /* nop */

loc_0020E090: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x7AB5DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020E0A0u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_0020E0A0: ;
    ecx = ZX8(MEM8(eax + 8));
    SET_LO8(eax, MEM8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x1C) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0020E090; /* jne: not equal / not zero */

loc_0020E0B1: ;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB600); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB608); /* addss */
    MEMF(0x7AB608) = xmm0.f[0]; /* movss */
    goto loc_0020E0D9;

loc_0020E0D1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB608)); /* movss */

loc_0020E0D9: ;
    eax = MEM32(0x7AB5EC);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E18E; /* je: equal / zero */

loc_0020E0E9: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB604)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB5F8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB5F4)); /* movss */
    MEM32(0x7AC830) = eax;
    _fa = (uint32_t)(MEM32(0x7AB5E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7AB5E0), ebp (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(0x7AB608) = xmm2.f[0]; /* movss */
    MEMF(0x7AB604) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E156; /* je: equal / zero */

loc_0020E132: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020E172; /* jle: less or equal (signed <=) */

loc_0020E138: ;
    goto loc_0020E140;

    /* nop */

loc_0020E140: ;
    ecx = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ebx + edi));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020E14Fu); RECOMP_ABI_CALL(0x0020CF90u, sub_0020CF90); /* call 0x0020CF90 */

loc_0020E14F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020E140; /* jl: less (signed <) */

loc_0020E154: ;
    goto loc_0020E172;

loc_0020E156: ;
    ebx = esi + -1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020E172; /* jl: less (signed <) */

loc_0020E15D: ;
    /* nop */

loc_0020E160: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020E16Fu); RECOMP_ABI_CALL(0x0020CF90u, sub_0020CF90); /* call 0x0020CF90 */

loc_0020E16F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020E160; /* jns: not sign (positive) */

loc_0020E172: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(0x7AB608) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(0x7AB604) = xmm0.f[0]; /* movss */

loc_0020E18E: ;
    _fa = (uint32_t)(MEM32(0x7AB5E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7AB5E0), ebp (32-bit) */
    ecx = MEM32(0x7AB5F0);
    MEM32(0x7AC830) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020E1CE; /* je: equal / zero */

loc_0020E1A2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020E1E3; /* jle: less or equal (signed <=) */

loc_0020E1A8: ;
    goto loc_0020E1B0;

    /* nop */

loc_0020E1B0: ;
    ecx = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ebx + edi));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020E1BFu); RECOMP_ABI_CALL(0x0020CF90u, sub_0020CF90); /* call 0x0020CF90 */

loc_0020E1BF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020E1B0; /* jl: less (signed <) */

loc_0020E1C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0020E1CE: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0020E1E3; /* js: sign (negative) */

loc_0020E1D1: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020E1E0u); RECOMP_ABI_CALL(0x0020CF90u, sub_0020CF90); /* call 0x0020CF90 */

loc_0020E1E0: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020E1D1; /* jns: not sign (positive) */

loc_0020E1E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E1F0
 * Original: 0x0020E1F0 - 0x0020E2A2 (178 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E1F0: ;
    eax = MEM32(0x7AC7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020E207; /* jl: less (signed <) */

loc_0020E1FC: ;
    eax = MEM32(0x7AC7C4);
    MEM32(0x7AC7A4) = eax;
    esp += 4; return; /* ret */

loc_0020E207: ;
    edx = MEM32(0x7AC7D0);
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    eax = ecx + edx;
    PUSH32(esp, edi);
    ecx = eax;
    esi = eax + -96;
    PUSH32(esp, esi);
    MEM32(0x7AC7D8) = ecx;
    edi = ecx;
    PUSH32(esp, 0x0020E22Bu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0020E22B: ;
    eax = MEM32(esi + 0x40);
    MEM32(edi + 0x40) = eax;
    ecx = MEM32(esi + 0x44);
    MEM32(edi + 0x44) = ecx;
    edx = MEM32(esi + 0x48);
    MEM32(edi + 0x48) = edx;
    eax = MEM32(esi + 0x4C);
    MEM32(edi + 0x4C) = eax;
    SET_LO16(ecx, MEM16(esi + 0x50));
    MEM16(edi + 0x50) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0x52));
    MEM16(edi + 0x52) = LO16(edx);
    edx = MEM32(0x7AC7C0);
    ecx = MEM32(0x7AC7C4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(0x7AC7D8);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x50) = LO16(eax);
    edx = MEM32(0x7AC7D8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx + 0x52) = LO16(eax);
    ecx = MEM32(0x7AC7D4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x7AC7D4) = ecx;
    MEM8(0x7AC7A1) = LO8(eax);
    MEM8(0x7AC7A0) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020E2B0
 * Original: 0x0020E2B0 - 0x0020E5C7 (791 bytes, 248 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020E2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E2B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x7AC820);
    ecx = MEM32(eax * 4 + 0x7AC7C8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E2CDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0020E2CD: ;
    eax = MEM32(0x7AC7D4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E5C0; /* je: equal / zero */

loc_0020E2DC: ;
    _fa = (uint32_t)(MEM32(0x30F1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30F1C0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E2F1; /* jne: not equal / not zero */

loc_0020E2E4: ;
    MEM32(0x7AC7D4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0020E2F1: ;
    ecx = MEM32(0x7AC820);
    edx = MEM32(ecx * 4 + 0x7AC7C8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E305u); RECOMP_ABI_CALL(0x002105A0u, sub_002105A0); /* call 0x002105A0 */

loc_0020E305: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E30Fu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E30F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E319u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E319: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E322u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E322: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E32Cu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E32C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E336u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E336: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x13);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E342u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E342: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E34Cu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E34C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E356u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E356: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E35Eu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E35E: ;
    eax = MEM32(0x30F1C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x94);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E36Eu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E36E: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E37Au); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E37A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    ecx = 0x20;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E3AEu); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_0020E3AE: ;
    _fa = (uint32_t)(MEM32(0x7ACDD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7ACDD0), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E3C8; /* jne: not equal / not zero */

loc_0020E3B7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    MEM32(esp + 0x14) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E3C3u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E3C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020E3D0;

loc_0020E3C8: ;
    MEM32(esp + 0xC) = 8;

loc_0020E3D0: ;
    eax = MEM32(0x7AC7D4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020E58A; /* jle: less or equal (signed <=) */

loc_0020E3DF: ;
    /* nop */

loc_0020E3E0: ;
    ecx = MEM32(0x7AC7D0);
    edx = MEM32(edi + ecx + 0x44);
    eax = MEM32(esp + 0xC);
    esi = edi + ecx;
    edx = edx & 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E577; /* jne: not equal / not zero */

loc_0020E3FC: ;
    SET_LO16(eax, MEM16(esi + 0x52));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020E41A; /* jg: greater (signed >) */

loc_0020E406: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020E577; /* jle: less or equal (signed <=) */

loc_0020E410: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E577; /* jne: not equal / not zero */

loc_0020E41A: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E456; /* je: equal / zero */

loc_0020E421: ;
    ecx = MEM32(0x7934C0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E42Du); RECOMP_ABI_CALL(0x000C2740u, sub_000C2740); /* call 0x000C2740 */

loc_0020E42D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E448; /* je: equal / zero */

loc_0020E431: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E439u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0020E439: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E444u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E444: ;
    PUSH32(esp, 2);
    goto loc_0020E46C;

loc_0020E448: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E451u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0020E451: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020E478;

loc_0020E456: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E45Fu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_0020E45F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E46Au); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E46A: ;
    PUSH32(esp, 3);

loc_0020E46C: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E475u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0020E475: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020E478: ;
    eax = MEM32(esi + 0x44);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020E4EE; /* ja: above (unsigned >) */

loc_0020E483: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x20E5C8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0020E48Au) goto loc_0020E48A;
    if (_jt == 0x0020E4A6u) goto loc_0020E4A6;
    if (_jt == 0x0020E4BFu) goto loc_0020E4BF;
    if (_jt == 0x0020E4CDu) goto loc_0020E4CD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020E48A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E493u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E493: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x3F);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E49Fu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E49F: ;
    PUSH32(esp, 0x8006);
    goto loc_0020E4E4;

loc_0020E4A6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E4AFu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E4AF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E4B8u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E4B8: ;
    PUSH32(esp, 0x8006);
    goto loc_0020E4E4;

loc_0020E4BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E4C8u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E4C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020E4EE;

loc_0020E4CD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E4D6u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E4D6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E4DFu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E4DF: ;
    PUSH32(esp, 0x800B);

loc_0020E4E4: ;
    PUSH32(esp, 0x4A);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E4EBu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E4EB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020E4EE: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E4F7u); RECOMP_ABI_CALL(0x00210640u, sub_00210640); /* call 0x00210640 */

loc_0020E4F7: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020E508; /* je: equal / zero */

loc_0020E501: ;
    PUSH32(esp, 0x207);
    goto loc_0020E50D;

loc_0020E508: ;
    PUSH32(esp, 0x203);

loc_0020E50D: ;
    PUSH32(esp, 0x39);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E514u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E514: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7B5320);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E527u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0020E527: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E534u); RECOMP_ABI_CALL(0x0022F6A5u, sub_0022F6A5); /* call 0x0022F6A5 */

loc_0020E534: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x24;
    ecx = 0x17;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E544u); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_0020E544: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x52);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E552u); RECOMP_ABI_CALL(0x00216BF0u, sub_00216BF0); /* call 0x00216BF0 */

loc_0020E552: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx * 8 + 0x2E7A20);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(ecx * 8 + 0x2E7A24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E577u); RECOMP_ABI_CALL(0x0028AB00u, sub_0028AB00); /* call 0x0028AB00 */

loc_0020E577: ;
    eax = MEM32(0x7AC7D4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020E3E0; /* jl: less (signed <) */

loc_0020E588: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020E58A: ;
    _fa = (uint32_t)(MEM32(0x7ACDD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7ACDD0), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E5A5; /* jne: not equal / not zero */

loc_0020E593: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    MEM32(0x7AC7D4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E5A2u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E5A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020E5A5: ;
    PUSH32(esp, 0x203);
    PUSH32(esp, 0x39);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E5B1u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E5B1: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x4A);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020E5BDu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0020E5BD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020E5C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0020E5E0
 * Original: 0x0020E5E0 - 0x0020E7A8 (456 bytes, 105 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E5E0: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    eax = MEM32(0x7AC814);
    edx = MEM32(0x7AC810);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB5C4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB5C0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AC818) = eax;
    MEM32(eax) = 6;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0020E651; /* jne: not equal / not zero */

loc_0020E639: ;
    eax = MEM32(0x7AC818);
    MEM32(eax + 8) = 0x274E1290;
    MEM32(0x7AB5DC) = 0x7ABD90;
    goto loc_0020E6A0;

loc_0020E651: ;
    esi = MEM32(0x842E24);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020E669u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0020E669: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020E675; /* jge: greater or equal (signed >=) */

loc_0020E670: ;
    eax = esi + 0x10;
    goto loc_0020E67B;

loc_0020E675: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 4;

loc_0020E67B: ;
    eax = MEM32(eax);
    PUSH32(esp, 0);
    ecx = eax;
    MEM32(0x7AB5DC) = eax;
    PUSH32(esp, 0x0020E68Bu); RECOMP_ABI_CALL(0x00217690u, sub_00217690); /* call 0x00217690 */

loc_0020E68B: ;
    edx = MEM32(0x7AC818);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(edx + 8) = eax;

loc_0020E6A0: ;
    eax = MEM32(0x7AC818);
    MEM32(eax + 4) = 0x14;
    eax = MEM32(0x7AC818);
    esi = MEM32(eax + 4);
    ecx = MEM32(esp + 0x18);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx * 4 + 0x301650);
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    eax = MEM32(0x7AC818);
    MEM32(eax + 4) = MEM32(eax + 4) | 0x10000;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x7AC818);
    MEM32(eax + 4) = MEM32(eax + 4) | 0x20000;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0xC);
    ecx = ZX8(MEM8(esp + 0xE));
    edx = eax;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(0x7AC818);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x7AC818);
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(0x7AB5D8), g_mxcsr, 1); /* cvttss2si */
    MEM16(eax + 0x10) = LO16(edx);
    eax = MEM32(0x7AC818);
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(0x7AB5D0), g_mxcsr, 1); /* cvttss2si */
    MEM16(eax + 0x12) = LO16(edx);
    eax = MEM32(0x7AC818);
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(0x7AB5D4), g_mxcsr, 1); /* cvttss2si */
    MEM16(eax + 0x14) = LO16(edx);
    eax = MEM32(0x7AC818);
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(0x7AB5CC), g_mxcsr, 1); /* cvttss2si */
    MEM16(eax + 0x16) = LO16(edx);
    esi = MEM32(0x7AC800);
    edx = MEM32(0x7AC804);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x7AC818);
    MEM16(edx + 0x18) = LO16(eax);
    eax = MEM32(0x7AC818);
    MEM16(eax + 0x1A) = 0;
    eax = MEM32(0x7AC814);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(0x7AB600) = xmm0.f[0]; /* movss */
    MEMF(0x7AB5FC) = xmm1.f[0]; /* movss */
    MEM32(0x7AB5F0) = ecx;
    MEM32(0x7AC814) = eax;
    MEM8(0x7AC7E5) = 0;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0020E7B0
 * Original: 0x0020E7B0 - 0x0020E92A (378 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E7B0(void)
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

loc_0020E7B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020E87C; /* jg: greater (signed >) */

loc_0020E7BD: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0020E865; /* je: equal / zero */

loc_0020E7C3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020E8E6; /* ja: above (unsigned >) */

loc_0020E7CD: ;
    eax = ZX8(MEM8(eax + 0x20E948));
    { uint32_t _jt = MEM32(eax * 4 + 0x20E92C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0020E7DBu) goto loc_0020E7DB;
    if (_jt == 0x0020E7F2u) goto loc_0020E7F2;
    if (_jt == 0x0020E809u) goto loc_0020E809;
    if (_jt == 0x0020E820u) goto loc_0020E820;
    if (_jt == 0x0020E837u) goto loc_0020E837;
    if (_jt == 0x0020E84Eu) goto loc_0020E84E;
    if (_jt == 0x0020E8E6u) goto loc_0020E8E6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020E7DB: ;
    SET_LO8(eax, MEM8(ecx + 0xA));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E7F2: ;
    SET_LO8(eax, MEM8(ecx + 0xB));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E809: ;
    SET_LO8(eax, MEM8(ecx + 0xE));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E820: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E837: ;
    SET_LO8(eax, MEM8(ecx + 0xF));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E84E: ;
    SET_LO8(eax, MEM8(ecx + 0x11));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E865: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E87C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020E8D8; /* jg: greater (signed >) */

loc_0020E883: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0020E8C1; /* je: equal / zero */

loc_0020E885: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E8AA; /* je: equal / zero */

loc_0020E88C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E8E6; /* jne: not equal / not zero */

loc_0020E893: ;
    SET_LO8(eax, MEM8(ecx + 8));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E8AA: ;
    SET_LO8(eax, MEM8(ecx + 0xD));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E8C1: ;
    SET_LO8(eax, MEM8(ecx + 6));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E8D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E913; /* je: equal / zero */

loc_0020E8DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E8FC; /* je: equal / zero */

loc_0020E8E6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E8FC: ;
    SET_LO8(eax, MEM8(ecx + 7));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E913: ;
    SET_LO8(eax, MEM8(ecx + 9));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E800
 * Original: 0x0020E800 - 0x0020E92A (298 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E800(void)
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

loc_0020E800: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

    if (_flags /* je: equal / zero */) goto loc_0020E8C1;

loc_0020E885: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E8AA; /* je: equal / zero */

loc_0020E88C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E8E6; /* jne: not equal / not zero */

loc_0020E893: ;
    SET_LO8(eax, MEM8(ecx + 8));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E8AA: ;
    SET_LO8(eax, MEM8(ecx + 0xD));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E8C1: ;
    SET_LO8(eax, MEM8(ecx + 6));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E8D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E913; /* je: equal / zero */

loc_0020E8DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E8FC; /* je: equal / zero */

loc_0020E8E6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E8FC: ;
    SET_LO8(eax, MEM8(ecx + 7));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

loc_0020E913: ;
    SET_LO8(eax, MEM8(ecx + 9));
    ecx = ZX8(LO8(eax));
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E970
 * Original: 0x0020E970 - 0x0020E99D (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0020E970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E970: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020E97A; /* jge: greater or equal (signed >=) */

loc_0020E977: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0020E97A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    ecx = MEM32(eax + 0x7AC864);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020E99A; /* je: equal / zero */

loc_0020E98A: ;
    ecx = MEM32(eax + 0x7AC860);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020E99A; /* jne: not equal / not zero */

loc_0020E994: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0020E99A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020E9A0
 * Original: 0x0020E9A0 - 0x0020E9BC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E9A0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020E9AA; /* jge: greater or equal (signed >=) */

loc_0020E9A7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0020E9AA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    ecx = MEM32(eax + 0x7AC860);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0020E9C0
 * Original: 0x0020E9C0 - 0x0020E9D7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E9C0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020E9CA; /* jge: greater or equal (signed >=) */

loc_0020E9C7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0020E9CA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    SET_LO8(eax, MEM8(eax + 0x7AC85E));
    esp += 4; return; /* ret */

}

/**
 * sub_0020E9E0
 * Original: 0x0020E9E0 - 0x0020EAF5 (277 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020E9E0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC0) = edx;
    MEM32(ecx + 0xC4) = edx;
    MEM32(ecx + 0xC8) = edx;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x6C) = eax;
    MEM32(ecx + 0x70) = eax;
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x78) = eax;
    MEM32(ecx + 0x7C) = eax;
    MEM32(ecx + 0x80) = eax;
    MEM32(ecx + 0x84) = eax;
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = eax;
    MEM32(ecx + 0x9C) = eax;
    MEM32(ecx + 0xA0) = eax;
    MEM32(ecx + 0xA4) = eax;
    MEM32(ecx + 0xA8) = eax;
    MEM32(ecx + 0xAC) = eax;
    MEM32(ecx + 0xB0) = eax;
    MEM32(ecx + 0xB4) = eax;
    MEM32(ecx + 0xB8) = eax;
    MEM32(ecx + 0xBC) = eax;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020EAF4; /* jle: less or equal (signed <=) */

loc_0020EAB9: ;
    ecx = MEM32(0x30F1C8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    _fb = (uint32_t)(0x7AC848) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7AC848;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x30F1D0);
    MEM16(eax + 0x14) = LO16(edx);
    edx = MEM32(0x30F1CC);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x30F1D4);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x30F1D8);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;

loc_0020EAF4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020EB00
 * Original: 0x0020EB00 - 0x0020F0DD (1501 bytes, 417 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EB00(void)
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

loc_0020EB00: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0020EB61; /* jge: greater or equal (signed >=) */

loc_0020EB0D: ;
    SET_LO8(eax, MEM8(esi + 0xCE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F0D6; /* je: equal / zero */

loc_0020EB1B: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x7AC884;

loc_0020EB22: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0020EB3D; /* je: equal / zero */

loc_0020EB27: ;
    SET_LO8(edx, MEM8(eax + -38));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020EB3D; /* jne: not equal / not zero */

loc_0020EB2E: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + -60));
    SET_LO8(edx, MEM8(eax + -59));
    edx = ~edx;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0020EB4C; /* jne: not equal / not zero */

loc_0020EB3D: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x9C)) >> 32) & 1);
    eax = eax + 0x9C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7ACAF4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7ACAF4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0020EB22; /* jl: less (signed <) */

loc_0020EB4A: ;
    goto loc_0020EB4F;

loc_0020EB4C: ;
    MEM32(esi + 0x1C) = ecx;

loc_0020EB4F: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0020F0D6; /* jl: less (signed <) */

loc_0020EB5A: ;
    MEM8(esi + 0xCE) = 0;

loc_0020EB61: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    ecx = ZX8(MEM8(eax + 0x7AC84C));
    xmm0 = XMM_SCALAR(MEMF(0x2E73DC)); /* movss */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x80));
    ecx = ecx - 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    edx = ZX8(MEM8(eax + 0x7AC84D));
    xmm1 = XMM_SCALAR(MEMF(0x3016A4)); /* movss */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x80));
    edx = edx - 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x24) = xmm2.f[0]; /* movss */
    ecx = ZX8(MEM8(eax + 0x7AC84A));
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x80));
    ecx = ecx - 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x28) = xmm2.f[0]; /* movss */
    edx = ZX8(MEM8(eax + 0x7AC84B));
    ecx = MEM32(esi + 0xC0);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x80));
    edx = edx - 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = eax + 0x7AC848;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    SET_HI8(eax, MEM8(edx));
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    xmm2 = xmm1; /* movaps */
    SET_LO8(eax, MEM8(edx + 1));
    eax = ~eax;
    eax = ZX16(LO16(eax));
    MEM32(esi + 0xC0) = eax;
    edi = ZX16(MEM16(edx + 0x14));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(edx));
    SET_LO8(eax, MEM8(edx + 1));
    eax = ~eax;
    eax = ZX16(LO16(eax));
    _cf = 0; /* logical op clears CF */
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC4) = edi;
    edi = MEM32(esi + 0xC0);
    eax = edi;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x1000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0xC8) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0020EC45; /* jne: not equal / not zero */

loc_0020EC42: ;
    xmm2 = xmm0; /* movaps */

loc_0020EC45: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x2000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = esi + 0x50;
    MEMF(ebx) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_0020EC5A; /* jne: not equal / not zero */

loc_0020EC57: ;
    xmm2 = xmm0; /* movaps */

loc_0020EC5A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x4000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi + 0x54) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_0020EC6D; /* jne: not equal / not zero */

loc_0020EC6A: ;
    xmm2 = xmm0; /* movaps */

loc_0020EC6D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x8000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi + 0x58) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_0020EC80; /* jne: not equal / not zero */

loc_0020EC7D: ;
    xmm2 = xmm0; /* movaps */

loc_0020EC80: ;
    PUSH32(esp, 1);
    ecx = edx;
    MEMF(esi + 0x5C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0020EC8Eu); RECOMP_ABI_CALL(0x0020E7B0u, sub_0020E7B0); /* call 0x0020E7B0 */

loc_0020EC8E: ;
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    ecx = edx;
    PUSH32(esp, 0x0020EC9Au); RECOMP_ABI_CALL(0x0020E7B0u, sub_0020E7B0); /* call 0x0020E7B0 */

loc_0020EC9A: ;
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    ecx = edx;
    PUSH32(esp, 0x0020ECA6u); RECOMP_ABI_CALL(0x0020E7B0u, sub_0020E7B0); /* call 0x0020E7B0 */

loc_0020ECA6: ;
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 8);
    ecx = edx;
    PUSH32(esp, 0x0020ECB2u); RECOMP_ABI_CALL(0x0020E7B0u, sub_0020E7B0); /* call 0x0020E7B0 */

loc_0020ECB2: ;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x10);
    ecx = edx;
    PUSH32(esp, 0x0020ECBEu); RECOMP_ABI_CALL(0x0020E7B0u, sub_0020E7B0); /* call 0x0020E7B0 */

loc_0020ECBE: ;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x20);
    ecx = edx;
    PUSH32(esp, 0x0020ECCAu); RECOMP_ABI_CALL(0x0020E7B0u, sub_0020E7B0); /* call 0x0020E7B0 */

loc_0020ECCA: ;
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x200 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = ZX8(MEM8(edx + 0xC));
    xmm2 = XMM_SCALAR(MEMF(0x2E7B88)); /* movss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 0x78) = xmm3.f[0]; /* movss */
    edx = ZX8(MEM8(edx + 0xD));
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 0x7C) = xmm3.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_0020ED05; /* jne: not equal / not zero */

loc_0020ED02: ;
    xmm2 = xmm0; /* movaps */

loc_0020ED05: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x400 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi + 0x80) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_0020ED1B; /* jne: not equal / not zero */

loc_0020ED18: ;
    xmm2 = xmm0; /* movaps */

loc_0020ED1B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x100 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi + 0x84) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_0020ED31; /* jne: not equal / not zero */

loc_0020ED2E: ;
    xmm2 = xmm0; /* movaps */

loc_0020ED31: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x800 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi + 0x88) = xmm2.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0020ED44; /* je: equal / zero */

loc_0020ED41: ;
    xmm0 = xmm1; /* movaps */

loc_0020ED44: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020ED59u); RECOMP_ABI_CALL(0x001FA000u, sub_001FA000); /* call 0x001FA000 */

loc_0020ED59: ;
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x28);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020ED69u); RECOMP_ABI_CALL(0x001FA000u, sub_001FA000); /* call 0x001FA000 */

loc_0020ED69: ;
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(0x3016A0)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x34) = ecx;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0020EDD5; /* jbe: below or equal (unsigned <=) */

loc_0020EDCD: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_0020EDE5;

loc_0020EDD5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0020EDE5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020EDF8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0020EDF0: ;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_0020EE02;

loc_0020EDF8: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0020EE02: ;
    fp_push(MEMD(0x2DF110)); /* fld double */
    edx = MEM32(esi + 0x30);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0020EE2Cu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0020EE2C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x34)); /* fmul dword ptr [esi + 0x34] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0020EE59; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0020EE4B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0020EE59; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020EE56: ;
    xmm0 = xmm1; /* movaps */

loc_0020EE59: ;
    eax = MEM32(esi + 0x30);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020EE73u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0020EE73: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x34)); /* fmul dword ptr [esi + 0x34] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0020EEA0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0020EE92: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0020EEA0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020EE9D: ;
    xmm0 = xmm1; /* movaps */

loc_0020EEA0: ;
    ecx = MEM32(esi + 0x38);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020EEC3u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0020EEC3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0020EEF0; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0020EEE2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0020EEF0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020EEED: ;
    xmm0 = xmm1; /* movaps */

loc_0020EEF0: ;
    edx = MEM32(esi + 0x38);
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020EF0Au); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0020EF0A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0020EF34; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020EF29: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020EF37; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0020EF34: ;
    xmm0 = xmm1; /* movaps */

loc_0020EF37: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, eax);
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020EF51u); RECOMP_ABI_CALL(0x0020F6E0u, sub_0020F6E0); /* call 0x0020F6E0 */

loc_0020EF51: ;
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020EF62u); RECOMP_ABI_CALL(0x0020F6E0u, sub_0020F6E0); /* call 0x0020F6E0 */

loc_0020EF62: ;
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020EF73u); RECOMP_ABI_CALL(0x0020F6E0u, sub_0020F6E0); /* call 0x0020F6E0 */

loc_0020EF73: ;
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020EF84u); RECOMP_ABI_CALL(0x0020F6E0u, sub_0020F6E0); /* call 0x0020F6E0 */

loc_0020EF84: ;
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 0x44);
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x30F1E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ebp = esi + 0xD0;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0020EFA7u); RECOMP_ABI_CALL(0x0020F770u, sub_0020F770); /* call 0x0020F770 */

loc_0020EFA7: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(0x30F1E4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0020EFB9u); RECOMP_ABI_CALL(0x0020F770u, sub_0020F770); /* call 0x0020F770 */

loc_0020EFB9: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(0x30F1E8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0020EFCAu); RECOMP_ABI_CALL(0x0020F770u, sub_0020F770); /* call 0x0020F770 */

loc_0020EFCA: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(0x30F1EC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0020EFDCu); RECOMP_ABI_CALL(0x0020F770u, sub_0020F770); /* call 0x0020F770 */

loc_0020EFDC: ;
    edi = 0x30F1F0;

loc_0020EFE1: ;
    eax = MEM32(ebx);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0020EFEEu); RECOMP_ABI_CALL(0x0020F770u, sub_0020F770); /* call 0x0020F770 */

loc_0020EFEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30F230) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30F230 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0020EFE1; /* jl: less (signed <) */

loc_0020EFFC: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = 0x30F1F0;
    MEM32(esp + 0x14) = 0x10;
    edi = edi;

loc_0020F010: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0020F08C; /* ja: above (unsigned >) */

loc_0020F017: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x20F0E0); /* switch: 16 entries, 16 targets */
    if (_jt == 0x0020F01Eu) goto loc_0020F01E;
    if (_jt == 0x0020F025u) goto loc_0020F025;
    if (_jt == 0x0020F02Cu) goto loc_0020F02C;
    if (_jt == 0x0020F033u) goto loc_0020F033;
    if (_jt == 0x0020F03Au) goto loc_0020F03A;
    if (_jt == 0x0020F041u) goto loc_0020F041;
    if (_jt == 0x0020F048u) goto loc_0020F048;
    if (_jt == 0x0020F04Fu) goto loc_0020F04F;
    if (_jt == 0x0020F056u) goto loc_0020F056;
    if (_jt == 0x0020F05Du) goto loc_0020F05D;
    if (_jt == 0x0020F064u) goto loc_0020F064;
    if (_jt == 0x0020F06Bu) goto loc_0020F06B;
    if (_jt == 0x0020F072u) goto loc_0020F072;
    if (_jt == 0x0020F079u) goto loc_0020F079;
    if (_jt == 0x0020F080u) goto loc_0020F080;
    if (_jt == 0x0020F087u) goto loc_0020F087;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020F01E: ;
    edi = 0x1000;
    goto loc_0020F08C;

loc_0020F025: ;
    edi = 0x2000;
    goto loc_0020F08C;

loc_0020F02C: ;
    edi = 0x4000;
    goto loc_0020F08C;

loc_0020F033: ;
    edi = 0x8000;
    goto loc_0020F08C;

loc_0020F03A: ;
    edi = 1;
    goto loc_0020F08C;

loc_0020F041: ;
    edi = 2;
    goto loc_0020F08C;

loc_0020F048: ;
    edi = 4;
    goto loc_0020F08C;

loc_0020F04F: ;
    edi = 8;
    goto loc_0020F08C;

loc_0020F056: ;
    edi = 0x10;
    goto loc_0020F08C;

loc_0020F05D: ;
    edi = 0x20;
    goto loc_0020F08C;

loc_0020F064: ;
    edi = 0x40;
    goto loc_0020F08C;

loc_0020F06B: ;
    edi = 0x80;
    goto loc_0020F08C;

loc_0020F072: ;
    edi = 0x200;
    goto loc_0020F08C;

loc_0020F079: ;
    edi = 0x400;
    goto loc_0020F08C;

loc_0020F080: ;
    edi = 0x100;
    goto loc_0020F08C;

loc_0020F087: ;
    edi = 0x800;

loc_0020F08C: ;
    _fa = (uint32_t)(MEM32(esi + 0xC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0xC4), edi (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0020F0A2; /* je: equal / zero */

loc_0020F094: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0020F0A2u); RECOMP_ABI_CALL(0x0020F7A0u, sub_0020F7A0); /* call 0x0020F7A0 */

loc_0020F0A2: ;
    _fa = (uint32_t)(MEM32(esi + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0xC8), edi (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0020F0B8; /* je: equal / zero */

loc_0020F0AA: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0020F0B8u); RECOMP_ABI_CALL(0x0020F7D0u, sub_0020F7D0); /* call 0x0020F7D0 */

loc_0020F0B8: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_0020F010; /* jne: not equal / not zero */

loc_0020F0D3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0020F0D6: ;
    POP32(esp, esi);
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
 * sub_0020F120
 * Original: 0x0020F120 - 0x0020F17F (95 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F120(void)
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

loc_0020F120: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020F17C; /* jle: less or equal (signed <=) */

loc_0020F128: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fb = (uint32_t)(0x7AC848) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7AC848;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F14C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020F144: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    goto loc_0020F165;

loc_0020F14C: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0020F165; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0020F15F: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0020F165: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7C34)); /* fmul dword ptr [0x2e7c34] */
    PUSH32(esp, 0x0020F174u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0020F174: ;
    MEM16(esi + 0x98) = LO16(eax);
    POP32(esp, esi);

loc_0020F17C: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020F180
 * Original: 0x0020F180 - 0x0020F1DF (95 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F180(void)
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

loc_0020F180: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020F1DC; /* jle: less or equal (signed <=) */

loc_0020F188: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fb = (uint32_t)(0x7AC848) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7AC848;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F1AC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020F1A4: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    goto loc_0020F1C5;

loc_0020F1AC: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0020F1C5; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0020F1BF: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0020F1C5: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7C34)); /* fmul dword ptr [0x2e7c34] */
    PUSH32(esp, 0x0020F1D4u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0020F1D4: ;
    MEM16(esi + 0x9A) = LO16(eax);
    POP32(esp, esi);

loc_0020F1DC: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020F1E0
 * Original: 0x0020F1E0 - 0x0020F211 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F1E0: ;
    SET_LO8(eax, MEM8(ecx + 0xCE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F1F0; /* je: equal / zero */

loc_0020F1EA: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0020F1F0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F20B; /* je: equal / zero */

loc_0020F1F8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    ecx = MEM32(eax + 0x7AC884);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F20B; /* je: equal / zero */

loc_0020F208: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0020F20B: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0020F220
 * Original: 0x0020F220 - 0x0020F2A4 (132 bytes, 36 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F220: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2D4334);
    PUSH32(esp, 0x0020F22Bu); RECOMP_ABI_CALL(0x002D5579u, sub_002D5579); /* call 0x002D5579 */

loc_0020F22B: ;
    esi = MEM32(esp + 8);
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020F2A0; /* je: equal / zero */

loc_0020F23C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2D4334);
    PUSH32(esp, 0x0020F24Bu); RECOMP_ABI_CALL(0x002D5272u, sub_002D5272); /* call 0x002D5272 */

loc_0020F24B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x7AC884) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020F2A0; /* je: equal / zero */

loc_0020F25B: ;
    ecx = esi + 0x7AC868;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F268u); RECOMP_ABI_CALL(0x002D52D4u, sub_002D52D4); /* call 0x002D52D4 */

loc_0020F268: ;
    edx = MEM32(0x30F1C8);
    ecx = MEM32(0x30F1CC);
    eax = esi + 0x7AC848;
    MEM32(eax) = edx;
    edx = MEM32(0x30F1D0);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x30F1D4);
    MEM32(eax + 8) = edx;
    edx = MEM32(0x30F1D8);
    MEM32(eax + 0xC) = ecx;
    MEM16(eax + 0x14) = 0;
    MEM32(eax + 0x10) = edx;

loc_0020F2A0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020F2B0
 * Original: 0x0020F2B0 - 0x0020F518 (616 bytes, 196 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F2B0(void)
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

loc_0020F2B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F511; /* je: equal / zero */

loc_0020F2C1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi));
    PUSH32(esp, ebx);
    edx = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(ecx, MEM8(esi + 1));
    ecx = ~ecx;
    MEM16(esi + 0x14) = LO16(ecx);
    PUSH32(esp, 0x0020F2D9u); RECOMP_ABI_CALL(0x002D54ACu, sub_002D54AC); /* call 0x002D54AC */

loc_0020F2D9: ;
    SET_LO16(ecx, MEM16(esi + 0x44));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 6) = LO8(eax);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 7) = LO8(edx);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0xA) = LO8(edx);
    MEM8(esi + 8) = LO8(edx);
    SET_LO16(edx, LO16(ecx));
    SET_LO16(edx, LO16(edx) >> 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    MEM16(esp + 0xE) = LO16(edx);
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 9) = LO8(edx);
    SET_LO8(edx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, LO8(edx) & 0xFC);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) << 5);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(eax));
    SET_LO8(eax, LO8(eax) & 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) << 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 8);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) << 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esp + 0xA));
    SET_LO8(eax, LO8(eax) << 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esp + 0xE));
    SET_LO8(eax, LO8(eax) & 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO16(ecx, LO16(ecx) >> 5);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esi + 0x46));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, MEM8(esi + 0x48));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(esi + 0x47));
    MEM8(esi) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi + 0x49));
    MEM8(esp + 0xA) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi + 0x4A));
    MEM8(esp + 0xB) = LO8(ebx);
    MEM8(esi + 0x11) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi + 0x4B));
    MEM8(esp + 0xC) = LO8(ebx);
    MEM8(esi + 0x10) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi + 0x4C));
    MEM8(esi + 0xC) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM8(esp + 0xD) = LO8(ebx);
    MEM8(esi + 0xE) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi + 0x4D));
    MEM8(esi + 0xB) = LO8(ecx);
    MEM8(esi + 0xD) = LO8(edx);
    MEM8(esp + 0xE) = LO8(ebx);
    MEM8(esi + 0xF) = LO8(ebx);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x10) = 0x40;
    if ((_fca > _fcb)) goto loc_0020F3BB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020F3B3: ;
    MEM32(esp + 0x10) = 0;

loc_0020F3BB: ;
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = ZX8(LO8(ecx));
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F3D7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020F3D0: ;
    ecx = 0x20;
    goto loc_0020F3D9;

loc_0020F3D7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020F3D9: ;
    edx = ZX8(LO8(edx));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F3EE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020F3E7: ;
    ecx = 0x80;
    goto loc_0020F3F0;

loc_0020F3EE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020F3F0: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(esp + 6));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F407; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020F400: ;
    ecx = 0x10;
    goto loc_0020F409;

loc_0020F407: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020F409: ;
    edx = ZX8(MEM8(esp + 7));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F420; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020F419: ;
    ecx = 2;
    goto loc_0020F422;

loc_0020F420: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020F422: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(esp + 8));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F439; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020F432: ;
    ecx = 1;
    goto loc_0020F43B;

loc_0020F439: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020F43B: ;
    edx = ZX8(MEM8(esp + 9));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F452; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020F44B: ;
    ecx = 4;
    goto loc_0020F454;

loc_0020F452: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020F454: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(esp + 0xA));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F46B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0020F464: ;
    ecx = 8;
    goto loc_0020F46D;

loc_0020F46B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020F46D: ;
    SET_LO16(edx, MEM16(esi + 0x52));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x8000) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + 0x8000);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(esi + 1) = LO8(eax);
    eax = ZX16(LO16(edx));
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3016A8)); /* fmul dword ptr [0x3016a8] */
    PUSH32(esp, 0x0020F491u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0020F491: ;
    SET_LO16(ecx, MEM16(esi + 0x54));
    _fb = (uint32_t)(0x8000) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x8000);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edx = ZX16(LO16(ecx));
    MEM32(esp + 0xC) = edx;
    MEM8(esi + 2) = LO8(eax);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3016A8)); /* fmul dword ptr [0x3016a8] */
    PUSH32(esp, 0x0020F4B3u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0020F4B3: ;
    SET_LO16(edx, MEM16(esi + 0x4E));
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x8000) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + 0x8000);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ZX16(LO16(edx));
    MEM32(esp + 0xC) = eax;
    MEM8(esi + 3) = LO8(ecx);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3016A8)); /* fmul dword ptr [0x3016a8] */
    PUSH32(esp, 0x0020F4DAu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0020F4DA: ;
    SET_LO16(ecx, MEM16(esi + 0x50));
    _fb = (uint32_t)(0x8000) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x8000);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edx = ZX16(LO16(ecx));
    MEM32(esp + 0xC) = edx;
    MEM8(esi + 4) = LO8(eax);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3016A8)); /* fmul dword ptr [0x3016a8] */
    PUSH32(esp, 0x0020F4FCu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0020F4FC: ;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x3C);
    edx = esi + 0x56;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM8(esi + 5) = LO8(ecx);
    PUSH32(esp, 0x0020F511u); RECOMP_ABI_CALL(0x002D551Fu, sub_002D551F); /* call 0x002D551F */

loc_0020F511: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020F520
 * Original: 0x0020F520 - 0x0020F5C1 (161 bytes, 52 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F520: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2D4334);
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0020F54Au); RECOMP_ABI_CALL(0x002D559Bu, sub_002D559B); /* call 0x002D559B */

loc_0020F54A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x7AC884;
    MEM32(esp + 0x14) = 4;
    /* nop */

loc_0020F560: ;
    edx = MEM32(esp + 0xC);
    edi = 1;
    ecx = ebx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ZX8(LO8(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + -32) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020F58E; /* je: equal / zero */

loc_0020F57C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F58E; /* je: equal / zero */

loc_0020F582: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F588u); RECOMP_ABI_CALL(0x002D52C8u, sub_002D52C8); /* call 0x002D52C8 */

loc_0020F588: ;
    MEM32(esi) = 0;

loc_0020F58E: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x10), edi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + -36) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020F5A8; /* je: equal / zero */

loc_0020F59F: ;
    PUSH32(esp, ebx);
    ecx = esi + -60;
    PUSH32(esp, 0x0020F5A8u); RECOMP_ABI_CALL(0x0020F220u, sub_0020F220); /* call 0x0020F220 */

loc_0020F5A8: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x9C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_0020F560; /* jne: not equal / not zero */

loc_0020F5BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020F5D0
 * Original: 0x0020F5D0 - 0x0020F5F9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F5D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020F5D7u); RECOMP_ABI_CALL(0x0020F520u, sub_0020F520); /* call 0x0020F520 */

loc_0020F5D7: ;
    edi = MEM32(esp + 0xC);
    esi = 0x7AC848;

loc_0020F5E0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0020F5E8u); RECOMP_ABI_CALL(0x0020F2B0u, sub_0020F2B0); /* call 0x0020F2B0 */

loc_0020F5E8: ;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x9C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7ACAB8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7ACAB8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020F5E0; /* jl: less (signed <) */

loc_0020F5F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020F600
 * Original: 0x0020F600 - 0x0020F677 (119 bytes, 32 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F600: ;
    eax = MEM32(0x7ACAC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F66D; /* jne: not equal / not zero */

loc_0020F60C: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    MEM32(esp + 8) = 0x2D4334;
    MEM32(esp + 0xC) = 4;
    MEM32(esp + 0x10) = 0x2D43E0;
    MEM32(esp + 0x14) = 2;
    PUSH32(esp, 0x0020F637u); RECOMP_ABI_CALL(0x002D5574u, sub_002D5574); /* call 0x002D5574 */

loc_0020F637: ;
    PUSH32(esp, 0x0020F63Cu); RECOMP_ABI_CALL(0x002D5918u, sub_002D5918); /* call 0x002D5918 */

loc_0020F63C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020F654; /* jne: not equal / not zero */

loc_0020F641: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0020F64Au); RECOMP_ABI_CALL(0x002292D1u, sub_002292D1); /* call 0x002292D1 */

loc_0020F64A: ;
    PUSH32(esp, 0x0020F64Fu); RECOMP_ABI_CALL(0x002D5918u, sub_002D5918); /* call 0x002D5918 */

loc_0020F64F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F641; /* je: equal / zero */

loc_0020F654: ;
    ecx = MEM32(0x7ACAC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F663; /* je: equal / zero */

loc_0020F65E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0020F663u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020F660u); } /* indirect call */
    }

loc_0020F663: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020F66Au); RECOMP_ABI_CALL(0x0020F5D0u, sub_0020F5D0); /* call 0x0020F5D0 */

loc_0020F66A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020F66D: ;
    MEM32(0x7ACAC0) = MEM32(0x7ACAC0) + 1;
    _fa = (uint32_t)(MEM32(0x7ACAC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020F680
 * Original: 0x0020F680 - 0x0020F699 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F680: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020F688u); RECOMP_ABI_CALL(0x0020F600u, sub_0020F600); /* call 0x0020F600 */

loc_0020F688: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esi + 0xCC) = LO16(eax);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020F6A0
 * Original: 0x0020F6A0 - 0x0020F6AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F6A0: ;
    MEM32(ecx) = 0x3016AC;
    g_seh_ebp = ebp; sub_001FA0A0(); return; /* tail jmp 0x001FA0A0 */

}

/**
 * sub_0020F6B0
 * Original: 0x0020F6B0 - 0x0020F6B7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F6B0(void)
{

loc_0020F6B0: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020F6C0
 * Original: 0x0020F6C0 - 0x0020F6DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020F6C8u); RECOMP_ABI_CALL(0x0020F6A0u, sub_0020F6A0); /* call 0x0020F6A0 */

loc_0020F6C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020F6D8; /* je: equal / zero */

loc_0020F6CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020F6D5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0020F6D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020F6D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020F6E0
 * Original: 0x0020F6E0 - 0x0020F74A (106 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F6E0(void)
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

loc_0020F6E0: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F6F7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0020F6EE: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    goto loc_0020F6FA;

loc_0020F6F7: ;
    xmm1 = xmm0; /* movaps */

loc_0020F6FA: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0020F710; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0020F705: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_0020F710: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    if ((_fca > _fcb)) goto loc_0020F728; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0020F725: ;
    xmm2 = xmm0; /* movaps */

loc_0020F728: ;
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020F750
 * Original: 0x0020F750 - 0x0020F76A (26 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F750: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020F767; /* jl: less (signed <) */

loc_0020F758: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020F767u); RECOMP_ABI_CALL(0x0004D110u, sub_0004D110); /* call 0x0004D110 */

loc_0020F767: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F770
 * Original: 0x0020F770 - 0x0020F799 (41 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F770: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0020F795; /* je: equal / zero */

loc_0020F77B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_0020F780: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F794; /* je: equal / zero */

loc_0020F787: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0020F78Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020F78Bu); } /* indirect call */
    }

loc_0020F78E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_0020F780; /* jne: not equal / not zero */

loc_0020F794: ;
    POP32(esp, edi);

loc_0020F795: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020F7A0
 * Original: 0x0020F7A0 - 0x0020F7C7 (39 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F7A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0020F7C3; /* je: equal / zero */

loc_0020F7AB: ;
    goto loc_0020F7B0;

    /* nop */

loc_0020F7B0: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F7C3; /* je: equal / zero */

loc_0020F7B7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0020F7BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020F7BAu); } /* indirect call */
    }

loc_0020F7BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_0020F7B0; /* jne: not equal / not zero */

loc_0020F7C3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020F7D0
 * Original: 0x0020F7D0 - 0x0020F7F7 (39 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F7D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0020F7F3; /* je: equal / zero */

loc_0020F7DB: ;
    goto loc_0020F7E0;

    /* nop */

loc_0020F7E0: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020F7F3; /* je: equal / zero */

loc_0020F7E7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0020F7EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020F7EAu); } /* indirect call */
    }

loc_0020F7ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_0020F7E0; /* jne: not equal / not zero */

loc_0020F7F3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020F800
 * Original: 0x0020F800 - 0x0020F90C (268 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020F808u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0020F808: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x3016AC;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0xC0) = ecx;
    MEM32(esi + 0xC4) = ecx;
    MEM32(esi + 0xC8) = ecx;
    MEM32(esi + 0xD8) = ecx;
    MEM32(esi + 0xE0) = ecx;
    eax = esi + 0xD0;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM16(esi + 0xCC) = 0xFFFF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xBC) = eax;
    MEM8(esi + 0xCE) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020F910
 * Original: 0x0020F910 - 0x0020F916 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F910(void)
{

loc_0020F910: ;
    eax = MEM32(0x30F234);
    esp += 4; return; /* ret */

}

/**
 * sub_0020F920
 * Original: 0x0020F920 - 0x0020F926 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F920(void)
{

loc_0020F920: ;
    eax = MEM32(0x30F230);
    esp += 4; return; /* ret */

}

/**
 * sub_0020F930
 * Original: 0x0020F930 - 0x0020F9B6 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F930: ;
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
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x6C) = eax;
    MEM32(ecx + 0x70) = eax;
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x78) = eax;
    MEM32(ecx + 0x7C) = eax;
    MEM32(ecx + 0x80) = eax;
    MEM32(ecx + 0x84) = eax;
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0020F9C0
 * Original: 0x0020F9C0 - 0x0020F9FB (59 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F9C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020F9C0: ;
    PUSH32(esp, 0x404);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1680000);
    PUSH32(esp, 0x0020F9D3u); RECOMP_ABI_CALL(0x0022AEE9u, sub_0022AEE9); /* call 0x0022AEE9 */

loc_0020F9D3: ;
    PUSH32(esp, 0xFA0);
    PUSH32(esp, 0x7AD608);
    PUSH32(esp, 0x1680000);
    PUSH32(esp, eax);
    MEM32(0x7B5308) = eax;
    PUSH32(esp, 0x0020F9EDu); RECOMP_ABI_CALL(0x001F6A30u, sub_001F6A30); /* call 0x001F6A30 */

loc_0020F9ED: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6437D0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0020FA00
 * Original: 0x0020FA00 - 0x0020FA11 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FA00: ;
    PUSH32(esp, edi);
    ecx = 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x7AD0D0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020FA20
 * Original: 0x0020FA20 - 0x0020FA5C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FA20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FA20: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x7AD5B8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x26);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(edx * 4 + 0x7ACDD8);
    eax = ecx + ecx * 4;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx * 4 + 0x7ACDD8;
    _fb = (uint32_t)(0x7DDBC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7DDBC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x90) = esi;
    MEM32(edx) = eax;
    MEM32(0x7AD5B8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020FA60
 * Original: 0x0020FA60 - 0x0020FA7D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FA60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FA60: ;
    ecx = MEM32(0x7AD5BC);
    edx = MEM32(esp + 4);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x7B53C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7B53C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x7AD5BC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0020FA80
 * Original: 0x0020FA80 - 0x0020FA90 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FA80(void)
{

loc_0020FA80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x8429B0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0020FA90
 * Original: 0x0020FA90 - 0x0020FA9C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FA90(void)
{

loc_0020FA90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8429B0);
    esp += 4; return; /* ret */

}

/**
 * sub_0020FAA0
 * Original: 0x0020FAA0 - 0x0020FAB3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020FAA0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x7AD5E8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0020FAC0
 * Original: 0x0020FAC0 - 0x0020FAD6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0020FAC0: ;
    eax = MEM32(esp + 4);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x11)) >> 32) & 1);
    eax = eax + 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30F274) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0020FAE0
 * Original: 0x0020FAE0 - 0x0020FF77 (1175 bytes, 344 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FAE0: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x30F274);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    MEM32(0x30F270) = eax;
    MEM32(0x30F274) = 0x11;
    PUSH32(esp, 0x0020FB03u); RECOMP_ABI_CALL(0x0028E260u, sub_0028E260); /* call 0x0028E260 */

loc_0020FB03: ;
    MEM32(0x7AD600) = eax;
    PUSH32(esp, 0x0020FB0Du); RECOMP_ABI_CALL(0x0022AF88u, sub_0022AF88); /* call 0x0022AF88 */

loc_0020FB0D: ;
    ebx = eax;
    ebx = ebx & 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    if ((_fa == 0)) goto loc_0020FB22; /* je: equal / zero */

loc_0020FB18: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x7B5314) = esi;
    goto loc_0020FB31;

loc_0020FB22: ;
    esi = MEM32(0x7B5314);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    edx = 0xF0;
    if (CMP_NE(_fa, _fb)) goto loc_0020FB36; /* jne: not equal / not zero */

loc_0020FB31: ;
    edx = 0x1E0;

loc_0020FB36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x11;
    edi = esp + 0x34;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x30F270);
    ecx = MEM32(0x30F230);
    MEM32(0x30F234) = edx;
    MEM32(esp + 0x38) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edi = 1;
    MEM32(esp + 0x64) = edi;
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x3C) = 6;
    MEM32(esp + 0x34) = ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x4C) = ebp;
    MEM32(esp + 0x60) = ebp;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = 0x2A;
    MEM32(esp + 0x5C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0020FBAA; /* je: equal / zero */

loc_0020FBA2: ;
    MEM32(esp + 0x5C) = 0x80;

loc_0020FBAA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FBB3; /* je: equal / zero */

loc_0020FBAE: ;
    MEM32(esp + 0x5C) = MEM32(esp + 0x5C) | 0x40;
    _fa = (uint32_t)(MEM32(esp + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020FBB3: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020FBC0; /* je: equal / zero */

loc_0020FBBA: ;
    MEM32(0x6437D0) = MEM32(0x6437D0) | edi;
    _fa = (uint32_t)(MEM32(0x6437D0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020FBC0: ;
    PUSH32(esp, 0x0020FBC5u); RECOMP_ABI_CALL(0x0022AF5Fu, sub_0022AF5F); /* call 0x0022AF5F */

loc_0020FBC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020FBD5; /* jne: not equal / not zero */

loc_0020FBCA: ;
    MEM32(0x6437D0) = MEM32(0x6437D0) | 2;
    _fa = (uint32_t)(MEM32(0x6437D0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x32);
    goto loc_0020FBD7;

loc_0020FBD5: ;
    PUSH32(esp, 0x3C);

loc_0020FBD7: ;
    PUSH32(esp, 0x0020FBDCu); RECOMP_ABI_CALL(0x001FFC00u, sub_001FFC00); /* call 0x001FFC00 */

loc_0020FBDC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0xC0000);
    PUSH32(esp, 0x0020FBEEu); RECOMP_ABI_CALL(0x0028CA80u, sub_0028CA80); /* call 0x0028CA80 */

loc_0020FBEE: ;
    PUSH32(esp, 0x7AD604);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0020FC02u); RECOMP_ABI_CALL(0x0028CAA0u, sub_0028CAA0); /* call 0x0028CAA0 */

loc_0020FC02: ;
    ecx = MEM32(0x7AD604);
    MEM32(0x7B530C) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA6;
    esi = 0x2990E0;
    edi = 0x7AD320;
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
    MEM32(0x7AD310) = edx;
    ecx = 0x80;
    esi = 0x298EE0;
    edi = 0x7AD110;
    eax = esp + 0x24;
    MEM32(0x7AD314) = edx;
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
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM32(0x7AD318) = edx;
    PUSH32(esp, ecx);
    MEM32(0x6437BC) = ebp;
    MEM32(0x7AD31C) = edx;
    PUSH32(esp, 0x0020FC5Fu); RECOMP_ABI_CALL(0x0028CC10u, sub_0028CC10); /* call 0x0028CC10 */

loc_0020FC5F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(0x7AD5FC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(0x7AD5F8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(0x7AD5F4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, 0x11);
    MEMF(0x7AD5F0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0020FC9Eu); RECOMP_ABI_CALL(0x00288D30u, sub_00288D30); /* call 0x00288D30 */

loc_0020FC9E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xF3);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    MEM32(0x7AD5EC) = ebp;
    MEM32(0x7AD5E8) = 0xF0;
    PUSH32(esp, 0x0020FCC1u); RECOMP_ABI_CALL(0x0028C030u, sub_0028C030); /* call 0x0028C030 */

loc_0020FCC1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0020FCC7u); RECOMP_ABI_CALL(0x0028BDB0u, sub_0028BDB0); /* call 0x0028BDB0 */

loc_0020FCC7: ;
    _fa = (uint32_t)(MEM32(0x7B5314)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7B5314), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020FCD8; /* jne: not equal / not zero */

loc_0020FCCF: ;
    edx = MEM32(0x30F268);
    PUSH32(esp, edx);
    goto loc_0020FCD9;

loc_0020FCD8: ;
    PUSH32(esp, ebp);

loc_0020FCD9: ;
    PUSH32(esp, 0x0020FCDEu); RECOMP_ABI_CALL(0x00289350u, sub_00289350); /* call 0x00289350 */

loc_0020FCDE: ;
    eax = MEM32(0x30F26C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FCE9u); RECOMP_ABI_CALL(0x002893A0u, sub_002893A0); /* call 0x002893A0 */

loc_0020FCE9: ;
    PUSH32(esp, 0x0020FCEEu); RECOMP_ABI_CALL(0x00289BD0u, sub_00289BD0); /* call 0x00289BD0 */

loc_0020FCEE: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(0x30F270)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30F270), 0x11 (32-bit) */
    MEM32(0x7AD5C0) = ebp;
    MEM32(0x7AD5C4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0020FE10; /* je: equal / zero */

loc_0020FD09: ;
    PUSH32(esp, 0x3017F8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0020FD16u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0020FD16: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FD2F; /* je: equal / zero */

loc_0020FD1D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x12);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0020FD28u); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_0020FD28: ;
    MEM32(0x7AD5D0) = eax;
    goto loc_0020FD35;

loc_0020FD2F: ;
    MEM32(0x7AD5D0) = ebp;

loc_0020FD35: ;
    PUSH32(esp, 0x3017D4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0020FD42u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0020FD42: ;
    ecx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FD67; /* je: equal / zero */

loc_0020FD4B: ;
    PUSH32(esp, 0x0020FD50u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0020FD50: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2E);
    edx = eax;
    PUSH32(esp, 0x0020FD5Eu); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0020FD5E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020FD65u); RECOMP_ABI_CALL(0x00215D10u, sub_00215D10); /* call 0x00215D10 */

loc_0020FD65: ;
    goto loc_0020FD69;

loc_0020FD67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020FD69: ;
    MEM32(0x7AD5D4) = eax;
    eax = MEM32(eax + 0x44);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FD78u); RECOMP_ABI_CALL(0x0028C4E0u, sub_0028C4E0); /* call 0x0028C4E0 */

loc_0020FD78: ;
    PUSH32(esp, 0x3017B0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x60);
    esi = eax;
    PUSH32(esp, 0x0020FD87u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0020FD87: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FDA0; /* je: equal / zero */

loc_0020FD8E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0020FD99u); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_0020FD99: ;
    MEM32(0x7AD5D8) = eax;
    goto loc_0020FDA6;

loc_0020FDA0: ;
    MEM32(0x7AD5D8) = ebp;

loc_0020FDA6: ;
    PUSH32(esp, 0x30178C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0020FDB3u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0020FDB3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FDCC; /* je: equal / zero */

loc_0020FDBA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0020FDC5u); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_0020FDC5: ;
    MEM32(0x7AD5C8) = eax;
    goto loc_0020FDD2;

loc_0020FDCC: ;
    MEM32(0x7AD5C8) = ebp;

loc_0020FDD2: ;
    PUSH32(esp, 0x301768);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0020FDDFu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0020FDDF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FE02; /* je: equal / zero */

loc_0020FDE6: ;
    PUSH32(esp, 0xE39B116Cu);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0020FDF5u); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_0020FDF5: ;
    PUSH32(esp, esi);
    MEM32(0x7AD5CC) = eax;
    PUSH32(esp, 0x0020FE00u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0020FE00: ;
    goto loc_0020FE7E;

loc_0020FE02: ;
    PUSH32(esp, esi);
    MEM32(0x7AD5CC) = ebp;
    PUSH32(esp, 0x0020FE0Eu); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0020FE0E: ;
    goto loc_0020FE7E;

loc_0020FE10: ;
    PUSH32(esp, 0x301744);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x60);
    MEM32(0x7AD5D0) = ebp;
    MEM32(0x7AD5D4) = ebp;
    MEM32(0x7AD5D8) = ebp;
    PUSH32(esp, 0x0020FE2Fu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0020FE2F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FE48; /* je: equal / zero */

loc_0020FE36: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0020FE41u); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_0020FE41: ;
    MEM32(0x7AD5C8) = eax;
    goto loc_0020FE4E;

loc_0020FE48: ;
    MEM32(0x7AD5C8) = ebp;

loc_0020FE4E: ;
    PUSH32(esp, 0x301720);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0020FE5Bu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0020FE5B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FE78; /* je: equal / zero */

loc_0020FE62: ;
    PUSH32(esp, 0xE39B116Cu);
    PUSH32(esp, 0x12);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0020FE71u); RECOMP_ABI_CALL(0x00216890u, sub_00216890); /* call 0x00216890 */

loc_0020FE71: ;
    MEM32(0x7AD5CC) = eax;
    goto loc_0020FE7E;

loc_0020FE78: ;
    MEM32(0x7AD5CC) = ebp;

loc_0020FE7E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020FE84u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0020FE84: ;
    PUSH32(esp, 0x3016FC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0020FE91u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0020FE91: ;
    ecx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FEC7; /* je: equal / zero */

loc_0020FE9A: ;
    PUSH32(esp, 0x0020FE9Fu); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0020FE9F: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12);
    esi = eax;
    PUSH32(esp, 0x0020FEADu); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0020FEAD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FEC0u); RECOMP_ABI_CALL(0x00215D10u, sub_00215D10); /* call 0x00215D10 */

loc_0020FEC0: ;
    MEM32(0x7AD5DC) = eax;
    goto loc_0020FECD;

loc_0020FEC7: ;
    MEM32(0x7AD5DC) = ebp;

loc_0020FECD: ;
    PUSH32(esp, 0x3016D8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0020FEDAu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0020FEDA: ;
    ecx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FF10; /* je: equal / zero */

loc_0020FEE3: ;
    PUSH32(esp, 0x0020FEE8u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0020FEE8: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12);
    esi = eax;
    PUSH32(esp, 0x0020FEF6u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_0020FEF6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020FF09u); RECOMP_ABI_CALL(0x00215D10u, sub_00215D10); /* call 0x00215D10 */

loc_0020FF09: ;
    MEM32(0x7AD5E0) = eax;
    goto loc_0020FF16;

loc_0020FF10: ;
    MEM32(0x7AD5E0) = ebp;

loc_0020FF16: ;
    PUSH32(esp, 0x0020FF1Bu); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_0020FF1B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(0x6437CC) = xmm0.f[0]; /* movss */
    MEM32(0x7ACDD0) = 5;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    goto loc_0020FF40;

    /* nop */
    /* nop */

loc_0020FF40: ;
    MEM8(eax + 0x7ACAD0) = LO8(eax);
    MEM8(eax + 0x7ACBD0) = LO8(eax);
    MEM8(eax + 0x7ACCD0) = LO8(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020FF40; /* jle: less or equal (signed <=) */

loc_0020FF5A: ;
    PUSH32(esp, 0x0020FF5Fu); RECOMP_ABI_CALL(0x00215FC0u, sub_00215FC0); /* call 0x00215FC0 */

loc_0020FF5F: ;
    PUSH32(esp, 0x0020FF64u); RECOMP_ABI_CALL(0x00215EA0u, sub_00215EA0); /* call 0x00215EA0 */

loc_0020FF64: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0020FF6Eu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0020FF6E: ;
    PUSH32(esp, 0x0020FF73u); RECOMP_ABI_CALL(0x00206910u, sub_00206910); /* call 0x00206910 */

loc_0020FF73: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020FF80
 * Original: 0x0020FF80 - 0x00210090 (272 bytes, 73 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FF80: ;
    PUSH32(esp, 0x0020FF85u); RECOMP_ABI_CALL(0x00215CB0u, sub_00215CB0); /* call 0x00215CB0 */

loc_0020FF85: ;
    PUSH32(esp, 0x0020FF8Au); RECOMP_ABI_CALL(0x00215B50u, sub_00215B50); /* call 0x00215B50 */

loc_0020FF8A: ;
    PUSH32(esp, 0x0020FF8Fu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0020FF8F: ;
    PUSH32(esp, 0x0020FF94u); RECOMP_ABI_CALL(0x002068A0u, sub_002068A0); /* call 0x002068A0 */

loc_0020FF94: ;
    PUSH32(esp, 0x0020FF99u); RECOMP_ABI_CALL(0x00216B50u, sub_00216B50); /* call 0x00216B50 */

loc_0020FF99: ;
    PUSH32(esp, 0x0020FF9Eu); RECOMP_ABI_CALL(0x00215D90u, sub_00215D90); /* call 0x00215D90 */

loc_0020FF9E: ;
    PUSH32(esp, 0x0020FFA3u); RECOMP_ABI_CALL(0x00215E20u, sub_00215E20); /* call 0x00215E20 */

loc_0020FFA3: ;
    _fa = (uint32_t)(MEM32(0x30F270)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30F270), 0x11 (32-bit) */
    MEM32(0x6437BC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0020FFE6; /* je: equal / zero */

loc_0020FFB6: ;
    ecx = MEM32(0x7AD5D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FFC6; /* je: equal / zero */

loc_0020FFC0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0020FFC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020FFC4u); } /* indirect call */
    }

loc_0020FFC6: ;
    ecx = MEM32(0x7AD5D4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FFD6; /* je: equal / zero */

loc_0020FFD0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0020FFD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020FFD4u); } /* indirect call */
    }

loc_0020FFD6: ;
    ecx = MEM32(0x7AD5D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FFE6; /* je: equal / zero */

loc_0020FFE0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0020FFE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020FFE4u); } /* indirect call */
    }

loc_0020FFE6: ;
    ecx = MEM32(0x7AD5C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020FFF6; /* je: equal / zero */

loc_0020FFF0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0020FFF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020FFF4u); } /* indirect call */
    }

loc_0020FFF6: ;
    ecx = MEM32(0x7AD5CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210006; /* je: equal / zero */

loc_00210000: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00210006u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210004u); } /* indirect call */
    }

loc_00210006: ;
    ecx = MEM32(0x7AD5DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210016; /* je: equal / zero */

loc_00210010: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00210016u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210014u); } /* indirect call */
    }

loc_00210016: ;
    ecx = MEM32(0x7AD5E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210026; /* je: equal / zero */

loc_00210020: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00210026u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210024u); } /* indirect call */
    }

loc_00210026: ;
    eax = MEM32(0x7AD604);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x7AD5C0) = ecx;
    MEM32(0x7AD5C4) = ecx;
    MEM32(0x7AD5C8) = ecx;
    MEM32(0x7AD5CC) = ecx;
    MEM32(0x7AD5D0) = ecx;
    MEM32(0x7AD5D4) = ecx;
    MEM32(0x7AD5D8) = ecx;
    MEM32(0x7AD5DC) = ecx;
    MEM32(0x7AD5E0) = ecx;
    MEM32(0x7AD5E4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0021007C; /* je: equal / zero */

loc_0021006D: ;
    PUSH32(esp, 0x00210072u); RECOMP_ABI_CALL(0x002892A0u, sub_002892A0); /* call 0x002892A0 */

loc_00210072: ;
    MEM32(0x7AD604) = 0;

loc_0021007C: ;
    eax = MEM32(0x7AD600);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021008F; /* je: equal / zero */

loc_00210085: ;
    MEM32(0x7AD600) = 0;

loc_0021008F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00210002
 * Original: 0x00210002 - 0x00210090 (142 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210002(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210002: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00210006u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210004u); } /* indirect call */
    }

loc_00210006: ;
    ecx = MEM32(0x7AD5DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210016; /* je: equal / zero */

loc_00210010: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00210016u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210014u); } /* indirect call */
    }

loc_00210016: ;
    ecx = MEM32(0x7AD5E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210026; /* je: equal / zero */

loc_00210020: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00210026u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210024u); } /* indirect call */
    }

loc_00210026: ;
    eax = MEM32(0x7AD604);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x7AD5C0) = ecx;
    MEM32(0x7AD5C4) = ecx;
    MEM32(0x7AD5C8) = ecx;
    MEM32(0x7AD5CC) = ecx;
    MEM32(0x7AD5D0) = ecx;
    MEM32(0x7AD5D4) = ecx;
    MEM32(0x7AD5D8) = ecx;
    MEM32(0x7AD5DC) = ecx;
    MEM32(0x7AD5E0) = ecx;
    MEM32(0x7AD5E4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0021007C; /* je: equal / zero */

loc_0021006D: ;
    PUSH32(esp, 0x00210072u); RECOMP_ABI_CALL(0x002892A0u, sub_002892A0); /* call 0x002892A0 */

loc_00210072: ;
    MEM32(0x7AD604) = 0;

loc_0021007C: ;
    eax = MEM32(0x7AD600);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021008F; /* je: equal / zero */

loc_00210085: ;
    MEM32(0x7AD600) = 0;

loc_0021008F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00210020
 * Original: 0x00210020 - 0x00210090 (112 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210020: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00210026u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210024u); } /* indirect call */
    }

loc_00210026: ;
    eax = MEM32(0x7AD604);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x7AD5C0) = ecx;
    MEM32(0x7AD5C4) = ecx;
    MEM32(0x7AD5C8) = ecx;
    MEM32(0x7AD5CC) = ecx;
    MEM32(0x7AD5D0) = ecx;
    MEM32(0x7AD5D4) = ecx;
    MEM32(0x7AD5D8) = ecx;
    MEM32(0x7AD5DC) = ecx;
    MEM32(0x7AD5E0) = ecx;
    MEM32(0x7AD5E4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0021007C; /* je: equal / zero */

loc_0021006D: ;
    PUSH32(esp, 0x00210072u); RECOMP_ABI_CALL(0x002892A0u, sub_002892A0); /* call 0x002892A0 */

loc_00210072: ;
    MEM32(0x7AD604) = 0;

loc_0021007C: ;
    eax = MEM32(0x7AD600);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021008F; /* je: equal / zero */

loc_00210085: ;
    MEM32(0x7AD600) = 0;

loc_0021008F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00210090
 * Original: 0x00210090 - 0x00210165 (213 bytes, 78 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210090: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00210097: ;
    eax = ebp;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x26);
    MEM32(0x7ACDD0) = ebp;
    MEM32(esp + 0x10) = eax;
    goto loc_002100B0;

loc_002100AA: ;
    eax = MEM32(esp + 0x10);
    edi = edi;

loc_002100B0: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax * 4 + 0x7ACDD8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002100F9; /* je: equal / zero */

loc_002100BD: ;
    edi = MEM32(ebx * 4 + 0x8429B0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002100F9; /* je: equal / zero */

loc_002100C8: ;
    ecx = ebp;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edi + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x108), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002100F9; /* jne: not equal / not zero */

loc_002100D9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002100E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002100DDu); } /* indirect call */
    }

loc_002100E0: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x002100E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002100E5u); } /* indirect call */
    }

loc_002100E8: ;
    esi = MEM32(esi + 0x90);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002100E0; /* jne: not equal / not zero */

loc_002100F2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002100F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002100F6u); } /* indirect call */
    }

loc_002100F9: ;
    ecx = MEM32(ebx * 4 + 0x8429B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210109; /* je: equal / zero */

loc_00210104: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00210109u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210106u); } /* indirect call */
    }

loc_00210109: ;
    _fa = (uint32_t)(MEM32(0x30F270)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30F270), 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021014B; /* je: equal / zero */

loc_00210112: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021014B; /* jne: not equal / not zero */

loc_00210117: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x18 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021014B; /* jne: not equal / not zero */

loc_0021011C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00210123u); RECOMP_ABI_CALL(0x00289850u, sub_00289850); /* call 0x00289850 */

loc_00210123: ;
    ecx = MEM32(0x7AD5D4);
    esi = eax;
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00210136u); RECOMP_ABI_CALL(0x0028C4E0u, sub_0028C4E0); /* call 0x0028C4E0 */

loc_00210136: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021013Fu); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_0021013F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00210145u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_00210145: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021014Bu); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0021014B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002100AA; /* jl: less (signed <) */

loc_00210155: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00210097; /* jl: less (signed <) */

loc_0021015F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00210170
 * Original: 0x00210170 - 0x00210189 (25 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210170: ;
    _fa = (uint32_t)(MEM32(0x30F270)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30F270), 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210181; /* je: equal / zero */

loc_00210179: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00210180u); RECOMP_ABI_CALL(0x0028BDB0u, sub_0028BDB0); /* call 0x0028BDB0 */

loc_00210180: ;
    esp += 4; return; /* ret */

loc_00210181: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210188u); RECOMP_ABI_CALL(0x0028BDB0u, sub_0028BDB0); /* call 0x0028BDB0 */

loc_00210188: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00210190
 * Original: 0x00210190 - 0x0021024D (189 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210190: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    edx = esp;
    ecx = 0x11;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002101D2u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_002101D2: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E7B84)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x10;
    ecx = 0xBF;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00210203u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_00210203: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8B0)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E0C7C)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E5680)); /* movss */
    edx = esp + 0x20;
    ecx = 0x12;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00210249u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_00210249: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00210250
 * Original: 0x00210250 - 0x002104AC (604 bytes, 236 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi * 4 + 0x7AD320);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002104A9; /* je: equal / zero */

loc_00210269: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    MEM32(esi * 4 + 0x7AD320) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0021028D; /* jge: greater or equal (signed >=) */

loc_00210275: ;
    ecx = MEM32(esi * 4 + 0x2F6190);
    edx = edi;
    PUSH32(esp, 0x00210283u); RECOMP_ABI_CALL(0x0028CB80u, sub_0028CB80); /* call 0x0028CB80 */

loc_00210283: ;
    MEM32(esi * 4 + 0x2990E0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021028D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002102B4; /* jge: greater or equal (signed >=) */

loc_00210295: ;
    eax = MEM32(esi * 4 + 0x2F5F70);
    ecx = MEM32(0x298ED8);
    MEM32(esi * 4 + 0x2990E0) = edi;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(0x298ED8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002102B4: ;
    if (CMP_NE(_fa, _fb)) goto loc_002102BF; /* jne: not equal / not zero */

loc_002102B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002102BCu); RECOMP_ABI_CALL(0x0028CB50u, sub_0028CB50); /* call 0x0028CB50 */

loc_002102BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002102BF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002102D0; /* jne: not equal / not zero */

loc_002102C7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002102CDu); RECOMP_ABI_CALL(0x0028D3A0u, sub_0028D3A0); /* call 0x0028D3A0 */

loc_002102CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002102D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002102E1; /* jne: not equal / not zero */

loc_002102D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002102DEu); RECOMP_ABI_CALL(0x0028CF00u, sub_0028CF00); /* call 0x0028CF00 */

loc_002102DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002102E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002102F2; /* jne: not equal / not zero */

loc_002102E9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002102EFu); RECOMP_ABI_CALL(0x0028D270u, sub_0028D270); /* call 0x0028D270 */

loc_002102EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002102F2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210303; /* jne: not equal / not zero */

loc_002102FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210300u); RECOMP_ABI_CALL(0x0028D2C0u, sub_0028D2C0); /* call 0x0028D2C0 */

loc_00210300: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210303: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210314; /* jne: not equal / not zero */

loc_0021030B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210311u); RECOMP_ABI_CALL(0x0028D320u, sub_0028D320); /* call 0x0028D320 */

loc_00210311: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210314: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210325; /* jne: not equal / not zero */

loc_0021031C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210322u); RECOMP_ABI_CALL(0x0028D000u, sub_0028D000); /* call 0x0028D000 */

loc_00210322: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210325: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210336; /* jne: not equal / not zero */

loc_0021032D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210333u); RECOMP_ABI_CALL(0x0028DDD0u, sub_0028DDD0); /* call 0x0028DDD0 */

loc_00210333: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210336: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210347; /* jne: not equal / not zero */

loc_0021033E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210344u); RECOMP_ABI_CALL(0x0028DE60u, sub_0028DE60); /* call 0x0028DE60 */

loc_00210344: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210347: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210358; /* jne: not equal / not zero */

loc_0021034F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210355u); RECOMP_ABI_CALL(0x0028DF00u, sub_0028DF00); /* call 0x0028DF00 */

loc_00210355: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210358: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210369; /* jne: not equal / not zero */

loc_00210360: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210366u); RECOMP_ABI_CALL(0x0028CF50u, sub_0028CF50); /* call 0x0028CF50 */

loc_00210366: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210369: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021037A; /* jne: not equal / not zero */

loc_00210371: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210377u); RECOMP_ABI_CALL(0x0028CFC0u, sub_0028CFC0); /* call 0x0028CFC0 */

loc_00210377: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021037A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021038B; /* jne: not equal / not zero */

loc_00210382: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210388u); RECOMP_ABI_CALL(0x0028D040u, sub_0028D040); /* call 0x0028D040 */

loc_00210388: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021038B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021039C; /* jne: not equal / not zero */

loc_00210393: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210399u); RECOMP_ABI_CALL(0x0028D190u, sub_0028D190); /* call 0x0028D190 */

loc_00210399: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021039C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002103AD; /* jne: not equal / not zero */

loc_002103A4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002103AAu); RECOMP_ABI_CALL(0x0028D210u, sub_0028D210); /* call 0x0028D210 */

loc_002103AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002103AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002103BE; /* jne: not equal / not zero */

loc_002103B5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002103BBu); RECOMP_ABI_CALL(0x0028CE80u, sub_0028CE80); /* call 0x0028CE80 */

loc_002103BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002103BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002103CF; /* jne: not equal / not zero */

loc_002103C6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002103CCu); RECOMP_ABI_CALL(0x0028E140u, sub_0028E140); /* call 0x0028E140 */

loc_002103CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002103CF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002103E0; /* jne: not equal / not zero */

loc_002103D7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002103DDu); RECOMP_ABI_CALL(0x0028E1C0u, sub_0028E1C0); /* call 0x0028E1C0 */

loc_002103DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002103E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002103F1; /* jne: not equal / not zero */

loc_002103E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002103EEu); RECOMP_ABI_CALL(0x0028E0E0u, sub_0028E0E0); /* call 0x0028E0E0 */

loc_002103EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002103F1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210402; /* jne: not equal / not zero */

loc_002103F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002103FFu); RECOMP_ABI_CALL(0x0028E110u, sub_0028E110); /* call 0x0028E110 */

loc_002103FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210402: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210413; /* jne: not equal / not zero */

loc_0021040A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210410u); RECOMP_ABI_CALL(0x0028CEC0u, sub_0028CEC0); /* call 0x0028CEC0 */

loc_00210410: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210413: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210424; /* jne: not equal / not zero */

loc_0021041B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210421u); RECOMP_ABI_CALL(0x0028D0A0u, sub_0028D0A0); /* call 0x0028D0A0 */

loc_00210421: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210424: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210435; /* jne: not equal / not zero */

loc_0021042C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210432u); RECOMP_ABI_CALL(0x0028E210u, sub_0028E210); /* call 0x0028E210 */

loc_00210432: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210435: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210446; /* jne: not equal / not zero */

loc_0021043D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210443u); RECOMP_ABI_CALL(0x0028D110u, sub_0028D110); /* call 0x0028D110 */

loc_00210443: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210446: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210457; /* jne: not equal / not zero */

loc_0021044E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210454u); RECOMP_ABI_CALL(0x0028DF70u, sub_0028DF70); /* call 0x0028DF70 */

loc_00210454: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210457: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210468; /* jne: not equal / not zero */

loc_0021045F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210465u); RECOMP_ABI_CALL(0x0028DFA0u, sub_0028DFA0); /* call 0x0028DFA0 */

loc_00210465: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210468: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210479; /* jne: not equal / not zero */

loc_00210470: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210476u); RECOMP_ABI_CALL(0x0028E010u, sub_0028E010); /* call 0x0028E010 */

loc_00210476: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210479: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021048A; /* jne: not equal / not zero */

loc_00210481: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210487u); RECOMP_ABI_CALL(0x0028E080u, sub_0028E080); /* call 0x0028E080 */

loc_00210487: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021048A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021049B; /* jne: not equal / not zero */

loc_00210492: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210498u); RECOMP_ABI_CALL(0x0028E0A0u, sub_0028E0A0); /* call 0x0028E0A0 */

loc_00210498: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021049B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002104A9; /* jne: not equal / not zero */

loc_002104A3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002104A9u); RECOMP_ABI_CALL(0x0028E0C0u, sub_0028E0C0); /* call 0x0028E0C0 */

loc_002104A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002104B0
 * Original: 0x002104B0 - 0x00210556 (166 bytes, 59 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002104B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002104B0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x7AD110)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x7AD110) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210554; /* je: equal / zero */

loc_002104D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    MEM32(eax + 0x7AD110) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002104FB; /* jge: greater or equal (signed >=) */

loc_002104DE: ;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x298ED8);
    MEM32(eax + 0x298EE0) = edx;
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x298ED8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002104FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021051D; /* jge: greater or equal (signed >=) */

loc_00210500: ;
    ecx = MEM32(esi * 4 + 0x2F6088);
    esi = MEM32(0x298ED8);
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x298ED8) = esi;
    MEM32(eax + 0x298EE0) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021051D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021052B; /* jne: not equal / not zero */

loc_00210522: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00210529u); RECOMP_ABI_CALL(0x0028D3F0u, sub_0028D3F0); /* call 0x0028D3F0 */

loc_00210529: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021052B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210539; /* jne: not equal / not zero */

loc_00210530: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00210537u); RECOMP_ABI_CALL(0x0028D570u, sub_0028D570); /* call 0x0028D570 */

loc_00210537: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210539: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210547; /* jne: not equal / not zero */

loc_0021053E: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00210545u); RECOMP_ABI_CALL(0x0028D5B0u, sub_0028D5B0); /* call 0x0028D5B0 */

loc_00210545: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210547: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00210554; /* jg: greater (signed >) */

loc_0021054C: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00210554u); RECOMP_ABI_CALL(0x0028D500u, sub_0028D500); /* call 0x0028D500 */

loc_00210554: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00210560
 * Original: 0x00210560 - 0x0021059E (62 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210560: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi * 4 + 0x7AD310)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x7AD310), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021059B; /* je: equal / zero */

loc_00210573: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021058B; /* je: equal / zero */

loc_00210577: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210581u); RECOMP_ABI_CALL(0x00289E20u, sub_00289E20); /* call 0x00289E20 */

loc_00210581: ;
    MEM32(edi * 4 + 0x7AD310) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021058B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00210594u); RECOMP_ABI_CALL(0x00289E20u, sub_00289E20); /* call 0x00289E20 */

loc_00210594: ;
    MEM32(edi * 4 + 0x7AD310) = esi;

loc_0021059B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002105A0
 * Original: 0x002105A0 - 0x002105E0 (64 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002105A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002105A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi * 4 + 0x7AD0D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x7AD0D0), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002105DD; /* je: equal / zero */

loc_002105B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002105CC; /* je: equal / zero */

loc_002105B7: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002105C2u); RECOMP_ABI_CALL(0x00288B30u, sub_00288B30); /* call 0x00288B30 */

loc_002105C2: ;
    MEM32(edi * 4 + 0x7AD0D0) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002105CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002105D6u); RECOMP_ABI_CALL(0x00288B30u, sub_00288B30); /* call 0x00288B30 */

loc_002105D6: ;
    MEM32(edi * 4 + 0x7AD0D0) = esi;

loc_002105DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002105E0
 * Original: 0x002105E0 - 0x0021063B (91 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002105E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002105E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(0x30F288)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30F284); /* mulss */
    edx = esp;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00210637u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_00210637: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00210640
 * Original: 0x00210640 - 0x002106E5 (165 bytes, 44 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00210640(void)
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

loc_00210640: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00210661; /* jge: greater or equal (signed >=) */

loc_0021065B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00210661: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00210687; /* jge: greater or equal (signed >=) */

loc_00210681: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00210687: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002106AE; /* jge: greater or equal (signed >=) */

loc_002106A8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_002106AE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002106CD; /* jge: greater or equal (signed >=) */

loc_002106C7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_002106CD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    edx = esp;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002106E1u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_002106E1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002106F0
 * Original: 0x002106F0 - 0x00210728 (56 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002106F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002106F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x30F288)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F284)); /* movss */
    edx = esp;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00210724u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_00210724: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00210730
 * Original: 0x00210730 - 0x0021074E (30 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210730(void)
{

loc_00210730: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021074Du); RECOMP_ABI_CALL(0x0028C030u, sub_0028C030); /* call 0x0028C030 */

loc_0021074D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00210750
 * Original: 0x00210750 - 0x00210944 (500 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210750: ;
    eax = MEM32(0x6437B4);
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002107D0; /* je: equal / zero */

loc_00210764: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0xB0); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    goto loc_0021080F;

loc_002107D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8D4)); /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;

loc_0021080F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC090); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 8); /* divss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0xC); /* divss */
    MEMF(0x6437E0) = xmm2.f[0]; /* movss */
    MEMF(0x6437F4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x643814) = xmm0.f[0]; /* movss */
    MEMF(0x643810) = xmm0.f[0]; /* movss */
    MEMF(0x643804) = xmm0.f[0]; /* movss */
    MEMF(0x643800) = xmm0.f[0]; /* movss */
    MEMF(0x6437FC) = xmm0.f[0]; /* movss */
    MEMF(0x6437F8) = xmm0.f[0]; /* movss */
    MEMF(0x6437F0) = xmm0.f[0]; /* movss */
    MEMF(0x6437EC) = xmm0.f[0]; /* movss */
    MEMF(0x6437E8) = xmm0.f[0]; /* movss */
    MEMF(0x6437E4) = xmm0.f[0]; /* movss */
    MEMF(0x643808) = xmm5.f[0]; /* movss */
    MEMF(0x643818) = xmm2.f[0]; /* movss */
    MEMF(0x64380C) = xmm3.f[0]; /* movss */
    MEMF(0x64381C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002108D9u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_002108D9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, 0x002108EEu); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_002108EE: ;
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x643820) = xmm1.f[0]; /* movss */
    MEMF(0x643824) = xmm2.f[0]; /* movss */
    MEMF(0x643828) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x00210913u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_00210913: ;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, 0x00210920u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_00210920: ;
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x64382C) = xmm1.f[0]; /* movss */
    MEMF(0x643830) = xmm2.f[0]; /* movss */
    MEMF(0x643834) = xmm3.f[0]; /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00210950
 * Original: 0x00210950 - 0x00210A12 (194 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00210950: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x7B5320);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00210967u); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_00210967: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 8) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    MEM32(esp + 4) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(esp) = edx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0021099C; /* jnp: not parity */

loc_00210990: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */

loc_0021099C: ;
    xmm2 = XMM_SCALAR(MEMF(0x7B53B0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7B53A0)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp); /* mulss */
    eax = MEM32(esp + 0x1C);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7B53A4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 4); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x7B53B4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7B53A8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x7B53B8); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00210A20
 * Original: 0x00210A20 - 0x00210A7A (90 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210A20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00210A44; /* jne: not equal / not zero */

loc_00210A29: ;
    _fa = (uint32_t)(MEM32(0x30F270)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30F270), 0x11 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00210A3Au); RECOMP_ABI_CALL(0x00289850u, sub_00289850); /* call 0x00289850 */

loc_00210A3A: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210A44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210A58; /* jne: not equal / not zero */

loc_00210A49: ;
    PUSH32(esp, 0x00210A4Eu); RECOMP_ABI_CALL(0x00289BD0u, sub_00289BD0); /* call 0x00289BD0 */

loc_00210A4E: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00210A58: ;
    esi = MEM32(eax * 4 + 0x7AD5C0);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210A75; /* je: equal / zero */

loc_00210A68: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00210A73u); RECOMP_ABI_CALL(0x0028C4E0u, sub_0028C4E0); /* call 0x0028C4E0 */

loc_00210A73: ;
    MEM32(edi) = eax;

loc_00210A75: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00210A80
 * Original: 0x00210A80 - 0x00210D31 (689 bytes, 175 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210A80(void)
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

loc_00210A80: ;
    eax = MEM32(0x7AD604);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210D2D; /* je: equal / zero */

loc_00210A90: ;
    eax = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = eax;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp) = ecx;
    if ((_fa == 0)) goto loc_00210AD6; /* je: equal / zero */

loc_00210AB6: ;
    MEMF(0x30F238) = xmm3.f[0]; /* movss */
    MEMF(0x30F23C) = xmm2.f[0]; /* movss */
    MEMF(0x30F240) = xmm1.f[0]; /* movss */
    MEMF(0x30F244) = xmm0.f[0]; /* movss */

loc_00210AD6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi & 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x24) = edi;
    if ((_fa == 0)) goto loc_00210B04; /* je: equal / zero */

loc_00210AE4: ;
    MEMF(0x30F248) = xmm3.f[0]; /* movss */
    MEMF(0x30F24C) = xmm2.f[0]; /* movss */
    MEMF(0x30F250) = xmm1.f[0]; /* movss */
    MEMF(0x30F254) = xmm0.f[0]; /* movss */

loc_00210B04: ;
    ebp = eax;
    ebp = ebp & 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x28) = ebp;
    if ((_fa == 0)) goto loc_00210B2F; /* je: equal / zero */

loc_00210B0F: ;
    MEMF(0x30F258) = xmm3.f[0]; /* movss */
    MEMF(0x30F25C) = xmm2.f[0]; /* movss */
    MEMF(0x30F260) = xmm1.f[0]; /* movss */
    MEMF(0x30F264) = xmm0.f[0]; /* movss */

loc_00210B2F: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    esi = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00210B55u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_00210B55: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00210B63u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_00210B63: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00210B75u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_00210B75: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00210B83u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_00210B83: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00210B9D; /* je: equal / zero */

loc_00210B96: ;
    MEM8(0x7ACAD0) = 0;

loc_00210B9D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210BA8; /* je: equal / zero */

loc_00210BA1: ;
    MEM8(0x7ACBD0) = 0;

loc_00210BA8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210BB3; /* je: equal / zero */

loc_00210BAC: ;
    MEM8(0x7ACCD0) = 0;

loc_00210BB3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edi = 1;
    goto loc_00210BE0;

    /* nop */
    /* nop */

loc_00210BE0: ;
    xmm2.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2E5694); /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2DBED0); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2DC39C); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    if (CMP_GE(_fas, _fbs)) goto loc_00210C6C; /* jge: greater or equal (signed >=) */

loc_00210C68: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00210C79;

loc_00210C6C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00210C79; /* jle: less or equal (signed <=) */

loc_00210C74: ;
    edx = 0xFF;

loc_00210C79: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00210D0E; /* jle: less or equal (signed <=) */

loc_00210C81: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    if (CMP_G(_fas, _fbs)) goto loc_00210D0C; /* jg: greater (signed >) */

loc_00210C9C: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    esi = ecx;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00210CB0: ;
    xmm4.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm6.f[0]; /* addss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm4.f[0], g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00210CD0; /* jge: greater or equal (signed >=) */

loc_00210CCC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00210CDC;

loc_00210CD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00210CDC; /* jle: less or equal (signed <=) */

loc_00210CD7: ;
    eax = 0xFF;

loc_00210CDC: ;
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210CEA; /* je: equal / zero */

loc_00210CE4: ;
    MEM8(ecx + 0x7ACAD0) = LO8(eax);

loc_00210CEA: ;
    ebp = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210CF8; /* je: equal / zero */

loc_00210CF2: ;
    MEM8(ecx + 0x7ACBD0) = LO8(eax);

loc_00210CF8: ;
    ebp = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00210D06; /* je: equal / zero */

loc_00210D00: ;
    MEM8(ecx + 0x7ACCD0) = LO8(eax);

loc_00210D06: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00210CB0; /* jle: less or equal (signed <=) */

loc_00210D0C: ;
    eax = edx;

loc_00210D0E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00210BE0; /* jle: less or equal (signed <=) */

loc_00210D1E: ;
    PUSH32(esp, 0x7ACAD0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00210D2Au); RECOMP_ABI_CALL(0x002890F0u, sub_002890F0); /* call 0x002890F0 */

loc_00210D2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00210D2D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210D40
 * Original: 0x00210D40 - 0x00210E7F (319 bytes, 93 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210D40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210D57u); RECOMP_ABI_CALL(0x0028C030u, sub_0028C030); /* call 0x0028C030 */

loc_00210D57: ;
    PUSH32(esp, 0x00210D5Cu); RECOMP_ABI_CALL(0x002892E0u, sub_002892E0); /* call 0x002892E0 */

loc_00210D5C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x00210D68u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210D68: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x93);
    PUSH32(esp, 0x00210D74u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210D74: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x00210D7Du); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210D7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5D);
    PUSH32(esp, 0x00210D86u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210D86: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x66);
    PUSH32(esp, 0x00210D8Fu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210D8F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x00210D98u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210D98: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0x8B);
    PUSH32(esp, 0x00210DA7u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210DA7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00210DB0u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210DB0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x00210DBCu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210DBC: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x00210DC8u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210DC8: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x00210DD4u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00210DD4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0x00210DE6u); RECOMP_ABI_CALL(0x0028CB80u, sub_0028CB80); /* call 0x0028CB80 */

loc_00210DE6: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x2991D8) = 0x302;
    PUSH32(esp, 0x00210DFFu); RECOMP_ABI_CALL(0x0028CB80u, sub_0028CB80); /* call 0x0028CB80 */

loc_00210DFF: ;
    eax = MEM32(0x842DE4);
    MEM32(0x2991DC) = 0x303;
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210E19u); RECOMP_ABI_CALL(0x00289E20u, sub_00289E20); /* call 0x00289E20 */

loc_00210E19: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210E24u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00210E24: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210E2Fu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00210E2F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210E3Au); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00210E3A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210E45u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00210E45: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210E50u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00210E50: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210E5Bu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00210E5B: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210E69u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00210E69: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00210E74u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00210E74: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, 0x00210E7Eu); RECOMP_ABI_CALL(0x00288F80u, sub_00288F80); /* call 0x00288F80 */

loc_00210E7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00210E80
 * Original: 0x00210E80 - 0x00210F6B (235 bytes, 82 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210E80(void)
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

loc_00210E80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00210EA8u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_00210EA8: ;
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00210EC0u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_00210EC0: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = ecx;
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00210EE3u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_00210EE3: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00210F03u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_00210F03: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ecx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00210F2Au); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_00210F2A: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00210F4Au); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_00210F4A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00210F53u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_00210F53: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00210F63u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_00210F63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210F70
 * Original: 0x00210F70 - 0x002111AE (574 bytes, 148 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00210F70: ;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    PUSH32(esp, ebp);
    ebp = MEM32(0x7AD604);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    PUSH32(esp, 8);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00210F9Cu); RECOMP_ABI_CALL(0x0028AEF0u, sub_0028AEF0); /* call 0x0028AEF0 */

loc_00210F9C: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002111A4; /* je: equal / zero */

loc_00210FA5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_00210FA7: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    ecx = 0x7ABD90;
    if (CMP_NE(_fa, _fb)) goto loc_002110F0; /* jne: not equal / not zero */

loc_00210FB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + -1));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00210FC1u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_00210FC1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = eax;
    PUSH32(esp, ecx);
    ecx = 0x7ABD90;
    PUSH32(esp, 0x00210FD4u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_00210FD4: ;
    ecx = ZX8(MEM8(eax + 4));
    esi = ZX8(MEM8(eax + 5));
    SET_LO8(edx, MEM8(edi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x7E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x7E (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(0x30F28C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F290)); /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30F294); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30F298); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00211030; /* jne: not equal / not zero */

loc_00211017: ;
    edx = ZX8(MEM8(ebx + 5));
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    goto loc_0021107E;

loc_00211030: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00211056; /* jne: not equal / not zero */

loc_00211035: ;
    edx = ZX8(MEM8(ebx + 5));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD418); /* mulss */
    goto loc_0021107E;

loc_00211056: ;
    edx = ZX8(MEM8(ebx + 4));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ebx + 5));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC3C4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDA40); /* mulss */

loc_0021107E: ;
    edx = ZX16(MEM16(eax));
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 2));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 7);
    eax = (uint32_t)(int32_t)SMEM8(eax + 6);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(ebx + 8));
    xmm4.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002110EBu); RECOMP_ABI_CALL(0x00210E80u, sub_00210E80); /* call 0x00210E80 */

loc_002110EB: ;
    goto loc_00211193;

loc_002110F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002110F6u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_002110F6: ;
    xmm0 = XMM_SCALAR(MEMF(0x30F290)); /* movss */
    esi = eax;
    eax = ZX8(MEM8(esi + 5));
    ecx = ZX8(MEM8(esi + 4));
    edx = ZX16(MEM16(esi + 2));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi));
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM8(esi + 7);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F28C)); /* movss */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 6);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00211177u); RECOMP_ABI_CALL(0x00210E80u, sub_00210E80); /* call 0x00210E80 */

loc_00211177: ;
    edx = ZX8(MEM8(esi + 8));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30F28C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */

loc_00211193: ;
    SET_LO8(eax, MEM8(edi + 1));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00210FA7; /* jne: not equal / not zero */

loc_002111A2: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002111A4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0028AF30(); return; /* tail jmp 0x0028AF30 */

}

/**
 * sub_002111B0
 * Original: 0x002111B0 - 0x002111B8 (8 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002111B0(void)
{

loc_002111B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002111B7u); RECOMP_ABI_CALL(0x0028BDB0u, sub_0028BDB0); /* call 0x0028BDB0 */

loc_002111B7: ;
    esp += 4; return; /* ret */

}
