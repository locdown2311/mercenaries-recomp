/**
 * Mercenaries - Recompiled code chunk 9
 * Functions: 250 (0x0006F3F0 - 0x000782C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0006F3F0
 * Original: 0x0006F3F0 - 0x0006F431 (65 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F3F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006F3F8u); RECOMP_ABI_CALL(0x000689B0u, sub_000689B0); /* call 0x000689B0 */

loc_0006F3F8: ;
    ecx = esi + 0x580;
    MEM32(esi) = 0x2E42B0;
    PUSH32(esp, 0x0006F409u); RECOMP_ABI_CALL(0x0006C9C0u, sub_0006C9C0); /* call 0x0006C9C0 */

loc_0006F409: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x5A4) = eax;
    MEM32(esi + 0x5A8) = eax;
    MEM32(esi + 0x5AC) = eax;
    MEM32(esi + 0x5A0) = 0x2E450C;
    MEM32(esi + 0x5B0) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006F440
 * Original: 0x0006F440 - 0x0006F489 (73 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F440(void)
{

loc_0006F440: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0006F453u); RECOMP_ABI_CALL(0x0006BA70u, sub_0006BA70); /* call 0x0006BA70 */

loc_0006F453: ;
    PUSH32(esp, edi);
    ecx = esi + 0x580;
    MEM32(esi + 0x594) = esi;
    PUSH32(esp, 0x0006F465u); RECOMP_ABI_CALL(0x0006E9B0u, sub_0006E9B0); /* call 0x0006E9B0 */

loc_0006F465: ;
    ecx = esi + 0x5A0;
    PUSH32(esp, ecx);
    ecx = 0x30D900;
    PUSH32(esp, 0x0006F476u); RECOMP_ABI_CALL(0x001FDF40u, sub_001FDF40); /* call 0x001FDF40 */

loc_0006F476: ;
    POP32(esp, edi);
    MEM8(esi + 0x50) = 1;
    MEM32(esi + 0x59C) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006F490
 * Original: 0x0006F490 - 0x0006F696 (518 bytes, 159 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F490(void)
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

loc_0006F490: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebp = esi + 0x84;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0006F4AAu); RECOMP_ABI_CALL(0x0006F110u, sub_0006F110); /* call 0x0006F110 */

loc_0006F4AA: ;
    ecx = MEM32(esi + 0xC);
    edi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F4CD; /* je: equal / zero */

loc_0006F4B4: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0006F4BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F4B8u); } /* indirect call */
    }

loc_0006F4BB: ;
    edx = MEM32(0x30D374);
    ecx = MEM32(0x30D370);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F4CF; /* je: equal / zero */

loc_0006F4CD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006F4CF: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    ecx = esi + eax * 4;
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x0006F4FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F4F7u); } /* indirect call */
    }

loc_0006F4FD: ;
    ecx = edi;
    PUSH32(esp, 0x0006F504u); RECOMP_ABI_CALL(0x00042B80u, sub_00042B80); /* call 0x00042B80 */

loc_0006F504: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esi + 0xC);
    SET_LO8(eax, MEM8(ecx + 0x58D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F5C3; /* je: equal / zero */

loc_0006F517: ;
    eax = MEM32(esi + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esi + 0x2C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0006F633; /* jne: not equal / not zero */

loc_0006F527: ;
    MEM8(esi + 0x81) = 1;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x1A0); PUSH32(esp, 0x0006F538u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F532u); } /* indirect call */
    }

loc_0006F538: ;
    edx = MEM32(edi);
    eax = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x268); PUSH32(esp, 0x0006F546u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F540u); } /* indirect call */
    }

loc_0006F546: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 4)); /* movss */
    eax = esi + eax * 4;
    ecx = esp + 0xC;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(0x580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x580;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006F586u); RECOMP_ABI_CALL(0x0006CB30u, sub_0006CB30); /* call 0x0006CB30 */

loc_0006F586: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0006F5B2; /* jne: not equal / not zero */

loc_0006F599: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = esp + 0x18;

loc_0006F5B2: ;
    ecx = MEM32(eax);
    MEM32(ebp + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebp + 8) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebp + 0xC) = eax;

loc_0006F5C3: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x59C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006F5D2u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_0006F5D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x0006F5DEu); RECOMP_ABI_CALL(0x00042B90u, sub_00042B90); /* call 0x00042B90 */

loc_0006F5DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006F5EC; /* jne: not equal / not zero */

loc_0006F5E2: ;
    SET_LO8(eax, MEM8(esi + 0x81));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006F5F2; /* jne: not equal / not zero */

loc_0006F5EC: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006F64A; /* jle: less or equal (signed <=) */

loc_0006F5F2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F68D; /* je: equal / zero */

loc_0006F5FA: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0006F602u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F5FFu); } /* indirect call */
    }

loc_0006F602: ;
    edx = MEM32(0x30C144);
    ecx = MEM32(0x30C140);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006F68D; /* jne: not equal / not zero */

loc_0006F614: ;
    ecx = edi;
    PUSH32(esp, 0x0006F61Bu); RECOMP_ABI_CALL(0x00042BE0u, sub_00042BE0); /* call 0x00042BE0 */

loc_0006F61B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006F68D; /* jne: not equal / not zero */

loc_0006F61F: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x0006F62Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F624u); } /* indirect call */
    }

loc_0006F62A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0006F633: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0006F546; /* jle: less or equal (signed <=) */

loc_0006F639: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0006F641u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F63Bu); } /* indirect call */
    }

loc_0006F641: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0006F64A: ;
    _fa = (uint32_t)(MEM8(esi + 0x81)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x81), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006F681; /* jne: not equal / not zero */

loc_0006F653: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006F660; /* jne: not equal / not zero */

loc_0006F657: ;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 0x59C) = ebp;

loc_0006F660: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(edi + 0x4C4) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x0006F677u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F671u); } /* indirect call */
    }

loc_0006F677: ;
    MEM32(edi + 0x4C4) = 0;

loc_0006F681: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006F68Du); RECOMP_ABI_CALL(0x00042520u, sub_00042520); /* call 0x00042520 */

loc_0006F68D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0006F6A0
 * Original: 0x0006F6A0 - 0x0006F6A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F6A0(void)
{

loc_0006F6A0: ;
    MEM32(ecx) = 0x2E451C;
    esp += 4; return; /* ret */

}

/**
 * sub_0006F6B0
 * Original: 0x0006F6B0 - 0x0006F6CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F6B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E451C;
    if (TEST_Z(_fa, _fb)) goto loc_0006F6C9; /* je: equal / zero */

loc_0006F6C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006F6C6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0006F6C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006F6C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006F6D0
 * Original: 0x0006F6D0 - 0x0006F6D5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F6D0: ;
    g_seh_ebp = ebp; sub_0006E930(); return; /* tail jmp 0x0006E930 */

}

/**
 * sub_0006F6E0
 * Original: 0x0006F6E0 - 0x0006F70F (47 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F6E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x298F9AC4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x298F9AC4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F6F4; /* je: equal / zero */

loc_0006F6EB: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00064680(); return; /* tail jmp 0x00064680 */

loc_0006F6F4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC8AC); /* addss */
    MEMF(ecx + 0x6C8) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006F710
 * Original: 0x0006F710 - 0x0006F761 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F710: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x298F9AC4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x298F9AC4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F750; /* je: equal / zero */

loc_0006F71B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB466D857u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB466D857u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F72B; /* je: equal / zero */

loc_0006F722: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00064680(); return; /* tail jmp 0x00064680 */

loc_0006F72B: ;
    edx = MEM32(ecx + 0x18);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx + 0x63C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006F743; /* jne: not equal / not zero */

loc_0006F73B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C4)); /* movss */

loc_0006F743: ;
    ecx = MEM32(esp + 8);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0006F750: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x6C8);
    MEM32(eax) = edx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006F770
 * Original: 0x0006F770 - 0x0006F79B (43 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F770(void)
{

loc_0006F770: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM32(ecx + 8) = 0;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006F7A0
 * Original: 0x0006F7A0 - 0x0006F7A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F7A0(void)
{

loc_0006F7A0: ;
    MEM32(ecx) = 0x2E4460;
    esp += 4; return; /* ret */

}

/**
 * sub_0006F7B0
 * Original: 0x0006F7B0 - 0x0006F7B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F7B0(void)
{

loc_0006F7B0: ;
    MEM32(ecx) = 0x2E4478;
    esp += 4; return; /* ret */

}

/**
 * sub_0006F7C0
 * Original: 0x0006F7C0 - 0x0006F7C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F7C0(void)
{

loc_0006F7C0: ;
    MEM32(ecx) = 0x2E4490;
    esp += 4; return; /* ret */

}

/**
 * sub_0006F7D0
 * Original: 0x0006F7D0 - 0x0006F803 (51 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F7D0: ;
    MEM32(ecx) = 0x2E4538;
    MEM32(ecx + 0x6E0) = 0x2E4490;
    MEM32(ecx + 0x6CC) = 0x2E4478;
    MEM32(ecx + 0x63C) = 0x2E451C;
    MEM32(ecx + 0x5B8) = 0x2E4460;
    g_seh_ebp = ebp; sub_0006C950(); return; /* tail jmp 0x0006C950 */

}

/**
 * sub_0006F810
 * Original: 0x0006F810 - 0x0006F825 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F810: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    eax = ecx + 0x63C;
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
 * sub_0006F830
 * Original: 0x0006F830 - 0x0006F887 (87 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006F830: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebp;
    ecx = esi;
    PUSH32(esp, 0x0006F85Bu); RECOMP_ABI_CALL(0x0006CB60u, sub_0006CB60); /* call 0x0006CB60 */

loc_0006F85B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = edi;
    MEM32(edx + 4) = ebx;
    ecx = esi + 0x63C;
    MEM32(edx + 8) = ebp;
    PUSH32(esp, 0x0006F873u); RECOMP_ABI_CALL(0x0006F770u, sub_0006F770); /* call 0x0006F770 */

loc_0006F873: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F880; /* je: equal / zero */

loc_0006F878: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006F880u); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_0006F880: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0006F890
 * Original: 0x0006F890 - 0x0006F8AD (29 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F890: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F8AA; /* je: equal / zero */

loc_0006F898: ;
    MEM32(ecx + 0x6D4) = eax;
    eax = ecx + 0x6CC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006F8AAu); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_0006F8AA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006F8B0
 * Original: 0x0006F8B0 - 0x0006F9A4 (244 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F8B0(void)
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

loc_0006F8B0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    eax = esi + 0x63C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006F8CE; /* je: equal / zero */

loc_0006F8C3: ;
    fp_push(MEMF(0x2DC8A0)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006F8CE: ;
    ecx = esi + 0x64C;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, edi);
    edx = esp + 8;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0006F8F7u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0006F8F7: ;
    edx = MEM32(esi);
    edi = eax;
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0006F90Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F907u); } /* indirect call */
    }

loc_0006F90A: ;
    ecx = eax;
    PUSH32(esp, 0x0006F911u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0006F911: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 8) = ecx;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = edx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    POP32(esp, edi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2E46E4)); /* fsub dword ptr [0x2e46e4] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0006F97C; /* jbe: below or equal (unsigned <=) */

loc_0006F96A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006F97C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0006F99B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006F995: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_0006F99B: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
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
 * sub_0006F9B0
 * Original: 0x0006F9B0 - 0x0006F9E9 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F9B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = esi + 0x6E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006F9CB; /* je: equal / zero */

loc_0006F9C1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x1A0); PUSH32(esp, 0x0006F9CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006F9C5u); } /* indirect call */
    }

loc_0006F9CB: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0006F9D5u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0006F9D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x6EC) = eax;
    PUSH32(esp, 0x0006F9E6u); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_0006F9E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006F9F0
 * Original: 0x0006F9F0 - 0x0006FA89 (153 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006F9F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 4);
    eax = ecx;
    MEM32(eax) = 0x2E451C;
    MEM32(eax + 0xC) = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x1C) = ecx;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD448)); /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FA90
 * Original: 0x0006FA90 - 0x0006FC10 (384 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0006FA90: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FABA; /* je: equal / zero */

loc_0006FAA1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0006FAA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FAA5u); } /* indirect call */
    }

loc_0006FAA8: ;
    edx = MEM32(0x30D374);
    ecx = MEM32(0x30D370);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FABC; /* je: equal / zero */

loc_0006FABA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006FABC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0006FAC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FAC6u); } /* indirect call */
    }

loc_0006FAC9: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    edi = ebx + 0x10;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E4518); /* addss */
    PUSH32(esp, 0x42FA0000);
    edx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006FB06u); RECOMP_ABI_CALL(0x00042540u, sub_00042540); /* call 0x00042540 */

loc_0006FB06: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x268); PUSH32(esp, 0x0006FB11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FB0Bu); } /* indirect call */
    }

loc_0006FB11: ;
    SET_LO8(eax, MEM8(0x3BE240));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FBAF; /* je: equal / zero */

loc_0006FB1E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 0x84); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006FB85; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebx + 0x84)) */

loc_0006FB2A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x0006FB3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FB35u); } /* indirect call */
    }

loc_0006FB3B: ;
    eax = MEM32(0x3BE244);
    ecx = MEM32(0x3BE248);
    edx = MEM32(0x3BE24C);
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x268); PUSH32(esp, 0x0006FB83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FB7Du); } /* indirect call */
    }

loc_0006FB83: ;
    goto loc_0006FBCD;

loc_0006FB85: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebx + 0x84) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006FBCD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006FBA0: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x1A0); PUSH32(esp, 0x0006FBADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FBA7u); } /* indirect call */
    }

loc_0006FBAD: ;
    goto loc_0006FBCD;

loc_0006FBAF: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEMF(ebx + 0x84) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x0006FBCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FBC7u); } /* indirect call */
    }

loc_0006FBCD: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x88)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x8C); /* comiss */
    MEMF(ebx + 0x88) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006FC08; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x8C)) */

loc_0006FBED: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x0006FBFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FBF5u); } /* indirect call */
    }

loc_0006FBFB: ;
    ebx = MEM32(ebx + 0xC);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x0006FC08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FC02u); } /* indirect call */
    }

loc_0006FC08: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FC10
 * Original: 0x0006FC10 - 0x0006FDEA (474 bytes, 129 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006FC10(void)
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

loc_0006FC10: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FDE5; /* je: equal / zero */

loc_0006FC21: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FC42; /* je: equal / zero */

loc_0006FC29: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0006FC30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FC2Du); } /* indirect call */
    }

loc_0006FC30: ;
    edx = MEM32(0x30D374);
    ecx = MEM32(0x30D370);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FC44; /* je: equal / zero */

loc_0006FC42: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006FC44: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FC7C; /* je: equal / zero */

loc_0006FC4B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006FC51u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_0006FC51: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0006FC60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FC5Du); } /* indirect call */
    }

loc_0006FC60: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    goto loc_0006FC97;

loc_0006FC7C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */

loc_0006FC97: ;
    ecx = edi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006FCA4u); RECOMP_ABI_CALL(0x00042B80u, sub_00042B80); /* call 0x00042B80 */

loc_0006FCA4: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(edi);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0006FCB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006FCB4u); } /* indirect call */
    }

loc_0006FCB7: ;
    ecx = eax;
    PUSH32(esp, 0x0006FCBEu); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0006FCBE: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006FCFB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006FCE5: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_0006FCFB: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esp + 0x30;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0006FD36u); RECOMP_ABI_CALL(0x001F8750u, sub_001F8750); /* call 0x001F8750 */

loc_0006FD36: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DD444)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm2.f[0]; /* movss */
    edx = MEM32(esi + 0x28);
    eax = MEM32(esi + 0x20);
    ecx = edx;
    MEM32(esp + 4) = edx;
    PUSH32(esp, ecx);
    edx = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0006FD96u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_0006FD96: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC874)); /* fadd dword ptr [0x2dc874] */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x2C);
    edx = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x0006FDD9u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_0006FDD9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E4518)); /* fadd dword ptr [0x2e4518] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */

loc_0006FDE5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_0006FDF0
 * Original: 0x0006FDF0 - 0x0006FE7E (142 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FDF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FDF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2417D2);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x0006FE13u); RECOMP_ABI_CALL(0x0006F3F0u, sub_0006F3F0); /* call 0x0006F3F0 */

loc_0006FE13: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = esi + 0x5B8;
    MEM32(esp + 0x18) = edi;
    MEM32(esi) = 0x2E4538;
    PUSH32(esp, 0x0006FE2Bu); RECOMP_ABI_CALL(0x0006CC00u, sub_0006CC00); /* call 0x0006CC00 */

loc_0006FE2B: ;
    PUSH32(esp, esi);
    ecx = esi + 0x63C;
    PUSH32(esp, 0x0006FE37u); RECOMP_ABI_CALL(0x0006F9F0u, sub_0006F9F0); /* call 0x0006F9F0 */

loc_0006FE37: ;
    PUSH32(esp, esi);
    ecx = esi + 0x6CC;
    MEM8(esp + 0x18) = 2;
    PUSH32(esp, 0x0006FE48u); RECOMP_ABI_CALL(0x0006D4F0u, sub_0006D4F0); /* call 0x0006D4F0 */

loc_0006FE48: ;
    PUSH32(esp, esi);
    ecx = esi + 0x6E0;
    MEM8(esp + 0x18) = 3;
    PUSH32(esp, 0x0006FE59u); RECOMP_ABI_CALL(0x0006D6F0u, sub_0006D6F0); /* call 0x0006D6F0 */

loc_0006FE59: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x6FC) = edi;
    MEM32(esi + 0x700) = edi;
    MEM32(esi + 0x704) = edi;
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
 * sub_0006FE80
 * Original: 0x0006FE80 - 0x0006FE9E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FE80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006FE88u); RECOMP_ABI_CALL(0x0006F7D0u, sub_0006F7D0); /* call 0x0006F7D0 */

loc_0006FE88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006FE98; /* je: equal / zero */

loc_0006FE8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006FE95u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0006FE95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006FE98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006FEA0
 * Original: 0x0006FEA0 - 0x0006FF4B (171 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FEA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x1C) = 0;
    PUSH32(esp, 0x0006FEB2u); RECOMP_ABI_CALL(0x0006FC10u, sub_0006FC10); /* call 0x0006FC10 */

loc_0006FEB2: ;
    eax = MEM32(esi + 0x1C);
    eax = eax + eax * 2;
    ecx = esi + eax * 4 + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x580;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0006FECBu); RECOMP_ABI_CALL(0x0006CB30u, sub_0006CB30); /* call 0x0006CB30 */

loc_0006FECB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xF23A11AFu);
    PUSH32(esp, 0);
    MEM32(esi + 0x7C) = 0;
    MEM8(esi + 0x80) = 0;
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006FEF8u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_0006FEF8: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006FF0D; /* je: equal / zero */

loc_0006FF05: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x28);
    goto loc_0006FF0F;

loc_0006FF0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0006FF0F: ;
    MEM32(esi + 0x78) = eax;
    eax = esi + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x68) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0006FF35; /* jne: not equal / not zero */

loc_0006FF1C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 4;

loc_0006FF35: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x6C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x70) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x74) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0006FF50
 * Original: 0x0006FF50 - 0x0006FFBC (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FF50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006FF58u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0006FF58: ;
    MEM32(esi) = 0x2E46E8;
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
    PUSH32(esp, 0x0006FFB5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0006FFB5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006FFC0
 * Original: 0x0006FFC0 - 0x0006FFCC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006FFC0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0006FFD0(); return; /* tail jmp 0x0006FFD0 */

}

/**
 * sub_0006FFD0
 * Original: 0x0006FFD0 - 0x0007003D (109 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006FFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006FFD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070038; /* je: equal / zero */

loc_0006FFE2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x6FC);
    edx = MEM32(ecx + 0x700);
    MEM32(ecx + 0x704) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x700);
    edx = MEM32(ecx + 0x6FC);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007001B; /* je: equal / zero */

loc_00070014: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0007001Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070018u); } /* indirect call */
    }

loc_0007001B: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF8F8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF8F8u;
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
    if (CMP_NE(_fa, _fb)) goto loc_0006FFE2; /* jne: not equal / not zero */

loc_00070038: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070040
 * Original: 0x00070040 - 0x0007008A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070040: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x6FC;
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
 * sub_00070090
 * Original: 0x00070090 - 0x000700A5 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070090(void)
{

loc_00070090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00070098u); RECOMP_ABI_CALL(0x0006C9A0u, sub_0006C9A0); /* call 0x0006C9A0 */

loc_00070098: ;
    PUSH32(esp, esi);
    ecx = 0x322698;
    PUSH32(esp, 0x000700A3u); RECOMP_ABI_CALL(0x00070040u, sub_00070040); /* call 0x00070040 */

loc_000700A3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000700B0
 * Original: 0x000700B0 - 0x000700BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000700B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000700B0: ;
    MEM32(ecx) = 0x2E4700;
    g_seh_ebp = ebp; sub_0006C950(); return; /* tail jmp 0x0006C950 */

}

/**
 * sub_000700C0
 * Original: 0x000700C0 - 0x000700D1 (17 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000700C0(void)
{

loc_000700C0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x5D0) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000700E0
 * Original: 0x000700E0 - 0x0007010D (45 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000700E0(void)
{

loc_000700E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x5C4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x5C8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x5CC) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00070110
 * Original: 0x00070110 - 0x00070136 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070110: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00070118u); RECOMP_ABI_CALL(0x0006F3F0u, sub_0006F3F0); /* call 0x0006F3F0 */

loc_00070118: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E4700;
    MEM32(esi + 0x7E0) = eax;
    MEM32(esi + 0x7E4) = eax;
    MEM32(esi + 0x7E8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070140
 * Original: 0x00070140 - 0x0007015E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00070148u); RECOMP_ABI_CALL(0x000700B0u, sub_000700B0); /* call 0x000700B0 */

loc_00070148: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070158; /* je: equal / zero */

loc_0007014F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00070155u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00070155: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00070158: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070160
 * Original: 0x00070160 - 0x000701DE (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070160: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00070176u); RECOMP_ABI_CALL(0x0006F440u, sub_0006F440); /* call 0x0006F440 */

loc_00070176: ;
    edx = MEM32(edi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00070182u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007017Fu); } /* indirect call */
    }

loc_00070182: ;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEM32(esi + 0x5B8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x5BC) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x5C0) = eax;
    MEMF(esi + 0x5D0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    MEMF(esi + 0x5D4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x5D8) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x7DC) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000701E0
 * Original: 0x000701E0 - 0x000709D7 (2039 bytes, 510 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000701E0(void)
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

loc_000701E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2417EB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x988) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x988;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007020Fu); RECOMP_ABI_CALL(0x0006E930u, sub_0006E930); /* call 0x0006E930 */

loc_0007020F: ;
    eax = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000709C0; /* je: equal / zero */

loc_0007021C: ;
    ecx = MEM32(eax + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070234; /* je: equal / zero */

loc_00070226: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007022Bu); RECOMP_ABI_CALL(0x00097460u, sub_00097460); /* call 0x00097460 */

loc_0007022B: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0xF8) = edi;

loc_00070234: ;
    ebx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007025A; /* je: equal / zero */

loc_0007023B: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00070242u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007023Fu); } /* indirect call */
    }

loc_00070242: ;
    edx = MEM32(0x30D374);
    ecx = MEM32(0x30D370);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007025A; /* jne: not equal / not zero */

loc_00070254: ;
    MEM32(esp + 0x18) = ebx;
    goto loc_00070260;

loc_0007025A: ;
    MEM32(esp + 0x18) = edi;
    ebx = edi;

loc_00070260: ;
    eax = esi + 0x5B8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x00070271u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007026Bu); } /* indirect call */
    }

loc_00070271: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070278u); RECOMP_ABI_CALL(0x001EFC50u, sub_001EFC50); /* call 0x001EFC50 */

loc_00070278: ;
    edx = MEM32(ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00070285u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007027Fu); } /* indirect call */
    }

loc_00070285: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000702BA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00070296: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(esi + 0x5D4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x994);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000702BA: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000702C1u); RECOMP_ABI_CALL(0x00042B90u, sub_00042B90); /* call 0x00042B90 */

loc_000702C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070925; /* jne: not equal / not zero */

loc_000702C9: ;
    _fb = (uint32_t)(0x4B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4B8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x48) = 3;
    goto loc_000702E0;

    /* nop */

loc_000702E0: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x44) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000708F4; /* je: equal / zero */

loc_000702EE: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x000702FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000702F7u); } /* indirect call */
    }

loc_000702FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000708F4; /* jne: not equal / not zero */

loc_00070305: ;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070316u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00070316: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5B8)); /* movss */
    MEMF(esp + 0xE0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5BC)); /* movss */
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C0)); /* movss */
    MEMF(esp + 0xE8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = esp + 0x188;
    MEMF(esp + 0xEC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070366u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00070366: ;
    PUSH32(esp, 0);
    edx = esp + 0x18C;
    PUSH32(esp, edx);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB2C73EB3u);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070389u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_00070389: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000703A8; /* je: equal / zero */

loc_0007038F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00070396u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070393u); } /* indirect call */
    }

loc_00070396: ;
    edx = MEM32(0x30C0E4);
    ecx = MEM32(0x30C0E0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000703AA; /* je: equal / zero */

loc_000703A8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000703AA: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(esi + 0x7DC);
    eax = MEM32(eax + 0x28);
    MEM32(esi + ecx * 4 + 0x5DC) = eax;
    MEM32(esi + 0x7DC) = MEM32(esi + 0x7DC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x7DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000703CBu); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_000703CB: ;
    PUSH32(esp, 0x692C8C7);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000703D7u); RECOMP_ABI_CALL(0x000326E0u, sub_000326E0); /* call 0x000326E0 */

loc_000703D7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF6DCBA73u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF6DCBA73u (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9AA65E7Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9AA65E7Eu (32-bit) */
    MEM8(esp + 0x17) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000703F9; /* je: equal / zero */

loc_000703F1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5D0)); /* movss */

loc_000703F9: ;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070404u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_00070404: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070417u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_00070417: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5CC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x68); /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x5C8)); /* movss */
    eax = esi + 0x5B8;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEM32(esp + 0x38) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    MEMF(esp + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x5C4); /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    eax = esp + 0x5C;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    ecx = esp + 0x74;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000704C1u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_000704C1: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000704C8u); RECOMP_ABI_CALL(0x001F8750u, sub_001F8750); /* call 0x001F8750 */

loc_000704C8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000707E4; /* jne: not equal / not zero */

loc_000704D0: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000707E4; /* jne: not equal / not zero */

loc_000704DC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC3E8); /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00070540: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = esi + 0x5B8;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070563u); RECOMP_ABI_CALL(0x00015880u, sub_00015880); /* call 0x00015880 */

loc_00070563: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    ecx = esp + 0x108;
    MEMF(esp + 0x8C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000705B7u); RECOMP_ABI_CALL(0x000187A0u, sub_000187A0); /* call 0x000187A0 */

loc_000705B7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    ecx = esp + 0x10C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esp + 0x9B0) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000705DAu); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_000705DA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0007060D; /* jle: less or equal (signed <=) */

loc_000705E1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DD8EC); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_0007060D: ;
    ecx = esp + 0x100;
    MEM32(esp + 0x99C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070624u); RECOMP_ABI_CALL(0x00018AD0u, sub_00018AD0); /* call 0x00018AD0 */

loc_00070624: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00070540; /* jl: less (signed <) */

loc_0007062E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    edx = esp + 0x78;
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    PUSH32(esp, edx);
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070679u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00070679: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */

loc_000706AA: ;
    MEM32(edi + 0x1AC) = 0;

loc_000706B4: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    eax = esi + 0x5B8;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = edi;
    MEM32(edx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070708u); RECOMP_ABI_CALL(0x000182A0u, sub_000182A0); /* call 0x000182A0 */

loc_00070708: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x5B8;
    ecx = MEM32(eax);
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = edi;
    MEM32(edx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007075Cu); RECOMP_ABI_CALL(0x000182A0u, sub_000182A0); /* call 0x000182A0 */

loc_0007075C: ;
    ebx = MEM32(esp + 0x44);
    edx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = esp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C8); PUSH32(esp, 0x0007077Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070776u); } /* indirect call */
    }

loc_0007077C: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00070783u); RECOMP_ABI_CALL(0x00032460u, sub_00032460); /* call 0x00032460 */

loc_00070783: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000707C3; /* je: equal / zero */

loc_00070787: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007078Eu); RECOMP_ABI_CALL(0x00032460u, sub_00032460); /* call 0x00032460 */

loc_0007078E: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x28);
    edx = MEM32(esi + 0x7DC);
    MEM32(esi + edx * 4 + 0x5DC) = eax;
    eax = MEM32(esi + 0x7DC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    MEM32(esi + 0x7DC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000707B5u); RECOMP_ABI_CALL(0x00032460u, sub_00032460); /* call 0x00032460 */

loc_000707B5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000707BCu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000707BC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000707C3u); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_000707C3: ;
    ecx = MEM32(0x30EA20);
    eax = ecx;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x44) = ecx;
    if ((_fas >= 0)) goto loc_0007087A; /* jns: not sign (positive) */

loc_000707DD: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00070888;

loc_000707E4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DD3E4); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000706AA; /* je: equal / zero */

loc_0007086B: ;
    MEM32(edi + 0x1AC) = 1;
    goto loc_000706B4;

loc_0007087A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    ebx = 0xFF;
    if (CMP_G(_fas, _fbs)) goto loc_00070888; /* jg: greater (signed >) */

loc_00070886: ;
    ebx = eax;

loc_00070888: ;
    eax = ZX8(HI8(ecx));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_00070894; /* jns: not sign (positive) */

loc_00070890: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000708A2;

loc_00070894: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    edi = 0xFF;
    if (CMP_G(_fas, _fbs)) goto loc_000708A2; /* jg: greater (signed >) */

loc_000708A0: ;
    edi = eax;

loc_000708A2: ;
    eax = MEM32(esp + 0x44);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(LO8(eax));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_000708B5; /* jns: not sign (positive) */

loc_000708B1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000708C3;

loc_000708B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    edx = 0xFF;
    if (CMP_G(_fas, _fbs)) goto loc_000708C3; /* jg: greater (signed >) */

loc_000708C1: ;
    edx = eax;

loc_000708C3: ;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000708D0; /* jge: greater or equal (signed >=) */

loc_000708CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000708DC;

loc_000708D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000708DC; /* jle: less or equal (signed <=) */

loc_000708D7: ;
    eax = 0xFF;

loc_000708DC: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000708F1u); RECOMP_ABI_CALL(0x000AE8C0u, sub_000AE8C0); /* call 0x000AE8C0 */

loc_000708F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000708F4: ;
    ebx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x48) = eax;
    if ((_fa != 0)) goto loc_000702E0; /* jne: not equal / not zero */

loc_0007090E: ;
    ecx = MEM32(esp + 0x994);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00070925: ;
    edi = MEM32(esi + 0x7DC);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + 0x17) = 0;
    if ((_fas < 0)) goto loc_0007096A; /* js: sign (negative) */

loc_00070933: ;
    ecx = esi + edi * 4 + 0x5DC;
    MEM32(esp + 0x18) = ecx;
    edi = edi;

loc_00070940: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007094Cu); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0007094C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00070965; /* jne: not equal / not zero */

loc_00070953: ;
    ecx = MEM32(esp + 0x18);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00070940; /* jge: greater or equal (signed >=) */

loc_00070963: ;
    goto loc_0007096A;

loc_00070965: ;
    MEM8(esp + 0x17) = 1;

loc_0007096A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5D8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000709A7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0007097B: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000709C0; /* jne: not equal / not zero */

loc_00070983: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(esi + 0x5D8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x994);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000709A7: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000709AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000709ABu); } /* indirect call */
    }

loc_000709AE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000709B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000709B4u); } /* indirect call */
    }

loc_000709B7: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000709C0u); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_000709C0: ;
    ecx = MEM32(esp + 0x994);
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
 * sub_000709E0
 * Original: 0x000709E0 - 0x00070A4C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000709E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000709E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000709E8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000709E8: ;
    MEM32(esi) = 0x2E48AC;
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
    PUSH32(esp, 0x00070A45u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00070A45: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070A50
 * Original: 0x00070A50 - 0x00070A5C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070A50: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00070A60(); return; /* tail jmp 0x00070A60 */

}

/**
 * sub_00070A60
 * Original: 0x00070A60 - 0x00070ACD (109 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070A60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070AC8; /* je: equal / zero */

loc_00070A72: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x7E0);
    edx = MEM32(ecx + 0x7E4);
    MEM32(ecx + 0x7E8) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x7E4);
    edx = MEM32(ecx + 0x7E0);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00070AAB; /* je: equal / zero */

loc_00070AA4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00070AABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070AA8u); } /* indirect call */
    }

loc_00070AAB: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00070A72; /* jne: not equal / not zero */

loc_00070AC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070AD0
 * Original: 0x00070AD0 - 0x00070B1A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070AD0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x7E0;
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
 * sub_00070B20
 * Original: 0x00070B20 - 0x00070B6F (79 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070B20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00070B29u); RECOMP_ABI_CALL(0x0006C9A0u, sub_0006C9A0); /* call 0x0006C9A0 */

loc_00070B29: ;
    PUSH32(esp, esi);
    ecx = 0x322720;
    PUSH32(esp, 0x00070B34u); RECOMP_ABI_CALL(0x00070AD0u, sub_00070AD0); /* call 0x00070AD0 */

loc_00070B34: ;
    eax = MEM32(esi + 0x7DC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00070B6C; /* jbe: below or equal (unsigned <=) */

loc_00070B40: ;
    PUSH32(esp, edi);
    edi = esi + 0x5DC;

loc_00070B47: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00070B4Fu); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_00070B4F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070B5D; /* je: equal / zero */

loc_00070B56: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00070B5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070B5Au); } /* indirect call */
    }

loc_00070B5D: ;
    eax = MEM32(esi + 0x7DC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00070B47; /* jb: below (unsigned <) */

loc_00070B6B: ;
    POP32(esp, edi);

loc_00070B6C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00070B70
 * Original: 0x00070B70 - 0x00070B77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070B70(void)
{

loc_00070B70: ;
    MEM32(ecx) = 0x2E44A8;
    esp += 4; return; /* ret */

}

/**
 * sub_00070B80
 * Original: 0x00070B80 - 0x00070B87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070B80(void)
{

loc_00070B80: ;
    MEM32(ecx) = 0x2E44DC;
    esp += 4; return; /* ret */

}

/**
 * sub_00070B90
 * Original: 0x00070B90 - 0x00070B97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070B90(void)
{

loc_00070B90: ;
    MEM32(ecx) = 0x2E44F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00070BA0
 * Original: 0x00070BA0 - 0x00070C55 (181 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070BA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24184E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00070BC3u); RECOMP_ABI_CALL(0x0006F3F0u, sub_0006F3F0); /* call 0x0006F3F0 */

loc_00070BC3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = esi + 0x5B8;
    MEM32(esp + 0x18) = edi;
    MEM32(esi) = 0x2E48C0;
    PUSH32(esp, 0x00070BDBu); RECOMP_ABI_CALL(0x0006CC00u, sub_0006CC00); /* call 0x0006CC00 */

loc_00070BDB: ;
    PUSH32(esp, esi);
    ecx = esi + 0x63C;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x00070BECu); RECOMP_ABI_CALL(0x0006E1C0u, sub_0006E1C0); /* call 0x0006E1C0 */

loc_00070BEC: ;
    PUSH32(esp, esi);
    ecx = esi + 0x7D0;
    MEM8(esp + 0x18) = 2;
    PUSH32(esp, 0x00070BFDu); RECOMP_ABI_CALL(0x0006E050u, sub_0006E050); /* call 0x0006E050 */

loc_00070BFD: ;
    PUSH32(esp, esi);
    ecx = esi + 0x868;
    MEM8(esp + 0x18) = 3;
    PUSH32(esp, 0x00070C0Eu); RECOMP_ABI_CALL(0x0006D4F0u, sub_0006D4F0); /* call 0x0006D4F0 */

loc_00070C0E: ;
    PUSH32(esp, esi);
    ecx = esi + 0x87C;
    MEM8(esp + 0x18) = 4;
    PUSH32(esp, 0x00070C1Fu); RECOMP_ABI_CALL(0x0006D6F0u, sub_0006D6F0); /* call 0x0006D6F0 */

loc_00070C1F: ;
    PUSH32(esp, esi);
    ecx = esi + 0x898;
    MEM8(esp + 0x18) = 5;
    PUSH32(esp, 0x00070C30u); RECOMP_ABI_CALL(0x0006DA10u, sub_0006DA10); /* call 0x0006DA10 */

loc_00070C30: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x8C4) = edi;
    MEM32(esi + 0x8C8) = edi;
    MEM32(esi + 0x8CC) = edi;
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
 * sub_00070C60
 * Original: 0x00070C60 - 0x00070C80 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070C60: ;
    eax = MEM32(ecx + 0x18);
    edx = ecx + 0x7D0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070C7A; /* je: equal / zero */

loc_00070C6D: ;
    _fb = (uint32_t)(0x63C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x63C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070C7A; /* je: equal / zero */

loc_00070C77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00070C7A: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00070C80
 * Original: 0x00070C80 - 0x00070CC0 (64 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070C80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070CA3; /* je: equal / zero */

loc_00070C88: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x28);
    edx = ecx + 0x7D0;
    MEM32(ecx + 0x7D8) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00064020(); return; /* tail jmp 0x00064020 */

loc_00070CA3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x7D0;
    MEM32(ecx + 0x7D8) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00064020(); return; /* tail jmp 0x00064020 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00070CC0
 * Original: 0x00070CC0 - 0x00070D22 (98 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070CC0: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    eax = esp;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    ecx = esi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x00070CEBu); RECOMP_ABI_CALL(0x0006CB60u, sub_0006CB60); /* call 0x0006CB60 */

loc_00070CEB: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    edi = esi + 0x7D0;
    ecx = edi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x00070D0Eu); RECOMP_ABI_CALL(0x0006C830u, sub_0006C830); /* call 0x0006C830 */

loc_00070D0E: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070D1B; /* je: equal / zero */

loc_00070D13: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00070D1Bu); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00070D1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00070D30
 * Original: 0x00070D30 - 0x00070DA6 (118 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070D30: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    esi = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = esi;
    PUSH32(esp, 0x00070D65u); RECOMP_ABI_CALL(0x0006CBB0u, sub_0006CBB0); /* call 0x0006CBB0 */

loc_00070D65: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 4) = eax;
    edi = esi + 0x63C;
    MEM32(ecx + 8) = edx;
    ecx = edi;
    PUSH32(esp, 0x00070D92u); RECOMP_ABI_CALL(0x0006C870u, sub_0006C870); /* call 0x0006C870 */

loc_00070D92: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070D9F; /* je: equal / zero */

loc_00070D97: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00070D9Fu); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00070D9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00070DB0
 * Original: 0x00070DB0 - 0x00070DCD (29 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070DB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070DCA; /* je: equal / zero */

loc_00070DB8: ;
    MEM32(ecx + 0x870) = eax;
    eax = ecx + 0x868;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00070DCAu); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00070DCA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00070DD0
 * Original: 0x00070DD0 - 0x00070E17 (71 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070DD0: ;
    MEM32(ecx) = 0x2E48C0;
    MEM32(ecx + 0x898) = 0x2E44A8;
    MEM32(ecx + 0x87C) = 0x2E4490;
    MEM32(ecx + 0x868) = 0x2E4478;
    MEM32(ecx + 0x7D0) = 0x2E44DC;
    MEM32(ecx + 0x63C) = 0x2E44F4;
    MEM32(ecx + 0x5B8) = 0x2E4460;
    g_seh_ebp = ebp; sub_0006C950(); return; /* tail jmp 0x0006C950 */

}

/**
 * sub_00070E20
 * Original: 0x00070E20 - 0x00070F22 (258 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070E20(void)
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

loc_00070E20: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    eax = esi + 0x7D0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00070E3E; /* je: equal / zero */

loc_00070E33: ;
    fp_push(MEMF(0x2DC8A0)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00070E3E: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00070E4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00070E47u); } /* indirect call */
    }

loc_00070E4A: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(esi + 0x7FC);
    ecx = eax + eax * 2;
    edx = esi + ecx * 4 + 0x800;
    ecx = MEM32(edx);
    MEM32(esp + 4) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    ecx = MEM32(edx + 4);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = MEM32(edx + 8);
    MEM32(esp + 8) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 0xC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
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
    if (CMP_GE(_fas, _fbs)) goto loc_00070F1D; /* jge: greater or equal (signed >=) */

loc_00070EA6: ;
    eax = ecx + ecx * 2;
    edx = 2;
    eax = esi + eax * 4 + 0x7F4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);

loc_00070EB8: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax + 0xC;
    esi = ecx;
    edi = MEM32(esi);
    MEM32(esp + 0x14) = edi;
    edi = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(eax);
    MEM32(esp + 8) = esi;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = esi;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x18) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEM32(esp + 0x10) = eax;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    eax = ecx;
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
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if ((_fa != 0)) goto loc_00070EB8; /* jne: not equal / not zero */

loc_00070F1C: ;
    POP32(esp, edi);

loc_00070F1D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00070F30
 * Original: 0x00070F30 - 0x00070F4E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00070F38u); RECOMP_ABI_CALL(0x00070DD0u, sub_00070DD0); /* call 0x00070DD0 */

loc_00070F38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00070F48; /* je: equal / zero */

loc_00070F3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00070F45u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00070F45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00070F48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00070F50
 * Original: 0x00070F50 - 0x00070FBC (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00070F58u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00070F58: ;
    MEM32(esi) = 0x2E4A6C;
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
    PUSH32(esp, 0x00070FB5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00070FB5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00070FC0
 * Original: 0x00070FC0 - 0x00070FCC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00070FC0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00070FD0(); return; /* tail jmp 0x00070FD0 */

}

/**
 * sub_00070FD0
 * Original: 0x00070FD0 - 0x0007103D (109 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00070FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00070FD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071038; /* je: equal / zero */

loc_00070FE2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x8C4);
    edx = MEM32(ecx + 0x8C8);
    MEM32(ecx + 0x8CC) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x8C8);
    edx = MEM32(ecx + 0x8C4);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0007101B; /* je: equal / zero */

loc_00071014: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0007101Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071018u); } /* indirect call */
    }

loc_0007101B: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF730u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF730u;
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
    if (CMP_NE(_fa, _fb)) goto loc_00070FE2; /* jne: not equal / not zero */

loc_00071038: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071040
 * Original: 0x00071040 - 0x0007108A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071040: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x8C4;
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
 * sub_00071090
 * Original: 0x00071090 - 0x000710A5 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071090(void)
{

loc_00071090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00071098u); RECOMP_ABI_CALL(0x0006C9A0u, sub_0006C9A0); /* call 0x0006C9A0 */

loc_00071098: ;
    PUSH32(esp, esi);
    ecx = 0x3227A8;
    PUSH32(esp, 0x000710A3u); RECOMP_ABI_CALL(0x00071040u, sub_00071040); /* call 0x00071040 */

loc_000710A3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000710B0
 * Original: 0x000710B0 - 0x00071176 (198 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000710B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000710B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2418BC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x000710D3u); RECOMP_ABI_CALL(0x0006F3F0u, sub_0006F3F0); /* call 0x0006F3F0 */

loc_000710D3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = esi + 0x5B8;
    MEM32(esp + 0x18) = edi;
    MEM32(esi) = 0x2E4A88;
    PUSH32(esp, 0x000710EBu); RECOMP_ABI_CALL(0x0006CC00u, sub_0006CC00); /* call 0x0006CC00 */

loc_000710EB: ;
    PUSH32(esp, esi);
    ecx = esi + 0x63C;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x000710FCu); RECOMP_ABI_CALL(0x0006E050u, sub_0006E050); /* call 0x0006E050 */

loc_000710FC: ;
    PUSH32(esp, esi);
    ecx = esi + 0x6D4;
    MEM8(esp + 0x18) = 2;
    PUSH32(esp, 0x0007110Du); RECOMP_ABI_CALL(0x0006E1C0u, sub_0006E1C0); /* call 0x0006E1C0 */

loc_0007110D: ;
    PUSH32(esp, esi);
    ecx = esi + 0x868;
    MEM8(esp + 0x18) = 3;
    PUSH32(esp, 0x0007111Eu); RECOMP_ABI_CALL(0x0006D4F0u, sub_0006D4F0); /* call 0x0006D4F0 */

loc_0007111E: ;
    PUSH32(esp, esi);
    ecx = esi + 0x87C;
    MEM8(esp + 0x18) = 4;
    PUSH32(esp, 0x0007112Fu); RECOMP_ABI_CALL(0x0006D6F0u, sub_0006D6F0); /* call 0x0006D6F0 */

loc_0007112F: ;
    PUSH32(esp, esi);
    ecx = esi + 0x898;
    MEM8(esp + 0x18) = 5;
    PUSH32(esp, 0x00071140u); RECOMP_ABI_CALL(0x0006DA10u, sub_0006DA10); /* call 0x0006DA10 */

loc_00071140: ;
    PUSH32(esp, esi);
    ecx = esi + 0x8C4;
    MEM8(esp + 0x18) = 6;
    PUSH32(esp, 0x00071151u); RECOMP_ABI_CALL(0x0006DB50u, sub_0006DB50); /* call 0x0006DB50 */

loc_00071151: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x90C) = edi;
    MEM32(esi + 0x910) = edi;
    MEM32(esi + 0x914) = edi;
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
 * sub_00071180
 * Original: 0x00071180 - 0x000711A0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071180: ;
    eax = MEM32(ecx + 0x18);
    edx = ecx + 0x63C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007119A; /* je: equal / zero */

loc_0007118D: ;
    _fb = (uint32_t)(0x6D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6D4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007119A; /* je: equal / zero */

loc_00071197: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0007119A: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000711A0
 * Original: 0x000711A0 - 0x000711C0 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000711A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000711A0: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x5B8;
    MEM32(ecx + 0x5C0) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00064020(); return; /* tail jmp 0x00064020 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000711C0
 * Original: 0x000711C0 - 0x000711C7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000711C0(void)
{

loc_000711C0: ;
    eax = MEM32(ecx + 0x5C0);
    esp += 4; return; /* ret */

}

/**
 * sub_000711D0
 * Original: 0x000711D0 - 0x0007120A (58 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000711D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000711D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000711F3; /* je: equal / zero */

loc_000711D8: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x28);
    edx = ecx + 0x63C;
    MEM32(ecx + 0x644) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00064020(); return; /* tail jmp 0x00064020 */

loc_000711F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x63C;
    MEM32(ecx + 0x644) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00064020(); return; /* tail jmp 0x00064020 */

}

/**
 * sub_00071210
 * Original: 0x00071210 - 0x00071272 (98 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071210: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    eax = esp;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    ecx = esi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0007123Bu); RECOMP_ABI_CALL(0x0006CB60u, sub_0006CB60); /* call 0x0006CB60 */

loc_0007123B: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    edi = esi + 0x63C;
    ecx = edi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0007125Eu); RECOMP_ABI_CALL(0x0006C830u, sub_0006C830); /* call 0x0006C830 */

loc_0007125E: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007126B; /* je: equal / zero */

loc_00071263: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0007126Bu); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_0007126B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00071280
 * Original: 0x00071280 - 0x000712F6 (118 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071280: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    esi = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = esi;
    PUSH32(esp, 0x000712B5u); RECOMP_ABI_CALL(0x0006CBB0u, sub_0006CBB0); /* call 0x0006CBB0 */

loc_000712B5: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 4) = eax;
    edi = esi + 0x6D4;
    MEM32(ecx + 8) = edx;
    ecx = edi;
    PUSH32(esp, 0x000712E2u); RECOMP_ABI_CALL(0x0006C870u, sub_0006C870); /* call 0x0006C870 */

loc_000712E2: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000712EF; /* je: equal / zero */

loc_000712E7: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000712EFu); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_000712EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00071300
 * Original: 0x00071300 - 0x0007132D (45 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071300: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    edi = esi + 0x8C4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0007131Bu); RECOMP_ABI_CALL(0x0006EB90u, sub_0006EB90); /* call 0x0006EB90 */

loc_0007131B: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071328; /* je: equal / zero */

loc_00071320: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00071328u); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00071328: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00071330
 * Original: 0x00071330 - 0x00071356 (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071330: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0007133Du); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0007133D: ;
    MEM32(esi + 0x888) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x87C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00071354u); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00071354: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00071360
 * Original: 0x00071360 - 0x00071399 (57 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071360(void)
{

loc_00071360: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x8A4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx + 0x898;
    MEMF(ecx + 0x8A8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, eax);
    MEMF(ecx + 0x8AC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00071396u); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00071396: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000713A0
 * Original: 0x000713A0 - 0x000713F1 (81 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000713A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000713A0: ;
    MEM32(ecx) = 0x2E4A88;
    MEM32(ecx + 0x8C4) = 0x2E44C0;
    MEM32(ecx + 0x898) = 0x2E44A8;
    MEM32(ecx + 0x87C) = 0x2E4490;
    MEM32(ecx + 0x868) = 0x2E4478;
    MEM32(ecx + 0x6D4) = 0x2E44F4;
    MEM32(ecx + 0x63C) = 0x2E44DC;
    MEM32(ecx + 0x5B8) = 0x2E4460;
    g_seh_ebp = ebp; sub_0006C950(); return; /* tail jmp 0x0006C950 */

}

/**
 * sub_00071400
 * Original: 0x00071400 - 0x00071464 (100 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071400: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00071414u); RECOMP_ABI_CALL(0x0006F440u, sub_0006F440); /* call 0x0006F440 */

loc_00071414: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x84874D36u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00071420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007141Du); } /* indirect call */
    }

loc_00071420: ;
    ebx = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x89348E46u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0007142Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007142Bu); } /* indirect call */
    }

loc_0007142E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x40) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00071448; /* je: equal / zero */

loc_00071439: ;
    ecx = MEM32(0x371DD8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00071445u); RECOMP_ABI_CALL(0x001246E0u, sub_001246E0); /* call 0x001246E0 */

loc_00071445: ;
    MEM32(esi + 0x40) = eax;

loc_00071448: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007145E; /* je: equal / zero */

loc_0007144F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0007145Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071458u); } /* indirect call */
    }

loc_0007145E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00071470
 * Original: 0x00071470 - 0x000716F2 (642 bytes, 164 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071470(void)
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

loc_00071470: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00071480u); RECOMP_ABI_CALL(0x00042B80u, sub_00042B80); /* call 0x00042B80 */

loc_00071480: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0007148Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007148Bu); } /* indirect call */
    }

loc_0007148E: ;
    edi = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    edx = esp + 0x14;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000714D3u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000714D3: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    esi = MEM32(esp + 0x40);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esi) = xmm3.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00071534u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_00071534: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC094)); /* fadd dword ptr [0x2dc094] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(edi + 8);
    eax = edx;
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0x00071564u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_00071564: ;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007157E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007157B: ;
    xmm0 = xmm1; /* movaps */

loc_0007157E: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC3E8); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
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
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30EFF0) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((8) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    MEM32(esp + 0x34) = eax;
    eax = esp + 0x14;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00071611u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_00071611: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDA3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2E0A28); /* subss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00071646u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00071646: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC8D4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm2.f[0]; /* movss */
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x18);
    eax = ecx;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000716D9u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_000716D9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E4C38)); /* fadd dword ptr [0x2e4c38] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 3;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00071700
 * Original: 0x00071700 - 0x0007171E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071700: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00071708u); RECOMP_ABI_CALL(0x000713A0u, sub_000713A0); /* call 0x000713A0 */

loc_00071708: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071718; /* je: equal / zero */

loc_0007170F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00071715u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00071715: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00071718: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071720
 * Original: 0x00071720 - 0x0007178C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071720: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00071728u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00071728: ;
    MEM32(esi) = 0x2E4C3C;
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
    PUSH32(esp, 0x00071785u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00071785: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00071790
 * Original: 0x00071790 - 0x0007179C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071790: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000717A0(); return; /* tail jmp 0x000717A0 */

}

/**
 * sub_000717A0
 * Original: 0x000717A0 - 0x0007180D (109 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000717A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000717A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071808; /* je: equal / zero */

loc_000717B2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x90C);
    edx = MEM32(ecx + 0x910);
    MEM32(ecx + 0x914) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x910);
    edx = MEM32(ecx + 0x90C);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000717EB; /* je: equal / zero */

loc_000717E4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000717EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000717E8u); } /* indirect call */
    }

loc_000717EB: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF6E8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF6E8u;
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
    if (CMP_NE(_fa, _fb)) goto loc_000717B2; /* jne: not equal / not zero */

loc_00071808: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071810
 * Original: 0x00071810 - 0x0007185A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071810: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x90C;
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
 * sub_00071860
 * Original: 0x00071860 - 0x00071875 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071860(void)
{

loc_00071860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00071868u); RECOMP_ABI_CALL(0x0006C9A0u, sub_0006C9A0); /* call 0x0006C9A0 */

loc_00071868: ;
    PUSH32(esp, esi);
    ecx = 0x322830;
    PUSH32(esp, 0x00071873u); RECOMP_ABI_CALL(0x00071810u, sub_00071810); /* call 0x00071810 */

loc_00071873: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00071880
 * Original: 0x00071880 - 0x000718A6 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071880: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00071888u); RECOMP_ABI_CALL(0x000689B0u, sub_000689B0); /* call 0x000689B0 */

loc_00071888: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E4C50;
    MEM32(esi + 0x598) = eax;
    MEM32(esi + 0x59C) = eax;
    MEM32(esi + 0x5A0) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000718B0
 * Original: 0x000718B0 - 0x000718B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000718B0(void)
{

loc_000718B0: ;
    eax = 0x5A8;
    esp += 4; return; /* ret */

}

/**
 * sub_000718C0
 * Original: 0x000718C0 - 0x000718DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000718C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000718C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000718C8u); RECOMP_ABI_CALL(0x000718E0u, sub_000718E0); /* call 0x000718E0 */

loc_000718C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000718D8; /* je: equal / zero */

loc_000718CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000718D5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000718D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000718D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000718E0
 * Original: 0x000718E0 - 0x000718EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000718E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000718E0: ;
    MEM32(ecx) = 0x2E4C50;
    g_seh_ebp = ebp; sub_000673C0(); return; /* tail jmp 0x000673C0 */

}

/**
 * sub_000718F0
 * Original: 0x000718F0 - 0x000718F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000718F0(void)
{

loc_000718F0: ;
    eax = MEM32(0x30D914);
    esp += 4; return; /* ret */

}

/**
 * sub_00071900
 * Original: 0x00071900 - 0x000719F2 (242 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071900(void)
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

loc_00071900: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00071914u); RECOMP_ABI_CALL(0x0006BA70u, sub_0006BA70); /* call 0x0006BA70 */

loc_00071914: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x594) = LO8(ebx);
    MEMF(esi + 0x580) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x584) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x588) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x590) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD3F451ACu);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00071953u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071950u); } /* indirect call */
    }

loc_00071953: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071966; /* je: equal / zero */

loc_00071957: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007195Du); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0007195D: ;
    MEMF(esi + 0x580) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00071966: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x348C1F52);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00071972u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007196Fu); } /* indirect call */
    }

loc_00071972: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071985; /* je: equal / zero */

loc_00071976: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007197Cu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0007197C: ;
    MEMF(esi + 0x584) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00071985: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC461D811u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00071991u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007198Eu); } /* indirect call */
    }

loc_00071991: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000719A4; /* je: equal / zero */

loc_00071995: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007199Bu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0007199B: ;
    MEMF(esi + 0x590) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000719A4: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1FC82EE);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000719B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000719ADu); } /* indirect call */
    }

loc_000719B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000719C3; /* je: equal / zero */

loc_000719B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000719BAu); RECOMP_ABI_CALL(0x001EF710u, sub_001EF710); /* call 0x001EF710 */

loc_000719BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x594) = LO8(eax);

loc_000719C3: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x923CB014u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000719CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000719CCu); } /* indirect call */
    }

loc_000719CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000719E4; /* je: equal / zero */

loc_000719D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000719D9u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000719D9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000719DFu); RECOMP_ABI_CALL(0x00095C20u, sub_00095C20); /* call 0x00095C20 */

loc_000719DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_000719E4: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000719ECu); RECOMP_ABI_CALL(0x000652F0u, sub_000652F0); /* call 0x000652F0 */

loc_000719EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00071A00
 * Original: 0x00071A00 - 0x00071B9C (412 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071A00(void)
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

loc_00071A00: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00071B76; /* je: equal / zero */

loc_00071A16: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00071A1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071A1Au); } /* indirect call */
    }

loc_00071A1D: ;
    edx = MEM32(0x30C1B4);
    ecx = MEM32(0x30C1B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071B76; /* jne: not equal / not zero */

loc_00071A33: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x323590);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071B39; /* je: equal / zero */

loc_00071A46: ;
    ebx = MEM32(edi + 0x10);
    ecx = esi;
    PUSH32(esp, 0x00071A50u); RECOMP_ABI_CALL(0x00097100u, sub_00097100); /* call 0x00097100 */

loc_00071A50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071B27; /* je: equal / zero */

loc_00071A58: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071B27; /* jne: not equal / not zero */

loc_00071A61: ;
    eax = MEM32(edi + 0x4A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071A79; /* je: equal / zero */

loc_00071A6B: ;
    ecx = MEM32(esi + 0x40);
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071B27; /* jne: not equal / not zero */

loc_00071A79: ;
    ecx = esi;
    PUSH32(esp, 0x00071A80u); RECOMP_ABI_CALL(0x00097100u, sub_00097100); /* call 0x00097100 */

loc_00071A80: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071B27; /* je: equal / zero */

loc_00071A8A: ;
    SET_LO8(eax, MEM8(edi + 0x594));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071AAE; /* je: equal / zero */

loc_00071A94: ;
    ecx = ebx;
    PUSH32(esp, 0x00071A9Bu); RECOMP_ABI_CALL(0x00015000u, sub_00015000); /* call 0x00015000 */

loc_00071A9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071B27; /* je: equal / zero */

loc_00071AA3: ;
    ecx = ebx;
    PUSH32(esp, 0x00071AAAu); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_00071AAA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071B27; /* jne: not equal / not zero */

loc_00071AAE: ;
    edx = MEM32(edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00071ABAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071AB7u); } /* indirect call */
    }

loc_00071ABA: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x590)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00071B27; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_00071B08: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x588); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x580); /* comiss */
    MEMF(edi + 0x588) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00071B7E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi + 0x580)) */

loc_00071B27: ;
    ebp = MEM32(ebp);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071A46; /* jne: not equal / not zero */

loc_00071B35: ;
    ebx = MEM32(esp + 0x10);

loc_00071B39: ;
    SET_LO8(eax, MEM8(ebx + 0x6E0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071B74; /* jne: not equal / not zero */

loc_00071B43: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x58C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x584); /* comiss */
    MEMF(edi + 0x58C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071B74; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x584)) */

loc_00071B62: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = ebx;
    MEMF(edi + 0x588) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00071B74u); RECOMP_ABI_CALL(0x0002B210u, sub_0002B210); /* call 0x0002B210 */

loc_00071B74: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00071B76: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00071B7E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x10);
    MEMF(edi + 0x58C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00071B92u); RECOMP_ABI_CALL(0x0002B1E0u, sub_0002B1E0); /* call 0x0002B1E0 */

loc_00071B92: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071BA0
 * Original: 0x00071BA0 - 0x00071C0C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00071BA8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00071BA8: ;
    MEM32(esi) = 0x2E4DCC;
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
    PUSH32(esp, 0x00071C05u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00071C05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00071C10
 * Original: 0x00071C10 - 0x00071C1C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071C10: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00071C20(); return; /* tail jmp 0x00071C20 */

}

/**
 * sub_00071C17
 * Original: 0x00071C17 - 0x00071C1C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071C17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071C17: ;
    g_seh_ebp = ebp; sub_00071C20(); return; /* tail jmp 0x00071C20 */

}

/**
 * sub_00071C20
 * Original: 0x00071C20 - 0x00071C8D (109 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071C20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071C88; /* je: equal / zero */

loc_00071C32: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x598);
    edx = MEM32(ecx + 0x59C);
    MEM32(ecx + 0x5A0) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x59C);
    edx = MEM32(ecx + 0x598);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00071C6B; /* je: equal / zero */

loc_00071C64: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00071C6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071C68u); } /* indirect call */
    }

loc_00071C6B: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFA58u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFA58u;
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
    if (CMP_NE(_fa, _fb)) goto loc_00071C32; /* jne: not equal / not zero */

loc_00071C88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071C90
 * Original: 0x00071C90 - 0x00071CB8 (40 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071C90(void)
{

loc_00071C90: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00071CA4u); RECOMP_ABI_CALL(0x0006BA70u, sub_0006BA70); /* call 0x0006BA70 */

loc_00071CA4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3D0)); /* movss */
    MEMF(esi + 0x560) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00071CC0
 * Original: 0x00071CC0 - 0x00071CC8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071CC0(void)
{

loc_00071CC0: ;
    PUSH32(esp, 0x00071CC5u); RECOMP_ABI_CALL(0x00065400u, sub_00065400); /* call 0x00065400 */

loc_00071CC5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071CD0
 * Original: 0x00071CD0 - 0x00071CE9 (25 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071CD0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00071CD0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071CE6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00071CDF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00071CE6u); RECOMP_ABI_CALL(0x00064060u, sub_00064060); /* call 0x00064060 */

loc_00071CE6: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00071CF0
 * Original: 0x00071CF0 - 0x00071D16 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00071CF8u); RECOMP_ABI_CALL(0x000689B0u, sub_000689B0); /* call 0x000689B0 */

loc_00071CF8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E4DE0;
    MEM32(esi + 0x580) = eax;
    MEM32(esi + 0x584) = eax;
    MEM32(esi + 0x588) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00071D20
 * Original: 0x00071D20 - 0x00071D26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071D20(void)
{

loc_00071D20: ;
    eax = 0x590;
    esp += 4; return; /* ret */

}

/**
 * sub_00071D30
 * Original: 0x00071D30 - 0x00071D4E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00071D38u); RECOMP_ABI_CALL(0x00071D50u, sub_00071D50); /* call 0x00071D50 */

loc_00071D38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00071D48; /* je: equal / zero */

loc_00071D3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00071D45u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00071D45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00071D48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071D50
 * Original: 0x00071D50 - 0x00071D5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071D50: ;
    MEM32(ecx) = 0x2E4DE0;
    g_seh_ebp = ebp; sub_000673C0(); return; /* tail jmp 0x000673C0 */

}

/**
 * sub_00071D60
 * Original: 0x00071D60 - 0x00071D66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071D60(void)
{

loc_00071D60: ;
    eax = MEM32(0x30D924);
    esp += 4; return; /* ret */

}

/**
 * sub_00071D70
 * Original: 0x00071D70 - 0x00071E26 (182 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071D70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x170); PUSH32(esp, 0x00071D82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071D7Cu); } /* indirect call */
    }

loc_00071D82: ;
    _fa = (uint32_t)(MEM8(0x321DEC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x321DEC), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00071D96; /* jne: not equal / not zero */

loc_00071D8B: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x174); PUSH32(esp, 0x00071D96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071D90u); } /* indirect call */
    }

loc_00071D96: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071DBA; /* je: equal / zero */

loc_00071D9D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00071DA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071DA1u); } /* indirect call */
    }

loc_00071DA4: ;
    edx = MEM32(0x30C1F4);
    ecx = MEM32(0x30C1F0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071DBA; /* jne: not equal / not zero */

loc_00071DB6: ;
    ebx = edi;
    goto loc_00071DBC;

loc_00071DBA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00071DBC: ;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x58C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071E17; /* je: equal / zero */

loc_00071DC7: ;
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    if ((_fa == 0)) goto loc_00071DD9; /* je: equal / zero */

loc_00071DCE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00071DD5; /* je: equal / zero */

loc_00071DD1: ;
    PUSH32(esp, 0);
    goto loc_00071DDB;

loc_00071DD5: ;
    PUSH32(esp, 2);
    goto loc_00071DDB;

loc_00071DD9: ;
    PUSH32(esp, 1);

loc_00071DDB: ;
    PUSH32(esp, 0x00071DE0u); RECOMP_ABI_CALL(0x0002DDE0u, sub_0002DDE0); /* call 0x0002DDE0 */

loc_00071DE0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x58C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00071E17; /* jle: less or equal (signed <=) */

loc_00071DE8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071DF2; /* je: equal / zero */

loc_00071DED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071E08; /* jne: not equal / not zero */

loc_00071DF2: ;
    ecx = ebx;
    PUSH32(esp, 0x00071DF9u); RECOMP_ABI_CALL(0x0002DEC0u, sub_0002DEC0); /* call 0x0002DEC0 */

loc_00071DF9: ;
    ecx = MEM32(esi + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x58C) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00071E08: ;
    edx = MEM32(esi + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x58C) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00071E17: ;
    eax = MEM32(esi + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x58C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071E30
 * Original: 0x00071E30 - 0x00071EF1 (193 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071E30(void)
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

loc_00071E30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071E44; /* je: equal / zero */

loc_00071E3F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00071E44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071E41u); } /* indirect call */
    }

loc_00071E44: ;
    ebx = MEM32(0x323590);
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071EE8; /* je: equal / zero */

loc_00071E55: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00071EE8; /* jg: greater (signed >) */

loc_00071E5F: ;
    edx = MEM32(edi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00071E6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071E68u); } /* indirect call */
    }

loc_00071E6B: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00071EDB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00071EB6: ;
    esi = MEM32(esi);
    eax = esi + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00071EDB; /* ja: above (unsigned >) */

loc_00071EC0: ;
    ecx = ZX8(MEM8(eax + 0x71F00));
    { uint32_t _jt = MEM32(ecx * 4 + 0x71EF4); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00071ECEu) goto loc_00071ECE;
    if (_jt == 0x00071ED2u) goto loc_00071ED2;
    if (_jt == 0x00071EDBu) goto loc_00071EDB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00071ECE: ;
    PUSH32(esp, 2);
    goto loc_00071ED4;

loc_00071ED2: ;
    PUSH32(esp, 1);

loc_00071ED4: ;
    ecx = edi;
    PUSH32(esp, 0x00071EDBu); RECOMP_ABI_CALL(0x00064060u, sub_00064060); /* call 0x00064060 */

loc_00071EDB: ;
    ebx = MEM32(ebx);
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00071E55; /* jne: not equal / not zero */

loc_00071EE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00071F10
 * Original: 0x00071F10 - 0x00071F7C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00071F18u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00071F18: ;
    MEM32(esi) = 0x2E4F5C;
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
    PUSH32(esp, 0x00071F75u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00071F75: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00071F80
 * Original: 0x00071F80 - 0x00071F8C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00071F80: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00071F90(); return; /* tail jmp 0x00071F90 */

}

/**
 * sub_00071F90
 * Original: 0x00071F90 - 0x00071FFD (109 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00071F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00071F90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00071FF8; /* je: equal / zero */

loc_00071FA2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x580);
    edx = MEM32(ecx + 0x584);
    MEM32(ecx + 0x588) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x584);
    edx = MEM32(ecx + 0x580);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00071FDB; /* je: equal / zero */

loc_00071FD4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00071FDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00071FD8u); } /* indirect call */
    }

loc_00071FDB: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFA70u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFA70u;
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
    if (CMP_NE(_fa, _fb)) goto loc_00071FA2; /* jne: not equal / not zero */

loc_00071FF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072000
 * Original: 0x00072000 - 0x0007200B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00072000: ;
    MEM32(ecx) = 0x2E4F78;
    g_seh_ebp = ebp; sub_000673C0(); return; /* tail jmp 0x000673C0 */

}

/**
 * sub_00072010
 * Original: 0x00072010 - 0x0007201F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072010(void)
{

loc_00072010: ;
    eax = MEM32(ecx + 0x40);
    MEM8(eax + 8) = 0;
    eax = 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072020
 * Original: 0x00072020 - 0x0007202B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00072020: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x84)); return; /* indirect tail jmp */

}

/**
 * sub_00072030
 * Original: 0x00072030 - 0x00072054 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072030: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0007203Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072038u); } /* indirect call */
    }

loc_0007203E: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072050; /* je: equal / zero */

loc_00072048: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00072050u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007204Au); } /* indirect call */
    }

loc_00072050: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072060
 * Original: 0x00072060 - 0x00072073 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072060(void)
{

loc_00072060: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 0x59C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0x00072072u); RECOMP_ABI_CALL(0x00124710u, sub_00124710); /* call 0x00124710 */

loc_00072072: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00072080
 * Original: 0x00072080 - 0x000720A8 (40 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072080(void)
{

loc_00072080: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x580) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x584) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x588) = eax;
    MEM8(ecx + 0x598) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000720B0
 * Original: 0x000720B0 - 0x000720BD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000720B0(void)
{

loc_000720B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x59C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000720C0
 * Original: 0x000720C0 - 0x000720C7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000720C0(void)
{

loc_000720C0: ;
    eax = MEM32(ecx + 0x59C);
    esp += 4; return; /* ret */

}

/**
 * sub_000720D0
 * Original: 0x000720D0 - 0x000720F0 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000720D0(void)
{

loc_000720D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000720E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000720DCu); } /* indirect call */
    }

loc_000720E2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x000720ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000720E6u); } /* indirect call */
    }

loc_000720EC: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000720F0
 * Original: 0x000720F0 - 0x00072100 (16 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000720F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000720F0: ;
    edx = MEM32(ecx + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00072100
 * Original: 0x00072100 - 0x00072107 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072100(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00072100: ;
    fp_push(MEMF(0x2DC344)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072110
 * Original: 0x00072110 - 0x00072121 (17 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072110(void)
{

loc_00072110: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x5A8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072130
 * Original: 0x00072130 - 0x00072137 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00072130: ;
    fp_push(MEMF(ecx + 0x5A8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072140
 * Original: 0x00072140 - 0x00072147 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072140(void)
{

loc_00072140: ;
    MEM32(ecx) = 0x2E50FC;
    esp += 4; return; /* ret */

}

/**
 * sub_00072150
 * Original: 0x00072150 - 0x00072157 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072150(void)
{

loc_00072150: ;
    MEM32(ecx) = 0x2E5104;
    esp += 4; return; /* ret */

}

/**
 * sub_00072160
 * Original: 0x00072160 - 0x0007217F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072160: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E50FC;
    if (TEST_Z(_fa, _fb)) goto loc_00072179; /* je: equal / zero */

loc_00072170: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00072176u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00072176: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00072179: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072180
 * Original: 0x00072180 - 0x0007219F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072180: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E5104;
    if (TEST_Z(_fa, _fb)) goto loc_00072199; /* je: equal / zero */

loc_00072190: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00072196u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00072196: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00072199: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000721A0
 * Original: 0x000721A0 - 0x000721BC (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000721A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000721A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000721B4; /* je: equal / zero */

loc_000721A8: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x28);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

loc_000721B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000721C0
 * Original: 0x000721C0 - 0x000721F4 (52 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000721C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000721C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000721C8u); RECOMP_ABI_CALL(0x000689B0u, sub_000689B0); /* call 0x000689B0 */

loc_000721C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E4F78;
    MEM32(esi + 0x59C) = 0xFFFFFFFFu;
    MEM32(esi + 0x5A0) = 1;
    MEM32(esi + 0x5D4) = eax;
    MEM32(esi + 0x5DC) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00072200
 * Original: 0x00072200 - 0x0007221E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072200: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00072208u); RECOMP_ABI_CALL(0x00072000u, sub_00072000); /* call 0x00072000 */

loc_00072208: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00072218; /* je: equal / zero */

loc_0007220F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00072215u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00072215: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00072218: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072220
 * Original: 0x00072220 - 0x00072323 (259 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072220: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0x5BC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E425C)); /* movss */
    MEMF(esi + 0x5C0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E4F70)); /* movss */
    MEM32(esi + 0x5AC) = eax;
    MEMF(esi + 0x5B0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5B4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5B8) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x598) = LO8(eax);
    MEM8(esi + 0x5CC) = LO8(eax);
    MEM8(esi + 0x5CD) = LO8(eax);
    MEMF(esi + 0x5C8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C4) = xmm0.f[0]; /* movss */
    ecx = 0x4140CC;
    MEM32(esi + 0x5D4) = ecx;
    edx = MEM32(0x4140CC);
    MEM32(esi + 0x5D0) = edx;
    MEM32(esi + 0x5DC) = ecx;
    ecx = MEM32(0x4140CC);
    MEM32(esi + 0x5D8) = ecx;
    edx = MEM32(esi + 0x5D0);
    ecx = 0xFFFD40E0u;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5D0) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x5D8) = MEM32(esi + 0x5D8) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x5D8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esi + 0x5EC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5E4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5E8) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x5F0) = LO8(eax);
    PUSH32(esp, 0x000722F7u); RECOMP_ABI_CALL(0x00068A90u, sub_00068A90); /* call 0x00068A90 */

loc_000722F7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E4CCCCD);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00072306u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072300u); } /* indirect call */
    }

loc_00072306: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    MEMF(esi + 0x2FC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x2F0) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00072330
 * Original: 0x00072330 - 0x00072403 (211 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072330(void)
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

loc_00072330: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00072355; /* je: equal / zero */

loc_0007233C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00072343u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072340u); } /* indirect call */
    }

loc_00072343: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00072357; /* je: equal / zero */

loc_00072355: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00072357: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x00072361u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007235Bu); } /* indirect call */
    }

loc_00072361: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x00072372u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007236Cu); } /* indirect call */
    }

loc_00072372: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000723EF; /* je: equal / zero */

loc_00072378: ;
    goto loc_00072380;

    /* nop */

loc_00072380: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0007238Au); RECOMP_ABI_CALL(0x00162370u, sub_00162370); /* call 0x00162370 */

loc_0007238A: ;
    ebp = eax;
    _fa = (uint32_t)(MEM32(esi + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2D8), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000723B5; /* jne: not equal / not zero */

loc_00072395: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000723B5; /* je: equal / zero */

loc_00072399: ;
    ecx = ebp;
    PUSH32(esp, 0x000723A0u); RECOMP_ABI_CALL(0x001624B0u, sub_001624B0); /* call 0x001624B0 */

loc_000723A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000723B5; /* jne: not equal / not zero */

loc_000723A4: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x108)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000723DD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_000723B5: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000723F9; /* je: equal / zero */

loc_000723BD: ;
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000723CEu); RECOMP_ABI_CALL(0x00066A30u, sub_00066A30); /* call 0x00066A30 */

loc_000723CE: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_000723F9; /* ja: above (unsigned >) */

loc_000723DD: ;
    edx = MEM32(edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x000723E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000723E3u); } /* indirect call */
    }

loc_000723E9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00072380; /* jne: not equal / not zero */

loc_000723EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000723F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072410
 * Original: 0x00072410 - 0x0007244F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072410(void)
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

loc_00072410: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007243F; /* je: equal / zero */

loc_00072418: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007241Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007241Cu); } /* indirect call */
    }

loc_0007241F: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007243F; /* jne: not equal / not zero */

loc_00072431: ;
    fp_push(MEMF(esi + 0x278)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC350)); /* fmul dword ptr [0x2dc350] */
    esp += 4; return; /* ret */

loc_0007243F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(eax + 0x278)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC350)); /* fmul dword ptr [0x2dc350] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072450
 * Original: 0x00072450 - 0x00072581 (305 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00072450: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    ebp = MEM32(esi + 0x40);
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ebx, 1);
    if ((_fa == 0)) goto loc_000724D7; /* je: equal / zero */

loc_00072467: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00072483; /* je: equal / zero */

loc_0007246A: ;
    eax = MEM32(esi + 0x59C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 8))); }
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    MEM32(esi + 0x59C) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00072483: ;
    eax = MEM32(esi + 0x5A0);
    ecx = MEM32(esi + 0x59C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x59C) = ecx;
    eax = ecx;
    if ((_fas >= 0)) goto loc_000724B4; /* jns: not sign (positive) */

loc_0007249B: ;
    eax = 1;
    MEM32(esi + 0x5A0) = eax;
    MEM32(esi + 0x59C) = eax;

loc_000724AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000724B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000724AC; /* jl: less (signed <) */

loc_000724B9: ;
    MEM32(esi + 0x5A0) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x59C) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000724D7: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000724FB; /* je: equal / zero */

loc_000724E1: ;
    edx = MEM32(esi + 0x59C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x3DC970;
    PUSH32(esp, 0x000724F3u); RECOMP_ABI_CALL(0x00169F80u, sub_00169F80); /* call 0x00169F80 */

loc_000724F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0007252A; /* jne: not equal / not zero */

loc_000724FB: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esi + 0x59C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00072518; /* jge: greater or equal (signed >=) */

loc_00072509: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x59C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00072518: ;
    ecx = MEM32(edi + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(ecx + 0x40) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0007252A: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(0x371DD8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00072539u); RECOMP_ABI_CALL(0x001246E0u, sub_001246E0); /* call 0x001246E0 */

loc_00072539: ;
    ebx = eax;
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esi + 0x59C) = ecx;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = 0x3DC970;
    PUSH32(esp, 0x0007255Au); RECOMP_ABI_CALL(0x00169E90u, sub_00169E90); /* call 0x00169E90 */

loc_0007255A: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = 0x3DC970;
    PUSH32(esp, 0x0007256Bu); RECOMP_ABI_CALL(0x00169E10u, sub_00169E10); /* call 0x00169E10 */

loc_0007256B: ;
    edi = MEM32(edi + 0xC);
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x00072579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072573u); } /* indirect call */
    }

loc_00072579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00072590
 * Original: 0x00072590 - 0x000725AA (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072590: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax) = 0x2E510C;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000725B0
 * Original: 0x000725B0 - 0x000725CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000725B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000725B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E510C;
    if (TEST_Z(_fa, _fb)) goto loc_000725C9; /* je: equal / zero */

loc_000725C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000725C6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000725C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000725C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000725D0
 * Original: 0x000725D0 - 0x00072710 (320 bytes, 92 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000725D0(void)
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

loc_000725D0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000725F7; /* je: equal / zero */

loc_000725DE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000725E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000725E2u); } /* indirect call */
    }

loc_000725E5: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000725F9; /* je: equal / zero */

loc_000725F7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000725F9: ;
    edx = MEM32(edi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00072605u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072602u); } /* indirect call */
    }

loc_00072605: ;
    ecx = MEM32(esp + 0x28);
    fp_push(MEMF(ecx)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    edx = MEM32(esi);
    ecx = esi;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00072666u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072663u); } /* indirect call */
    }

loc_00072666: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00072688u); RECOMP_ABI_CALL(0x000646E0u, sub_000646E0); /* call 0x000646E0 */

loc_00072688: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, 0x00072698u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00072698: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x000726A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000726A5u); } /* indirect call */
    }

loc_000726A8: ;
    ecx = eax;
    PUSH32(esp, 0x000726AFu); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_000726AF: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000726C1u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_000726C1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC350); /* comiss */
    fp_top() = fabs(fp_top()); /* fabs */
    POP32(esp, edi);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000726FC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC350)) */

loc_000726DB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x30D940); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000726FC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x30D940)) */

loc_000726EA: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E4F74)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */

loc_000726FC: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E5124)); /* fmul dword ptr [0x2e5124] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
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
 * sub_00072710
 * Original: 0x00072710 - 0x00072810 (256 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00072710: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x5D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072805; /* je: equal / zero */

loc_00072724: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(esi + 0x5D0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x5D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6921A0); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC090); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072805; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC090)) */

loc_00072745: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072766; /* je: equal / zero */

loc_0007274D: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00072754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072751u); } /* indirect call */
    }

loc_00072754: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072768; /* je: equal / zero */

loc_00072766: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00072768: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00072772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007276Cu); } /* indirect call */
    }

loc_00072772: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    edx = MEM32(edi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00072794u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072791u); } /* indirect call */
    }

loc_00072794: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    edx = MEM32(esi);
    eax = esp + 0x10;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x000727EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000727E5u); } /* indirect call */
    }

loc_000727EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x5E0) = LO8(ecx);
    edx = MEM32(esi + 0x5D4);
    eax = MEM32(edx);
    MEM32(esi + 0x5D0) = eax;
    POP32(esp, edi);

loc_00072805: ;
    SET_LO8(eax, MEM8(esi + 0x5E0));
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00072810
 * Original: 0x00072810 - 0x00072917 (263 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00072810: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x5DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007290C; /* je: equal / zero */

loc_00072824: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(esi + 0x5D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x5D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6921A0); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC090); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007290C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC090)) */

loc_00072845: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072866; /* je: equal / zero */

loc_0007284D: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00072854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072851u); } /* indirect call */
    }

loc_00072854: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072868; /* je: equal / zero */

loc_00072866: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00072868: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00072872u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007286Cu); } /* indirect call */
    }

loc_00072872: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    edx = MEM32(edi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00072894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072891u); } /* indirect call */
    }

loc_00072894: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC340); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x2DC08C); /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 0x10;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x000728F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000728ECu); } /* indirect call */
    }

loc_000728F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x5E1) = LO8(ecx);
    edx = MEM32(esi + 0x5DC);
    eax = MEM32(edx);
    MEM32(esi + 0x5D8) = eax;
    POP32(esp, edi);

loc_0007290C: ;
    SET_LO8(eax, MEM8(esi + 0x5E1));
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00072920
 * Original: 0x00072920 - 0x0007299A (122 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00072920: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072946; /* je: equal / zero */

loc_00072929: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00072930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007292Du); } /* indirect call */
    }

loc_00072930: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00072946; /* jne: not equal / not zero */

loc_00072942: ;
    ecx = esi;
    goto loc_00072948;

loc_00072946: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00072948: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00072950u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007294Au); } /* indirect call */
    }

loc_00072950: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    esi = eax;
    MEM8(esp + 4) = 0;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072974; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00072965: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM8(esp + 4) = 1;

loc_00072974: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0007297Du); RECOMP_ABI_CALL(0x00132DA0u, sub_00132DA0); /* call 0x00132DA0 */

loc_0007297D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00072989u); RECOMP_ABI_CALL(0x00132E00u, sub_00132E00); /* call 0x00132E00 */

loc_00072989: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00072995u); RECOMP_ABI_CALL(0x00132D30u, sub_00132D30); /* call 0x00132D30 */

loc_00072995: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000729A0
 * Original: 0x000729A0 - 0x000729F3 (83 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000729A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000729A0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000729C5; /* je: equal / zero */

loc_000729A8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000729AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000729ACu); } /* indirect call */
    }

loc_000729AF: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000729C5; /* jne: not equal / not zero */

loc_000729C1: ;
    ecx = esi;
    goto loc_000729C7;

loc_000729C5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000729C7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x000729CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000729C9u); } /* indirect call */
    }

loc_000729CF: ;
    esi = eax;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000729DAu); RECOMP_ABI_CALL(0x00132D30u, sub_00132D30); /* call 0x00132D30 */

loc_000729DA: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000729E3u); RECOMP_ABI_CALL(0x00132E00u, sub_00132E00); /* call 0x00132E00 */

loc_000729E3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000729EFu); RECOMP_ABI_CALL(0x00132DA0u, sub_00132DA0); /* call 0x00132DA0 */

loc_000729EF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00072A00
 * Original: 0x00072A00 - 0x00072A99 (153 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072A00(void)
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

loc_00072A00: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072A25; /* je: equal / zero */

loc_00072A08: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00072A0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072A0Cu); } /* indirect call */
    }

loc_00072A0F: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00072A25; /* jne: not equal / not zero */

loc_00072A21: ;
    ecx = esi;
    goto loc_00072A27;

loc_00072A25: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00072A27: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00072A2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072A29u); } /* indirect call */
    }

loc_00072A2F: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00072A38u); RECOMP_ABI_CALL(0x00132A90u, sub_00132A90); /* call 0x00132A90 */

loc_00072A38: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) / fp_top()); /* fdivr dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC3A0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00072A6A; /* jbe: below or equal (unsigned <=) */

loc_00072A4C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00072A66u); RECOMP_ABI_CALL(0x00132790u, sub_00132790); /* call 0x00132790 */

loc_00072A66: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00072A6A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00072A89; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00072A83: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00072A89: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00072A95u); RECOMP_ABI_CALL(0x00132790u, sub_00132790); /* call 0x00132790 */

loc_00072A95: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00072AA0
 * Original: 0x00072AA0 - 0x00072D40 (672 bytes, 158 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00072AA0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2418D8);
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
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00072AC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072AC4u); } /* indirect call */
    }

loc_00072AC7: ;
    SET_LO8(eax, MEM8(esi + 0x598));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00072B46; /* je: equal / zero */

loc_00072AE3: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x58C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x590)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x594)); /* movss */
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
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072B38; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm6.f[0]) */

loc_00072B31: ;
    MEM8(esi + 0x598) = 0;

loc_00072B38: ;
    SET_LO8(eax, MEM8(esi + 0x598));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00072D12; /* jne: not equal / not zero */

loc_00072B46: ;
    PUSH32(esp, edi);
    edi = esi + 0x580;
    edx = edi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 8) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x58C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x590) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x10) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0x594) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x598) = 1;
    _fa = (uint32_t)(MEM8(0x321DEC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x321DEC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00072D11; /* jne: not equal / not zero */

loc_00072BA1: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x58C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x590)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x594)); /* movss */
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
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00072D11; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(0x2DC8B0)) */

loc_00072BEF: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x590)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x594)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x58C)); /* movss */
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
    PUSH32(esp, 0x00072C53u); RECOMP_ABI_CALL(0x00068220u, sub_00068220); /* call 0x00068220 */

loc_00072C53: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072D11; /* je: equal / zero */

loc_00072C5B: ;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    MEM32(esp + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = ecx;
    edi = 0x2E5104;
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
    PUSH32(esp, 0x00072CC2u); RECOMP_ABI_CALL(0x0006B8E0u, sub_0006B8E0); /* call 0x0006B8E0 */

loc_00072CC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    MEM32(esp + 0x38) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00072D11; /* je: equal / zero */

loc_00072CD2: ;
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
    PUSH32(esp, 0x00072CF7u); RECOMP_ABI_CALL(0x00066D90u, sub_00066D90); /* call 0x00066D90 */

loc_00072CF7: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x58C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x590) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x594) = eax;

loc_00072D11: ;
    POP32(esp, edi);

loc_00072D12: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x58C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58C;
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
 * sub_00072D40
 * Original: 0x00072D40 - 0x00072F6C (556 bytes, 147 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072D40(void)
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

loc_00072D40: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_00072F64; /* je: equal / zero */

loc_00072D57: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x51C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC394); /* comiss */
    if ((_fca > _fcb)) goto loc_00072F64; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC394)) */

loc_00072D6C: ;
    eax = MEM32(ebp);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00072D79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072D76u); } /* indirect call */
    }

loc_00072D79: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    edx = MEM32(esi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00072D99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072D96u); } /* indirect call */
    }

loc_00072D99: ;
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
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x34) = 1;
    PUSH32(esp, 0x00072DECu); RECOMP_ABI_CALL(0x00012990u, sub_00012990); /* call 0x00012990 */

loc_00072DEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072DF8; /* je: equal / zero */

loc_00072DF0: ;
    MEM32(esp + 0x34) = 2;

loc_00072DF8: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00072E1D; /* je: equal / zero */

loc_00072E00: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00072E07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072E04u); } /* indirect call */
    }

loc_00072E07: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00072E1D; /* jne: not equal / not zero */

loc_00072E19: ;
    ebx = esi;
    goto loc_00072E1F;

loc_00072E1D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00072E1F: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    MEM32(esp + 0x1C) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x00072E33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072E2Du); } /* indirect call */
    }

loc_00072E33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072F63; /* je: equal / zero */

loc_00072E3B: ;
    PUSH32(esp, edi);
    /* nop */

loc_00072E40: ;
    _fa = (uint32_t)(MEM32(eax + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2D8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072F46; /* je: equal / zero */

loc_00072E4D: ;
    esi = MEM32(eax + 0x28C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00072F46; /* je: equal / zero */

loc_00072E5B: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    edx = MEM32(esp + 0x3C);
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x30) = LO8(ecx);
    MEM32(esi + 4) = 0;
    edi = MEM32(eax + 0x27C);
    ecx = MEM32(edi + 0x1E8);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00072F46; /* je: equal / zero */

loc_00072E86: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00072E8Du); RECOMP_ABI_CALL(0x000665B0u, sub_000665B0); /* call 0x000665B0 */

loc_00072E8D: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00072E9Bu); RECOMP_ABI_CALL(0x00064690u, sub_00064690); /* call 0x00064690 */

loc_00072E9B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00072F46; /* jl: less (signed <) */

loc_00072EA7: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x00072EB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072EADu); } /* indirect call */
    }

loc_00072EB3: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00072EBFu); RECOMP_ABI_CALL(0x00032900u, sub_00032900); /* call 0x00032900 */

loc_00072EBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00072EE3; /* jne: not equal / not zero */

loc_00072EC9: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E4258)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */

loc_00072EE3: ;
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x28);
    PUSH32(esp, 0xB421904);
    ecx = edi;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x00072EFDu); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_00072EFD: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00072F42; /* jbe: below or equal (unsigned <=) */

loc_00072F11: ;
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x51C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD418); /* comiss */
    if ((_fca > _fcb)) goto loc_00072F46; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DD418)) */

loc_00072F26: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2E5128); /* mulss */
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca > _fcb)) goto loc_00072F46; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(esp + 0x18)) */

loc_00072F42: ;
    MEM8(esi + 0x30) = MEM8(esi + 0x30) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00072F46: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x00072F5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072F54u); } /* indirect call */
    }

loc_00072F5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00072E40; /* jne: not equal / not zero */

loc_00072F62: ;
    POP32(esp, edi);

loc_00072F63: ;
    POP32(esp, ebx);

loc_00072F64: ;
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
 * sub_00072F70
 * Original: 0x00072F70 - 0x000731B9 (585 bytes, 139 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00072F70(void)
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

loc_00072F70: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00072F8B; /* jne: not equal / not zero */

loc_00072F7E: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00072F8B: ;
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
    PUSH32(esp, 0x00072FB1u); RECOMP_ABI_CALL(0x00066D90u, sub_00066D90); /* call 0x00066D90 */

loc_00072FB1: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00072FBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00072FBBu); } /* indirect call */
    }

loc_00072FBE: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00072FCDu); RECOMP_ABI_CALL(0x000725D0u, sub_000725D0); /* call 0x000725D0 */

loc_00072FCD: ;
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
    PUSH32(esp, 0x0007305Au); RECOMP_ABI_CALL(0x00068220u, sub_00068220); /* call 0x00068220 */

loc_0007305A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073072; /* je: equal / zero */

loc_0007305E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */

loc_00073072: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0007307Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007307Cu); } /* indirect call */
    }

loc_0007307F: ;
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
    PUSH32(esp, 0x000730D1u); RECOMP_ABI_CALL(0x00068480u, sub_00068480); /* call 0x00068480 */

loc_000730D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(0x2DC3B4)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000731A8; /* je: equal / zero */

loc_000730E1: ;
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
    xmm2 = XMM_SCALAR(MEMF(0x30D930)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007318D; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0007312C: ;
    xmm1 = XMM_SCALAR(MEMF(0x30D934)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007314D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073139: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x44); /* mulss */
    goto loc_0007319B;

loc_0007314D: ;
    xmm2 = XMM_SCALAR(MEMF(0x30D938)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000731A1; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0007315A: ;
    xmm1 = XMM_SCALAR(MEMF(0x30D93C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007318D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073167: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x44); /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    goto loc_000731A1;

loc_0007318D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC098); /* mulss */

loc_0007319B: ;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */

loc_000731A1: ;
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 0x44); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000731AE; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esp + 0x44)) */

loc_000731A8: ;
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */

loc_000731AE: ;
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
 * sub_000731C0
 * Original: 0x000731C0 - 0x00073201 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000731C0(void)
{

loc_000731C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x000731DAu); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_000731DA: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E512C;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00073210
 * Original: 0x00073210 - 0x00073251 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073210(void)
{

loc_00073210: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x0007322Au); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_0007322A: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E5160;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00073260
 * Original: 0x00073260 - 0x000732A1 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073260(void)
{

loc_00073260: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x0007327Au); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_0007327A: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E514C;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000732B0
 * Original: 0x000732B0 - 0x00073563 (691 bytes, 183 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000732B0(void)
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

loc_000732B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000732D7; /* je: equal / zero */

loc_000732BE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000732C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000732C2u); } /* indirect call */
    }

loc_000732C5: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000732D9; /* je: equal / zero */

loc_000732D7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000732D9: ;
    SET_LO8(eax, MEM8(edi + 0x5F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073301; /* je: equal / zero */

loc_000732E3: ;
    eax = MEM32(edi + 0x2E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000732F2; /* je: equal / zero */

loc_000732ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000732F4;

loc_000732F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000732F4: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00073301; /* jne: not equal / not zero */

loc_000732FA: ;
    eax = 1;
    goto loc_00073303;

loc_00073301: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00073303: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(edi + 0x5F0) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00073415; /* je: equal / zero */

loc_00073311: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x5E8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x5E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(edi + 0x5E4) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x5E8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007335E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00073348: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x42);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00073359u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073353u); } /* indirect call */
    }

loc_00073359: ;
    goto loc_0007343C;

loc_0007335E: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC3C0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007343C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0007336F: ;
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000733B3; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_0007337B: ;
    PUSH32(esp, 0x00073380u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_00073380: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC394)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0007343C; /* jbe: below or equal (unsigned <=) */

loc_00073398: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD418); /* mulss */
    MEMF(edi + 0x5E8) = xmm0.f[0]; /* movss */
    goto loc_0007343C;

loc_000733B3: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2E515C); /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007343C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000733D6: ;
    PUSH32(esp, 0x000733DBu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_000733DB: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x5E8)); /* fmul dword ptr [edi + 0x5e8] */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0007343C; /* jbe: below or equal (unsigned <=) */

loc_000733F7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    MEMF(edi + 0x5E8) = xmm0.f[0]; /* movss */
    goto loc_0007343C;

loc_00073415: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E4F70)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x5E4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007343C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x5E4)) */

loc_00073426: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x5E4); /* addss */
    MEMF(edi + 0x5E4) = xmm0.f[0]; /* movss */

loc_0007343C: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x5EC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ecx = edi;
    MEMF(edi + 0x5EC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00073460u); RECOMP_ABI_CALL(0x0006C420u, sub_0006C420); /* call 0x0006C420 */

loc_00073460: ;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x0007346Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073467u); } /* indirect call */
    }

loc_0007346D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007349C; /* je: equal / zero */

loc_00073471: ;
    _fa = (uint32_t)(MEM32(eax + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2D8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007348C; /* je: equal / zero */

loc_0007347A: ;
    eax = MEM32(eax + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007348C; /* je: equal / zero */

loc_00073484: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0007348Cu); RECOMP_ABI_CALL(0x000966A0u, sub_000966A0); /* call 0x000966A0 */

loc_0007348C: ;
    edx = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x00073498u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073492u); } /* indirect call */
    }

loc_00073498: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00073471; /* jne: not equal / not zero */

loc_0007349C: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x430)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD414); /* comiss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007350A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DD414)) */

loc_000734AF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x000734B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000734B3u); } /* indirect call */
    }

loc_000734B9: ;
    ecx = MEM32(eax + 0x8BC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007350A; /* je: equal / zero */

loc_000734C3: ;
    PUSH32(esp, 0x000734C8u); RECOMP_ABI_CALL(0x001624B0u, sub_001624B0); /* call 0x001624B0 */

loc_000734C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007350A; /* je: equal / zero */

loc_000734CC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x000734D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000734D0u); } /* indirect call */
    }

loc_000734D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007350A; /* je: equal / zero */

loc_000734DA: ;
    ecx = MEM32(edi + 0x424);
    MEM32(eax + 0x424) = ecx;
    edx = MEM32(edi + 0x428);
    MEM32(eax + 0x428) = edx;
    ecx = MEM32(edi + 0x42C);
    MEM32(eax + 0x42C) = ecx;
    edx = MEM32(edi + 0x430);
    MEM32(eax + 0x430) = edx;

loc_0007350A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x00073514u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007350Eu); } /* indirect call */
    }

loc_00073514: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0007351Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073518u); } /* indirect call */
    }

loc_0007351B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007352D; /* je: equal / zero */

loc_0007351F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x244); PUSH32(esp, 0x00073529u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073523u); } /* indirect call */
    }

loc_00073529: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007355B; /* je: equal / zero */

loc_0007352D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x00073539u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073533u); } /* indirect call */
    }

loc_00073539: ;
    ecx = eax;
    PUSH32(esp, 0x00073540u); RECOMP_ABI_CALL(0x00165E10u, sub_00165E10); /* call 0x00165E10 */

loc_00073540: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x0007354Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073544u); } /* indirect call */
    }

loc_0007354A: ;
    ecx = eax;
    PUSH32(esp, 0x00073551u); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_00073551: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x284); PUSH32(esp, 0x0007355Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073555u); } /* indirect call */
    }

loc_0007355B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00073570
 * Original: 0x00073570 - 0x00073975 (1029 bytes, 254 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073570(void)
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

loc_00073570: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2418FB);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xE0);
    ebx = MEM32(ebp);
    eax = MEM32(ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fa != 0)) goto loc_00073953; /* jne: not equal / not zero */

loc_000735A3: ;
    eax = MEM32(ebp + 0x1C);
    ecx = eax;
    PUSH32(esp, ecx);
    ecx = 0x323338;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000735B7u); RECOMP_ABI_CALL(0x00095EE0u, sub_00095EE0); /* call 0x00095EE0 */

loc_000735B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073953; /* je: equal / zero */

loc_000735BF: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_000735DA; /* jne: not equal / not zero */

loc_000735CB: ;
    edx = MEM32(edi + 8);
    eax = MEM32(ebx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000738F5; /* je: equal / zero */

loc_000735DA: ;
    PUSH32(esp, edi);
    ecx = 0x30D38C;
    PUSH32(esp, 0x000735E5u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000735E5: ;
    ebp = eax;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x000735F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000735ECu); } /* indirect call */
    }

loc_000735F2: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(edi);
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x30;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00073614u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073611u); } /* indirect call */
    }

loc_00073614: ;
    ecx = MEM32(esp + 0xE8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x1C) = eax;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    MEM32(esp + 0x20) = ecx;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x18) = edx;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007394B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00073673: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(0x2E4F70); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007394B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073684: ;
    ecx = ebx;
    PUSH32(esp, 0x0007368Bu); RECOMP_ABI_CALL(0x00097100u, sub_00097100); /* call 0x00097100 */

loc_0007368B: ;
    PUSH32(esp, eax);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x00073696u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00073696: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007394B; /* je: equal / zero */

loc_000736A0: ;
    ecx = edi;
    PUSH32(esp, 0x000736A7u); RECOMP_ABI_CALL(0x000491F0u, sub_000491F0); /* call 0x000491F0 */

loc_000736A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007394B; /* je: equal / zero */

loc_000736AF: ;
    eax = MEM32(edi + 0x768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007394B; /* jne: not equal / not zero */

loc_000736BD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5E4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007394B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_000736D2: ;
    edx = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    eax = MEM32(ebp);
    ecx = esp + 0xA8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000736F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000736F6u); } /* indirect call */
    }

loc_000736F9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3F0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    eax = esp + 0xCC;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00073772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007376Fu); } /* indirect call */
    }

loc_00073772: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x48); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x3C); /* addss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000737C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000737C4u); } /* indirect call */
    }

loc_000737C7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000737DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000737D9u); } /* indirect call */
    }

loc_000737DC: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000737E4u); RECOMP_ABI_CALL(0x00064AE0u, sub_00064AE0); /* call 0x00064AE0 */

loc_000737E4: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073806; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x24)) */

loc_000737FF: ;
    SET_LO8(ebx, 1);
    goto loc_000738A5;

loc_00073806: ;
    edx = MEM32(edi);
    eax = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00073815u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073812u); } /* indirect call */
    }

loc_00073815: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC3F0)); /* movss */
    edx = MEM32(edi);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0xA0;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00073878u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073875u); } /* indirect call */
    }

loc_00073878: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0007388Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007388Au); } /* indirect call */
    }

loc_0007388D: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00073895u); RECOMP_ABI_CALL(0x00064AE0u, sub_00064AE0); /* call 0x00064AE0 */

loc_00073895: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000738A3; /* jbe: below or equal (unsigned <=) */

loc_0007389F: ;
    SET_LO8(ebx, 1);
    goto loc_000738A5;

loc_000738A3: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000738A5: ;
    SET_LO8(eax, MEM8(esi + 0x5F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000738E4; /* jne: not equal / not zero */

loc_000738AF: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000738B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000738B4u); } /* indirect call */
    }

loc_000738B7: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000738C0u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_000738C0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC090)); /* fadd dword ptr [0x2dc090] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E1698)); /* fmul dword ptr [0x2e1698] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC3C4)); /* fadd dword ptr [0x2dc3c4] */
    MEMF(esi + 0x5E8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000738E4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(esi + 0x5F0) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0007394B; /* je: equal / zero */

loc_000738EE: ;
    ebp = MEM32(esp + 0xE8);

loc_000738F5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x58) = 2;
    MEM32(esp + 0x54) = 0x2E41E4;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, 0x3F6D05D1);
    MEM32(esp + 0xE4) = eax;
    PUSH32(esp, 0x40800000);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00073936u); RECOMP_ABI_CALL(0x00065830u, sub_00065830); /* call 0x00065830 */

loc_00073936: ;
    MEM32(esp + 0xE0) = 0xFFFFFFFFu;
    MEM32(esp + 0x54) = 0x2DE974;
    goto loc_00073952;

loc_0007394B: ;
    ebp = MEM32(esp + 0xE8);

loc_00073952: ;
    POP32(esp, edi);

loc_00073953: ;
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0007395Bu); RECOMP_ABI_CALL(0x00069D90u, sub_00069D90); /* call 0x00069D90 */

loc_0007395B: ;
    ecx = MEM32(esp + 0xD4);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00073980
 * Original: 0x00073980 - 0x00073A83 (259 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073980(void)
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

loc_00073980: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241918);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x14) = esi;
    MEM32(edi) = 0x2DE974;
    PUSH32(esp, 0x000739B7u); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_000739B7: ;
    eax = MEM32(ebx + 0x30);
    MEM32(edi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    MEM32(edi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(edi + 0x38) = edx;
    ebx = MEM32(esp + 0x48);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E5160;
    edi = MEM32(ebx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x40) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000739FB; /* je: equal / zero */

loc_000739E0: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000739E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000739E4u); } /* indirect call */
    }

loc_000739E7: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000739FB; /* jne: not equal / not zero */

loc_000739F9: ;
    ebp = edi;

loc_000739FB: ;
    edx = MEM32(ebx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00073A07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073A04u); } /* indirect call */
    }

loc_00073A07: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00073A15u); RECOMP_ABI_CALL(0x00065AE0u, sub_00065AE0); /* call 0x00065AE0 */

loc_00073A15: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi); /* subss */
    ecx = esp + 0x14;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x40) = ebx;
    PUSH32(esp, 0x00073A4Fu); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00073A4F: ;
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00073A5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073A57u); } /* indirect call */
    }

loc_00073A5A: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x44)); /* fsub dword ptr [esi + 0x44] */
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEM8(esi + 0x4C) = 1;
    eax = esi;
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_00073A90
 * Original: 0x00073A90 - 0x00073B36 (166 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00073A90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241938);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x10) = edi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x00073AC4u); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_00073AC4: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    eax = MEM32(esp + 0x20);
    MEM32(edi) = 0x2E5170;
    MEM32(edi + 0x40) = eax;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00073AF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073AEFu); } /* indirect call */
    }

loc_00073AF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00073B20; /* je: equal / zero */

loc_00073AF6: ;
    eax = MEM32(edi + 0x40);
    edx = MEM32(esi);
    ebx = MEM32(eax + 0x40);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00073B03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073B00u); } /* indirect call */
    }

loc_00073B03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00073B20; /* je: equal / zero */

loc_00073B07: ;
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
    { uint32_t _icall_target = MEM32(eax + 0x128); PUSH32(esp, 0x00073B20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073B1Au); } /* indirect call */
    }

loc_00073B20: ;
    ecx = MEM32(esp + 0x10);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00073B40
 * Original: 0x00073B40 - 0x00073D15 (469 bytes, 129 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073B40(void)
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

loc_00073B40: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073B6A; /* je: equal / zero */

loc_00073B51: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00073B58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073B55u); } /* indirect call */
    }

loc_00073B58: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073B6C; /* je: equal / zero */

loc_00073B6A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00073B6C: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00073B79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073B76u); } /* indirect call */
    }

loc_00073B79: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebx;
    edi = eax;
    PUSH32(esp, 0x00073B87u); RECOMP_ABI_CALL(0x00065AE0u, sub_00065AE0); /* call 0x00065AE0 */

loc_00073B87: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00073BC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073BBEu); } /* indirect call */
    }

loc_00073BC1: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DE084); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2DD6C0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073C17; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073C0F: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    goto loc_00073C30;

loc_00073C17: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00073C30; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00073C2A: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00073C30: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00073C41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073C3Bu); } /* indirect call */
    }

loc_00073C41: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00073C48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073C45u); } /* indirect call */
    }

loc_00073C48: ;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00073C9A; /* jbe: below or equal (unsigned <=) */

loc_00073C5A: ;
    eax = MEM32(esi);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00073C66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073C63u); } /* indirect call */
    }

loc_00073C66: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_00073CA3;

loc_00073C9A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */

loc_00073CA3: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073CC6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00073CBF: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm2; /* movaps */

loc_00073CC6: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073CDB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00073CD3: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_00073CF4;

loc_00073CDB: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00073CF4; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073CEE: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_00073CF4: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(ebx + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00073D01u); RECOMP_ABI_CALL(0x00072920u, sub_00072920); /* call 0x00072920 */

loc_00073D01: ;
    eax = MEM32(ebx + 0x40);
    POP32(esp, esi);
    MEM8(eax + 8) = 0;
    eax = 2;
    POP32(esp, ebx);
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
 * sub_00073D20
 * Original: 0x00073D20 - 0x00073DB3 (147 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00073D20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241958);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x10) = esi;
    MEM32(edi) = 0x2DE974;
    PUSH32(esp, 0x00073D56u); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_00073D56: ;
    eax = MEM32(ebx + 0x30);
    MEM32(edi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    MEM32(edi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(edi + 0x38) = edx;
    ecx = MEM32(esp + 0x2C);
    edx = esp + 0x10;
    MEM32(esi) = 0x2E5180;
    MEM32(esi + 0x40) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00073D87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073D84u); } /* indirect call */
    }

loc_00073D87: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00073D90u); RECOMP_ABI_CALL(0x00072080u, sub_00072080); /* call 0x00072080 */

loc_00073D90: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00073DC0
 * Original: 0x00073DC0 - 0x00073DCE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073DC0(void)
{

loc_00073DC0: ;
    MEM32(ecx) = 0x2E400C;
    MEM32(ecx + 4) = 0x2DE974;
    esp += 4; return; /* ret */

}

/**
 * sub_00073DD0
 * Original: 0x00073DD0 - 0x00073ECB (251 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00073DD0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x59C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00073DF5; /* jl: less (signed <) */

loc_00073DE3: ;
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x59C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00073EC6; /* jl: less (signed <) */

loc_00073DF5: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00073E02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073DFFu); } /* indirect call */
    }

loc_00073E02: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 0x40);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00073E12u); RECOMP_ABI_CALL(0x00205330u, sub_00205330); /* call 0x00205330 */

loc_00073E12: ;
    edx = MEM32(esi + 0xC);
    MEM32(edx + 0x59C) = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x59C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0x00073E2Du); RECOMP_ABI_CALL(0x00204DB0u, sub_00204DB0); /* call 0x00204DB0 */

loc_00073E2D: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(esi + 0xC);
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
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00073E7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073E7Bu); } /* indirect call */
    }

loc_00073E7E: ;
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
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00073EC6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00073EAE: ;
    ecx = esi;
    PUSH32(esp, 0x00073EB5u); RECOMP_ABI_CALL(0x00072450u, sub_00072450); /* call 0x00072450 */

loc_00073EB5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00073EC6; /* jne: not equal / not zero */

loc_00073EB9: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00073EC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073EC0u); } /* indirect call */
    }

loc_00073EC6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00073ED0
 * Original: 0x00073ED0 - 0x00073F15 (69 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00073ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00073ED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073EF8; /* je: equal / zero */

loc_00073EDB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00073EE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073EDFu); } /* indirect call */
    }

loc_00073EE2: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00073EF8; /* jne: not equal / not zero */

loc_00073EF4: ;
    ecx = esi;
    goto loc_00073EFA;

loc_00073EF8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00073EFA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00073F06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073F00u); } /* indirect call */
    }

loc_00073F06: ;
    PUSH32(esp, 0x3F800000);
    ecx = edi;
    PUSH32(esp, 0x00073F12u); RECOMP_ABI_CALL(0x000729A0u, sub_000729A0); /* call 0x000729A0 */

loc_00073F12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00073F20
 * Original: 0x00073F20 - 0x000741BF (671 bytes, 176 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00073F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00073F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24197B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x188) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x188;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00073F70; /* je: equal / zero */

loc_00073F57: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00073F5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073F5Bu); } /* indirect call */
    }

loc_00073F5E: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00073F72; /* je: equal / zero */

loc_00073F70: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00073F72: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x00073F7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00073F76u); } /* indirect call */
    }

loc_00073F7C: ;
    edi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00073F8Au); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_00073F8A: ;
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 4); /* addss */
    ecx = edi + 0x2C;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ecx + 0x14);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E4060); /* mulss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x4C) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC394); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    eax = esp + 0x54;
    MEM32(esp + 0x48) = edx;
    edx = MEM32(ebx);
    xmm2 = xmm1; /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00074042u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007403Fu); } /* indirect call */
    }

loc_00074042: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esi + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x28); /* subss */
    if ((_fca > _fcb)) goto loc_00074088; /* ja: above (unsigned >) (xmm3.f[0] vs xmm4.f[0]) */

loc_00074082: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_00074088: ;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x3C;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x68;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000740D6u); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_000740D6: ;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x11);
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000740EAu); RECOMP_ABI_CALL(0x00018B00u, sub_00018B00); /* call 0x00018B00 */

loc_000740EA: ;
    ecx = MEM32(esp + 0x74);
    edi = MEM32(edi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x19C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00074103; /* je: equal / zero */

loc_000740FE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00074103u); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_00074103: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x74) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00074112; /* je: equal / zero */

loc_0007410B: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00074112u); RECOMP_ABI_CALL(0x0012BE20u, sub_0012BE20); /* call 0x0012BE20 */

loc_00074112: ;
    edx = esp + 0x70;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007411Eu); RECOMP_ABI_CALL(0x0012CF60u, sub_0012CF60); /* call 0x0012CF60 */

loc_0007411E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00074190; /* jle: less or equal (signed <=) */

loc_00074125: ;
    esi = MEM32(0x378EFC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x18) = 0x378EE0;
    if (CMP_EQ(_fa, _fb)) goto loc_00074160; /* je: equal / zero */

loc_00074137: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007413Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007413Bu); } /* indirect call */
    }

loc_0007413E: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00074160; /* jne: not equal / not zero */

loc_00074150: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0007415Au); RECOMP_ABI_CALL(0x00067E10u, sub_00067E10); /* call 0x00067E10 */

loc_0007415A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00074190; /* jne: not equal / not zero */

loc_0007415E: ;
    goto loc_0007418C;

loc_00074160: ;
    edx = MEM32(0x378EF0);
    ecx = MEM32(0x378EEC);
    eax = MEM32(0x378EF4);
    MEM32(esp + 0x30) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD440); /* comiss */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x34) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074190; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DD440)) */

loc_0007418C: ;
    MEM32(esp + 0x18) = ebx;

loc_00074190: ;
    ecx = esp + 0x70;
    MEM32(esp + 0x19C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000741A4u); RECOMP_ABI_CALL(0x00018DF0u, sub_00018DF0); /* call 0x00018DF0 */

loc_000741A4: ;
    ecx = MEM32(esp + 0x194);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000741C0
 * Original: 0x000741C0 - 0x00074A61 (2209 bytes, 552 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000741C0(void)
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

loc_000741C0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x84));
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000741EB; /* je: equal / zero */

loc_000741D2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000741D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000741D6u); } /* indirect call */
    }

loc_000741D9: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000741ED; /* je: equal / zero */

loc_000741EB: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000741ED: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x290); PUSH32(esp, 0x000741F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000741F1u); } /* indirect call */
    }

loc_000741F7: ;
    ecx = esp + 0x6C;
    ebp = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00074205u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074202u); } /* indirect call */
    }

loc_00074205: ;
    eax = MEM32(esp + 0x94);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x6C); /* subss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x70); /* subss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x74); /* subss */
    ecx = esp + 0x3C;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00074247u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00074247: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000742A3; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00074292: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x84)) >> 32) & 1);
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

loc_000742A3: ;
    SET_LO8(eax, MEM8(esi + 0x5CE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000742CA; /* je: equal / zero */

loc_000742AD: ;
    ecx = esi;
    PUSH32(esp, 0x000742B4u); RECOMP_ABI_CALL(0x00072710u, sub_00072710); /* call 0x00072710 */

loc_000742B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000742CA; /* je: equal / zero */

loc_000742B8: ;
    ecx = esi;
    PUSH32(esp, 0x000742BFu); RECOMP_ABI_CALL(0x00072810u, sub_00072810); /* call 0x00072810 */

loc_000742BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000742CA; /* je: equal / zero */

loc_000742C3: ;
    eax = 1;
    goto loc_000742CC;

loc_000742CA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000742CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x5CE) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000742E4; /* je: equal / zero */

loc_000742D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x84)) >> 32) & 1);
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

loc_000742E4: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000742F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000742EEu); } /* indirect call */
    }

loc_000742F1: ;
    edx = MEM32(edi);
    eax = esp + 0x7C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000742FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000742FAu); } /* indirect call */
    }

loc_000742FD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x7C); /* mulss */
    edx = MEM32(edi);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = edi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00074329u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074326u); } /* indirect call */
    }

loc_00074329: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp;
    PUSH32(esp, 0x00074334u); RECOMP_ABI_CALL(0x00132A90u, sub_00132A90); /* call 0x00132A90 */

loc_00074334: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM8(esp + 0xA0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xA0), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0007468B; /* je: equal / zero */

loc_00074346: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x413FA0); /* subss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x5C8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(0x2DC3C4)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00074385; /* ja: above (unsigned >) */

loc_00074378: ;
    _fa = (uint32_t)(MEM8(0x321DEC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x321DEC), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00074649; /* jne: not equal / not zero */

loc_00074385: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074649; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00074391: ;
    eax = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000743C4u); RECOMP_ABI_CALL(0x001F8800u, sub_001F8800); /* call 0x001F8800 */

loc_000743C4: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000743D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000743D0u); } /* indirect call */
    }

loc_000743D3: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC34C); /* mulss */
    SET_LO8(eax, MEM8(esi + 0x5CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC090); /* addss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00074412; /* je: equal / zero */

loc_0007440A: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC880); /* addss */

loc_00074412: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074425; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x2DC098)) */

loc_00074421: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00074425: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    eax = esp + 0x64;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x0007445Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074458u); } /* indirect call */
    }

loc_0007445E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x5CC) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00074639; /* je: equal / zero */

loc_00074473: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    edx = MEM32(edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    eax = esp + 0x88;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000744B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000744B5u); } /* indirect call */
    }

loc_000744B8: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x60); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x5C); /* addss */
    xmm6 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074540; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x2DC098)) */

loc_000744FC: ;
    xmm5 = XMM_SCALAR(MEMF(0x2DC3CC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */

loc_00074540: ;
    ebx = MEM32(ebx + 0x1C);
    PUSH32(esp, ebx);
    ecx = 0x30D350;
    PUSH32(esp, 0x0007454Eu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0007454E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007456B; /* je: equal / zero */

loc_00074552: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x0007455Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074556u); } /* indirect call */
    }

loc_0007455C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007456B; /* je: equal / zero */

loc_00074560: ;
    ecx = eax;
    PUSH32(esp, 0x00074567u); RECOMP_ABI_CALL(0x00012420u, sub_00012420); /* call 0x00012420 */

loc_00074567: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0007457C; /* jne: not equal / not zero */

loc_0007456B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E4F74)); /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */

loc_0007457C: ;
    PUSH32(esp, 0x3FF1463B);
    PUSH32(esp, 0x40800000);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00074592u); RECOMP_ABI_CALL(0x000647C0u, sub_000647C0); /* call 0x000647C0 */

loc_00074592: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00074617; /* jbe: below or equal (unsigned <=) */

loc_000745A6: ;
    ecx = esp + 0x28;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000745B5u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_000745B5: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000745D0u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_000745D0: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x2DE084)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_000745F1; /* ja: above (unsigned >) */

loc_000745E9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */

loc_000745F1: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0007460F; /* jbe: below or equal (unsigned <=) */

loc_00074608: ;
    eax = 1;
    goto loc_00074611;

loc_0007460F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00074611: ;
    MEM8(esi + 0x5CD) = LO8(eax);

loc_00074617: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5C8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DD418); /* mulss */
    MEMF(esi + 0x5C8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x5C4) = xmm0.f[0]; /* movss */
    goto loc_0007464F;

loc_00074639: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0x5C4) = xmm0.f[0]; /* movss */
    goto loc_0007464F;

loc_00074649: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0007464F: ;
    SET_LO8(eax, MEM8(esi + 0x5CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074691; /* je: equal / zero */

loc_00074659: ;
    SET_LO8(eax, MEM8(esi + 0x5CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074681; /* je: equal / zero */

loc_00074663: ;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    PUSH32(esp, 0x0007466Fu); RECOMP_ABI_CALL(0x000729A0u, sub_000729A0); /* call 0x000729A0 */

loc_0007466F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x84)) >> 32) & 1);
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

loc_00074681: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C4)); /* movss */
    goto loc_00074691;

loc_0007468B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_00074691: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000746A2u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_000746A2: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(esp + 0x14);
    fp_top() = fabs(fp_top()); /* fabs */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC880)); /* fadd dword ptr [0x2dc880] */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC880) / fp_top()); /* fdivr dword ptr [0x2dc880] */
    MEM32(esp + 0x18) = ecx;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000746E7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000746DB: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_000746E7: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC3E0)); /* fadd dword ptr [0x2dc3e0] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    if (recomp_fp_trig_in_range(fp_top())) { double _a = fp_top(); fp_top() = recomp_x87_tan(_a); fp_push(isfinite(_a) ? 1.0 : _a - _a); } /* fptan */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC8DC)); /* fmul dword ptr [0x2dc8dc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00074735; /* jbe: below or equal (unsigned <=) */

loc_00074731: ;
    SET_LO8(ebx, 1);
    goto loc_00074737;

loc_00074735: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00074737: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edi = 0x100;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074756; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00074749: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0007475E; /* jne: not equal / not zero */

loc_0007474D: ;
    ecx = esi;
    PUSH32(esp, 0x00074754u); RECOMP_ABI_CALL(0x00072710u, sub_00072710); /* call 0x00072710 */

loc_00074754: ;
    SET_LO8(ebx, LO8(eax));

loc_00074756: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074829; /* je: equal / zero */

loc_0007475E: ;
    ecx = esi;
    PUSH32(esp, 0x00074765u); RECOMP_ABI_CALL(0x00072810u, sub_00072810); /* call 0x00072810 */

loc_00074765: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074790; /* je: equal / zero */

loc_00074769: ;
    ecx = esi;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00074772u); RECOMP_ABI_CALL(0x00072710u, sub_00072710); /* call 0x00072710 */

loc_00074772: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074829; /* je: equal / zero */

loc_0007477A: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM8(esi + 0x5CE) = 1;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x84)) >> 32) & 1);
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

loc_00074790: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074829; /* je: equal / zero */

loc_00074798: ;
    _fa = (uint32_t)(MEM32(esp + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0xA0), edi (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000747EE; /* je: equal / zero */

loc_000747A1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E2C54)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000747EE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x24)) */

loc_000747B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E2C48); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000747EE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E2C48)) */

loc_000747BF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000747DE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_000747CE: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2E4F74); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0007482F;

loc_000747DE: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E4F74); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0007482F;

loc_000747EE: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E5198)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074812; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00074801: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0007482F;

loc_00074812: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E5194); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00074829; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E5194)) */

loc_0007481B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0007482F;

loc_00074829: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_0007482F: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E1644)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007484B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x20)) */

loc_0007483E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_0007484B: ;
    _fa = (uint32_t)(MEM32(esp + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0xA0), edi (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_00074882; /* je: equal / zero */

loc_00074862: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_00074882: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E5190)); /* fadd dword ptr [0x2e5190] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2E5190) / fp_top()); /* fdivr dword ptr [0x2e5190] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC874)); /* fmul dword ptr [0x2dc874] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC090)); /* fadd dword ptr [0x2dc090] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000748C0; /* jbe: below or equal (unsigned <=) */

loc_000748B1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */

loc_000748C0: ;
    SET_LO8(eax, MEM8(esi + 0x5CC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000748E9; /* je: equal / zero */

loc_000748CA: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8AC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000748E9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000748E0: ;
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */

loc_000748E9: ;
    ecx = esi;
    PUSH32(esp, 0x000748F0u); RECOMP_ABI_CALL(0x00072410u, sub_00072410); /* call 0x00072410 */

loc_000748F0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00074918; /* jbe: below or equal (unsigned <=) */

loc_00074909: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00074918: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007492B; /* je: equal / zero */

loc_0007491C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0007492B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x00074935u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007492Fu); } /* indirect call */
    }

loc_00074935: ;
    eax = MEM32(esi);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x00074943u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007493Du); } /* indirect call */
    }

loc_00074943: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEM8(esp + 0x24) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E42A8)); /* fadd dword ptr [0x2e42a8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DE084)); /* fmul dword ptr [0x2de084] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000749BA; /* jbe: below or equal (unsigned <=) */

loc_00074986: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000749A6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00074999: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000749AC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000749A6: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_000749AC: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000749B8u); RECOMP_ABI_CALL(0x00072920u, sub_00072920); /* call 0x00072920 */

loc_000749B8: ;
    goto loc_00074A37;

loc_000749BA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x000749C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000749BEu); } /* indirect call */
    }

loc_000749C4: ;
    fp_push(MEMF(0x2DC340)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000749E6; /* jbe: below or equal (unsigned <=) */

loc_000749D2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC094); /* comiss */
    MEM8(esp + 0x24) = 1;
    if ((_fca > _fcb)) goto loc_000749EB; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC094)) */

loc_000749E6: ;
    MEM8(esp + 0x24) = 0;

loc_000749EB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD414)); /* fmul dword ptr [0x2dd414] */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00074A0C; /* jbe: below or equal (unsigned <=) */

loc_00074A07: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_00074A25;

loc_00074A0C: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00074A2B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00074A25: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00074A2B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00074A37u); RECOMP_ABI_CALL(0x000729A0u, sub_000729A0); /* call 0x000729A0 */

loc_00074A37: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00074A43u); RECOMP_ABI_CALL(0x00132E20u, sub_00132E20); /* call 0x00132E20 */

loc_00074A43: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00074A4Fu); RECOMP_ABI_CALL(0x00072A00u, sub_00072A00); /* call 0x00072A00 */

loc_00074A4F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x84)) >> 32) & 1);
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00074A70
 * Original: 0x00074A70 - 0x00074AC6 (86 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x00074A81u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00074A81: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00074A91; /* je: equal / zero */

loc_00074A88: ;
    ecx = eax;
    PUSH32(esp, 0x00074A8Fu); RECOMP_ABI_CALL(0x000962B0u, sub_000962B0); /* call 0x000962B0 */

loc_00074A8F: ;
    goto loc_00074A93;

loc_00074A91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00074A93: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x58;
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
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x64;
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
 * sub_00074AD0
 * Original: 0x00074AD0 - 0x00074AFD (45 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00074AD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43808000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00074AF0u); RECOMP_ABI_CALL(0x000741C0u, sub_000741C0); /* call 0x000741C0 */

loc_00074AF0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00074B00
 * Original: 0x00074B00 - 0x00074CBD (445 bytes, 127 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00074B00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x241998);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00074B2Du); RECOMP_ABI_CALL(0x0006BA70u, sub_0006BA70); /* call 0x0006BA70 */

loc_00074B2D: ;
    eax = MEM32(esi + 0x264);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00074B81; /* jne: not equal / not zero */

loc_00074B3D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    MEM32(esp + 0x14) = 2;
    MEM32(esp + 0x10) = 0x2E41E4;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x3D4CCCCD);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi + 0x54;
    MEM32(esp + 0x50) = ebp;
    PUSH32(esp, 0x00074B75u); RECOMP_ABI_CALL(0x00065D60u, sub_00065D60); /* call 0x00065D60 */

loc_00074B75: ;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x10) = 0x2DE974;

loc_00074B81: ;
    MEM32(esi + 0x40) = ebp;
    MEM32(esi + 0x59C) = ebx;
    MEM32(esi + 0x5A0) = 1;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x84874D36u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00074BA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074B9Du); } /* indirect call */
    }

loc_00074BA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00074BEB; /* je: equal / zero */

loc_00074BA4: ;
    ecx = MEM32(0x371DD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00074BB0u); RECOMP_ABI_CALL(0x001246E0u, sub_001246E0); /* call 0x001246E0 */

loc_00074BB0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00074BEB; /* je: equal / zero */

loc_00074BB6: ;
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x00074BC1u); RECOMP_ABI_CALL(0x00169D90u, sub_00169D90); /* call 0x00169D90 */

loc_00074BC1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00074BE0; /* je: equal / zero */

loc_00074BC5: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x00074BD3u); RECOMP_ABI_CALL(0x00169E10u, sub_00169E10); /* call 0x00169E10 */

loc_00074BD3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x120); PUSH32(esp, 0x00074BDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074BD8u); } /* indirect call */
    }

loc_00074BDE: ;
    goto loc_00074BEB;

loc_00074BE0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00074BEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074BE5u); } /* indirect call */
    }

loc_00074BEB: ;
    ebp = MEM32(esi + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00074C0C; /* je: equal / zero */

loc_00074BF2: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00074BFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074BF7u); } /* indirect call */
    }

loc_00074BFA: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00074C0E; /* je: equal / zero */

loc_00074C0C: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00074C0E: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    MEM32(esp + 0x58) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x00074C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074C1Du); } /* indirect call */
    }

loc_00074C23: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00074C8C; /* je: equal / zero */

loc_00074C29: ;
    /* nop */

loc_00074C30: ;
    _fa = (uint32_t)(MEM32(edi + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2D8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00074C71; /* je: equal / zero */

loc_00074C39: ;
    ecx = 0x323498;
    PUSH32(esp, 0x00074C43u); RECOMP_ABI_CALL(0x00074A70u, sub_00074A70); /* call 0x00074A70 */

loc_00074C43: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00074C6B; /* je: equal / zero */

loc_00074C49: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00074C51u); RECOMP_ABI_CALL(0x000962D0u, sub_000962D0); /* call 0x000962D0 */

loc_00074C51: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0A24)); /* movss */
    MEMF(ebx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E519C)); /* movss */
    MEMF(ebx + 0x28) = xmm0.f[0]; /* movss */

loc_00074C6B: ;
    MEM32(edi + 0x28C) = ebx;

loc_00074C71: ;
    eax = MEM32(esp + 0x54);
    edx = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x58) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x00074C86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074C80u); } /* indirect call */
    }

loc_00074C86: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00074C30; /* jne: not equal / not zero */

loc_00074C8C: ;
    _fa = (uint32_t)(MEM32(esi + 0x4A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4A4), 7 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_00074CA0; /* jne: not equal / not zero */

loc_00074C98: ;
    MEMF(esi + 0x300) = xmm0.f[0]; /* movss */

loc_00074CA0: ;
    ecx = MEM32(esp + 0x40);
    POP32(esp, edi);
    MEMF(esi + 0x5A4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00074CC0
 * Original: 0x00074CC0 - 0x00074EA6 (486 bytes, 153 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074CC0(void)
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

loc_00074CC0: ;
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
    if (CMP_A(_fa, _fb)) goto loc_00074D8D; /* ja: above (unsigned >) */

loc_00074CD5: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x74D98); /* switch: 10 entries, 9 targets */
    if (_jt == 0x00074CDCu) goto loc_00074CDC;
    if (_jt == 0x00074CF6u) goto loc_00074CF6;
    if (_jt == 0x00074D0Bu) goto loc_00074D0B;
    if (_jt == 0x00074D20u) goto loc_00074D20;
    if (_jt == 0x00074D35u) goto loc_00074D35;
    if (_jt == 0x00074D4Au) goto loc_00074D4A;
    if (_jt == 0x00074D5Fu) goto loc_00074D5F;
    if (_jt == 0x00074D74u) goto loc_00074D74;
    if (_jt == 0x00074D8Du) goto loc_00074D8D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00074CDC: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074CF1; /* je: equal / zero */

loc_00074CE4: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00073980(); return; /* tail jmp 0x00073980 */

loc_00074CF1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00074CF6: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074CF1; /* je: equal / zero */

loc_00074CFE: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00073A90(); return; /* tail jmp 0x00073A90 */

loc_00074D0B: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074CF1; /* je: equal / zero */

loc_00074D13: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000731C0(); return; /* tail jmp 0x000731C0 */

loc_00074D20: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074CF1; /* je: equal / zero */

loc_00074D28: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00073D20(); return; /* tail jmp 0x00073D20 */

loc_00074D35: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074CF1; /* je: equal / zero */

loc_00074D3D: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00073210(); return; /* tail jmp 0x00073210 */

loc_00074D4A: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074CF1; /* je: equal / zero */

loc_00074D52: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00073210(); return; /* tail jmp 0x00073210 */

loc_00074D5F: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074CF1; /* je: equal / zero */

loc_00074D67: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00093510(); return; /* tail jmp 0x00093510 */

loc_00074D74: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074CF1; /* je: equal / zero */

loc_00074D80: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00073260(); return; /* tail jmp 0x00073260 */

loc_00074D8D: ;
    MEM32(esp + 4) = edx;
    ecx = eax;
    g_seh_ebp = ebp; sub_00067990(); return; /* tail jmp 0x00067990 */

    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(edi + eax)); /* fmul qword ptr [edi + eax] */
    _fa = (uint32_t)(MEM8(edi + eax)) & 0xFFu; _fb = (uint32_t)(0xFFFFFF8Du) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + eax), 0xFFFFFF8Du (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x3500074D)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebp + 0x3500074D) = MEM8(ebp + 0x3500074D) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x3500074D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x4D)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + 0x4D) = MEM8(edx + 0x4D) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x4D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0x4D)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edi + 0x4D) = MEM8(edi + 0x4D) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0x4D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + ecx * 2 + 7)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + ecx * 2 + 7) = MEM8(ebp + ecx * 2 + 7) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebp + ecx * 2 + 7)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + -1957293844)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx + -1957293844) = MEM8(ebx + -1957293844) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + -1957293844)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("int1", 0x00074DC5u); /* TODO: int1 */
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = esi + 4;
    if (TEST_Z(_fa, _fb)) goto loc_00074DEA; /* je: equal / zero */

loc_00074DD1: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x00074DD9u); RECOMP_ABI_CALL(0x00072410u, sub_00072410); /* call 0x00072410 */

loc_00074DD9: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00074DE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074DE1u); } /* indirect call */
    }

loc_00074DE4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    goto loc_00074DFB;

loc_00074DEA: ;
    PUSH32(esp, 0x00074DEFu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_00074DEF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DBED0)); /* fmul dword ptr [0x2dbed0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E3F7C)); /* fadd dword ptr [0x2e3f7c] */

loc_00074DFB: ;
    edx = MEM32(edi);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00074E06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074E03u); } /* indirect call */
    }

loc_00074E06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_00074E47; /* je: equal / zero */

loc_00074E0D: ;
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
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00074E22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074E1Cu); } /* indirect call */
    }

loc_00074E22: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x00074E32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074E2Cu); } /* indirect call */
    }

loc_00074E32: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00074E3Fu); RECOMP_ABI_CALL(0x000640E0u, sub_000640E0); /* call 0x000640E0 */

loc_00074E3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00074E47: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEM8(ecx + 8) = 0;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00074E69; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00074E63: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_00074E69: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00074E75u); RECOMP_ABI_CALL(0x00065AE0u, sub_00065AE0); /* call 0x00065AE0 */

loc_00074E75: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2101);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00074E94u); RECOMP_ABI_CALL(0x000741C0u, sub_000741C0); /* call 0x000741C0 */

loc_00074E94: ;
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
 * sub_00074DC0
 * Original: 0x00074DC0 - 0x00074EA6 (230 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074DC0(void)
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

loc_00074DC0: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_00074DEA; /* je: equal / zero */

loc_00074DD1: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x00074DD9u); RECOMP_ABI_CALL(0x00072410u, sub_00072410); /* call 0x00072410 */

loc_00074DD9: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00074DE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074DE1u); } /* indirect call */
    }

loc_00074DE4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    goto loc_00074DFB;

loc_00074DEA: ;
    PUSH32(esp, 0x00074DEFu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_00074DEF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DBED0)); /* fmul dword ptr [0x2dbed0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E3F7C)); /* fadd dword ptr [0x2e3f7c] */

loc_00074DFB: ;
    edx = MEM32(edi);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00074E06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074E03u); } /* indirect call */
    }

loc_00074E06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_00074E47; /* je: equal / zero */

loc_00074E0D: ;
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
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00074E22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074E1Cu); } /* indirect call */
    }

loc_00074E22: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x00074E32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074E2Cu); } /* indirect call */
    }

loc_00074E32: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00074E3Fu); RECOMP_ABI_CALL(0x000640E0u, sub_000640E0); /* call 0x000640E0 */

loc_00074E3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00074E47: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEM8(ecx + 8) = 0;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00074E69; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00074E63: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_00074E69: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00074E75u); RECOMP_ABI_CALL(0x00065AE0u, sub_00065AE0); /* call 0x00065AE0 */

loc_00074E75: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2101);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00074E94u); RECOMP_ABI_CALL(0x000741C0u, sub_000741C0); /* call 0x000741C0 */

loc_00074E94: ;
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
 * sub_00074EB0
 * Original: 0x00074EB0 - 0x00074FBB (267 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074EB0(void)
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

loc_00074EB0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00074EC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074EC1u); } /* indirect call */
    }

loc_00074EC4: ;
    eax = MEM32(esi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00074ED0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074ECDu); } /* indirect call */
    }

loc_00074ED0: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    edx = MEM32(esi);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E51A0)); /* fadd dword ptr [0x2e51a0] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC880) / fp_top()); /* fdivr dword ptr [0x2dc880] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x00074F76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074F70u); } /* indirect call */
    }

loc_00074F76: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3E0)); /* fmul dword ptr [0x2dc3e0] */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC884)); /* fadd dword ptr [0x2dc884] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00074F8Du); RECOMP_ABI_CALL(0x00072410u, sub_00072410); /* call 0x00072410 */

loc_00074F8D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    PUSH32(esp, 0x3F860A92);
    PUSH32(esp, 0);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0xC;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2001);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00074FB4u); RECOMP_ABI_CALL(0x000741C0u, sub_000741C0); /* call 0x000741C0 */

loc_00074FB4: ;
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
 * sub_00074FC0
 * Original: 0x00074FC0 - 0x0007506C (172 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00074FC0(void)
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

loc_00074FC0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00074FD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074FD0u); } /* indirect call */
    }

loc_00074FD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00074FE7; /* je: equal / zero */

loc_00074FD7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00074FE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00074FDBu); } /* indirect call */
    }

loc_00074FE1: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00074FF5; /* jne: not equal / not zero */

loc_00074FE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00074FF5: ;
    eax = MEM32(esi + 0x40);
    MEM8(eax + 8) = 0;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    ecx = MEM32(esi + 0x40);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0007500Fu); RECOMP_ABI_CALL(0x00072410u, sub_00072410); /* call 0x00072410 */

loc_0007500F: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC38C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0007502D; /* ja: above (unsigned >) */

loc_00075025: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC38C)); /* movss */

loc_0007502D: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0007503Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007503Cu); } /* indirect call */
    }

loc_0007503F: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2101);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007505Eu); RECOMP_ABI_CALL(0x000741C0u, sub_000741C0); /* call 0x000741C0 */

loc_0007505E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
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
 * sub_00075070
 * Original: 0x00075070 - 0x0007513D (205 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075070(void)
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

loc_00075070: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0007508D; /* jne: not equal / not zero */

loc_00075080: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00075088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075082u); } /* indirect call */
    }

loc_00075088: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0007508D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00075095u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007508Fu); } /* indirect call */
    }

loc_00075095: ;
    PUSH32(esp, 0x0007509Au); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0007509A: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC3E4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000750BA; /* jbe: below or equal (unsigned <=) */

loc_000750B0: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DBED0); /* mulss */
    goto loc_000750C2;

loc_000750BA: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC8AC); /* mulss */

loc_000750C2: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E3F7C); /* addss */
    ecx = esi;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000750D6u); RECOMP_ABI_CALL(0x00073DD0u, sub_00073DD0); /* call 0x00073DD0 */

loc_000750D6: ;
    PUSH32(esp, 0x000750DBu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_000750DB: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xC);
    edx = esp + 8;
    MEM8(esi + 0x18) = 0;
    MEM8(esi + 0x19) = 0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000750F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000750F0u); } /* indirect call */
    }

loc_000750F3: ;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x2DC38C)); /* movss */
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x24) = eax;
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8B0)); /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E0A24)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
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
 * sub_00075140
 * Original: 0x00075140 - 0x00075481 (833 bytes, 228 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075140(void)
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

loc_00075140: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x3C));
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0007515E; /* jne: not equal / not zero */

loc_00075150: ;
    MEM32(eax + 0x1C) = 4;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x3C)) >> 32) & 1);
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0007515E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007517F; /* je: equal / zero */

loc_00075166: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007516Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007516Au); } /* indirect call */
    }

loc_0007516D: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00075181; /* je: equal / zero */

loc_0007517F: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00075181: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00075188u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075185u); } /* indirect call */
    }

loc_00075188: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC34C)); /* fadd dword ptr [0x2dc34c] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x34)); /* fsub dword ptr [esi + 0x34] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC34C)); /* fmul dword ptr [0x2dc34c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000751C7; /* jbe: below or equal (unsigned <=) */

loc_000751BF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    goto loc_000751E2;

loc_000751C7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    if ((_fca > _fcb)) goto loc_000751DD; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000751D7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_000751DD: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x34); /* addss */

loc_000751E2: ;
    ecx = esi;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000751EEu); RECOMP_ABI_CALL(0x00073DD0u, sub_00073DD0); /* call 0x00073DD0 */

loc_000751EE: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x59C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0x00075200u); RECOMP_ABI_CALL(0x00204DB0u, sub_00204DB0); /* call 0x00204DB0 */

loc_00075200: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x34) = eax;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0007536F; /* jne: not equal / not zero */

loc_0007522B: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00075238u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075235u); } /* indirect call */
    }

loc_00075238: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esi + 0x34);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00075268u); RECOMP_ABI_CALL(0x00066D50u, sub_00066D50); /* call 0x00066D50 */

loc_00075268: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0007536E; /* jne: not equal / not zero */

loc_00075270: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = esi;
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00075297u); RECOMP_ABI_CALL(0x00072060u, sub_00072060); /* call 0x00072060 */

loc_00075297: ;
    ecx = esi;
    PUSH32(esp, 0x0007529Eu); RECOMP_ABI_CALL(0x00072450u, sub_00072450); /* call 0x00072450 */

loc_0007529E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x19) = LO8(eax);
    if ((_fa != 0)) goto loc_0007536E; /* jne: not equal / not zero */

loc_000752AD: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x59C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0x000752BFu); RECOMP_ABI_CALL(0x00204DB0u, sub_00204DB0); /* call 0x00204DB0 */

loc_000752BF: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 8); /* subss */
    eax = esp + 0x3C;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    edx = MEM32(ebx);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0007531Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075317u); } /* indirect call */
    }

loc_0007531A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007536E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007534F: ;
    edx = MEM32(esi + 0x34);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00075366u); RECOMP_ABI_CALL(0x00066D50u, sub_00066D50); /* call 0x00066D50 */

loc_00075366: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00075270; /* je: equal / zero */

loc_0007536E: ;
    POP32(esp, edi);

loc_0007536F: ;
    SET_LO8(ecx, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 1;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00075381; /* je: equal / zero */

loc_0007537C: ;
    eax = 0x101;

loc_00075381: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 8) = edx;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, edx);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000753B3u); RECOMP_ABI_CALL(0x000741C0u, sub_000741C0); /* call 0x000741C0 */

loc_000753B3: ;
    ecx = MEM32(esi + 0xC);
    SET_LO8(edx, MEM8(ecx + 0x5CC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000753D3; /* je: equal / zero */

loc_000753C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000753D3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x34)) */

loc_000753CE: ;
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */

loc_000753D3: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007543C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x2C)) */

loc_000753DC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2E51A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075413; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000753F9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0A24)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */

loc_00075406: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8B0)); /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */

loc_00075413: ;
    SET_LO8(edx, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00075435; /* je: equal / zero */

loc_0007541A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00075435; /* jne: not equal / not zero */

loc_0007541F: ;
    MEM32(ecx + 0x1C) = 3;
    esi = MEM32(esi + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00075435u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007542Fu); } /* indirect call */
    }

loc_00075435: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x3C)) >> 32) & 1);
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0007543C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00075406; /* jne: not equal / not zero */

loc_00075441: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075465; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075456: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E4F74)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    goto loc_00075413;

loc_00075465: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC8AC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075413; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075472: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E2C40)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    goto loc_00075413;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00075490
 * Original: 0x00075490 - 0x000755AB (283 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075490(void)
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

loc_00075490: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000755A4; /* je: equal / zero */

loc_000754A1: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000755A3; /* je: equal / zero */

loc_000754AD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000754B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000754B1u); } /* indirect call */
    }

loc_000754B4: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000755A3; /* jne: not equal / not zero */

loc_000754CA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000754D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000754CEu); } /* indirect call */
    }

loc_000754D1: ;
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
    PUSH32(esp, 0x000754FDu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000754FD: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = MEM32(esi);
    xmm5 = xmm0; /* movaps */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm1; /* movaps */
    ecx = esp + 0x34;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
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
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0007554Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007554Bu); } /* indirect call */
    }

loc_0007554E: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, 0x40400000);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x2000);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    PUSH32(esp, 0);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000755A3u); RECOMP_ABI_CALL(0x000741C0u, sub_000741C0); /* call 0x000741C0 */

loc_000755A3: ;
    POP32(esp, esi);

loc_000755A4: ;
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
 * sub_000755B0
 * Original: 0x000755B0 - 0x000758DB (811 bytes, 193 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000755B0(void)
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

loc_000755B0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2419B8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000755EC; /* jne: not equal / not zero */

loc_000755D4: ;
    POP32(esp, edi);
    eax = 4;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x3C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000755EC: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca > _fcb)) goto loc_00075615; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_000755FD: ;
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x3C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075615: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075621; /* je: equal / zero */

loc_0007561C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00075621u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007561Eu); } /* indirect call */
    }

loc_00075621: ;
    edx = MEM32(edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0007562Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007562Au); } /* indirect call */
    }

loc_0007562D: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00075639u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075636u); } /* indirect call */
    }

loc_00075639: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x20); /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x468)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5B4)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000756A5; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x2DC098)) */

loc_00075690: ;
    xmm3 = xmm1; /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    goto loc_000756AD;

loc_000756A5: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */

loc_000756AD: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x5B8); /* comiss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2DD414); /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x2DC3CC); /* addss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x413FA0); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x5B4); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEMF(esi + 0x5B4) = xmm3.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000756F5; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x5B8)) */

loc_000756ED: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */

loc_000756F5: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5B8); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x413FA0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5B8); /* addss */
    MEMF(esi + 0x5B8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x413FA0); /* subss */
    MEMF(esi + 0x5B0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007578C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0007573E: ;
    ecx = edi;
    PUSH32(esp, 0x00075745u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_00075745: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007578C; /* je: equal / zero */

loc_00075749: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x00075753u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007574Du); } /* indirect call */
    }

loc_00075753: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC8AC)); /* fmul dword ptr [0x2dc8ac] */
    PUSH32(esp, edi);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E4F70)); /* fadd dword ptr [0x2e4f70] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x5C0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00075773u); RECOMP_ABI_CALL(0x00074EB0u, sub_00074EB0); /* call 0x00074EB0 */

loc_00075773: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000758BB; /* jne: not equal / not zero */

loc_0007577C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x5C0) = xmm0.f[0]; /* movss */
    goto loc_000758BB;

loc_0007578C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E425C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5C0); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x413FA0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5C0); /* addss */
    MEMF(esi + 0x5C0) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(0x321DEC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x321DEC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00075871; /* jne: not equal / not zero */

loc_000757C9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x5B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075871; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x5B0)) */

loc_000757D9: ;
    eax = MEM32(esi + 0x5AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEMF(esi + 0x5B0) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000757F7; /* je: equal / zero */

loc_000757F3: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000757F7: ;
    MEM32(esp + 8) = 0x2E50FC;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x45C80000);
    PUSH32(esp, 0xC);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x60) = 0;
    PUSH32(esp, 0x00075825u); RECOMP_ABI_CALL(0x0006B8E0u, sub_0006B8E0); /* call 0x0006B8E0 */

loc_00075825: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x5AC) = eax;
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_00075871; /* je: equal / zero */

loc_00075837: ;
    ecx = eax;
    PUSH32(esp, 0x0007583Eu); RECOMP_ABI_CALL(0x00122410u, sub_00122410); /* call 0x00122410 */

loc_0007583E: ;
    eax = MEM32(esi + 0x5AC);
    edx = MEM32(eax);
    MEM32(esp + 8) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00075869u); RECOMP_ABI_CALL(0x00066D90u, sub_00066D90); /* call 0x00066D90 */

loc_00075869: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00075871u); RECOMP_ABI_CALL(0x00072080u, sub_00072080); /* call 0x00072080 */

loc_00075871: ;
    ecx = esi;
    PUSH32(esp, 0x00075878u); RECOMP_ABI_CALL(0x00072410u, sub_00072410); /* call 0x00072410 */

loc_00075878: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC394)); /* fmul dword ptr [0x2dc394] */
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0007588Eu); RECOMP_ABI_CALL(0x00072AA0u, sub_00072AA0); /* call 0x00072AA0 */

loc_0007588E: ;
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2101);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000758ACu); RECOMP_ABI_CALL(0x000741C0u, sub_000741C0); /* call 0x000741C0 */

loc_000758AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000758BB; /* jne: not equal / not zero */

loc_000758B1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x000758BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000758B5u); } /* indirect call */
    }

loc_000758BB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000758C3u); RECOMP_ABI_CALL(0x00072D40u, sub_00072D40); /* call 0x00072D40 */

loc_000758C3: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
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
 * sub_000758E0
 * Original: 0x000758E0 - 0x00075B2A (586 bytes, 178 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000758E0(void)
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

loc_000758E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    ecx = esi + 4;
    MEMF(eax + 0x5E4) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    ebp = 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00075908u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075905u); } /* indirect call */
    }

loc_00075908: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00075B18; /* je: equal / zero */

loc_00075912: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075B18; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00075927: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0007592Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007592Cu); } /* indirect call */
    }

loc_0007592F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00075B18; /* jne: not equal / not zero */

loc_00075937: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00075945u); RECOMP_ABI_CALL(0x00072330u, sub_00072330); /* call 0x00072330 */

loc_00075945: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_00075971; /* je: equal / zero */

loc_0007594C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00075952u); RECOMP_ABI_CALL(0x000755B0u, sub_000755B0); /* call 0x000755B0 */

loc_00075952: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    ecx = MEM32(esi + 0x40);
    POP32(esp, edi);
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    ebp = eax;
    MEM8(ecx + 8) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075971: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = 0x30D350;
    ebp = 2;
    PUSH32(esp, 0x00075985u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00075985: ;
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x0007598Eu); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_0007598E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00075A37; /* je: equal / zero */

loc_00075996: ;
    edx = MEM32(edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000759A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007599Fu); } /* indirect call */
    }

loc_000759A2: ;
    edx = MEM32(ebx);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000759AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000759ABu); } /* indirect call */
    }

loc_000759AE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x000759EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000759E5u); } /* indirect call */
    }

loc_000759EB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC8DC)); /* fmul dword ptr [0x2dc8dc] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00075A05u); RECOMP_ABI_CALL(0x00015420u, sub_00015420); /* call 0x00015420 */

loc_00075A05: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00075A37; /* jbe: below or equal (unsigned <=) */

loc_00075A16: ;
    ecx = MEM32(esi + 0x40);
    SET_LO8(eax, MEM8(ecx + 0x53D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00075A37; /* jne: not equal / not zero */

loc_00075A23: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00075A29u); RECOMP_ABI_CALL(0x00074EB0u, sub_00074EB0); /* call 0x00074EB0 */

loc_00075A29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00075B0A; /* jne: not equal / not zero */

loc_00075A37: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    ecx = MEM32(esi + 0x40);
    xmm1 = XMM_SCALAR(MEMF(0x2DD418)); /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx + 0x4F0); /* comiss */
    if ((_fca > _fcb)) goto loc_00075A67; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(ecx + 0x4F0)) */

loc_00075A5B: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075AEC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075A67: ;
    edx = MEM32(ebx);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00075A73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075A70u); } /* indirect call */
    }

loc_00075A73: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00075A79u); RECOMP_ABI_CALL(0x00015420u, sub_00015420); /* call 0x00015420 */

loc_00075A79: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00075AEC; /* jbe: below or equal (unsigned <=) */

loc_00075A88: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x00075A92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075A8Cu); } /* indirect call */
    }

loc_00075A92: ;
    edi = MEM32(eax + 0x8BC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00075B17; /* je: equal / zero */

loc_00075A9C: ;
    ecx = edi;
    PUSH32(esp, 0x00075AA3u); RECOMP_ABI_CALL(0x001624B0u, sub_001624B0); /* call 0x001624B0 */

loc_00075AA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00075B17; /* je: equal / zero */

loc_00075AA7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00075AB2u); RECOMP_ABI_CALL(0x001641C0u, sub_001641C0); /* call 0x001641C0 */

loc_00075AB2: ;
    ecx = edi;
    PUSH32(esp, 0x00075AB9u); RECOMP_ABI_CALL(0x001624B0u, sub_001624B0); /* call 0x001624B0 */

loc_00075AB9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00075AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075ABDu); } /* indirect call */
    }

loc_00075AC3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00075B17; /* je: equal / zero */

loc_00075AC9: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x00075AD1u); RECOMP_ABI_CALL(0x00064E60u, sub_00064E60); /* call 0x00064E60 */

loc_00075AD1: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00075AD9u); RECOMP_ABI_CALL(0x000657E0u, sub_000657E0); /* call 0x000657E0 */

loc_00075AD9: ;
    ecx = MEM32(esi + 0x40);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    MEM8(ecx + 8) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075AEC: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00075AF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075AF1u); } /* indirect call */
    }

loc_00075AF7: ;
    ecx = MEM32(esi + 0x40);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    MEM8(ecx + 8) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00075B0A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */

loc_00075B17: ;
    POP32(esp, ebx);

loc_00075B18: ;
    ecx = MEM32(esi + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    MEM8(ecx + 8) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
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
 * sub_00075B30
 * Original: 0x00075B30 - 0x00075B35 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075B30: ;
    g_seh_ebp = ebp; sub_000732B0(); return; /* tail jmp 0x000732B0 */

}

/**
 * sub_00075B40
 * Original: 0x00075B40 - 0x00075B75 (53 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075B40: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00075B54u); RECOMP_ABI_CALL(0x00074B00u, sub_00074B00); /* call 0x00074B00 */

loc_00075B54: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00075B69; /* je: equal / zero */

loc_00075B5D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00075B65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075B5Fu); } /* indirect call */
    }

loc_00075B65: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00075B69: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00075B71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075B6Bu); } /* indirect call */
    }

loc_00075B71: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00075B80
 * Original: 0x00075B80 - 0x00075B8D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075B80(void)
{

loc_00075B80: ;
    eax = ecx + 0x5F8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00075B8Cu); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00075B8C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00075B90
 * Original: 0x00075B90 - 0x00075B97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075B90(void)
{

loc_00075B90: ;
    MEM32(ecx) = 0x2E51AC;
    esp += 4; return; /* ret */

}

/**
 * sub_00075BA0
 * Original: 0x00075BA0 - 0x00075BA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075BA0(void)
{

loc_00075BA0: ;
    MEM32(ecx) = 0x2E51C4;
    esp += 4; return; /* ret */

}

/**
 * sub_00075BB0
 * Original: 0x00075BB0 - 0x00075BCF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075BB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E51AC;
    if (TEST_Z(_fa, _fb)) goto loc_00075BC9; /* je: equal / zero */

loc_00075BC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00075BC6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00075BC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00075BC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00075BD0
 * Original: 0x00075BD0 - 0x00075BEF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075BD0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E51C4;
    if (TEST_Z(_fa, _fb)) goto loc_00075BE9; /* je: equal / zero */

loc_00075BE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00075BE6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00075BE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00075BE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00075BF0
 * Original: 0x00075BF0 - 0x00075C81 (145 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075BF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2419F4);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00075C13u); RECOMP_ABI_CALL(0x000721C0u, sub_000721C0); /* call 0x000721C0 */

loc_00075C13: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E51E0;
    MEM32(esp + 0x14) = ebx;
    MEM8(esi + 0x5FC) = LO8(ebx);
    MEM32(esi + 0x5F8) = 0x2E51AC;
    MEM32(esi + 0x600) = esi;
    MEM8(esi + 0x608) = LO8(ebx);
    MEM32(esi + 0x604) = 0x2E51C4;
    MEM32(esi + 0x610) = esi;
    PUSH32(esp, esi);
    ecx = esi + 0x63C;
    MEM8(esp + 0x18) = 2;
    PUSH32(esp, 0x00075C5Cu); RECOMP_ABI_CALL(0x00072590u, sub_00072590); /* call 0x00072590 */

loc_00075C5C: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x658) = ebx;
    MEM32(esi + 0x65C) = ebx;
    MEM32(esi + 0x660) = ebx;
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
 * sub_00075C90
 * Original: 0x00075C90 - 0x00075C96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075C90(void)
{

loc_00075C90: ;
    eax = 0x668;
    esp += 4; return; /* ret */

}

/**
 * sub_00075CA0
 * Original: 0x00075CA0 - 0x00075CB1 (17 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075CA0(void)
{

loc_00075CA0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x614) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00075CC0
 * Original: 0x00075CC0 - 0x00075CD9 (25 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075CC0: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x63C;
    MEM32(ecx + 0x644) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00064020(); return; /* tail jmp 0x00064020 */

}

/**
 * sub_00075CE0
 * Original: 0x00075CE0 - 0x00075CE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075CE0(void)
{

loc_00075CE0: ;
    eax = MEM32(0x30D948);
    esp += 4; return; /* ret */

}

/**
 * sub_00075CF0
 * Original: 0x00075CF0 - 0x00075D19 (41 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075CF0: ;
    MEM32(ecx) = 0x2E51E0;
    MEM32(ecx + 0x63C) = 0x2E510C;
    MEM32(ecx + 0x604) = 0x2E51C4;
    MEM32(ecx + 0x5F8) = 0x2E51AC;
    g_seh_ebp = ebp; sub_00072000(); return; /* tail jmp 0x00072000 */

}

/**
 * sub_00075D20
 * Original: 0x00075D20 - 0x00075D48 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075D20: ;
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075D3B; /* je: equal / zero */

loc_00075D27: ;
    edx = MEM32(ecx + 0x18);
    eax = ecx + 0x604;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075D47; /* je: equal / zero */

loc_00075D34: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00075D3Au); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00075D3A: ;
    esp += 4; return; /* ret */

loc_00075D3B: ;
    eax = ecx + 0x5F8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00075D47u); RECOMP_ABI_CALL(0x00064020u, sub_00064020); /* call 0x00064020 */

loc_00075D47: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00075D50
 * Original: 0x00075D50 - 0x00075D6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00075D58u); RECOMP_ABI_CALL(0x00075CF0u, sub_00075CF0); /* call 0x00075CF0 */

loc_00075D58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00075D68; /* je: equal / zero */

loc_00075D5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00075D65u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00075D65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00075D68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00075D70
 * Original: 0x00075D70 - 0x00075DDC (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00075D78u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00075D78: ;
    MEM32(esi) = 0x2E5364;
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
    PUSH32(esp, 0x00075DD5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00075DD5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00075DE0
 * Original: 0x00075DE0 - 0x00075DEC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075DE0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00075DF0(); return; /* tail jmp 0x00075DF0 */

}

/**
 * sub_00075DF0
 * Original: 0x00075DF0 - 0x00075E5D (109 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075E58; /* je: equal / zero */

loc_00075E02: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x658);
    edx = MEM32(ecx + 0x65C);
    MEM32(ecx + 0x660) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x65C);
    edx = MEM32(ecx + 0x658);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00075E3B; /* je: equal / zero */

loc_00075E34: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00075E3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075E38u); } /* indirect call */
    }

loc_00075E3B: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF998u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF998u;
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
    if (CMP_NE(_fa, _fb)) goto loc_00075E02; /* jne: not equal / not zero */

loc_00075E58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00075E60
 * Original: 0x00075E60 - 0x00075EAA (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00075E60: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x658;
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
 * sub_00075EB0
 * Original: 0x00075EB0 - 0x00075EC5 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075EB0(void)
{

loc_00075EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00075EB8u); RECOMP_ABI_CALL(0x000920B0u, sub_000920B0); /* call 0x000920B0 */

loc_00075EB8: ;
    PUSH32(esp, esi);
    ecx = 0x3229C8;
    PUSH32(esp, 0x00075EC3u); RECOMP_ABI_CALL(0x00075E60u, sub_00075E60); /* call 0x00075E60 */

loc_00075EC3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00075ED0
 * Original: 0x00075ED0 - 0x00075EDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075ED0: ;
    MEM32(ecx) = 0x2E5390;
    g_seh_ebp = ebp; sub_000673C0(); return; /* tail jmp 0x000673C0 */

}

/**
 * sub_00075EE0
 * Original: 0x00075EE0 - 0x00075EE5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075EE0: ;
    g_seh_ebp = ebp; sub_00063F80(); return; /* tail jmp 0x00063F80 */

}

/**
 * sub_00075EF0
 * Original: 0x00075EF0 - 0x00075F30 (64 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075EF0(void)
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

loc_00075EF0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00075F27; /* je: equal / zero */

loc_00075EF8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00075EFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00075EFAu); } /* indirect call */
    }

loc_00075EFD: ;
    _fb = (uint32_t)(0xFFFFFFE7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00075F27; /* ja: above (unsigned >) */

loc_00075F05: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x75F30); /* switch: 6 entries, 4 targets */
    if (_jt == 0x00075F0Cu) goto loc_00075F0C;
    if (_jt == 0x00075F15u) goto loc_00075F15;
    if (_jt == 0x00075F1Eu) goto loc_00075F1E;
    if (_jt == 0x00075F27u) goto loc_00075F27;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00075F0C: ;
    fp_push(MEMF(0x2DC884)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00075F15: ;
    fp_push(MEMF(0x2DC340)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00075F1E: ;
    fp_push(MEMF(0x2DC898)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00075F27: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00075F50
 * Original: 0x00075F50 - 0x00075F58 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00075F50: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x17C)); return; /* indirect tail jmp */

}

/**
 * sub_00075F60
 * Original: 0x00075F60 - 0x00076268 (776 bytes, 216 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00075F60(void)
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

loc_00075F60: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00075F83u); RECOMP_ABI_CALL(0x001F88D0u, sub_001F88D0); /* call 0x001F88D0 */

loc_00075F83: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2E3F84)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00075FAC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00075FA4: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    goto loc_00075FC5;

loc_00075FAC: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E3F80)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00075FC5; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00075FBF: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00075FC5: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC394); /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEM8(esp + 0x60) = 1;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000761CE; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00076004: ;
    goto loc_00076010;

    /* nop */
    /* nop */

loc_00076010: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2E0838)); /* fsub dword ptr [0x2e0838] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    ebx = MEM32(esi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E2C44)); /* fadd dword ptr [0x2e2c44] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2E2C44) / fp_top()); /* fdivr dword ptr [0x2e2c44] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3F0)); /* fmul dword ptr [0x2dc3f0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0007605Eu); RECOMP_ABI_CALL(0x001F8960u, sub_001F8960); /* call 0x001F8960 */

loc_0007605E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x158); PUSH32(esp, 0x0007606Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076064u); } /* indirect call */
    }

loc_0007606A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, MEM8(esp + 0x60));
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000760DB; /* je: equal / zero */

loc_00076077: ;
    edx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    ebp = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp + 0x4C;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007609Bu); RECOMP_ABI_CALL(0x001F8960u, sub_001F8960); /* call 0x001F8960 */

loc_0007609B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x158); PUSH32(esp, 0x000760A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000760A1u); } /* indirect call */
    }

loc_000760A7: ;
    ebp = MEM32(esp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000760DB; /* je: equal / zero */

loc_000760B4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(esp + 0x60) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00076183; /* je: equal / zero */

loc_000760C1: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm2 = xmm1; /* movaps */
    goto loc_0007618F;

loc_000760DB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076183; /* je: equal / zero */

loc_000760E3: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esp + 0x18);
    ebx = MEM32(esi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC394)); /* fmul dword ptr [0x2dc394] */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x54;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076111u); RECOMP_ABI_CALL(0x001F8960u, sub_001F8960); /* call 0x001F8960 */

loc_00076111: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x158); PUSH32(esp, 0x0007611Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076117u); } /* indirect call */
    }

loc_0007611D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076220; /* je: equal / zero */

loc_00076125: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2E5384)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000761BD; /* jbe: below or equal (unsigned <=) */

loc_0007615B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    MEMF(ebp + 4) = xmm1.f[0]; /* movss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00076183: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_0007618F: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */

loc_000761BD: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x30); /* comiss */
    if ((_fca > _fcb)) goto loc_00076010; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x30)) */

loc_000761C8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_000761CE: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000761DFu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_000761DF: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000761FCu); RECOMP_ABI_CALL(0x001F8960u, sub_001F8960); /* call 0x001F8960 */

loc_000761FC: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    edx = MEM32(eax);
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = edx;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ebp + 4) = ecx;
    edx = MEM32(eax + 8);
    POP32(esp, esi);
    MEM32(ebp + 8) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00076220: ;
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076246u); RECOMP_ABI_CALL(0x001F8960u, sub_001F8960); /* call 0x001F8960 */

loc_00076246: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = ecx;
    edx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ebp + 4) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, esi);
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00076270
 * Original: 0x00076270 - 0x0007627B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076270: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x17C)); return; /* indirect tail jmp */

}

/**
 * sub_00076280
 * Original: 0x00076280 - 0x000762AB (43 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076280: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00076293u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076290u); } /* indirect call */
    }

loc_00076293: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000762B0
 * Original: 0x000762B0 - 0x000762DB (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000762B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000762B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x000762BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000762B8u); } /* indirect call */
    }

loc_000762BE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E537C)); /* movss */
    edx = MEM32(esi);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_000762E0
 * Original: 0x000762E0 - 0x000762E8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000762E0(void)
{

loc_000762E0: ;
    MEM32(ecx + 0x18) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000762F0
 * Original: 0x000762F0 - 0x0007633A (74 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000762F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000762F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    MEM8(esi + 0x58) = 1;
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00076307u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076304u); } /* indirect call */
    }

loc_00076307: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007631E; /* je: equal / zero */

loc_0007630B: ;
    ecx = eax;
    PUSH32(esp, 0x00076312u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_00076312: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2E169C)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00076326; /* jne: not equal / not zero */

loc_0007631E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8AC)); /* movss */

loc_00076326: ;
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E425C)); /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00076340
 * Original: 0x00076340 - 0x00076347 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076340(void)
{

loc_00076340: ;
    MEM32(ecx) = 0x2E5520;
    esp += 4; return; /* ret */

}

/**
 * sub_00076350
 * Original: 0x00076350 - 0x00076357 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076350(void)
{

loc_00076350: ;
    MEM32(ecx) = 0x2E5538;
    esp += 4; return; /* ret */

}

/**
 * sub_00076360
 * Original: 0x00076360 - 0x00076378 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076360(void)
{

loc_00076360: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076380
 * Original: 0x00076380 - 0x0007638E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076380(void)
{

loc_00076380: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00076390
 * Original: 0x00076390 - 0x000763C8 (56 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076390(void)
{

loc_00076390: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = 6;
    MEM32(eax) = 0x2E557C;
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x28);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x18) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000763D0
 * Original: 0x000763D0 - 0x000763FD (45 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000763D0(void)
{

loc_000763D0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = 8;
    MEM32(eax) = 0x2E5550;
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x28);
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00076400
 * Original: 0x00076400 - 0x0007640D (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076400: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076409u); RECOMP_ABI_CALL(0x00011A20u, sub_00011A20); /* call 0x00011A20 */

loc_00076409: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00076410
 * Original: 0x00076410 - 0x00076430 (32 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076410(void)
{

loc_00076410: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076430
 * Original: 0x00076430 - 0x00076440 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076430: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076439u); RECOMP_ABI_CALL(0x00011A20u, sub_00011A20); /* call 0x00011A20 */

loc_00076439: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00076440
 * Original: 0x00076440 - 0x0007644D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076440(void)
{

loc_00076440: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x584) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076450
 * Original: 0x00076450 - 0x00076457 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076450(void)
{

loc_00076450: ;
    eax = MEM32(ecx + 0x584);
    esp += 4; return; /* ret */

}

/**
 * sub_00076460
 * Original: 0x00076460 - 0x00076471 (17 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076460(void)
{

loc_00076460: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x58C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076480
 * Original: 0x00076480 - 0x00076487 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076480(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00076480: ;
    fp_push(MEMF(ecx + 0x58C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00076490
 * Original: 0x00076490 - 0x00076497 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076490(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00076490: ;
    fp_push(MEMF(0x2DC348)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000764A0
 * Original: 0x000764A0 - 0x000764A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000764A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000764A0: ;
    fp_push(MEMF(0x2E537C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000764B0
 * Original: 0x000764B0 - 0x000764B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000764B0(void)
{

loc_000764B0: ;
    eax = 0x620;
    esp += 4; return; /* ret */

}

/**
 * sub_000764C0
 * Original: 0x000764C0 - 0x000764D2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000764C0(void)
{

loc_000764C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000764C8u); RECOMP_ABI_CALL(0x000689B0u, sub_000689B0); /* call 0x000689B0 */

loc_000764C8: ;
    MEM32(esi) = 0x2E5390;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000764E0
 * Original: 0x000764E0 - 0x000764FE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000764E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000764E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000764E8u); RECOMP_ABI_CALL(0x00075ED0u, sub_00075ED0); /* call 0x00075ED0 */

loc_000764E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000764F8; /* je: equal / zero */

loc_000764EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000764F5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000764F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000764F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076500
 * Original: 0x00076500 - 0x0007653D (61 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076500: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0007650Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076505u); } /* indirect call */
    }

loc_0007650B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007651D; /* jne: not equal / not zero */

loc_0007650F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x184); PUSH32(esp, 0x00076519u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076513u); } /* indirect call */
    }

loc_00076519: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076535; /* je: equal / zero */

loc_0007651D: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00076527u); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_00076527: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076535; /* je: equal / zero */

loc_0007652E: ;
    MEM8(eax + 0xD1B) = 1;

loc_00076535: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00067670(); return; /* tail jmp 0x00067670 */

}

/**
 * sub_00076540
 * Original: 0x00076540 - 0x00076641 (257 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076540(void)
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

loc_00076540: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x59C)); /* movss */
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x413FA0); /* subss */
    MEMF(edi + 0x59C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0007663B; /* je: equal / zero */

loc_00076568: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007656Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007656Cu); } /* indirect call */
    }

loc_0007656F: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007663B; /* jne: not equal / not zero */

loc_00076585: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x0007659Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076598u); } /* indirect call */
    }

loc_0007659E: ;
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x000765AAu); RECOMP_ABI_CALL(0x0006C420u, sub_0006C420); /* call 0x0006C420 */

loc_000765AA: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x598)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000765C8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000765BA: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(edi + 0x598) = xmm1.f[0]; /* movss */

loc_000765C8: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x598); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000765D9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x598)) */

loc_000765D1: ;
    MEMF(edi + 0x598) = xmm0.f[0]; /* movss */

loc_000765D9: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x134); PUSH32(esp, 0x000765E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000765DDu); } /* indirect call */
    }

loc_000765E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007662C; /* jne: not equal / not zero */

loc_000765E7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x000765F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000765EFu); } /* indirect call */
    }

loc_000765F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007662B; /* je: equal / zero */

loc_000765F9: ;
    /* nop */

loc_00076600: ;
    _fa = (uint32_t)(MEM32(eax + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2D8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007661B; /* je: equal / zero */

loc_00076609: ;
    eax = MEM32(eax + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007661B; /* je: equal / zero */

loc_00076613: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0007661Bu); RECOMP_ABI_CALL(0x000966A0u, sub_000966A0); /* call 0x000966A0 */

loc_0007661B: ;
    eax = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x00076627u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076621u); } /* indirect call */
    }

loc_00076627: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076600; /* jne: not equal / not zero */

loc_0007662B: ;
    POP32(esp, ebx);

loc_0007662C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(edi + 0x594) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);

loc_0007663B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076650
 * Original: 0x00076650 - 0x000766F5 (165 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076650(void)
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

loc_00076650: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x184); PUSH32(esp, 0x0007665Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076656u); } /* indirect call */
    }

loc_0007665C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00076672; /* jne: not equal / not zero */

loc_00076664: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0007666Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076668u); } /* indirect call */
    }

loc_0007666E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000766D9; /* je: equal / zero */

loc_00076672: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00076679u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076676u); } /* indirect call */
    }

loc_00076679: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00076683u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007667Du); } /* indirect call */
    }

loc_00076683: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0007668Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007668Bu); } /* indirect call */
    }

loc_0007668E: ;
    fp_push(MEMF(eax + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0xC)); /* fdiv dword ptr [esp + 0xc] */
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_A(_fa, _fb)) goto loc_000766D9; /* ja: above (unsigned >) */

loc_000766A4: ;
    ecx = ZX8(MEM8(eax + 0x76700));
    { uint32_t _jt = MEM32(ecx * 4 + 0x766F8); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000766B2u) goto loc_000766B2;
    if (_jt == 0x000766D9u) goto loc_000766D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000766B2: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC394)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    ecx = esi;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000766CF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_000766C3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(edx + 0x18C); PUSH32(esp, 0x000766CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000766C7u); } /* indirect call */
    }

loc_000766CD: ;
    goto loc_000766D9;

loc_000766CF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x000766D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000766D3u); } /* indirect call */
    }

loc_000766D9: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000766F0u); RECOMP_ABI_CALL(0x000661E0u, sub_000661E0); /* call 0x000661E0 */

loc_000766F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00076720
 * Original: 0x00076720 - 0x0007679D (125 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076720(void)
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

loc_00076720: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076748; /* je: equal / zero */

loc_0007672B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00076732u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007672Fu); } /* indirect call */
    }

loc_00076732: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076748; /* jne: not equal / not zero */

loc_00076744: ;
    ecx = esi;
    goto loc_0007674A;

loc_00076748: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007674A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00076758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076752u); } /* indirect call */
    }

loc_00076758: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007676Du); RECOMP_ABI_CALL(0x0012D6A0u, sub_0012D6A0); /* call 0x0012D6A0 */

loc_0007676D: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00076779u); RECOMP_ABI_CALL(0x00201C70u, sub_00201C70); /* call 0x00201C70 */

loc_00076779: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00076793; /* je: equal / zero */

loc_00076781: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076793; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_0007678D: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00076793: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
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
 * sub_000767A0
 * Original: 0x000767A0 - 0x000768B6 (278 bytes, 80 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000767A0(void)
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

loc_000767A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000767C7; /* je: equal / zero */

loc_000767AE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000767B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000767B2u); } /* indirect call */
    }

loc_000767B5: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000767C9; /* je: equal / zero */

loc_000767C7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000767C9: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000767D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000767D2u); } /* indirect call */
    }

loc_000767D5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000767EDu); RECOMP_ABI_CALL(0x00076720u, sub_00076720); /* call 0x00076720 */

loc_000767ED: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0007681F; /* jbe: below or equal (unsigned <=) */

loc_00076803: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    goto loc_00076825;

loc_0007681F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_00076825: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC090)); /* fadd dword ptr [0x2dc090] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC090) / fp_top()); /* fdivr dword ptr [0x2dc090] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076856; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00076851: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00076864;

loc_00076856: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007686A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00076861: ;
    xmm0 = xmm2; /* movaps */

loc_00076864: ;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_0007686A: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(esp + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076881; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(esp + 0x20)) */

loc_00076877: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */

loc_00076881: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x00076892u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007688Cu); } /* indirect call */
    }

loc_00076892: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC340); /* comiss */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000768AE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC340)) */

loc_000768A3: ;
    eax = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000768AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000768C0
 * Original: 0x000768C0 - 0x00076A1B (347 bytes, 107 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000768C0(void)
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

loc_000768C0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000768E8; /* je: equal / zero */

loc_000768CF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000768D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000768D3u); } /* indirect call */
    }

loc_000768D6: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000768EA; /* je: equal / zero */

loc_000768E8: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000768EA: ;
    edx = MEM32(ebx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    edi = esi + 0x2C8;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000768FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000768F9u); } /* indirect call */
    }

loc_000768FC: ;
    ecx = MEM32(esp + 0x30);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00076935u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076932u); } /* indirect call */
    }

loc_00076935: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x14;
    PUSH32(esp, 0x00076942u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00076942: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x0007694Du); RECOMP_ABI_CALL(0x001398A0u, sub_001398A0); /* call 0x001398A0 */

loc_0007694D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    ecx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00076962u); RECOMP_ABI_CALL(0x00130390u, sub_00130390); /* call 0x00130390 */

loc_00076962: ;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00076979u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00076979: ;
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2E55A8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000769AB; /* jbe: below or equal (unsigned <=) */

loc_0007698E: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DDA30)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000769AB; /* jbe: below or equal (unsigned <=) */

loc_000769A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000769AB: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000769BFu); RECOMP_ABI_CALL(0x00066B80u, sub_00066B80); /* call 0x00066B80 */

loc_000769BF: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC3A0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000769E0; /* jbe: below or equal (unsigned <=) */

loc_000769D6: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    goto loc_000769F9;

loc_000769E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000769FF; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000769F9: ;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */

loc_000769FF: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x00076A10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076A0Au); } /* indirect call */
    }

loc_00076A10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00076A20
 * Original: 0x00076A20 - 0x00076A51 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00076A20: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076A49; /* je: equal / zero */

loc_00076A28: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00076A2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076A2Cu); } /* indirect call */
    }

loc_00076A2F: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076A49; /* jne: not equal / not zero */

loc_00076A41: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00049CD0(); return; /* tail jmp 0x00049CD0 */

loc_00076A49: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00049CD0(); return; /* tail jmp 0x00049CD0 */

}

/**
 * sub_00076A60
 * Original: 0x00076A60 - 0x00076A9F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076A60(void)
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

loc_00076A60: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076A8F; /* je: equal / zero */

loc_00076A68: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00076A6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076A6Cu); } /* indirect call */
    }

loc_00076A6F: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076A8F; /* jne: not equal / not zero */

loc_00076A81: ;
    fp_push(MEMF(esi + 0x3B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x278)); /* fmul dword ptr [esi + 0x278] */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00076A8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(eax + 0x3B8)); /* fld float */
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
 * sub_00076AA0
 * Original: 0x00076AA0 - 0x00076F2D (1165 bytes, 279 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076AA0(void)
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

loc_00076AA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x241A1B);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xFC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x114);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00076F0A; /* ja: above (unsigned >) */

loc_00076AD9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x76F30); /* switch: 6 entries, 5 targets */
    if (_jt == 0x00076AE0u) goto loc_00076AE0;
    if (_jt == 0x00076BA3u) goto loc_00076BA3;
    if (_jt == 0x00076E1Du) goto loc_00076E1D;
    if (_jt == 0x00076F0Au) goto loc_00076F0A;
    if (_jt == 0x00076F12u) goto loc_00076F12;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00076AE0: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00076AE9u); RECOMP_ABI_CALL(0x00064060u, sub_00064060); /* call 0x00064060 */

loc_00076AE9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E4258)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp);
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC090); /* mulss */
    MEM32(esp + 0x48) = eax;
    eax = esp + 0x48;
    MEM32(esp + 0x4C) = ecx;
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi + 0x458;
    MEM32(esp + 0x54) = edx;
    PUSH32(esp, 0x00076B3Du); RECOMP_ABI_CALL(0x00064510u, sub_00064510); /* call 0x00064510 */

loc_00076B3D: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    MEM32(esp + 0x5C) = 0xA;
    MEM32(esp + 0x58) = 0x2E557C;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x6C) = ebx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC090); /* addss */
    PUSH32(esp, 0x3F7FA1A1);
    PUSH32(esp, ecx);
    ecx = esp + 0x60;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x120) = ebx;
    PUSH32(esp, 0x00076B9Eu); RECOMP_ABI_CALL(0x00065830u, sub_00065830); /* call 0x00065830 */

loc_00076B9E: ;
    goto loc_00076F12;

loc_00076BA3: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00076BACu); RECOMP_ABI_CALL(0x00064060u, sub_00064060); /* call 0x00064060 */

loc_00076BAC: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    edx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = esi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x00076BC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076BBEu); } /* indirect call */
    }

loc_00076BC4: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00076F12; /* ja: above (unsigned >) */

loc_00076BDA: ;
    ecx = edi;
    PUSH32(esp, 0x00076BE1u); RECOMP_ABI_CALL(0x00097100u, sub_00097100); /* call 0x00097100 */

loc_00076BE1: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076E1D; /* je: equal / zero */

loc_00076BEB: ;
    eax = MEM32(ebx);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00076BF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076BF4u); } /* indirect call */
    }

loc_00076BF7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD444)); /* movss */
    edx = edi + 0x10;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    PUSH32(esp, ebx);
    ecx = 0x30C0CC;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00076C35u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00076C35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076C55; /* je: equal / zero */

loc_00076C39: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18C)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x198)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00076C55: ;
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esi + 0x10);
    eax = MEM32(ebp + 0x150);
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076C6Bu); RECOMP_ABI_CALL(0x0015EB30u, sub_0015EB30); /* call 0x0015EB30 */

loc_00076C6B: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E5388); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2DD414); /* comiss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076E16; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x2DD414)) */

loc_00076C9F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x24); /* addss */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00076CE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076CE3u); } /* indirect call */
    }

loc_00076CE6: ;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00076CF8u); RECOMP_ABI_CALL(0x00064AE0u, sub_00064AE0); /* call 0x00064AE0 */

loc_00076CF8: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC898); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076E16; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_00076D1F: ;
    eax = MEM32(esp + 0x11C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x34); /* mulss */
    MEM32(esp + 0x20) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00076E16; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00076D7A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    ecx = esi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x00076D92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076D8Cu); } /* indirect call */
    }

loc_00076D92: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC094)); /* fmul dword ptr [0x2dc094] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2E3F7C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00076DCE; /* ja: above (unsigned >) */

loc_00076DC6: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E3F7C)); /* movss */

loc_00076DCE: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esp + 0xB4;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00076DE3u); RECOMP_ABI_CALL(0x00076390u, sub_00076390); /* call 0x00076390 */

loc_00076DE3: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F6D05D1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x120) = 1;
    PUSH32(esp, 0x00076E00u); RECOMP_ABI_CALL(0x00065830u, sub_00065830); /* call 0x00065830 */

loc_00076E00: ;
    MEM32(esp + 0x114) = 0xFFFFFFFFu;
    MEM32(esp + 0xAC) = 0x2DE974;

loc_00076E16: ;
    ebp = MEM32(esp + 0x11C);

loc_00076E1D: ;
    ebx = MEM32(esi + 0x10);
    ecx = edi;
    PUSH32(esp, 0x00076E27u); RECOMP_ABI_CALL(0x00097100u, sub_00097100); /* call 0x00097100 */

loc_00076E27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076F0A; /* jne: not equal / not zero */

loc_00076E2F: ;
    eax = MEM32(esi + 0x2E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076E3E; /* je: equal / zero */

loc_00076E39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00076E40;

loc_00076E3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00076E40: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076F0A; /* jne: not equal / not zero */

loc_00076E4A: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2E537C)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00076E6A; /* jne: not equal / not zero */

loc_00076E60: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    goto loc_00076E77;

loc_00076E6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00076E7D; /* jne: not equal / not zero */

loc_00076E6F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */

loc_00076E77: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00076E7D: ;
    edx = MEM32(esi);
    eax = esp + 0x94;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00076E8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076E89u); } /* indirect call */
    }

loc_00076E8C: ;
    PUSH32(esp, eax);
    ecx = edi + 0x1C;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00076E9Fu); RECOMP_ABI_CALL(0x00064A20u, sub_00064A20); /* call 0x00064A20 */

loc_00076E9F: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00076EB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076EAEu); } /* indirect call */
    }

loc_00076EB1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0xE4;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00076ED7u); RECOMP_ABI_CALL(0x00064D60u, sub_00064D60); /* call 0x00064D60 */

loc_00076ED7: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F7A2728);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x120) = 2;
    PUSH32(esp, 0x00076EF4u); RECOMP_ABI_CALL(0x00065830u, sub_00065830); /* call 0x00065830 */

loc_00076EF4: ;
    MEM32(esp + 0x114) = 0xFFFFFFFFu;
    MEM32(esp + 0xDC) = 0x2DE974;

loc_00076F0A: ;
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00076F12u); RECOMP_ABI_CALL(0x00069D90u, sub_00069D90); /* call 0x00069D90 */

loc_00076F12: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00076F50
 * Original: 0x00076F50 - 0x00076F90 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00076F50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    MEM8(eax + 8) = 0;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00076F68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076F62u); } /* indirect call */
    }

loc_00076F68: ;
    PUSH32(esp, 0x3F800000);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00076F79u); RECOMP_ABI_CALL(0x00065AE0u, sub_00065AE0); /* call 0x00065AE0 */

loc_00076F79: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076F82u); RECOMP_ABI_CALL(0x000768C0u, sub_000768C0); /* call 0x000768C0 */

loc_00076F82: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00076F90
 * Original: 0x00076F90 - 0x00076FF8 (104 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00076F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00076F90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ecx = edi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00076F9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076F9Au); } /* indirect call */
    }

loc_00076F9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076FE6; /* je: equal / zero */

loc_00076FA1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00076FABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076FA5u); } /* indirect call */
    }

loc_00076FAB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076FD6; /* je: equal / zero */

loc_00076FB1: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00076FBD; /* je: equal / zero */

loc_00076FB8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00076FBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076FBAu); } /* indirect call */
    }

loc_00076FBD: ;
    ecx = MEM32(edi + 0x40);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00076FC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00076FC3u); } /* indirect call */
    }

loc_00076FC9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00076FD6u); RECOMP_ABI_CALL(0x000640E0u, sub_000640E0); /* call 0x000640E0 */

loc_00076FD6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + eax + 2;
    esp += 8; return; /* ret 4 */

loc_00076FE6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + eax + 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077000
 * Original: 0x00077000 - 0x00077042 (66 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077000(void)
{

loc_00077000: ;
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
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00077016u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077013u); } /* indirect call */
    }

loc_00077016: ;
    ecx = MEM32(esi + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xB0); PUSH32(esp, 0x00077020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007701Au); } /* indirect call */
    }

loc_00077020: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41200000);
    { uint32_t _icall_target = MEM32(eax + 0x188); PUSH32(esp, 0x00077030u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007702Au); } /* indirect call */
    }

loc_00077030: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x0007703Du); RECOMP_ABI_CALL(0x000640E0u, sub_000640E0); /* call 0x000640E0 */

loc_0007703D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077050
 * Original: 0x00077050 - 0x000770D9 (137 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077050(void)
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

loc_00077050: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077078; /* je: equal / zero */

loc_0007705F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00077066u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077063u); } /* indirect call */
    }

loc_00077066: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007707A; /* je: equal / zero */

loc_00077078: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007707A: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0007708Du); RECOMP_ABI_CALL(0x000767A0u, sub_000767A0); /* call 0x000767A0 */

loc_0007708D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3C4); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000770A5u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_000770A5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD414)); /* fmul dword ptr [0x2dd414] */
    edx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x000770C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000770BDu); } /* indirect call */
    }

loc_000770C3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    POP32(esp, edi);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
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
 * sub_000770E0
 * Original: 0x000770E0 - 0x0007720D (301 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000770E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000770E0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007710A; /* je: equal / zero */

loc_000770F1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000770F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000770F5u); } /* indirect call */
    }

loc_000770F8: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007710C; /* je: equal / zero */

loc_0007710A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007710C: ;
    ecx = esi;
    PUSH32(esp, 0x00077113u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00077113: ;
    ecx = eax;
    PUSH32(esp, 0x0007711Au); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_0007711A: ;
    eax = MEM32(0x41410C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007712A; /* jne: not equal / not zero */

loc_00077123: ;
    eax = 0x6438E0;
    goto loc_0007712D;

loc_0007712A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0007712D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 8); /* subss */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esi);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0007717Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007717Au); } /* indirect call */
    }

loc_0007717D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000771C1; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000771BB: ;
    eax = esp + 0x20;
    goto loc_000771E9;

loc_000771C1: ;
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = esp + 0x14;

loc_000771E9: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = edx;
    MEM32(edi + 0x14) = eax;
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00077210
 * Original: 0x00077210 - 0x0007722A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077210: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax) = 0x2E55AC;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077230
 * Original: 0x00077230 - 0x0007724F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077230: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E55AC;
    if (TEST_Z(_fa, _fb)) goto loc_00077249; /* je: equal / zero */

loc_00077240: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00077246u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00077246: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077249: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077250
 * Original: 0x00077250 - 0x000772D5 (133 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077250: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000772D3; /* je: equal / zero */

loc_00077258: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007725Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007725Cu); } /* indirect call */
    }

loc_0007725F: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000772D3; /* jne: not equal / not zero */

loc_00077271: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x0007727Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077279u); } /* indirect call */
    }

loc_0007727F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x0007728Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077287u); } /* indirect call */
    }

loc_0007728D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x0007729Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077295u); } /* indirect call */
    }

loc_0007729B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x000772A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000772A3u); } /* indirect call */
    }

loc_000772A9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x000772B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000772B1u); } /* indirect call */
    }

loc_000772B7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1E4); PUSH32(esp, 0x000772C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000772BFu); } /* indirect call */
    }

loc_000772C5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1E4); PUSH32(esp, 0x000772D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000772CDu); } /* indirect call */
    }

loc_000772D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000772E0
 * Original: 0x000772E0 - 0x00077340 (96 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000772E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000772E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007733E; /* je: equal / zero */

loc_000772E8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000772EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000772ECu); } /* indirect call */
    }

loc_000772EF: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007733E; /* jne: not equal / not zero */

loc_00077301: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x0007730Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077309u); } /* indirect call */
    }

loc_0007730F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007733D; /* je: equal / zero */

loc_00077313: ;
    eax = MEM32(eax + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007732D; /* je: equal / zero */

loc_0007731D: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(eax + 4) = 0;
    MEM8(eax + 0x30) = LO8(ecx);

loc_0007732D: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x00077339u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077333u); } /* indirect call */
    }

loc_00077339: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077313; /* jne: not equal / not zero */

loc_0007733D: ;
    POP32(esp, edi);

loc_0007733E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00077340
 * Original: 0x00077340 - 0x0007757C (572 bytes, 154 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077340(void)
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

loc_00077340: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00077574; /* je: equal / zero */

loc_00077353: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x51C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC394); /* comiss */
    if ((_fca > _fcb)) goto loc_00077574; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC394)) */

loc_00077368: ;
    eax = MEM32(esi);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00077374u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077371u); } /* indirect call */
    }

loc_00077374: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    edx = MEM32(edi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00077394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077391u); } /* indirect call */
    }

loc_00077394: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x20); /* subss */
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, edx);
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x000773EFu); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_000773EF: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x00077409u); RECOMP_ABI_CALL(0x00012990u, sub_00012990); /* call 0x00012990 */

loc_00077409: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077415; /* je: equal / zero */

loc_0007740D: ;
    MEM32(esp + 0x10) = 2;

loc_00077415: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0007743A; /* je: equal / zero */

loc_0007741D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00077424u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077421u); } /* indirect call */
    }

loc_00077424: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007743A; /* jne: not equal / not zero */

loc_00077436: ;
    ebp = esi;
    goto loc_0007743C;

loc_0007743A: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007743C: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x0007744Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077445u); } /* indirect call */
    }

loc_0007744B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077572; /* je: equal / zero */

loc_00077453: ;
    _fa = (uint32_t)(MEM32(eax + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2D8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007755D; /* je: equal / zero */

loc_00077460: ;
    esi = MEM32(eax + 0x28C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007755D; /* je: equal / zero */

loc_0007746E: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    edx = MEM32(esp + 0x18);
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x30) = LO8(ecx);
    MEM32(esi + 4) = 0;
    eax = MEM32(eax + 0x27C);
    ecx = MEM32(eax + 0x1E8);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0007755D; /* je: equal / zero */

loc_00077499: ;
    PUSH32(esp, 0xB421904);
    ecx = eax;
    PUSH32(esp, 0x000774A5u); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_000774A5: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00077512; /* jbe: below or equal (unsigned <=) */

loc_000774B9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x000774C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000774BDu); } /* indirect call */
    }

loc_000774C3: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC090) - fp_top()); /* fsubr dword ptr [0x2dc090] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3C4)); /* fmul dword ptr [0x2dc3c4] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0007755D; /* ja: above (unsigned >) */

loc_000774DF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x51C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC884); /* comiss */
    if ((_fca > _fcb)) goto loc_0007755D; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC884)) */

loc_000774F0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2E5128); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0007755D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00077510: ;
    goto loc_00077518;

loc_00077512: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_00077518: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC38C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007755D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC38C)) */

loc_00077521: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E55C4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0007755D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007752E: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0007753Au); RECOMP_ABI_CALL(0x000721A0u, sub_000721A0); /* call 0x000721A0 */

loc_0007753A: ;
    MEM8(esi + 0x30) = MEM8(esi + 0x30) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x00077548u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077542u); } /* indirect call */
    }

loc_00077548: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E4258)); /* fadd dword ptr [0x2e4258] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E4258)); /* fmul dword ptr [0x2e4258] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */

loc_0007755D: ;
    eax = MEM32(ebp);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x0007756Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077564u); } /* indirect call */
    }

loc_0007756A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077453; /* jne: not equal / not zero */

loc_00077572: ;
    POP32(esp, ebx);
    POP32(esp, ebp);

loc_00077574: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00077580
 * Original: 0x00077580 - 0x000775C6 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077580(void)
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

loc_00077580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xAD34BC4Du);
    ecx = esi;
    PUSH32(esp, 0x00077591u); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_00077591: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000775A6; /* jbe: below or equal (unsigned <=) */

loc_0007759F: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000775A6: ;
    eax = MEM32(esi + 0x1A0);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000775BF; /* je: equal / zero */

loc_000775B1: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000775BF; /* je: equal / zero */

loc_000775B6: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000775BF; /* je: equal / zero */

loc_000775BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000775BF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000775D0
 * Original: 0x000775D0 - 0x000777F0 (544 bytes, 151 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000775D0(void)
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

loc_000775D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000775E6; /* jne: not equal / not zero */

loc_000775DC: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000775E6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077609; /* je: equal / zero */

loc_000775F0: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000775F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000775F4u); } /* indirect call */
    }

loc_000775F7: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0007760B; /* je: equal / zero */

loc_00077609: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007760B: ;
    ecx = esi;
    ebp = 1;
    PUSH32(esp, 0x00077617u); RECOMP_ABI_CALL(0x00012990u, sub_00012990); /* call 0x00012990 */

loc_00077617: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077620; /* je: equal / zero */

loc_0007761B: ;
    ebp = 2;

loc_00077620: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00077627u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077624u); } /* indirect call */
    }

loc_00077627: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0007767B; /* jne: not equal / not zero */

loc_00077639: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x23C); PUSH32(esp, 0x00077643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007763Du); } /* indirect call */
    }

loc_00077643: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00077720; /* jp: parity */

loc_0007765F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E55D0)); /* movss */

loc_00077667: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E55CC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */

loc_00077675: ;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_0007767B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x00077699u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077693u); } /* indirect call */
    }

loc_00077699: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000777E2; /* je: equal / zero */

loc_000776A3: ;
    goto loc_000776B0;

    /* nop */
    /* nop */

loc_000776B0: ;
    eax = MEM32(esi + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000777CC; /* je: equal / zero */

loc_000776BE: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x000776C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000776C2u); } /* indirect call */
    }

loc_000776C8: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x000776D0u); RECOMP_ABI_CALL(0x00162370u, sub_00162370); /* call 0x00162370 */

loc_000776D0: ;
    _fa = (uint32_t)(MEM32(esi + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2D8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000776F0; /* jne: not equal / not zero */

loc_000776D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000777CC; /* je: equal / zero */

loc_000776E1: ;
    ecx = eax;
    PUSH32(esp, 0x000776E8u); RECOMP_ABI_CALL(0x001624B0u, sub_001624B0); /* call 0x001624B0 */

loc_000776E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000777CC; /* je: equal / zero */

loc_000776F0: ;
    esi = MEM32(esi + 0x27C);
    ecx = MEM32(esi + 0x1E8);
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000777CC; /* je: equal / zero */

loc_00077707: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007770Du); RECOMP_ABI_CALL(0x00077580u, sub_00077580); /* call 0x00077580 */

loc_0007770D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00077750; /* je: equal / zero */

loc_00077713: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00077746; /* je: equal / zero */

loc_00077716: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    goto loc_00077758;

loc_00077720: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E55C8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077667; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E55C8)) */

loc_00077733: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    goto loc_00077675;

loc_00077746: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    goto loc_00077758;

loc_00077750: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC394)); /* movss */

loc_00077758: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077772; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0007776C: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_00077772: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0007777Du); RECOMP_ABI_CALL(0x00066840u, sub_00066840); /* call 0x00066840 */

loc_0007777D: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC394); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm2; /* movaps */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000777BB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000777B3: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000777BB; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000777B8: ;
    xmm0 = xmm1; /* movaps */

loc_000777BB: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000777CC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_000777C2: ;
    MEM32(esp + 0x18) = ebx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_000777CC: ;
    eax = MEM32(edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x000777D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000777D2u); } /* indirect call */
    }

loc_000777D8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000776B0; /* jne: not equal / not zero */

loc_000777E2: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_000777F0
 * Original: 0x000777F0 - 0x000779F8 (520 bytes, 164 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000777F0(void)
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

loc_000777F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00077819; /* je: equal / zero */

loc_00077800: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00077807u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077804u); } /* indirect call */
    }

loc_00077807: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0007781B; /* je: equal / zero */

loc_00077819: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007781B: ;
    ebp = MEM32(esp + 0x30);
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x0007782Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077824u); } /* indirect call */
    }

loc_0007782A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007787F; /* je: equal / zero */

loc_00077830: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x0007783Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077834u); } /* indirect call */
    }

loc_0007783A: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x00077842u); RECOMP_ABI_CALL(0x00162370u, sub_00162370); /* call 0x00162370 */

loc_00077842: ;
    _fa = (uint32_t)(MEM32(edi + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2D8), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00077875; /* jne: not equal / not zero */

loc_0007784B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00077869; /* je: equal / zero */

loc_0007784F: ;
    ecx = eax;
    PUSH32(esp, 0x00077856u); RECOMP_ABI_CALL(0x001624B0u, sub_001624B0); /* call 0x001624B0 */

loc_00077856: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00077869; /* je: equal / zero */

loc_0007785A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00077869: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00077875: ;
    esi = MEM32(edi + 0x28C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0007788B; /* jne: not equal / not zero */

loc_0007787F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0007788B: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0007789B; /* je: equal / zero */

loc_00077893: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x28);
    goto loc_0007789D;

loc_0007789B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0007789D: ;
    edx = esp + 0x20;
    MEM32(esi + 4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x000778ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000778A7u); } /* indirect call */
    }

loc_000778AD: ;
    eax = MEM32(ebx);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000778B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000778B6u); } /* indirect call */
    }

loc_000778B9: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x1C); /* subss */
    ecx = MEM32(edi + 0x27C);
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, 0xB421904);
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0007790Du); RECOMP_ABI_CALL(0x000325E0u, sub_000325E0); /* call 0x000325E0 */

loc_0007790D: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000779D8; /* jbe: below or equal (unsigned <=) */

loc_00077925: ;
    edx = MEM32(esp + 0x18);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00077937u); RECOMP_ABI_CALL(0x00015B60u, sub_00015B60); /* call 0x00015B60 */

loc_00077937: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x14) - fp_top()); /* fsubr dword ptr [esp + 0x14] */
    edx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x0007794Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077946u); } /* indirect call */
    }

loc_0007794C: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC090) - fp_top()); /* fsubr dword ptr [0x2dc090] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3C4)); /* fmul dword ptr [0x2dc3c4] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00077997; /* jbe: below or equal (unsigned <=) */

loc_00077966: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x51C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077997; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x51C)) */

loc_00077977: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2E5128); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000779DE; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00077997: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00077999: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    SET_LO8(edx, MEM8(esi + 0x30));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x30) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000779CC; /* je: equal / zero */

loc_000779AD: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x000779B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000779B1u); } /* indirect call */
    }

loc_000779B7: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E4258)); /* fadd dword ptr [0x2e4258] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E4258)); /* fmul dword ptr [0x2e4258] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */

loc_000779CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000779D8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */

loc_000779DE: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC38C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077997; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC38C)) */

loc_000779E7: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E55C4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00077997; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000779F4: ;
    SET_LO8(eax, 1);
    goto loc_00077999;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00077A00
 * Original: 0x00077A00 - 0x00077A08 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00077A00: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_000772E0(); return; /* tail jmp 0x000772E0 */

}

/**
 * sub_00077A10
 * Original: 0x00077A10 - 0x00077AA1 (145 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00077A10: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x2DD8EC)); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    PUSH32(esp, esi);
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    esi = MEM32(0x30EFF0);
    eax = esi;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = esi;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
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
    edx = eax;
    if (0x13) _cf = (int)(((edx) >> (32 - (0x13))) & 1);
    edx = edx << 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    if (0xD) _cf = (int)(((esi) >> ((0xD) - 1)) & 1);
    esi = esi >> 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30EFF0) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((8) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x3F800000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 4) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x2DC08C); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2E25E4); /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x2DC3CC); /* subss */
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00077AB0
 * Original: 0x00077AB0 - 0x00077B44 (148 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00077AB0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x2E55D8)); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E3F7C)); /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    esi = MEM32(0x30EFF0);
    eax = esi;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = esi;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
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
    edx = eax;
    if (0x13) _cf = (int)(((edx) >> (32 - (0x13))) & 1);
    edx = edx << 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    if (0xD) _cf = (int)(((esi) >> ((0xD) - 1)) & 1);
    esi = esi >> 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30EFF0) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((8) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x3F800000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 4) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E25E4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC3CC); /* subss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00077B50
 * Original: 0x00077B50 - 0x00077B8C (60 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077B50: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax) = 0x2E5520;
    MEM32(eax + 0xC) = edx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD6C0)); /* movss */
    MEM32(eax + 0x1C) = ecx;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x28) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077B90
 * Original: 0x00077B90 - 0x00077BAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077B90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00077B98u); RECOMP_ABI_CALL(0x00076340u, sub_00076340); /* call 0x00076340 */

loc_00077B98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00077BA8; /* je: equal / zero */

loc_00077B9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00077BA5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00077BA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077BA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077BB0
 * Original: 0x00077BB0 - 0x00077BE7 (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077BC2; /* je: equal / zero */

loc_00077BBD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00077BC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077BBFu); } /* indirect call */
    }

loc_00077BC2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x1C) = 0;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x00077BDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077BD8u); } /* indirect call */
    }

loc_00077BDE: ;
    ecx = MEM32(esi + 0xC);
    MEM8(ecx + 0x50) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00077BF0
 * Original: 0x00077BF0 - 0x00077C25 (53 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077BF0(void)
{

loc_00077BF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM8(eax + 4) = 0;
    MEM32(eax) = 0x2E5538;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD6C0)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077C30
 * Original: 0x00077C30 - 0x00077C4E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00077C38u); RECOMP_ABI_CALL(0x00076350u, sub_00076350); /* call 0x00076350 */

loc_00077C38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00077C48; /* je: equal / zero */

loc_00077C3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00077C45u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00077C45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077C48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00077C50
 * Original: 0x00077C50 - 0x00077DE3 (403 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00077C50(void)
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

loc_00077C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2E55DC)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = 0;
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x00077C7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077C78u); } /* indirect call */
    }

loc_00077C7E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077C85u); RECOMP_ABI_CALL(0x00076380u, sub_00076380); /* call 0x00076380 */

loc_00077C85: ;
    ecx = MEM32(esi + 8);
    MEM8(ecx + 0x50) = 1;
    edx = MEM32(esi + 8);
    edi = MEM32(edx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077CAF; /* je: equal / zero */

loc_00077C96: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00077C9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077C9Au); } /* indirect call */
    }

loc_00077C9D: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077CB1; /* je: equal / zero */

loc_00077CAF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00077CB1: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x00077CBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077CB5u); } /* indirect call */
    }

loc_00077CBB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077CC2u); RECOMP_ABI_CALL(0x00163530u, sub_00163530); /* call 0x00163530 */

loc_00077CC2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077CD9u); RECOMP_ABI_CALL(0x00164740u, sub_00164740); /* call 0x00164740 */

loc_00077CD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077D67; /* je: equal / zero */

loc_00077CE1: ;
    edx = MEM32(edi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00077CEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077CEAu); } /* indirect call */
    }

loc_00077CED: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    edx = MEM32(edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00077D2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077D28u); } /* indirect call */
    }

loc_00077D2B: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x30D954); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00077D67: ;
    PUSH32(esp, 0x660E4490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077D71u); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_00077D71: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00077D80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077D7Du); } /* indirect call */
    }

loc_00077D80: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x14); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x10); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0xC); /* subss */
    ecx = esp + 0x18;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077DB8u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00077DB8: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077DC5u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00077DC5: ;
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC8AC); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
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
 * sub_00077DF0
 * Original: 0x00077DF0 - 0x00077EE9 (249 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00077DF0(void)
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

loc_00077DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2E55DC)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = 0;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x00077E1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077E18u); } /* indirect call */
    }

loc_00077E1E: ;
    ecx = MEM32(esi + 8);
    MEM8(ecx + 0x50) = 1;
    edx = MEM32(esi + 8);
    edi = MEM32(edx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077E48; /* je: equal / zero */

loc_00077E2F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00077E36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077E33u); } /* indirect call */
    }

loc_00077E36: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077E4A; /* je: equal / zero */

loc_00077E48: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00077E4A: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x00077E54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077E4Eu); } /* indirect call */
    }

loc_00077E54: ;
    eax = MEM32(eax + 0x8BC);
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077E68u); RECOMP_ABI_CALL(0x00164740u, sub_00164740); /* call 0x00164740 */

loc_00077E68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077ED1; /* je: equal / zero */

loc_00077E6C: ;
    edx = MEM32(edi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00077E78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077E75u); } /* indirect call */
    }

loc_00077E78: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    ecx = esp + 0x18;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077EB3u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00077EB3: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00077EBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077EBBu); } /* indirect call */
    }

loc_00077EBE: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x14) - fp_top()); /* fsubr dword ptr [esp + 0x14] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00077ECBu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00077ECB: ;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00077ED1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC8AC); /* addss */
    POP32(esp, edi);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
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
 * sub_00077EF0
 * Original: 0x00077EF0 - 0x00077F09 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00077EF0: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00077EFAu); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_00077EFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00077F08; /* je: equal / zero */

loc_00077F01: ;
    MEM8(eax + 0xD1B) = 1;

loc_00077F08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00077F10
 * Original: 0x00077F10 - 0x000780FF (495 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00077F10(void)
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

loc_00077F10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00077F3C; /* jne: not equal / not zero */

loc_00077F1D: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x598)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca > _fcb)) goto loc_000780FA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00077F32: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC084)); /* movss */
    goto loc_00077FA6;

loc_00077F3C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077F60; /* jne: not equal / not zero */

loc_00077F41: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x598)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC350); /* comiss */
    if ((_fca > _fcb)) goto loc_000780FA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC350)) */

loc_00077F56: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD6F4)); /* movss */
    goto loc_00077FA6;

loc_00077F60: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077F84; /* jne: not equal / not zero */

loc_00077F65: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x598)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD448); /* comiss */
    if ((_fca > _fcb)) goto loc_000780FA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DD448)) */

loc_00077F7A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E44D8)); /* movss */
    goto loc_00077FA6;

loc_00077F84: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00077FAE; /* jne: not equal / not zero */

loc_00077F89: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x598)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD6F8); /* comiss */
    if ((_fca > _fcb)) goto loc_000780FA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DD6F8)) */

loc_00077F9E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E55E0)); /* movss */

loc_00077FA6: ;
    MEMF(edi + 0x598) = xmm0.f[0]; /* movss */

loc_00077FAE: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00077FB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00077FB5u); } /* indirect call */
    }

loc_00077FB8: ;
    eax = MEM32(eax + 0xF4);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000780C7; /* ja: above (unsigned >) */

loc_00077FCA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x78100); /* switch: 36 entries, 29 targets */
    if (_jt == 0x00077FD1u) goto loc_00077FD1;
    if (_jt == 0x00077FE1u) goto loc_00077FE1;
    if (_jt == 0x00077FEBu) goto loc_00077FEB;
    if (_jt == 0x00077FF5u) goto loc_00077FF5;
    if (_jt == 0x00077FFFu) goto loc_00077FFF;
    if (_jt == 0x00078009u) goto loc_00078009;
    if (_jt == 0x00078013u) goto loc_00078013;
    if (_jt == 0x0007801Du) goto loc_0007801D;
    if (_jt == 0x0007802Du) goto loc_0007802D;
    if (_jt == 0x00078037u) goto loc_00078037;
    if (_jt == 0x00078041u) goto loc_00078041;
    if (_jt == 0x00078048u) goto loc_00078048;
    if (_jt == 0x0007804Fu) goto loc_0007804F;
    if (_jt == 0x00078056u) goto loc_00078056;
    if (_jt == 0x0007805Du) goto loc_0007805D;
    if (_jt == 0x00078069u) goto loc_00078069;
    if (_jt == 0x00078070u) goto loc_00078070;
    if (_jt == 0x00078077u) goto loc_00078077;
    if (_jt == 0x0007807Eu) goto loc_0007807E;
    if (_jt == 0x00078085u) goto loc_00078085;
    if (_jt == 0x0007808Cu) goto loc_0007808C;
    if (_jt == 0x00078093u) goto loc_00078093;
    if (_jt == 0x0007809Fu) goto loc_0007809F;
    if (_jt == 0x000780A6u) goto loc_000780A6;
    if (_jt == 0x000780ADu) goto loc_000780AD;
    if (_jt == 0x000780B4u) goto loc_000780B4;
    if (_jt == 0x000780BBu) goto loc_000780BB;
    if (_jt == 0x000780C2u) goto loc_000780C2;
    if (_jt == 0x000780C7u) goto loc_000780C7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00077FD1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000780C7; /* ja: above (unsigned >) */

loc_00077FDA: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x78110); /* switch: 32 entries, 25 targets */
    if (_jt == 0x00077FE1u) goto loc_00077FE1;
    if (_jt == 0x00077FEBu) goto loc_00077FEB;
    if (_jt == 0x00077FF5u) goto loc_00077FF5;
    if (_jt == 0x00077FFFu) goto loc_00077FFF;
    if (_jt == 0x00078009u) goto loc_00078009;
    if (_jt == 0x00078013u) goto loc_00078013;
    if (_jt == 0x0007802Du) goto loc_0007802D;
    if (_jt == 0x00078037u) goto loc_00078037;
    if (_jt == 0x00078041u) goto loc_00078041;
    if (_jt == 0x00078048u) goto loc_00078048;
    if (_jt == 0x0007804Fu) goto loc_0007804F;
    if (_jt == 0x00078056u) goto loc_00078056;
    if (_jt == 0x00078069u) goto loc_00078069;
    if (_jt == 0x00078070u) goto loc_00078070;
    if (_jt == 0x00078077u) goto loc_00078077;
    if (_jt == 0x0007807Eu) goto loc_0007807E;
    if (_jt == 0x00078085u) goto loc_00078085;
    if (_jt == 0x0007808Cu) goto loc_0007808C;
    if (_jt == 0x0007809Fu) goto loc_0007809F;
    if (_jt == 0x000780A6u) goto loc_000780A6;
    if (_jt == 0x000780ADu) goto loc_000780AD;
    if (_jt == 0x000780B4u) goto loc_000780B4;
    if (_jt == 0x000780BBu) goto loc_000780BB;
    if (_jt == 0x000780C2u) goto loc_000780C2;
    if (_jt == 0x000780C7u) goto loc_000780C7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00077FE1: ;
    esi = 0x23F08077;
    goto loc_000780C7;

loc_00077FEB: ;
    esi = 0xD24E4223u;
    goto loc_000780C7;

loc_00077FF5: ;
    esi = 0x37EB21A2;
    goto loc_000780C7;

loc_00077FFF: ;
    esi = 0x2C40CC41;
    goto loc_000780C7;

loc_00078009: ;
    esi = 0xADB4600;
    goto loc_000780C7;

loc_00078013: ;
    esi = 0xE18102E7u;
    goto loc_000780C7;

loc_0007801D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000780C7; /* ja: above (unsigned >) */

loc_00078026: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x78130); /* switch: 24 entries, 19 targets */
    if (_jt == 0x0007802Du) goto loc_0007802D;
    if (_jt == 0x00078037u) goto loc_00078037;
    if (_jt == 0x00078041u) goto loc_00078041;
    if (_jt == 0x00078048u) goto loc_00078048;
    if (_jt == 0x0007804Fu) goto loc_0007804F;
    if (_jt == 0x00078056u) goto loc_00078056;
    if (_jt == 0x00078069u) goto loc_00078069;
    if (_jt == 0x00078070u) goto loc_00078070;
    if (_jt == 0x00078077u) goto loc_00078077;
    if (_jt == 0x0007807Eu) goto loc_0007807E;
    if (_jt == 0x00078085u) goto loc_00078085;
    if (_jt == 0x0007808Cu) goto loc_0007808C;
    if (_jt == 0x0007809Fu) goto loc_0007809F;
    if (_jt == 0x000780A6u) goto loc_000780A6;
    if (_jt == 0x000780ADu) goto loc_000780AD;
    if (_jt == 0x000780B4u) goto loc_000780B4;
    if (_jt == 0x000780BBu) goto loc_000780BB;
    if (_jt == 0x000780C2u) goto loc_000780C2;
    if (_jt == 0x000780C7u) goto loc_000780C7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007802D: ;
    esi = 0x4D1E4B71;
    goto loc_000780C7;

loc_00078037: ;
    esi = 0xE8B2E29Du;
    goto loc_000780C7;

loc_00078041: ;
    esi = 0x4507B146;
    goto loc_000780C7;

loc_00078048: ;
    esi = 0xC1928AAFu;
    goto loc_000780C7;

loc_0007804F: ;
    esi = 0xBDE6C238u;
    goto loc_000780C7;

loc_00078056: ;
    esi = 0x91086959u;
    goto loc_000780C7;

loc_0007805D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000780C7; /* ja: above (unsigned >) */

loc_00078062: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x78150); /* switch: 16 entries, 13 targets */
    if (_jt == 0x00078069u) goto loc_00078069;
    if (_jt == 0x00078070u) goto loc_00078070;
    if (_jt == 0x00078077u) goto loc_00078077;
    if (_jt == 0x0007807Eu) goto loc_0007807E;
    if (_jt == 0x00078085u) goto loc_00078085;
    if (_jt == 0x0007808Cu) goto loc_0007808C;
    if (_jt == 0x0007809Fu) goto loc_0007809F;
    if (_jt == 0x000780A6u) goto loc_000780A6;
    if (_jt == 0x000780ADu) goto loc_000780AD;
    if (_jt == 0x000780B4u) goto loc_000780B4;
    if (_jt == 0x000780BBu) goto loc_000780BB;
    if (_jt == 0x000780C2u) goto loc_000780C2;
    if (_jt == 0x000780C7u) goto loc_000780C7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00078069: ;
    esi = 0xC00D32CEu;
    goto loc_000780C7;

loc_00078070: ;
    esi = 0x5C050A11;
    goto loc_000780C7;

loc_00078077: ;
    esi = 0xD6A5CC3Au;
    goto loc_000780C7;

loc_0007807E: ;
    esi = 0x6D3EBECF;
    goto loc_000780C7;

loc_00078085: ;
    esi = 0xCA61FEC5u;
    goto loc_000780C7;

loc_0007808C: ;
    esi = 0xB83D3A18u;
    goto loc_000780C7;

loc_00078093: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000780C7; /* ja: above (unsigned >) */

loc_00078098: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x78170); /* switch: 8 entries, 7 targets */
    if (_jt == 0x0007809Fu) goto loc_0007809F;
    if (_jt == 0x000780A6u) goto loc_000780A6;
    if (_jt == 0x000780ADu) goto loc_000780AD;
    if (_jt == 0x000780B4u) goto loc_000780B4;
    if (_jt == 0x000780BBu) goto loc_000780BB;
    if (_jt == 0x000780C2u) goto loc_000780C2;
    if (_jt == 0x000780C7u) goto loc_000780C7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0007809F: ;
    esi = 0xAE67C726u;
    goto loc_000780C7;

loc_000780A6: ;
    esi = 0x3DB87125;
    goto loc_000780C7;

loc_000780AD: ;
    esi = 0xD8674013u;
    goto loc_000780C7;

loc_000780B4: ;
    esi = 0x5D18353E;
    goto loc_000780C7;

loc_000780BB: ;
    esi = 0x5B9C3721;
    goto loc_000780C7;

loc_000780C2: ;
    esi = 0x69667A54;

loc_000780C7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x5C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x5C4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000780E2; /* jne: not equal / not zero */

loc_000780CF: ;
    ecx = MEM32(edi + 0x5C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000780DBu); RECOMP_ABI_CALL(0x001FEDB0u, sub_001FEDB0); /* call 0x001FEDB0 */

loc_000780DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000780F9; /* jne: not equal / not zero */

loc_000780E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000780EAu); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_000780EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x5C0) = eax;
    MEM32(edi + 0x5C4) = esi;

loc_000780F9: ;
    POP32(esp, esi);

loc_000780FA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00078190
 * Original: 0x00078190 - 0x000781B9 (41 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00078190: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000781B5; /* je: equal / zero */

loc_00078198: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0007819Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0007819Cu); } /* indirect call */
    }

loc_0007819F: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000781B5; /* jne: not equal / not zero */

loc_000781B1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000781B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000781C0
 * Original: 0x000781C0 - 0x000781C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000781C0(void)
{

loc_000781C0: ;
    eax = MEM32(0x30D95C);
    esp += 4; return; /* ret */

}

/**
 * sub_000781D0
 * Original: 0x000781D0 - 0x00078211 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000781D0(void)
{

loc_000781D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x000781EAu); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_000781EA: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E55E4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00078220
 * Original: 0x00078220 - 0x00078261 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078220(void)
{

loc_00078220: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x0007823Au); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_0007823A: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E55F4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00078270
 * Original: 0x00078270 - 0x000782B1 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00078270(void)
{

loc_00078270: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x0007828Au); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_0007828A: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E5604;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000782C0
 * Original: 0x000782C0 - 0x00078301 (65 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000782C0(void)
{

loc_000782C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x2DE974;
    PUSH32(esp, 0x000782DAu); RECOMP_ABI_CALL(0x000640C0u, sub_000640C0); /* call 0x000640C0 */

loc_000782DA: ;
    eax = MEM32(ebx + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx + 0x38);
    MEM32(esi + 0x38) = edx;
    MEM32(edi + 0x40) = eax;
    MEM32(edi) = 0x2E5614;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
