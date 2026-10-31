/**
 * Mercenaries - Recompiled code chunk 34
 * Functions: 250 (0x001BC480 - 0x001C6720)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001BC480
 * Original: 0x001BC480 - 0x001BC51D (157 bytes, 56 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BC480(void)
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

loc_001BC480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x14);
    xmm0 = XMM_MEM(eax); /* movaps */
    edx = MEM32(ebp + 8);
    xmm1 = XMM_MEM(edx); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_MEM(ecx); /* movaps */
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    eax = esp + 8;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BC4EA; /* jne: not equal / not zero */

loc_001BC4D9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001BC504; /* jp: parity */

loc_001BC4E2: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    goto loc_001BC504;

loc_001BC4EA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2F7FF8)); /* fadd dword ptr [0x2f7ff8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BC4FD; /* jne: not equal / not zero */

loc_001BC4F9: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001BC4FF;

loc_001BC4FD: ;
    fp_pop(); /* fstp st(0) */

loc_001BC4FF: ;
    edx = 2;

loc_001BC504: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    eax = 4;
    if (TEST_Z(_fa, _fb)) goto loc_001BC516; /* je: equal / zero */

loc_001BC514: ;
    eax = edx;

loc_001BC516: ;
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
 * sub_001BC520
 * Original: 0x001BC520 - 0x001BC58B (107 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BC520: ;
    edx = MEM32(ecx + 0x1B4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_001BC558; /* jle: less or equal (signed <=) */

loc_001BC530: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001BC540;

    /* nop */
    goto loc_001BC540;

    /* nop */

loc_001BC540: ;
    esi = MEM32(ecx + 0x1B0);
    MEM8(edx + esi + 0x44) = LO8(ebx);
    esi = MEM32(ecx + 0x1B4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC540; /* jl: less (signed <) */

loc_001BC558: ;
    edx = MEM32(ecx + 0x2104);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BC588; /* jle: less or equal (signed <=) */

loc_001BC564: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001BC570;

    /* nop */
    /* nop */

loc_001BC570: ;
    esi = MEM32(ecx + 0x2100);
    MEM32(esi + edx + 0x10) = ebx;
    esi = MEM32(ecx + 0x2104);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC570; /* jl: less (signed <) */

loc_001BC588: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BC590
 * Original: 0x001BC590 - 0x001BC657 (199 bytes, 74 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC590: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_001BC5B0: ;
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(ecx);
    esi = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC5FC; /* jne: not equal / not zero */

loc_001BC5C0: ;
    eax = MEM32(esp + 0x28);
    edx = edi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001BC5D1u); RECOMP_ABI_CALL(0x001BC480u, sub_001BC480); /* call 0x001BC480 */

loc_001BC5D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(esi + 0x44) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001BC5F8; /* jne: not equal / not zero */

loc_001BC5D8: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001BC5EFu); RECOMP_ABI_CALL(0x001BC590u, sub_001BC590); /* call 0x001BC590 */

loc_001BC5EF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC634; /* je: equal / zero */

loc_001BC5F6: ;
    goto loc_001BC5FC;

loc_001BC5F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC62F; /* je: equal / zero */

loc_001BC5FC: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x44), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC614; /* jne: not equal / not zero */

loc_001BC602: ;
    ecx = MEM32(ebp);
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 0x10) = ebp;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ebp;

loc_001BC614: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001BC5B0; /* jl: less (signed <) */

loc_001BC62D: ;
    goto loc_001BC634;

loc_001BC62F: ;
    ebx = 2;

loc_001BC634: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax + 0x10) = 0x7F7FFFFF;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(edi + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001BC660
 * Original: 0x001BC660 - 0x001BC6D5 (117 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC660: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BC6CF; /* je: equal / zero */

loc_001BC673: ;
    PUSH32(esp, ebp);

loc_001BC674: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC697; /* jl: less (signed <) */

loc_001BC678: ;
    edi = MEM32(ecx + 8);
    edi = MEM32(edi + edx * 4);
    ebx = MEM32(eax + 4);
    ebp = MEM32(eax);
    MEM32(ebp + ebx * 4) = edi;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ecx + 0xC);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ecx + 0xC) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001BC674; /* jne: not equal / not zero */

loc_001BC697: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_001BC6CF; /* jle: less or equal (signed <=) */

loc_001BC69C: ;
    /* nop */

loc_001BC6A0: ;
    edx = MEM32(ecx + 0x1B4);
    ebx = MEM32(ecx + 0x1B0);
    edi = edx + 1;
    MEM32(ecx + 0x1B4) = edi;
    edi = MEM32(eax + 4);
    edx = edx + edx * 4;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    MEM32(ebx + edi * 4) = edx;
    edi = MEM32(eax + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edi;
    if ((_fa != 0)) goto loc_001BC6A0; /* jne: not equal / not zero */

loc_001BC6CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BC6E0
 * Original: 0x001BC6E0 - 0x001BC7CB (235 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BC6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BC6E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x24);
    xmm1 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ecx + 0x14);
    xmm0 = XMM_MEM(eax); /* movaps */
    edx = MEM32(ecx + 0x34);
    xmm2 = XMM_MEM(edx); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_SUB(xmm1, xmm2); /* subps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xD2); /* shufps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xC9); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xD2); /* shufps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm3); /* subps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0xC) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    XMM_STORE(ecx, xmm1); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    eax = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x10) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001BC7D0
 * Original: 0x001BC7D0 - 0x001BC8E1 (273 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BC7D0(void)
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

loc_001BC7D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BC7E1u); RECOMP_ABI_CALL(0x001BC520u, sub_001BC520); /* call 0x001BC520 */

loc_001BC7E1: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x18) = LO8(ebx);
    /* nop */

loc_001BC7F0: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC8D6; /* jne: not equal / not zero */

loc_001BC7FC: ;
    MEM8(esi + 0x44) = 3;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x14;

loc_001BC805: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BC8A9; /* je: equal / zero */

loc_001BC80D: ;
    eax = MEM32(ecx);
    xmm2 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ecx + 4);
    edx = MEM32(eax);
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xC9); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xD2); /* shufps */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xD2); /* shufps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm4); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    eax = esp + 0x1C;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F2D68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f2d68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001BC8A9; /* jp: parity */

loc_001BC87A: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    edx = MEM32(ecx + 8);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    edx = MEM32(edx + 0xC);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BC8B8; /* jne: not equal / not zero */

loc_001BC893: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3E4)); /* fmul dword ptr [0x2dc3e4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BC8B8; /* jne: not equal / not zero */

loc_001BC8A9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC805; /* jl: less (signed <) */

loc_001BC8B6: ;
    goto loc_001BC8CD;

loc_001BC8B8: ;
    SET_LO8(eax, MEM8(edx + 0x44));
    ecx = edi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ecx + esi + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    esi = edx;
    MEM8(esp + 0x18) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */

loc_001BC8CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BC7F0; /* jne: not equal / not zero */

loc_001BC8D6: ;
    POP32(esp, edi);
    eax = esi;
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
 * sub_001BC8F0
 * Original: 0x001BC8F0 - 0x001BC955 (101 bytes, 40 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC8F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(ebx) = 0;
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(ebp) = 0;
    MEM32(eax) = 0x7F7FFFFF;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi) = 0x3727C5AC;
    PUSH32(esp, 0x001BC92Cu); RECOMP_ABI_CALL(0x001BC480u, sub_001BC480); /* call 0x001BC480 */

loc_001BC92C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(edi + 0x44) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001BC949; /* jne: not equal / not zero */

loc_001BC933: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001BC942u); RECOMP_ABI_CALL(0x001BC590u, sub_001BC590); /* call 0x001BC590 */

loc_001BC942: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001BC949: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001BC960
 * Original: 0x001BC960 - 0x001BCA27 (199 bytes, 71 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BC960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BC960: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001BCA09; /* jle: less or equal (signed <=) */

loc_001BC984: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_001BC986: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCA02; /* je: equal / zero */

loc_001BC98A: ;
    edi = MEM32(ecx);
    ecx = MEM32(edi + eax * 4);
    ebx = eax + 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_001BC9A0; /* jge: greater or equal (signed >=) */

loc_001BC99A: ;
    ebx = MEM32(edi + eax * 4 + 4);
    goto loc_001BC9A2;

loc_001BC9A0: ;
    ebx = MEM32(edi);

loc_001BC9A2: ;
    MEM32(ecx + 0x20) = ecx;
    MEM32(ecx + 0x30) = ecx;
    MEM32(ecx + 0x40) = ecx;
    eax = ecx + 0x34;
    MEM32(ecx + 0x28) = eax;
    edx = ecx + 0x14;
    MEM32(ecx + 0x38) = edx;
    edi = ecx + 0x24;
    MEM32(ecx + 0x18) = edi;
    ebp = MEM32(esi + 4);
    ebp = MEM32(ebp);
    MEM32(edx) = ebp;
    ebp = MEM32(esi);
    MEM32(edi) = ebp;
    edi = MEM32(esp + 0x2C);
    edi = MEM32(edi);
    MEM32(eax) = edi;
    MEM32(esi + 8) = edx;
    MEM32(ecx + 0x1C) = esi;
    MEM32(ebx + 0x2C) = eax;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x3C) = ebx;
    PUSH32(esp, 0x001BC9E5u); RECOMP_ABI_CALL(0x001BC6E0u, sub_001BC6E0); /* call 0x001BC6E0 */

loc_001BC9E5: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    esi = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BC986; /* jl: less (signed <) */

loc_001BC9FC: ;
    edi = MEM32(esp + 0x14);
    goto loc_001BCA07;

loc_001BCA02: ;
    edi = 2;

loc_001BCA07: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001BCA09: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x001BCA12u); RECOMP_ABI_CALL(0x001BC520u, sub_001BC520); /* call 0x001BC520 */

loc_001BCA12: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), esi (32-bit) */
    eax = 2;
    if (CMP_NE(_fa, _fb)) goto loc_001BCA1F; /* jne: not equal / not zero */

loc_001BCA1D: ;
    eax = edi;

loc_001BCA1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001BCA30
 * Original: 0x001BCA30 - 0x001BCB74 (324 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BCA30(void)
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

loc_001BCA30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1B0);
    MEM32(esi + 0x1B4) = 4;
    eax = MEM32(esi + 0x1B4);
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    edx = 0x2F8008;
    if (CMP_EQ(_fa, _fb)) goto loc_001BCACB; /* je: equal / zero */

loc_001BCA65: ;
    eax = ecx + 0x24;
    MEM32(ecx + 0x18) = eax;
    eax = ecx + 0x34;
    edi = ecx + 0x44;
    MEM32(ecx + 0x28) = eax;
    eax = ecx + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(edi) = 0;
    MEM32(ecx + 0x38) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001BCAB0; /* jae: above or equal (unsigned >=) */

loc_001BCA81: ;
    MEM32(eax + 0xC) = ecx;
    edi = MEM32(edx);
    _fb = (uint32_t)(MEM32(esi + 0x2100)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + 0x2100);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    ebx = MEM32(edx + 4);
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esi + 0x1B0);
    edi = edi + ebx + 0x14;
    MEM32(eax + 8) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + 0x44;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BCA81; /* jb: below (unsigned <) */

loc_001BCAB0: ;
    eax = MEM32(esi + 0x1B4);
    ebx = MEM32(esi + 0x1B0);
    eax = eax + eax * 4;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BCA65; /* jne: not equal / not zero */

loc_001BCACB: ;
    ecx = MEM32(esi + 0x1B0);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BCADCu); RECOMP_ABI_CALL(0x001BC6E0u, sub_001BC6E0); /* call 0x001BC6E0 */

loc_001BCADC: ;
    eax = MEM32(esi + 0x2100);
    xmm2 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    ecx = MEM32(esi + 0x1B0);
    xmm1 = XMM_MEM(ecx + 0xF0); /* movaps */
    edx = eax + 0x20;
    xmm2 = XMM_SUB(xmm2, xmm0); /* subps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001BCB4F; /* jne: not equal / not zero */

loc_001BCB31: ;
    MEM32(ecx + 0xB4) = edx;
    MEM32(ecx + 0x64) = edx;
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(esi + 0x2100);
    MEM32(ecx + 0x104) = eax;
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x34) = eax;

loc_001BCB4F: ;
    esi = MEM32(esi + 0x1B0);
    edi = 4;
    /* nop */

loc_001BCB60: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BCB67u); RECOMP_ABI_CALL(0x001BC6E0u, sub_001BC6E0); /* call 0x001BC6E0 */

loc_001BCB67: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BCB60; /* jne: not equal / not zero */

loc_001BCB6D: ;
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
 * sub_001BCB80
 * Original: 0x001BCB80 - 0x001BCC26 (166 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BCB80: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x2104);
    edx = eax + 1;
    MEM32(ecx + 0x2104) = edx;
    edx = MEM32(esp + 0x1AC);
    xmm0 = XMM_MEM(edx); /* movaps */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x2100);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 0x1A8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = edx;
    XMM_STORE(eax, xmm0); /* movaps */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 4) = eax;
    PUSH32(esp, esi);
    edx = esp + 0xC;
    eax = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = 0x80000064u;
    PUSH32(esp, 0x001BCBDDu); RECOMP_ABI_CALL(0x001BC660u, sub_001BC660); /* call 0x001BC660 */

loc_001BCBDD: ;
    edx = MEM32(esp + 0x1AC);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BCBF5u); RECOMP_ABI_CALL(0x001BC960u, sub_001BC960); /* call 0x001BC960 */

loc_001BCBF5: ;
    esi = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BCC1A; /* js: sign (negative) */

loc_001BCBFF: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BCC1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCC17u); } /* indirect call */
    }

loc_001BCC1A: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1A0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BCC30
 * Original: 0x001BCC30 - 0x001BCC3D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCC30(void)
{

loc_001BCC30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCC40
 * Original: 0x001BCC40 - 0x001BCC58 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCC40(void)
{

loc_001BCC40: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCC60
 * Original: 0x001BCC60 - 0x001BCC78 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BCC60: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCC75; /* je: equal / zero */

loc_001BCC67: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_001BCC75: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCC80
 * Original: 0x001BCC80 - 0x001BCC87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCC80(void)
{

loc_001BCC80: ;
    MEM32(ecx) = 0x2F8098;
    esp += 4; return; /* ret */

}

/**
 * sub_001BCC90
 * Original: 0x001BCC90 - 0x001BCCAF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BCC90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2F8098;
    if (TEST_Z(_fa, _fb)) goto loc_001BCCA9; /* je: equal / zero */

loc_001BCCA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BCCA6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_001BCCA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BCCA9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCCB0
 * Original: 0x001BCCB0 - 0x001BCD4C (156 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BCCB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2454AF);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x2F80B8;
    MEM32(esi + 8) = 0x2F80A8;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001BCD05; /* je: equal / zero */

loc_001BCCEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BCCF1u); RECOMP_ABI_CALL(0x001C2940u, sub_001C2940); /* call 0x001C2940 */

loc_001BCCF1: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BCD05; /* jne: not equal / not zero */

loc_001BCCFF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BCD05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCD03u); } /* indirect call */
    }

loc_001BCD05: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCD26; /* je: equal / zero */

loc_001BCD0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BCD12u); RECOMP_ABI_CALL(0x001C2940u, sub_001C2940); /* call 0x001C2940 */

loc_001BCD12: ;
    ecx = MEM32(esi + 0x10);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BCD26; /* jne: not equal / not zero */

loc_001BCD20: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001BCD26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCD24u); } /* indirect call */
    }

loc_001BCD26: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2F8098;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001BCD3Cu); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_001BCD3C: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BCD50
 * Original: 0x001BCD50 - 0x001BCD58 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BCD50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001BCE00(); return; /* tail jmp 0x001BCE00 */

}

/**
 * sub_001BCD60
 * Original: 0x001BCD60 - 0x001BCDA1 (65 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BCD60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001BCD78; /* je: equal / zero */

loc_001BCD6C: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001BCD78u); RECOMP_ABI_CALL(0x001C2AC0u, sub_001C2AC0); /* call 0x001C2AC0 */

loc_001BCD78: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCD99; /* je: equal / zero */

loc_001BCD7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BCD85u); RECOMP_ABI_CALL(0x001C2940u, sub_001C2940); /* call 0x001C2940 */

loc_001BCD85: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BCD99; /* jne: not equal / not zero */

loc_001BCD93: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BCD99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCD97u); } /* indirect call */
    }

loc_001BCD99: ;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCDB0
 * Original: 0x001BCDB0 - 0x001BCDF1 (65 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BCDB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001BCDC8; /* je: equal / zero */

loc_001BCDBC: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001BCDC8u); RECOMP_ABI_CALL(0x001C2AC0u, sub_001C2AC0); /* call 0x001C2AC0 */

loc_001BCDC8: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCDE9; /* je: equal / zero */

loc_001BCDCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BCDD5u); RECOMP_ABI_CALL(0x001C2940u, sub_001C2940); /* call 0x001C2940 */

loc_001BCDD5: ;
    ecx = MEM32(esi + 0x10);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BCDE9; /* jne: not equal / not zero */

loc_001BCDE3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BCDE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCDE7u); } /* indirect call */
    }

loc_001BCDE9: ;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCE00
 * Original: 0x001BCE00 - 0x001BCE28 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BCE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001BCE08u); RECOMP_ABI_CALL(0x001BCCB0u, sub_001BCCB0); /* call 0x001BCCB0 */

loc_001BCE08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BCE22; /* je: equal / zero */

loc_001BCE0F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001BCE22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCE1Fu); } /* indirect call */
    }

loc_001BCE22: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCE30
 * Original: 0x001BCE30 - 0x001BCF0A (218 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BCE30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2454D3);
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
    MEM16(esi + 6) = 1;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esi + 8) = 0x2F8098;
    ebx = MEM32(esp + 0x24);
    MEM32(esi) = 0x2F80B8;
    MEM32(esi + 8) = 0x2F80A8;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ebp;
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x1C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001BCE94; /* je: equal / zero */

loc_001BCE88: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001BCE94u); RECOMP_ABI_CALL(0x001C2AC0u, sub_001C2AC0); /* call 0x001C2AC0 */

loc_001BCE94: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCEB4; /* je: equal / zero */

loc_001BCE9B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BCEA1u); RECOMP_ABI_CALL(0x001C2940u, sub_001C2940); /* call 0x001C2940 */

loc_001BCEA1: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BCEB4; /* jne: not equal / not zero */

loc_001BCEAE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BCEB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCEB2u); } /* indirect call */
    }

loc_001BCEB4: ;
    MEM32(esi + 0xC) = edi;
    edi = MEM32(ebx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCECA; /* je: equal / zero */

loc_001BCEBE: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001BCECAu); RECOMP_ABI_CALL(0x001C2AC0u, sub_001C2AC0); /* call 0x001C2AC0 */

loc_001BCECA: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BCEEA; /* je: equal / zero */

loc_001BCED1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BCED7u); RECOMP_ABI_CALL(0x001C2940u, sub_001C2940); /* call 0x001C2940 */

loc_001BCED7: ;
    ecx = MEM32(esi + 0x10);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BCEEA; /* jne: not equal / not zero */

loc_001BCEE4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001BCEEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCEE8u); } /* indirect call */
    }

loc_001BCEEA: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x10) = edi;
    eax = MEM32(ebx + 8);
    MEM32(esi + 0x18) = eax;
    POP32(esp, edi);
    eax = esi;
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
 * sub_001BCF10
 * Original: 0x001BCF10 - 0x001BCF2A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCF10(void)
{

loc_001BCF10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x1D);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BCF28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCF25u); } /* indirect call */
    }

loc_001BCF28: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BCF30
 * Original: 0x001BCF30 - 0x001BCF56 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BCF30: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2F80E8;
    if (TEST_Z(_fa, _fb)) goto loc_001BCF50; /* je: equal / zero */

loc_001BCF40: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001BCF50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCF4Du); } /* indirect call */
    }

loc_001BCF50: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCF60
 * Original: 0x001BCF60 - 0x001BCF7A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCF60(void)
{

loc_001BCF60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x2D);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BCF78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCF75u); } /* indirect call */
    }

loc_001BCF78: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BCF80
 * Original: 0x001BCF80 - 0x001BCF98 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCF80(void)
{

loc_001BCF80: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001BCF97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCF94u); } /* indirect call */
    }

loc_001BCF97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BCFA0
 * Original: 0x001BCFA0 - 0x001BCFA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCFA0(void)
{

loc_001BCFA0: ;
    eax = MEM32(ecx + 0xC0);
    esp += 4; return; /* ret */

}

/**
 * sub_001BCFB0
 * Original: 0x001BCFB0 - 0x001BCFDE (46 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BCFB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx;
    ecx = MEM32(esi + 0x250);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BCFD3; /* jne: not equal / not zero */

loc_001BCFCD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BCFD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BCFD1u); } /* indirect call */
    }

loc_001BCFD3: ;
    MEM32(esi + 0x250) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BCFE0
 * Original: 0x001BCFE0 - 0x001BD105 (293 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BCFE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001BCFE0: ;
    xmm0 = XMM_MEM(ecx + 0xE0); /* movaps */
    eax = MEM32(esp + 4);
    XMM_STORE(eax, xmm0); /* movaps */
    SET_LO8(edx, MEM8(ecx + 0x23C));
    MEM8(eax + 0x10) = LO8(edx);
    xmm0 = XMM_MEM(ecx + 0x210); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x220); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    edx = MEM32(ecx + 0x234);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x230);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x164);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x168);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0x17C);
    MEM32(eax + 0x4C) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 4);
    MEM32(eax + 0x68) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x6C) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x70) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    SET_LO8(edx, MEM8(edx));
    MEM8(eax + 0x64) = LO8(edx);
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    SET_LO8(edx, MEM8(edx + 0x14));
    MEM8(eax + 0x78) = LO8(edx);
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x18);
    MEM32(eax + 0x7C) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x1C);
    MEM32(eax + 0x80) = edx;
    SET_LO8(edx, MEM8(ecx + 0x23E));
    MEM8(eax + 0x50) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x23F));
    MEM8(eax + 0x51) = LO8(edx);
    edx = MEM32(ecx + 0x244);
    MEM32(eax + 0x54) = edx;
    fp_push(MEMF(ecx + 0x248)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x244)); /* fdiv dword ptr [ecx + 0x244] */
    MEMF(eax + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x24C);
    MEM32(eax + 0x5C) = edx;
    SET_LO8(edx, MEM8(ecx + 0x23D));
    MEM8(eax + 0x84) = LO8(edx);
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x88) = edx;
    ecx = MEM32(ecx + 0x34);
    MEM32(eax + 0x8C) = ecx;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BD110
 * Original: 0x001BD110 - 0x001BD17E (110 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001BD110: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0xE0, xmm0); /* movaps */
    edx = MEM32(eax + 0x44);
    MEM32(ecx + 0x164) = edx;
    edx = MEM32(eax + 0x48);
    MEM32(ecx + 0x168) = edx;
    fp_push(MEMF(eax + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(ecx + 0x16C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0x4C);
    MEM32(ecx + 0x17C) = edx;
    fp_push((double)SMEM32(eax + 0x4C)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    MEMF(ecx + 0x180) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x1AC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x178);
    MEM32(ecx + 0x1A8) = edx;
    edx = MEM32(eax + 0x88);
    MEM32(ecx + 0x30) = edx;
    eax = MEM32(eax + 0x8C);
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BD180
 * Original: 0x001BD180 - 0x001BD1B6 (54 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BD18Cu); RECOMP_ABI_CALL(0x001C9C00u, sub_001C9C00); /* call 0x001C9C00 */

loc_001BD18C: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD198u); RECOMP_ABI_CALL(0x001C85B0u, sub_001C85B0); /* call 0x001C85B0 */

loc_001BD198: ;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    MEM32(esi + 0xC) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001BD1B2; /* jne: not equal / not zero */

loc_001BD1AA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BD1B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD1B0u); } /* indirect call */
    }

loc_001BD1B2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD1C0
 * Original: 0x001BD1C0 - 0x001BD20B (75 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD1C0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x94);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001BD1E4; /* jle: less or equal (signed <=) */

loc_001BD1CE: ;
    edx = MEM32(ecx + 0x90);
    edi = MEM32(esp + 0xC);

loc_001BD1D8: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BD1F9; /* je: equal / zero */

loc_001BD1DC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BD1D8; /* jl: less (signed <) */

loc_001BD1E4: ;
    edx = MEM32(ecx + 0x90);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001BD1F9: ;
    ecx = MEM32(ecx + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD210
 * Original: 0x001BD210 - 0x001BD25B (75 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD210: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x88);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001BD234; /* jle: less or equal (signed <=) */

loc_001BD21E: ;
    edx = MEM32(ecx + 0x84);
    edi = MEM32(esp + 0xC);

loc_001BD228: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BD249; /* je: equal / zero */

loc_001BD22C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BD228; /* jl: less (signed <) */

loc_001BD234: ;
    edx = MEM32(ecx + 0x84);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001BD249: ;
    ecx = MEM32(ecx + 0x84);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD260
 * Original: 0x001BD260 - 0x001BD29F (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD260: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x70);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001BD27E; /* jle: less or equal (signed <=) */

loc_001BD26B: ;
    edx = MEM32(ecx + 0x6C);
    edi = MEM32(esp + 0xC);

loc_001BD272: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BD290; /* je: equal / zero */

loc_001BD276: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BD272; /* jl: less (signed <) */

loc_001BD27E: ;
    edx = MEM32(ecx + 0x6C);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001BD290: ;
    ecx = MEM32(ecx + 0x6C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD2A0
 * Original: 0x001BD2A0 - 0x001BD2B7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD2A0(void)
{

loc_001BD2A0: ;
    eax = ecx;
    MEM32(eax + 8) = 0x2DD93C;
    MEM32(eax) = 0x2F810C;
    MEM32(eax + 8) = 0x2F8100;
    esp += 4; return; /* ret */

}

/**
 * sub_001BD2C0
 * Original: 0x001BD2C0 - 0x001BD2E5 (37 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD2C0(void)
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

loc_001BD2C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x14);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001BD2E2; /* jp: parity */

loc_001BD2D4: ;
    MEM32(ecx + 4) = 0;
    MEM32(edx + 0x20) = 1;

loc_001BD2E2: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001BD2F0
 * Original: 0x001BD2F0 - 0x001BD383 (147 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BD2F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD37A; /* jle: less or equal (signed <=) */

loc_001BD300: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    goto loc_001BD310;

    /* nop */
    /* nop */

loc_001BD310: ;
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(MEM32(eax + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ebx * 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD36D; /* jne: not equal / not zero */

loc_001BD31B: ;
    edx = MEM32(esi + 0x10C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BD33C; /* jle: less or equal (signed <=) */

loc_001BD327: ;
    ecx = MEM32(esi + 0x108);
    /* nop */

loc_001BD330: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BD37F; /* je: equal / zero */

loc_001BD334: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BD330; /* jl: less (signed <) */

loc_001BD33C: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BD33F: ;
    ebp = MEM32(esi + 0x10C);
    eax = MEM32(esi + 0x108);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x10C) = ebp;
    ecx = ebp;
    ecx = MEM32(eax + ecx * 4);
    MEM32(eax + edx * 4) = ecx;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD36D; /* jne: not equal / not zero */

loc_001BD365: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001BD36Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD36Bu); } /* indirect call */
    }

loc_001BD36D: ;
    eax = MEM32(esi + 0x10C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BD310; /* jl: less (signed <) */

loc_001BD378: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001BD37A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001BD37F: ;
    edx = eax;
    goto loc_001BD33F;

}

/**
 * sub_001BD390
 * Original: 0x001BD390 - 0x001BD3B5 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001BD398u); RECOMP_ABI_CALL(0x002304E0u, sub_002304E0); /* call 0x002304E0 */

loc_001BD398: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD3AF; /* je: equal / zero */

loc_001BD39F: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001BD3AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD3ACu); } /* indirect call */
    }

loc_001BD3AF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD3C0
 * Original: 0x001BD3C0 - 0x001BD487 (199 bytes, 80 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD3C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BD3C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(esi + 4);
    ecx = eax + edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001BD407; /* jge: greater or equal (signed >=) */

loc_001BD3EF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BD3F7; /* jl: less (signed <) */

loc_001BD3F5: ;
    eax = ecx;

loc_001BD3F7: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD400u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BD400: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD407: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ebp = ebx * 4;
    edx = eax + ebp;
    MEM32(esp + 0x14) = edx;
    edx = edi + ebx;
    edx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001BD43F; /* js: sign (negative) */

loc_001BD425: ;
    ebx = MEM32(esp + 0x14);
    ecx = edx + eax * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_001BD430: ;
    edx = MEM32(ebx + ecx);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BD430; /* jne: not equal / not zero */

loc_001BD43B: ;
    ecx = MEM32(esp + 0x10);

loc_001BD43F: ;
    eax = MEM32(esp + 0x20);
    ebx = MEM32(eax);
    eax = MEM32(esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_L(_fas, _fbs)) goto loc_001BD47B; /* jl: less (signed <) */

loc_001BD451: ;
    edi = ebx;
    ecx = eax + edx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx + 1;
    goto loc_001BD460;

    /* nop */

loc_001BD460: ;
    edx = MEM32(edi + ecx);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BD460; /* jne: not equal / not zero */

loc_001BD46B: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001BD47B: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BD490
 * Original: 0x001BD490 - 0x001BD496 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD490(void)
{

loc_001BD490: ;
    eax = ecx + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BD4A0
 * Original: 0x001BD4A0 - 0x001BD4C8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001BD4A8u); RECOMP_ABI_CALL(0x001BD4D0u, sub_001BD4D0); /* call 0x001BD4D0 */

loc_001BD4A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BD4C2; /* je: equal / zero */

loc_001BD4AF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001BD4C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD4BFu); } /* indirect call */
    }

loc_001BD4C2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD4D0
 * Original: 0x001BD4D0 - 0x001BD4DE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD4D0(void)
{

loc_001BD4D0: ;
    MEM32(ecx + 8) = 0x2DC684;
    MEM32(ecx) = 0x2DC684;
    esp += 4; return; /* ret */

}

/**
 * sub_001BD4E0
 * Original: 0x001BD4E0 - 0x001BD5F7 (279 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BD4E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2454F6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x1D);
    ebp = 0xC;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001BD50Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD50Cu); } /* indirect call */
    }

loc_001BD50F: ;
    MEM16(eax + 4) = LO16(ebp);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ebx);
    ecx = eax;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x001BD527u); RECOMP_ABI_CALL(0x001CAC70u, sub_001CAC70); /* call 0x001CAC70 */

loc_001BD527: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    edi = eax;
    MEM32(esp + 0x24) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001BD53Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD53Bu); } /* indirect call */
    }

loc_001BD53E: ;
    MEM16(eax + 4) = LO16(ebp);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ebx);
    ecx = eax;
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, 0x001BD556u); RECOMP_ABI_CALL(0x001CA780u, sub_001CA780); /* call 0x001CA780 */

loc_001BD556: ;
    ecx = MEM32(0x4409AC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ebp = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x10);
    MEM32(esp + 0x24) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001BD56Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD568u); } /* indirect call */
    }

loc_001BD56B: ;
    esi = eax;
    MEM16(esi + 4) = 0x10;
    MEM16(esi + 6) = 1;
    MEM32(esi) = 0x2F8110;
    MEM32(esi + 8) = 0x2F11CC;
    ebx = MEM32(ebx + 0xC8);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001BD596u); RECOMP_ABI_CALL(0x001AC640u, sub_001AC640); /* call 0x001AC640 */

loc_001BD596: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x001BD5A0u); RECOMP_ABI_CALL(0x001AC640u, sub_001AC640); /* call 0x001AC640 */

loc_001BD5A0: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001BD5AAu); RECOMP_ABI_CALL(0x001AC640u, sub_001AC640); /* call 0x001AC640 */

loc_001BD5AA: ;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD5BD; /* jne: not equal / not zero */

loc_001BD5B5: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001BD5BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD5BBu); } /* indirect call */
    }

loc_001BD5BD: ;
    MEM16(ebp + 6) = MEM16(ebp + 6) - 1;
    _fa = (uint32_t)(MEM16(ebp + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD5D1; /* jne: not equal / not zero */

loc_001BD5C8: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BD5D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD5CFu); } /* indirect call */
    }

loc_001BD5D1: ;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD5E4; /* jne: not equal / not zero */

loc_001BD5DC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001BD5E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD5E2u); } /* indirect call */
    }

loc_001BD5E4: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
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
 * sub_001BD600
 * Original: 0x001BD600 - 0x001BD74D (333 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BD600: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245516);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(ebp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001BD631; /* je: equal / zero */

loc_001BD629: ;
    ecx = MEM32(esi + 0x2C);
    goto loc_001BD732;

loc_001BD631: ;
    SET_LO8(eax, MEM8(esi + 0x23C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BD6C1; /* je: equal / zero */

loc_001BD63F: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0xA8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001BD651u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD64Eu); } /* indirect call */
    }

loc_001BD651: ;
    MEM16(eax + 4) = 0xA8;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x001BD66Bu); RECOMP_ABI_CALL(0x001C8D60u, sub_001C8D60); /* call 0x001C8D60 */

loc_001BD66B: ;
    ecx = MEM32(esi + 0xC);
    edi = eax;
    MEM32(edi + 0x24) = ecx;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001BD683u); RECOMP_ABI_CALL(0x001C8880u, sub_001C8880); /* call 0x001C8880 */

loc_001BD683: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD6A1; /* jne: not equal / not zero */

loc_001BD696: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD69Eu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BD69E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD6A1: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(ecx + eax * 4) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001BD6C1: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD72D; /* jne: not equal / not zero */

loc_001BD6C8: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0xA8);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001BD6DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD6D7u); } /* indirect call */
    }

loc_001BD6DA: ;
    MEM16(eax + 4) = 0xA8;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0x001BD6F4u); RECOMP_ABI_CALL(0x001C8D60u, sub_001C8D60); /* call 0x001C8D60 */

loc_001BD6F4: ;
    ebx = eax;
    eax = MEM32(esi + 0xC);
    edi = esi + 8;
    MEM32(ebx + 0x24) = eax;
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_001BD722; /* jne: not equal / not zero */

loc_001BD717: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BD71Fu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BD71F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD722: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    MEM32(eax + edx * 4) = ebx;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BD72D: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx);

loc_001BD732: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BD738u); RECOMP_ABI_CALL(0x001C8880u, sub_001C8880); /* call 0x001C8880 */

loc_001BD738: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD750
 * Original: 0x001BD750 - 0x001BD7D0 (128 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD750: ;
    _fa = (uint32_t)(MEM8(ecx + 0x12C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x12C), 1 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001BD79B; /* jne: not equal / not zero */

loc_001BD75A: ;
    eax = MEM32(ecx + 0x104);
    esi = ecx + 0xFC;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD77D; /* jne: not equal / not zero */

loc_001BD772: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD77Au); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BD77A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD77D: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 0xC);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001BD79B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0xC);
    esi = MEM32(eax + 0x44);
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD7B2; /* jne: not equal / not zero */

loc_001BD7AC: ;
    edx = MEM32(edi + 0x10);
    esi = MEM32(edx + 0x44);

loc_001BD7B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BD7B9u); RECOMP_ABI_CALL(0x001C9EA0u, sub_001C9EA0); /* call 0x001C9EA0 */

loc_001BD7B9: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001BD7C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD7C1u); } /* indirect call */
    }

loc_001BD7C4: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM8(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BD7D0
 * Original: 0x001BD7D0 - 0x001BD804 (52 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD7D0: ;
    eax = MEM32(ecx + 0x80);
    PUSH32(esp, esi);
    esi = ecx + 0x78;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD7F1; /* jne: not equal / not zero */

loc_001BD7E6: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD7EEu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BD7EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD7F1: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD810
 * Original: 0x001BD810 - 0x001BD847 (55 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD810: ;
    eax = MEM32(ecx + 0x98);
    PUSH32(esp, esi);
    esi = ecx + 0x90;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD834; /* jne: not equal / not zero */

loc_001BD829: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD831u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BD831: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD834: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD850
 * Original: 0x001BD850 - 0x001BD887 (55 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD850: ;
    eax = MEM32(ecx + 0x8C);
    PUSH32(esp, esi);
    esi = ecx + 0x84;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD874; /* jne: not equal / not zero */

loc_001BD869: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD871u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BD871: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD874: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD890
 * Original: 0x001BD890 - 0x001BD8C1 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD890: ;
    eax = MEM32(ecx + 0x74);
    PUSH32(esp, esi);
    esi = ecx + 0x6C;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD8AE; /* jne: not equal / not zero */

loc_001BD8A3: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD8ABu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BD8AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD8AE: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD8D0
 * Original: 0x001BD8D0 - 0x001BD974 (164 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BD8D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x23E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD970; /* jne: not equal / not zero */

loc_001BD8E1: ;
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(esi + 0x23E) = 1;
    MEM8(esi + 0x23F) = LO8(eax);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001BD901u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BD8FEu); } /* indirect call */
    }

loc_001BD901: ;
    ecx = eax;
    MEM16(eax + 4) = 0x14;
    PUSH32(esp, 0x001BD90Eu); RECOMP_ABI_CALL(0x001BD2A0u, sub_001BD2A0); /* call 0x001BD2A0 */

loc_001BD90E: ;
    SET_LO8(ecx, MEM8(esi + 0x23F));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esi + 0x254) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001BD969; /* je: equal / zero */

loc_001BD91E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BD929; /* je: equal / zero */

loc_001BD924: ;
    ebp = eax + 8;
    goto loc_001BD92B;

loc_001BD929: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BD92B: ;
    eax = MEM32(esi + 0xBC);
    ecx = MEM32(esi + 0xB8);
    edi = esi + 0xB4;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD951; /* jne: not equal / not zero */

loc_001BD946: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BD94Eu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BD94E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD951: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    MEM32(edx + ecx * 4) = ebp;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(esi + 0x240) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001BD969: ;
    MEM8(esi + 0x240) = 0;

loc_001BD970: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD980
 * Original: 0x001BD980 - 0x001BD9BB (59 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD980: ;
    eax = MEM32(ecx + 0x110);
    PUSH32(esp, esi);
    esi = ecx + 0x108;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD9A4; /* jne: not equal / not zero */

loc_001BD999: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BD9A1u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BD9A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD9A4: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BD9C0
 * Original: 0x001BD9C0 - 0x001BDA29 (105 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BD9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BD9C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = esi + 0x14;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BD9E1; /* jne: not equal / not zero */

loc_001BD9D6: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BD9DEu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BD9DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BD9E1: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    eax = MEM32(esp + 0xC);
    MEM32(edx + ecx * 4) = eax;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    edx = MEM32(ecx + edx * 4 + -4);
    edi = MEM32(eax + 0x24);
    MEM32(ecx + edi * 4) = edx;
    ecx = MEM32(eax + 0x24);
    edx = MEM32(esi + 8);
    edx = MEM32(edx + ecx * 4);
    MEM32(edx + 0x24) = ecx;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(eax + 0x24) = ecx;
    PUSH32(esp, esi);
    MEM8(eax + 0x29) = 0;
    PUSH32(esp, 0x001BDA21u); RECOMP_ABI_CALL(0x001CA210u, sub_001CA210); /* call 0x001CA210 */

loc_001BDA21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BDA30
 * Original: 0x001BDA30 - 0x001BDAA6 (118 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDA30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0xC);
    ebx = edi + 8;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDA52; /* jne: not equal / not zero */

loc_001BDA47: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BDA4Fu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BDA4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BDA52: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    esi = MEM32(esp + 0x10);
    MEM32(edx + ecx * 4) = esi;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x18);
    ecx = MEM32(eax + ecx * 4 + -4);
    edx = MEM32(esi + 0x24);
    MEM32(eax + edx * 4) = ecx;
    edx = MEM32(edi + 0x14);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(edx + eax * 4);
    MEM32(ecx + 0x24) = eax;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = edx;
    MEM8(esi + 0x29) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    PUSH32(esp, 0x001BDA9Au); RECOMP_ABI_CALL(0x001CA130u, sub_001CA130); /* call 0x001CA130 */

loc_001BDA9A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x30) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BDAB0
 * Original: 0x001BDAB0 - 0x001BDAF1 (65 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDAB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x11C);
    esi = ecx + 0x114;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDADD; /* jne: not equal / not zero */

loc_001BDAD2: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BDADAu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BDADA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BDADD: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = edi;
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BDB00
 * Original: 0x001BDB00 - 0x001BDB64 (100 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDB00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x100);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDB56; /* jle: less or equal (signed <=) */

loc_001BDB11: ;
    eax = MEM32(esi + 0xFC);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDB31; /* je: equal / zero */

loc_001BDB24: ;
    PUSH32(esp, eax);
    edx = esp + 0xF;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001BDB31u); RECOMP_ABI_CALL(0x001BD750u, sub_001BD750); /* call 0x001BD750 */

loc_001BDB31: ;
    eax = MEM32(esi + 0xFC);
    ecx = MEM32(eax + edi * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDB4B; /* jne: not equal / not zero */

loc_001BDB45: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001BDB4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BDB49u); } /* indirect call */
    }

loc_001BDB4B: ;
    eax = MEM32(esi + 0x100);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BDB11; /* jl: less (signed <) */

loc_001BDB56: ;
    POP32(esp, edi);
    MEM32(esi + 0x100) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BDB70
 * Original: 0x001BDB70 - 0x001BDBD1 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDB70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BDBC4; /* jle: less or equal (signed <=) */

loc_001BDB80: ;
    eax = MEM32(esi + 0x108);
    ecx = MEM32(eax + edi * 4);
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDB9F; /* je: equal / zero */

loc_001BDB90: ;
    SET_LO8(ecx, MEM8(eax + 0x29));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDB9F; /* je: equal / zero */

loc_001BDB97: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001BDB9Fu); RECOMP_ABI_CALL(0x001BD9C0u, sub_001BD9C0); /* call 0x001BD9C0 */

loc_001BDB9F: ;
    edx = MEM32(esi + 0x108);
    ecx = MEM32(edx + edi * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDBB9; /* jne: not equal / not zero */

loc_001BDBB3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BDBB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BDBB7u); } /* indirect call */
    }

loc_001BDBB9: ;
    eax = MEM32(esi + 0x10C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BDB80; /* jl: less (signed <) */

loc_001BDBC4: ;
    POP32(esp, edi);
    MEM32(esi + 0x10C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BDBE0
 * Original: 0x001BDBE0 - 0x001BDC73 (147 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDBE0: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDBF4; /* je: equal / zero */

loc_001BDBE7: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001BDBF4u); RECOMP_ABI_CALL(0x001BD3C0u, sub_001BD3C0); /* call 0x001BD3C0 */

loc_001BDBF4: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDC0B; /* jne: not equal / not zero */

loc_001BDBFF: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + ecx * 4);
    MEM32(eax) = edx;

loc_001BDC0B: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    ecx = ebx + eax * 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDC41; /* je: equal / zero */

loc_001BDC19: ;
    /* nop */

loc_001BDC20: ;
    edx = MEM32(ebx);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001BDC31u); RECOMP_ABI_CALL(0x001BD3C0u, sub_001BD3C0); /* call 0x001BD3C0 */

loc_001BDC31: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + ecx * 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDC20; /* jne: not equal / not zero */

loc_001BDC41: ;
    ebx = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x18);
    edx = ebx + ecx * 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDC71; /* je: equal / zero */

loc_001BDC4E: ;
    edi = edi;

loc_001BDC50: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001BDC61u); RECOMP_ABI_CALL(0x001BD3C0u, sub_001BD3C0); /* call 0x001BD3C0 */

loc_001BDC61: ;
    edx = MEM32(edi + 0x18);
    eax = MEM32(edi + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + edx * 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDC50; /* jne: not equal / not zero */

loc_001BDC71: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BDC80
 * Original: 0x001BDC80 - 0x001BDDD0 (336 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BDC80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 8);
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ecx = eax + ecx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001BDD29; /* je: equal / zero */

loc_001BDC9F: ;
    /* nop */

loc_001BDCA0: ;
    edi = MEM32(eax);
    ecx = MEM32(edi + 0x5C);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xC) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001BDD11; /* jle: less or equal (signed <=) */

loc_001BDCB6: ;
    edx = MEM32(edi);
    ecx = MEM32(edx + ebx * 4);
    eax = MEM32(ecx);
    ebp = ebx * 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001BDCC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BDCC4u); } /* indirect call */
    }

loc_001BDCC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDCFC; /* je: equal / zero */

loc_001BDCCC: ;
    ecx = MEM32(esi + 8);
    ebx = MEM32(edi);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDCEB; /* jne: not equal / not zero */

loc_001BDCE0: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BDCE8u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BDCE8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BDCEB: ;
    ecx = MEM32(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ebx = MEM32(esp + 0xC);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BDCFC: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001BDCB6; /* jl: less (signed <) */

loc_001BDD09: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x10);

loc_001BDD11: ;
    ecx = MEM32(edx + 0xC);
    edi = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + ecx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001BDCA0; /* jne: not equal / not zero */

loc_001BDD29: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0x18);
    ecx = eax + ecx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001BDDC9; /* je: equal / zero */

loc_001BDD3E: ;
    edi = edi;

loc_001BDD40: ;
    edi = MEM32(eax);
    ecx = MEM32(edi + 0x5C);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001BDDB1; /* jle: less or equal (signed <=) */

loc_001BDD56: ;
    edx = MEM32(edi);
    ecx = MEM32(edx + ebx * 4);
    eax = MEM32(ecx);
    ebp = ebx * 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001BDD67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BDD64u); } /* indirect call */
    }

loc_001BDD67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDD9C; /* je: equal / zero */

loc_001BDD6C: ;
    ecx = MEM32(esi + 8);
    ebx = MEM32(edi);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDD8B; /* jne: not equal / not zero */

loc_001BDD80: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BDD88u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BDD88: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BDD8B: ;
    ecx = MEM32(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ebx = MEM32(esp + 0x10);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BDD9C: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001BDD56; /* jl: less (signed <) */

loc_001BDDA9: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0xC);

loc_001BDDB1: ;
    ecx = MEM32(edx + 0x18);
    edi = MEM32(edx + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + ecx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001BDD40; /* jne: not equal / not zero */

loc_001BDDC9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BDDD0
 * Original: 0x001BDDD0 - 0x001BDE33 (99 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDDD0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    ecx = edi + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDE01; /* je: equal / zero */

loc_001BDDDE: ;
    edi = edi;

loc_001BDDE0: ;
    edx = MEM32(edi);
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x4C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001BDDF1u); RECOMP_ABI_CALL(0x001BD3C0u, sub_001BD3C0); /* call 0x001BD3C0 */

loc_001BDDF1: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + ecx * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDDE0; /* jne: not equal / not zero */

loc_001BDE01: ;
    edi = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    edx = edi + ecx * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDE31; /* je: equal / zero */

loc_001BDE0E: ;
    edi = edi;

loc_001BDE10: ;
    eax = MEM32(edi);
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001BDE21u); RECOMP_ABI_CALL(0x001BD3C0u, sub_001BD3C0); /* call 0x001BD3C0 */

loc_001BDE21: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + edx * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDE10; /* jne: not equal / not zero */

loc_001BDE31: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BDE40
 * Original: 0x001BDE40 - 0x001BDE68 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDE40: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BDE67; /* js: sign (negative) */

loc_001BDE49: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001BDE66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BDE63u); } /* indirect call */
    }

loc_001BDE66: ;
    POP32(esp, esi);

loc_001BDE67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BDE70
 * Original: 0x001BDE70 - 0x001BDE95 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDE70: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BDE94; /* js: sign (negative) */

loc_001BDE79: ;
    ecx = MEM32(0x4409AC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001BDE93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BDE90u); } /* indirect call */
    }

loc_001BDE93: ;
    POP32(esp, esi);

loc_001BDE94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BDEA0
 * Original: 0x001BDEA0 - 0x001BDEC5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDEA0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BDEC4; /* js: sign (negative) */

loc_001BDEA9: ;
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
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001BDEC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BDEC0u); } /* indirect call */
    }

loc_001BDEC3: ;
    POP32(esp, esi);

loc_001BDEC4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001BDED0
 * Original: 0x001BDED0 - 0x001BDF1F (79 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BDED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x24);
    eax = MEM32(ebx + 0x28);
    PUSH32(esp, edi);
    edi = ebx + 0x20;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BDEFC; /* jge: greater or equal (signed >=) */

loc_001BDEE8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BDEF0; /* jl: less (signed <) */

loc_001BDEEE: ;
    eax = esi;

loc_001BDEF0: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BDEF9u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BDEF9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BDEFC: ;
    edx = MEM32(esp + 0x10);
    MEM32(edi + 4) = esi;
    eax = MEM32(ebx + 0x24);
    ecx = MEM32(edi);
    MEM32(ecx + eax * 8 + -8) = edx;
    ecx = MEM32(edi);
    eax = MEM32(ebx + 0x24);
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 8 + -4) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BDF20
 * Original: 0x001BDF20 - 0x001BDF67 (71 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDF20(void)
{

loc_001BDF20: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0x2F6AE8;
    MEM32(eax + 0xC) = 0x2F1038;
    MEM32(eax + 0x10) = 0x2F1040;
    MEM32(eax + 0x14) = 0x2F6AE8;
    MEM32(eax) = 0x2F8134;
    MEM32(eax + 8) = 0x2F8120;
    MEM32(eax + 0xC) = 0x2F812C;
    MEM32(eax + 0x10) = 0x2F8124;
    MEM32(eax + 0x14) = 0x2F8120;
    esp += 4; return; /* ret */

}

/**
 * sub_001BDF70
 * Original: 0x001BDF70 - 0x001BDF7A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDF70(void)
{

loc_001BDF70: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BDF80
 * Original: 0x001BDF80 - 0x001BDF8A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDF80(void)
{

loc_001BDF80: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 1;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001BDF90
 * Original: 0x001BDF90 - 0x001BDF9A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDF90(void)
{

loc_001BDF90: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 1;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001BDFA0
 * Original: 0x001BDFA0 - 0x001BE00A (106 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BDFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BDFA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    edx = MEM32(ebp + 0x10);
    ebx = MEM32(edx + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ecx + 0x44);
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDFCF; /* jne: not equal / not zero */

loc_001BDFBD: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x001BDFC5u); RECOMP_ABI_CALL(0x001C88E0u, sub_001C88E0); /* call 0x001C88E0 */

loc_001BDFC5: ;
    SET_LO8(eax, MEM8(ebx + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDFF7; /* jne: not equal / not zero */

loc_001BDFCC: ;
    PUSH32(esp, ebx);
    goto loc_001BDFF0;

loc_001BDFCF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDFE0; /* je: equal / zero */

loc_001BDFD3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BDFE0; /* je: equal / zero */

loc_001BDFD7: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001BDFE0u); RECOMP_ABI_CALL(0x001BDED0u, sub_001BDED0); /* call 0x001BDED0 */

loc_001BDFE0: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001BDFE8u); RECOMP_ABI_CALL(0x001C88E0u, sub_001C88E0); /* call 0x001C88E0 */

loc_001BDFE8: ;
    SET_LO8(eax, MEM8(esi + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BDFF7; /* jne: not equal / not zero */

loc_001BDFEF: ;
    PUSH32(esp, esi);

loc_001BDFF0: ;
    ecx = edi;
    PUSH32(esp, 0x001BDFF7u); RECOMP_ABI_CALL(0x001BDA30u, sub_001BDA30); /* call 0x001BDA30 */

loc_001BDFF7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BDFFEu); RECOMP_ABI_CALL(0x001C9E30u, sub_001C9E30); /* call 0x001C9E30 */

loc_001BDFFE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BE010
 * Original: 0x001BE010 - 0x001BE079 (105 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE010: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x90);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x8C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE034; /* jle: less or equal (signed <=) */

loc_001BE025: ;
    ecx = MEM32(edi);

loc_001BE027: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE034; /* je: equal / zero */

loc_001BE02C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE027; /* jl: less (signed <) */

loc_001BE034: ;
    esi = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE052; /* jge: greater or equal (signed >=) */

loc_001BE03B: ;
    goto loc_001BE040;

    /* nop */

loc_001BE040: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE04D; /* je: equal / zero */

loc_001BE049: ;
    MEM32(ecx + esi * 4) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BE04D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE040; /* jl: less (signed <) */

loc_001BE052: ;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE072; /* jge: greater or equal (signed >=) */

loc_001BE05E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE066; /* jl: less (signed <) */

loc_001BE064: ;
    eax = esi;

loc_001BE066: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BE06Fu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BE06F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BE072: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BE080
 * Original: 0x001BE080 - 0x001BE0E9 (105 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE080: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x9C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x98;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE0A4; /* jle: less or equal (signed <=) */

loc_001BE095: ;
    ecx = MEM32(edi);

loc_001BE097: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE0A4; /* je: equal / zero */

loc_001BE09C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE097; /* jl: less (signed <) */

loc_001BE0A4: ;
    esi = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE0C2; /* jge: greater or equal (signed >=) */

loc_001BE0AB: ;
    goto loc_001BE0B0;

    /* nop */

loc_001BE0B0: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE0BD; /* je: equal / zero */

loc_001BE0B9: ;
    MEM32(ecx + esi * 4) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BE0BD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE0B0; /* jl: less (signed <) */

loc_001BE0C2: ;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE0E2; /* jge: greater or equal (signed >=) */

loc_001BE0CE: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE0D6; /* jl: less (signed <) */

loc_001BE0D4: ;
    eax = esi;

loc_001BE0D6: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BE0DFu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BE0DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BE0E2: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001BE0F0
 * Original: 0x001BE0F0 - 0x001BE16B (123 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BE0F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    ebx = MEM32(ebp + 0x84);
    esi = ebp + 0x80;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001BE11D; /* jle: less or equal (signed <=) */

loc_001BE108: ;
    ecx = MEM32(esi);
    /* nop */

loc_001BE110: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE11D; /* je: equal / zero */

loc_001BE115: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE110; /* jl: less (signed <) */

loc_001BE11D: ;
    edi = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE136; /* jge: greater or equal (signed >=) */

loc_001BE124: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE131; /* je: equal / zero */

loc_001BE12D: ;
    MEM32(ecx + edi * 4) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BE131: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE124; /* jl: less (signed <) */

loc_001BE136: ;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BE156; /* jge: greater or equal (signed >=) */

loc_001BE142: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE14A; /* jl: less (signed <) */

loc_001BE148: ;
    eax = edi;

loc_001BE14A: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BE153u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BE153: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BE156: ;
    ecx = ebp;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x001BE160u); RECOMP_ABI_CALL(0x001BE010u, sub_001BE010); /* call 0x001BE010 */

loc_001BE160: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001BE080(); return; /* tail jmp 0x001BE080 */

}

/**
 * sub_001BE170
 * Original: 0x001BE170 - 0x001BE427 (695 bytes, 202 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BE170: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245558);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0x80000000u;
    ebp = MEM32(esp + 0x38);
    esi = esp + 0x10;
    edi = ebp;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x001BE1B1u); RECOMP_ABI_CALL(0x001BDBE0u, sub_001BDBE0); /* call 0x001BDBE0 */

loc_001BE1B1: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x24) = esi;
    edi = MEM32(esp + 0x3C);
    eax = MEM32(edi + 4);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x38) = 1;
    PUSH32(esp, 0x001BE1E5u); RECOMP_ABI_CALL(0x001BD3C0u, sub_001BD3C0); /* call 0x001BD3C0 */

loc_001BE1E5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x30) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE20A; /* js: sign (negative) */

loc_001BE1EE: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = esi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE20Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE207u); } /* indirect call */
    }

loc_001BE20A: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE235; /* js: sign (negative) */

loc_001BE21A: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE235u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE232u); } /* indirect call */
    }

loc_001BE235: ;
    eax = MEM32(ebp + 0x124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE298; /* jle: less or equal (signed <=) */

loc_001BE23F: ;
    ebx = MEM32(ebp + 0x120);
    MEM32(esp + 0x20) = eax;
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x24) = esi;
    eax = MEM32(edi + 4);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x38) = 2;
    PUSH32(esp, 0x001BE270u); RECOMP_ABI_CALL(0x001BD3C0u, sub_001BD3C0); /* call 0x001BD3C0 */

loc_001BE270: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE298; /* js: sign (negative) */

loc_001BE27C: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = esi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE298u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE295u); } /* indirect call */
    }

loc_001BE298: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0x80000000u;
    PUSH32(esp, ebp);
    esi = esp + 0x14;
    MEM32(esp + 0x34) = 3;
    PUSH32(esp, 0x001BE2BCu); RECOMP_ABI_CALL(0x001BDC80u, sub_001BDC80); /* call 0x001BDC80 */

loc_001BE2BC: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = eax;
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x24) = esi;
    eax = MEM32(edi + 4);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x38) = 4;
    PUSH32(esp, 0x001BE2EFu); RECOMP_ABI_CALL(0x001BD3C0u, sub_001BD3C0); /* call 0x001BD3C0 */

loc_001BE2EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x30) = 3;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE314; /* js: sign (negative) */

loc_001BE2F8: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = esi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE314u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE311u); } /* indirect call */
    }

loc_001BE314: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE33F; /* js: sign (negative) */

loc_001BE324: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE33Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE33Cu); } /* indirect call */
    }

loc_001BE33F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = 0x80000000u;
    ebx = esp + 0x1C;
    esi = ebp;
    MEM32(esp + 0x30) = 5;
    PUSH32(esp, 0x001BE364u); RECOMP_ABI_CALL(0x001BDDD0u, sub_001BDDD0); /* call 0x001BDDD0 */

loc_001BE364: ;
    eax = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = eax;
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x18) = esi;
    eax = MEM32(edi + 4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x38) = 6;
    PUSH32(esp, 0x001BE394u); RECOMP_ABI_CALL(0x001BD3C0u, sub_001BD3C0); /* call 0x001BD3C0 */

loc_001BE394: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x30) = 5;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE3B9; /* js: sign (negative) */

loc_001BE39D: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = esi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE3B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE3B6u); } /* indirect call */
    }

loc_001BE3B9: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE3E4; /* js: sign (negative) */

loc_001BE3C9: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE3E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE3E1u); } /* indirect call */
    }

loc_001BE3E4: ;
    ebp = MEM32(ebp + 0xD0);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE414; /* je: equal / zero */

loc_001BE3EE: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE409; /* jne: not equal / not zero */

loc_001BE3FE: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BE406u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BE406: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BE409: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    MEM32(eax + edx * 4) = ebp;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BE414: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE430
 * Original: 0x001BE430 - 0x001BE4BF (143 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BE430: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245598);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0x80000000u;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = ebx * 8 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE483; /* jle: less or equal (signed <=) */

loc_001BE47B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001BE481u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE47Eu); } /* indirect call */
    }

loc_001BE481: ;
    goto loc_001BE497;

loc_001BE483: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ebp = edi + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    POP32(esp, edi);
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebp);

loc_001BE497: ;
    ecx = ebx;
    MEM32(esi) = eax;
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BE4C0
 * Original: 0x001BE4C0 - 0x001BE54F (143 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BE4C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245578);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0x80000000u;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = ebx * 4 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE513; /* jle: less or equal (signed <=) */

loc_001BE50B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001BE511u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE50Eu); } /* indirect call */
    }

loc_001BE511: ;
    goto loc_001BE527;

loc_001BE513: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ebp = edi + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    POP32(esp, edi);
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebp);

loc_001BE527: ;
    ecx = ebx;
    MEM32(esi) = eax;
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BE550
 * Original: 0x001BE550 - 0x001BE5EB (155 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE550: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245578);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x4409AC);
    eax = eax * 4 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_001BE5A2; /* je: equal / zero */

loc_001BE58E: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE599; /* je: equal / zero */

loc_001BE595: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE5A2; /* jne: not equal / not zero */

loc_001BE599: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x2C); PUSH32(esp, 0x001BE5A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE59Du); } /* indirect call */
    }

loc_001BE5A0: ;
    goto loc_001BE5B2;

loc_001BE5A2: ;
    edi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;

loc_001BE5B2: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE5DA; /* js: sign (negative) */

loc_001BE5C1: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE5DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE5D7u); } /* indirect call */
    }

loc_001BE5DA: ;
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
 * sub_001BE5F0
 * Original: 0x001BE5F0 - 0x001BE68B (155 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE5F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245598);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x4409AC);
    eax = eax * 8 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_001BE642; /* je: equal / zero */

loc_001BE62E: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE639; /* je: equal / zero */

loc_001BE635: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE642; /* jne: not equal / not zero */

loc_001BE639: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x2C); PUSH32(esp, 0x001BE640u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE63Du); } /* indirect call */
    }

loc_001BE640: ;
    goto loc_001BE652;

loc_001BE642: ;
    edi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;

loc_001BE652: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE67A; /* js: sign (negative) */

loc_001BE661: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE67Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE677u); } /* indirect call */
    }

loc_001BE67A: ;
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
 * sub_001BE690
 * Original: 0x001BE690 - 0x001BE720 (144 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BE690: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2455B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0x80000000u;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE6E4; /* jle: less or equal (signed <=) */

loc_001BE6DC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001BE6E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE6DFu); } /* indirect call */
    }

loc_001BE6E2: ;
    goto loc_001BE6F8;

loc_001BE6E4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ebp = edi + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    POP32(esp, edi);
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebp);

loc_001BE6F8: ;
    ecx = ebx;
    MEM32(esi) = eax;
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BE720
 * Original: 0x001BE720 - 0x001BE7BA (154 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE720: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2455B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x4409AC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_001BE771; /* je: equal / zero */

loc_001BE75D: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE768; /* je: equal / zero */

loc_001BE764: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE771; /* jne: not equal / not zero */

loc_001BE768: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x2C); PUSH32(esp, 0x001BE76Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE76Cu); } /* indirect call */
    }

loc_001BE76F: ;
    goto loc_001BE781;

loc_001BE771: ;
    edi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;

loc_001BE781: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE7A9; /* js: sign (negative) */

loc_001BE790: ;
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
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE7A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE7A6u); } /* indirect call */
    }

loc_001BE7A9: ;
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
 * sub_001BE7C0
 * Original: 0x001BE7C0 - 0x001BE885 (197 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BE7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE7C0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001BE7D0; /* je: equal / zero */

loc_001BE7CB: ;
    ecx = eax + 0x10;
    goto loc_001BE7D2;

loc_001BE7D0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BE7D2: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE7DF; /* jne: not equal / not zero */

loc_001BE7DC: ;
    eax = MEM32(edi + 4);

loc_001BE7DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE7E8; /* je: equal / zero */

loc_001BE7E3: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BE7EA;

loc_001BE7E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BE7EA: ;
    eax = MEM32(eax + 0x20);
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE880; /* jne: not equal / not zero */

loc_001BE7F8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x44);
    eax = MEM32(ebx + 0x88);
    ecx = MEM32(ebx + 0x84);
    PUSH32(esp, esi);
    esi = ebx + 0x80;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE823; /* jne: not equal / not zero */

loc_001BE818: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BE820u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BE820: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BE823: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 8) = eax;
    eax = MEM32(edi + 4);
    MEM32(edx + ecx * 8 + 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0xC);
    esi = ebp + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE858; /* jle: less or equal (signed <=) */

loc_001BE843: ;
    edx = MEM32(esi);

loc_001BE845: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE853; /* je: equal / zero */

loc_001BE849: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE845; /* jl: less (signed <) */

loc_001BE851: ;
    goto loc_001BE858;

loc_001BE853: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE87E; /* jne: not equal / not zero */

loc_001BE858: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE873; /* jne: not equal / not zero */

loc_001BE868: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BE870u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BE870: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BE873: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + edx * 4) = ebx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BE87E: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001BE880: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BE890
 * Original: 0x001BE890 - 0x001BE91D (141 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE890: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE89F; /* je: equal / zero */

loc_001BE89A: ;
    edx = eax + 0x10;
    goto loc_001BE8A1;

loc_001BE89F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BE8A1: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE8AE; /* jne: not equal / not zero */

loc_001BE8AB: ;
    eax = MEM32(ecx + 4);

loc_001BE8AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE8B7; /* je: equal / zero */

loc_001BE8B2: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BE8B9;

loc_001BE8B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BE8B9: ;
    eax = MEM32(eax + 0x20);
    SET_LO8(edx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE919; /* jne: not equal / not zero */

loc_001BE8C3: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x44);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001BE8CFu); RECOMP_ABI_CALL(0x001BE920u, sub_001BE920); /* call 0x001BE920 */

loc_001BE8CF: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BE8F3; /* jle: less or equal (signed <=) */

loc_001BE8DB: ;
    edx = MEM32(esi);
    /* nop */

loc_001BE8E0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BE8EE; /* je: equal / zero */

loc_001BE8E4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BE8E0; /* jl: less (signed <) */

loc_001BE8EC: ;
    goto loc_001BE8F3;

loc_001BE8EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE918; /* jne: not equal / not zero */

loc_001BE8F3: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BE90D; /* jne: not equal / not zero */

loc_001BE902: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BE90Au); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BE90A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BE90D: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BE918: ;
    POP32(esp, edi);

loc_001BE919: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BE920
 * Original: 0x001BE920 - 0x001BE966 (70 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE920: ;
    eax = MEM32(ecx + 0x94);
    PUSH32(esp, esi);
    esi = ecx + 0x8C;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001BE945; /* jne: not equal / not zero */

loc_001BE93A: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BE942u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BE942: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BE945: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 0xC);
    edi = MEM32(eax);
    edx = MEM32(esi);
    MEM32(edx + ecx * 8) = edi;
    eax = MEM32(eax + 4);
    MEM32(edx + ecx * 8 + 4) = eax;
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BE970
 * Original: 0x001BE970 - 0x001BE9CC (92 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BE970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE970: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2455D8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BE9B6; /* js: sign (negative) */

loc_001BE99C: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BE9B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BE9B3u); } /* indirect call */
    }

loc_001BE9B6: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x2F80E8;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BE9D0
 * Original: 0x001BE9D0 - 0x001BEC6B (667 bytes, 225 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BE9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BE9D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245608);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x234);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEA03u); RECOMP_ABI_CALL(0x001BE430u, sub_001BE430); /* call 0x001BE430 */

loc_001BEA03: ;
    esi = MEM32(ebp + 8);
    edx = MEM32(esi);
    eax = esp + 0x50;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x80) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001BEA1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEA18u); } /* indirect call */
    }

loc_001BEA1B: ;
    ecx = MEM32(ebx + 0xC4);
    edx = MEM32(ecx);
    eax = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001BEA30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEA2Du); } /* indirect call */
    }

loc_001BEA30: ;
    eax = 0x80000000u;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x40);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(esp + 0x7C) = 2;
    MEM32(esp + 0x20) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001BEB8A; /* jle: less or equal (signed <=) */

loc_001BEA64: ;
    edi = esi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEA70; /* je: equal / zero */

loc_001BEA6B: ;
    eax = edi + 0x10;
    goto loc_001BEA72;

loc_001BEA70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BEA72: ;
    edx = MEM32(esp + 0x3C);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx + 4), eax (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001BEB34; /* je: equal / zero */

loc_001BEA87: ;
    eax = MEM32(ecx + edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEA94; /* je: equal / zero */

loc_001BEA8F: ;
    edx = eax + -16;
    goto loc_001BEA96;

loc_001BEA94: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BEA96: ;
    eax = MEM32(ebx + 0xD0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax + 8;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edx = esp + 0x23;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BEAAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEAA8u); } /* indirect call */
    }

loc_001BEAAA: ;
    SET_LO8(ecx, MEM8(eax));
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_001BEAF9; /* je: equal / zero */

loc_001BEABC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEAC5; /* je: equal / zero */

loc_001BEAC0: ;
    edi = eax + -16;
    goto loc_001BEAC7;

loc_001BEAC5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BEAC7: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x34);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEAE8; /* jne: not equal / not zero */

loc_001BEAD9: ;
    eax = esp + 0x30;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEAE5u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BEAE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BEAE8: ;
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    MEM32(ecx + edx * 4) = edi;
    MEM32(esp + 0x34) = MEM32(esp + 0x34) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001BEB34;

loc_001BEAF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEB02; /* je: equal / zero */

loc_001BEAFD: ;
    edi = eax + -16;
    goto loc_001BEB04;

loc_001BEB02: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BEB04: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEB25; /* jne: not equal / not zero */

loc_001BEB16: ;
    eax = esp + 0x24;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEB22u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BEB22: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BEB25: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    MEM32(ecx + edx * 4) = edi;
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BEB34: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x40);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001BEA64; /* jl: less (signed <) */

loc_001BEB49: ;
    eax = MEM32(esp + 0x28);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEB8A; /* je: equal / zero */

loc_001BEB53: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001BEB88; /* jle: less or equal (signed <=) */

loc_001BEB55: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001BEB64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEB61u); } /* indirect call */
    }

loc_001BEB64: ;
    eax = MEM32(esp + 0x24);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEB7F; /* jne: not equal / not zero */

loc_001BEB71: ;
    eax = MEM32(eax + 0x20);
    edx = MEM32(eax);
    ecx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001BEB7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEB7Cu); } /* indirect call */
    }

loc_001BEB7F: ;
    eax = MEM32(esp + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEB55; /* jl: less (signed <) */

loc_001BEB88: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BEB8A: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEB98; /* je: equal / zero */

loc_001BEB91: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001BEB98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEB95u); } /* indirect call */
    }

loc_001BEB98: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEBF6; /* je: equal / zero */

loc_001BEBA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEBF6; /* jle: less or equal (signed <=) */

loc_001BEBA4: ;
    ebx = 2;
    /* nop */

loc_001BEBB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM8(eax) = 1;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(esi);
    MEM32(esp + 0x24) = esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001BEBC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEBC6u); } /* indirect call */
    }

loc_001BEBC9: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEBED; /* jne: not equal / not zero */

loc_001BEBD5: ;
    eax = MEM32(eax + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM8(ecx) = 1;
    edx = MEM32(eax);
    ecx = esi + 0xC;
    MEM32(esp + 0x24) = esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001BEBEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEBEAu); } /* indirect call */
    }

loc_001BEBED: ;
    eax = MEM32(esp + 0x34);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEBB0; /* jl: less (signed <) */

loc_001BEBF6: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x7C) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BEC1E; /* js: sign (negative) */

loc_001BEC03: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BEC1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEC1Bu); } /* indirect call */
    }

loc_001BEC1E: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x7C) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BEC46; /* js: sign (negative) */

loc_001BEC2B: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BEC46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEC43u); } /* indirect call */
    }

loc_001BEC46: ;
    ecx = esp + 0x3C;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEC57u); RECOMP_ABI_CALL(0x001BE5F0u, sub_001BE5F0); /* call 0x001BE5F0 */

loc_001BEC57: ;
    ecx = MEM32(esp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BEC70
 * Original: 0x001BEC70 - 0x001BEE2A (442 bytes, 136 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BEC70(void)
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

loc_001BEC70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245630);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001BEE16; /* je: equal / zero */

loc_001BECA4: ;
    eax = MEM32(esi + 0x234);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BECB4u); RECOMP_ABI_CALL(0x001BE430u, sub_001BE430); /* call 0x001BE430 */

loc_001BECB4: ;
    edx = MEM32(esi + 0xCC);
    fp_push(MEMF(edx + 8)); /* fld float */
    ecx = MEM32(edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    MEM32(esp + 0x88) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001BECE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BECE2u); } /* indirect call */
    }

loc_001BECE5: ;
    ecx = MEM32(esi + 0xC4);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = edi + 0x10;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001BECFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BECFBu); } /* indirect call */
    }

loc_001BECFE: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEE05; /* jle: less or equal (signed <=) */

loc_001BED0A: ;
    SET_LO8(ecx, MEM8(ebx + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEDF1; /* je: equal / zero */

loc_001BED15: ;
    eax = esp + 0x60;
    MEM32(esp + 0x4C) = 0x2F8148;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0x80000004u;
    MEM32(esp + 0x50) = edi;
    eax = MEM32(esi + 0x138);
    ecx = esp + 0x4C;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x7C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001BED5A; /* je: equal / zero */

loc_001BED55: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BED5C;

loc_001BED5A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BED5C: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x138);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BED76u); RECOMP_ABI_CALL(0x00230500u, sub_00230500); /* call 0x00230500 */

loc_001BED76: ;
    esi = MEM32(esi + 0x138);
    eax = esi + 0x100;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esp + 0x58);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEDE1; /* jle: less or equal (signed <=) */

loc_001BED91: ;
    ecx = MEM32(esp + 0x54);
    ecx = MEM32(ecx + edi * 4);
    eax = MEM32(ecx + 0x84);
    edx = MEM32(ecx + 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = ecx + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEDB3u); RECOMP_ABI_CALL(0x001C8F90u, sub_001C8F90); /* call 0x001C8F90 */

loc_001BEDB3: ;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001BEDD5; /* jge: greater or equal (signed >=) */

loc_001BEDBD: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEDD2u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BEDD2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BEDD5: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(esp + 0x58);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BED91; /* jl: less (signed <) */

loc_001BEDE1: ;
    ecx = esp + 0x4C;
    MEM8(esp + 0x7C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEDEFu); RECOMP_ABI_CALL(0x001BE970u, sub_001BE970); /* call 0x001BE970 */

loc_001BEDEF: ;
    goto loc_001BEE05;

loc_001BEDF1: ;
    ebx = MEM32(ebx + 0x44);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEE05u); RECOMP_ABI_CALL(0x001C8F90u, sub_001C8F90); /* call 0x001C8F90 */

loc_001BEE05: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BEE16u); RECOMP_ABI_CALL(0x001BE5F0u, sub_001BE5F0); /* call 0x001BE5F0 */

loc_001BEE16: ;
    ecx = MEM32(esp + 0x74);
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
 * sub_001BEE30
 * Original: 0x001BEE30 - 0x001BEFA8 (376 bytes, 117 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BEE30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245650);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x234);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001BEE5Eu); RECOMP_ABI_CALL(0x001BE430u, sub_001BE430); /* call 0x001BE430 */

loc_001BEE5E: ;
    ebp = MEM32(esp + 0x58);
    eax = MEM32(ebp + 0xC);
    edi = ebp + 0xC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x50) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001BEF82; /* je: equal / zero */

loc_001BEE76: ;
    ecx = MEM32(esi + 0xC4);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001BEE8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BEE87u); } /* indirect call */
    }

loc_001BEE8A: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEF82; /* jle: less or equal (signed <=) */

loc_001BEE96: ;
    _fa = (uint32_t)(MEM8(ebp + 0x40)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x40), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BEF72; /* je: equal / zero */

loc_001BEE9F: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x24) = 0x2F8148;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = 0x80000004u;
    MEM32(esp + 0x28) = edi;
    eax = MEM32(esi + 0x138);
    edx = esp + 0x24;
    MEM32(eax + 0x24) = edx;
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x50) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001BEEE0; /* je: equal / zero */

loc_001BEEDB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BEEE2;

loc_001BEEE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BEEE2: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x138);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BEEFAu); RECOMP_ABI_CALL(0x00230500u, sub_00230500); /* call 0x00230500 */

loc_001BEEFA: ;
    esi = MEM32(esi + 0x138);
    eax = esi + 0x100;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esp + 0x30);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BEF63; /* jle: less or equal (signed <=) */

loc_001BEF13: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx + 0x90);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x8C);
    esi = ecx + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BEF35u); RECOMP_ABI_CALL(0x001C8F90u, sub_001C8F90); /* call 0x001C8F90 */

loc_001BEF35: ;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001BEF57; /* jge: greater or equal (signed >=) */

loc_001BEF3F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BEF54u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BEF54: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BEF57: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(esp + 0x30);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BEF13; /* jl: less (signed <) */

loc_001BEF63: ;
    ecx = esp + 0x24;
    MEM8(esp + 0x50) = LO8(ebx);
    PUSH32(esp, 0x001BEF70u); RECOMP_ABI_CALL(0x001BE970u, sub_001BE970); /* call 0x001BE970 */

loc_001BEF70: ;
    goto loc_001BEF82;

loc_001BEF72: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BEF82u); RECOMP_ABI_CALL(0x001C8F90u, sub_001C8F90); /* call 0x001C8F90 */

loc_001BEF82: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x50) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001BEF93u); RECOMP_ABI_CALL(0x001BE5F0u, sub_001BE5F0); /* call 0x001BE5F0 */

loc_001BEF93: ;
    ecx = MEM32(esp + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BEFB0
 * Original: 0x001BEFB0 - 0x001BF074 (196 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BEFB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x44);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(eax + 8) = 0;
    PUSH32(esp, 0x001BEFCAu); RECOMP_ABI_CALL(0x001C7C10u, sub_001C7C10); /* call 0x001C7C10 */

loc_001BEFCA: ;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF026; /* je: equal / zero */

loc_001BEFD0: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF026; /* jne: not equal / not zero */

loc_001BEFD7: ;
    SET_LO8(eax, MEM8(edi + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BEFFF; /* jne: not equal / not zero */

loc_001BEFDE: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(eax + ecx * 4 + -4);
    edx = MEM32(edi + 0x24);
    MEM32(eax + edx * 4) = ecx;
    eax = MEM32(edi + 0x24);
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx + eax * 4);
    MEM32(ecx + 0x24) = eax;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001BF01E;

loc_001BEFFF: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    edx = MEM32(eax + edx * 4 + -4);
    ecx = MEM32(edi + 0x24);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + eax * 4);
    MEM32(edx + 0x24) = eax;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001BF01E: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BF026u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF024u); } /* indirect call */
    }

loc_001BF026: ;
    eax = MEM32(esi + 0x118);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF065; /* jle: less or equal (signed <=) */

loc_001BF032: ;
    ecx = MEM32(esi + 0x114);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, 0x001BF040u); RECOMP_ABI_CALL(0x001BE0F0u, sub_001BE0F0); /* call 0x001BE0F0 */

loc_001BF040: ;
    edx = MEM32(esi + 0x114);
    ecx = MEM32(edx + edi * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF05A; /* jne: not equal / not zero */

loc_001BF054: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BF05Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF058u); } /* indirect call */
    }

loc_001BF05A: ;
    eax = MEM32(esi + 0x118);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BF032; /* jl: less (signed <) */

loc_001BF065: ;
    POP32(esp, edi);
    MEM32(esi + 0x118) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BF080
 * Original: 0x001BF080 - 0x001BF17F (255 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BF080: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245668);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = esp + 0x18;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = 0x80000004u;
    edx = MEM32(edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x34) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001BF0CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF0C8u); } /* indirect call */
    }

loc_001BF0CB: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(edi + 0xC) = ebx;
    MEM32(esp + 0x38) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001BF134; /* jle: less or equal (signed <=) */

loc_001BF0DC: ;
    PUSH32(esp, esi);
    /* nop */

loc_001BF0E0: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + eax * 4);
    esi = MEM32(eax + 0x44);
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF122; /* jne: not equal / not zero */

loc_001BF0F5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF114; /* jne: not equal / not zero */

loc_001BF0F9: ;
    PUSH32(esp, edi);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x001BF103u); RECOMP_ABI_CALL(0x001C8950u, sub_001C8950); /* call 0x001C8950 */

loc_001BF103: ;
    SET_LO8(eax, MEM8(esi + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF122; /* jne: not equal / not zero */

loc_001BF10A: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x001BF112u); RECOMP_ABI_CALL(0x001BDA30u, sub_001BDA30); /* call 0x001BDA30 */

loc_001BF112: ;
    goto loc_001BF122;

loc_001BF114: ;
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x44), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF122; /* je: equal / zero */

loc_001BF119: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x001BF122u); RECOMP_ABI_CALL(0x001BDED0u, sub_001BDED0); /* call 0x001BDED0 */

loc_001BF122: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x3C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001BF0E0; /* jl: less (signed <) */

loc_001BF133: ;
    POP32(esp, esi);

loc_001BF134: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BF13Bu); RECOMP_ABI_CALL(0x001C9B90u, sub_001C9B90); /* call 0x001C9B90 */

loc_001BF13B: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BF169; /* js: sign (negative) */

loc_001BF14E: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BF169u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF166u); } /* indirect call */
    }

loc_001BF169: ;
    ecx = MEM32(esp + 0x28);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BF180
 * Original: 0x001BF180 - 0x001BF2AF (303 bytes, 99 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BF180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BF180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245688);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    MEM32(edi + 8) = esi;
    eax = MEM32(esi + 0x234);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF1B9u); RECOMP_ABI_CALL(0x001BE430u, sub_001BE430); /* call 0x001BE430 */

loc_001BF1B9: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x50) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001BF1CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF1CAu); } /* indirect call */
    }

loc_001BF1CD: ;
    eax = edi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF1D9; /* je: equal / zero */

loc_001BF1D4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BF1DB;

loc_001BF1D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BF1DB: ;
    ecx = MEM32(esi + 0xC4);
    edx = MEM32(ecx);
    ebx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001BF1F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF1EEu); } /* indirect call */
    }

loc_001BF1F1: ;
    eax = MEM32(esi + 0x130);
    ecx = eax + 1;
    MEM32(esi + 0x130) = ecx;
    MEM32(edi + 0x20) = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF244; /* je: equal / zero */

loc_001BF20B: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF216u); RECOMP_ABI_CALL(0x00230790u, sub_00230790); /* call 0x00230790 */

loc_001BF216: ;
    eax = MEM32(esi + 0xD0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF228; /* je: equal / zero */

loc_001BF223: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BF22A;

loc_001BF228: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BF22A: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x138);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF244u); RECOMP_ABI_CALL(0x00230500u, sub_00230500); /* call 0x00230500 */

loc_001BF244: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esi + 0x128);
    eax = MEM32(esi + 0x124);
    ebx = esi + 0x120;
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF26F; /* jne: not equal / not zero */

loc_001BF264: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF26Cu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BF26C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BF26F: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    MEM32(ecx + eax * 4) = edi;
    eax = MEM32(ebx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebx + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF285u); RECOMP_ABI_CALL(0x001C9D50u, sub_001C9D50); /* call 0x001C9D50 */

loc_001BF285: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BF299u); RECOMP_ABI_CALL(0x001BE5F0u, sub_001BE5F0); /* call 0x001BE5F0 */

loc_001BF299: ;
    ecx = MEM32(esp + 0x44);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BF2B0
 * Original: 0x001BF2B0 - 0x001BF3CD (285 bytes, 92 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BF2B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2456A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x234);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x001BF2DDu); RECOMP_ABI_CALL(0x001BE430u, sub_001BE430); /* call 0x001BE430 */

loc_001BF2DD: ;
    edi = MEM32(esp + 0x30);
    eax = edi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001BF2F5; /* je: equal / zero */

loc_001BF2F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BF2F7;

loc_001BF2F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BF2F7: ;
    ecx = MEM32(esi + 0xC4);
    edx = MEM32(ecx);
    ebp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001BF308u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF305u); } /* indirect call */
    }

loc_001BF308: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF349; /* je: equal / zero */

loc_001BF310: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BF31Bu); RECOMP_ABI_CALL(0x00230790u, sub_00230790); /* call 0x00230790 */

loc_001BF31B: ;
    eax = MEM32(esi + 0xD0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF32D; /* je: equal / zero */

loc_001BF328: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001BF32F;

loc_001BF32D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BF32F: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x138);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001BF349u); RECOMP_ABI_CALL(0x00230500u, sub_00230500); /* call 0x00230500 */

loc_001BF349: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BF350u); RECOMP_ABI_CALL(0x001C9DC0u, sub_001C9DC0); /* call 0x001C9DC0 */

loc_001BF350: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), 0 (16-bit) */
    MEM32(edi + 8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001BF36D; /* jne: not equal / not zero */

loc_001BF365: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BF36Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF36Bu); } /* indirect call */
    }

loc_001BF36D: ;
    ecx = MEM32(esi + 0x124);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF38C; /* jle: less or equal (signed <=) */

loc_001BF379: ;
    edx = MEM32(esi + 0x120);
    /* nop */

loc_001BF380: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF38F; /* je: equal / zero */

loc_001BF384: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BF380; /* jl: less (signed <) */

loc_001BF38C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001BF38F: ;
    ecx = MEM32(esi + 0x124);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x124) = ecx;
    esi = MEM32(esi + 0x120);
    ecx = MEM32(esi + ecx * 4);
    MEM32(esi + eax * 4) = ecx;
    ecx = esp + 0xC;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001BF3B9u); RECOMP_ABI_CALL(0x001BE5F0u, sub_001BE5F0); /* call 0x001BE5F0 */

loc_001BF3B9: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BF3D0
 * Original: 0x001BF3D0 - 0x001BF9EB (1563 bytes, 482 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BF3D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245707);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    ebx = eax + -1;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x2C) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001BF9D3; /* jl: less (signed <) */

loc_001BF408: ;
    PUSH32(esp, esi);
    /* nop */

loc_001BF410: ;
    eax = MEM32(edi + 8);
    esi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF441; /* jne: not equal / not zero */

loc_001BF41B: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0xC);
    edx = MEM32(eax + ecx * 4 + -4);
    MEM32(eax + ebx * 4) = edx;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + ebx * 4);
    MEM32(ecx + 0x24) = ebx;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001BF43Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF43Au); } /* indirect call */
    }

loc_001BF43C: ;
    goto loc_001BF9C7;

loc_001BF441: ;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF9C7; /* je: equal / zero */

loc_001BF44C: ;
    eax = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x6C);
    ecx = MEM32(esi + 0x5C);
    eax = edx + eax * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x001BF464u); RECOMP_ABI_CALL(0x001BE430u, sub_001BE430); /* call 0x001BE430 */

loc_001BF464: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xE4) = ebp;
    PUSH32(esp, 0x001BF477u); RECOMP_ABI_CALL(0x001C9910u, sub_001C9910); /* call 0x001C9910 */

loc_001BF477: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, 0x001BF484u); RECOMP_ABI_CALL(0x00126FA0u, sub_00126FA0); /* call 0x00126FA0 */

loc_001BF484: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    ecx = esp + 0x7C;
    MEM8(esp + 0xE4) = 1;
    PUSH32(esp, 0x001BF49Au); RECOMP_ABI_CALL(0x00126FA0u, sub_00126FA0); /* call 0x00126FA0 */

loc_001BF49A: ;
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    MEM8(esp + 0xE8) = 2;
    PUSH32(esp, 0x001BF4B5u); RECOMP_ABI_CALL(0x00230090u, sub_00230090); /* call 0x00230090 */

loc_001BF4B5: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    MEM8(esp + 0xE8) = 3;
    PUSH32(esp, 0x001BF4CFu); RECOMP_ABI_CALL(0x002301F0u, sub_002301F0); /* call 0x002301F0 */

loc_001BF4CF: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF97A; /* jne: not equal / not zero */

loc_001BF4E9: ;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = 0x80000000u;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    MEM8(esp + 0xE4) = 4;
    PUSH32(esp, 0x001BF50Fu); RECOMP_ABI_CALL(0x00230380u, sub_00230380); /* call 0x00230380 */

loc_001BF50F: ;
    ecx = MEM32(esp + 0x24);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001BF663; /* jle: less or equal (signed <=) */

loc_001BF524: ;
    ebp = 0xC;
    MEM32(esp + 0x10) = ebp;
    /* nop */

loc_001BF530: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0xA8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001BF542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF53Fu); } /* indirect call */
    }

loc_001BF542: ;
    MEM16(eax + 4) = 0xA8;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edi);
    ecx = eax;
    MEM8(esp + 0xE4) = 5;
    PUSH32(esp, 0x001BF55Cu); RECOMP_ABI_CALL(0x001C8D60u, sub_001C8D60); /* call 0x001C8D60 */

loc_001BF55C: ;
    ecx = MEM32(edi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    eax = MEM32(edi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(esp + 0xE0) = 4;
    if (CMP_NE(_fa, _fb)) goto loc_001BF584; /* jne: not equal / not zero */

loc_001BF579: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BF581u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BF581: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BF584: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    ecx = MEM32(esp + 0x18);
    MEM32(eax + edx * 4) = ebx;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0x24) = eax;
    SET_LO8(edx, MEM8(esi + 0x30));
    MEM8(ebx + 0x30) = LO8(edx);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ebx + 0x44);
    eax = MEM32(eax + ebp + 4);
    edi = ebx + 0x3C;
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF5C4; /* jge: greater or equal (signed >=) */

loc_001BF5B8: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BF5C1u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BF5C1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BF5C4: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edi + 8);
    ecx = MEM32(edx + ebp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001BF5F4; /* jge: greater or equal (signed >=) */

loc_001BF5DC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BF5E4; /* jl: less (signed <) */

loc_001BF5E2: ;
    eax = ecx;

loc_001BF5E4: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BF5EDu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BF5ED: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BF5F4: ;
    MEM32(edi + 4) = ecx;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + ebp + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF643; /* jle: less or equal (signed <=) */

loc_001BF605: ;
    eax = MEM32(eax + ebp);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(esi + 0x3C);
    ebp = MEM32(edx + ecx * 4);
    ecx = MEM32(ebp + 0x3C);
    MEM32(ebp + 0x44) = ebx;
    MEM32(ebp + 0x5C) = edi;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001BF61Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF61Cu); } /* indirect call */
    }

loc_001BF61F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) - eax;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x14) = ecx;
    ecx = MEM32(ebx + 0x3C);
    MEM32(ecx + edi * 4) = ebp;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(edx + eax + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    ebp = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001BF605; /* jl: less (signed <) */

loc_001BF643: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001BF530; /* jl: less (signed <) */

loc_001BF663: ;
    ecx = MEM32(esi + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF698; /* jle: less or equal (signed <=) */

loc_001BF66C: ;
    /* nop */

loc_001BF670: ;
    ecx = MEM32(esi + 0x3C);
    ecx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x44), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF68F; /* je: equal / zero */

loc_001BF67B: ;
    ecx = MEM32(esi + 0x40);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x40) = ecx;
    edx = ecx;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx + edx * 4);
    MEM32(ecx + eax * 4) = edx;
    goto loc_001BF693;

loc_001BF68F: ;
    MEM32(ecx + 0x5C) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001BF693: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x40) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BF670; /* jl: less (signed <) */

loc_001BF698: ;
    ebx = MEM32(esi + 0x50);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001BF7A9; /* js: sign (negative) */

loc_001BF6A2: ;
    eax = esp + 0x98;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x90) = 0;
    MEM32(esp + 0x94) = 0x80000010u;
    ecx = MEM32(esi + 0x4C);
    ecx = MEM32(ecx + ebx * 4);
    edx = MEM32(ecx);
    eax = esp + 0x8C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0xE4) = 6;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001BF6E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF6DEu); } /* indirect call */
    }

loc_001BF6E1: ;
    ebp = MEM32(esp + 0x90);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BF716; /* jle: less or equal (signed <=) */

loc_001BF6F0: ;
    edi = MEM32(esp + 0x8C);
    goto loc_001BF700;

    /* nop */

loc_001BF700: ;
    edx = MEM32(edi + ecx * 4);
    eax = MEM32(edx + 0x44);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF716; /* je: equal / zero */

loc_001BF711: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BF700; /* jl: less (signed <) */

loc_001BF716: ;
    ecx = MEM32(esi + 0x4C);
    ecx = MEM32(ecx + ebx * 4);
    MEM32(ecx + 0x10) = eax;
    edx = MEM32(esi + 0x4C);
    eax = MEM32(edx + ebx * 4);
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = edx + ebx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_001BF76D; /* je: equal / zero */

loc_001BF72F: ;
    ecx = MEM32(edi + 0x54);
    eax = MEM32(edi + 0x50);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF74D; /* jne: not equal / not zero */

loc_001BF742: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BF74Au); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BF74A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BF74D: ;
    edx = MEM32(edi + 4);
    ecx = MEM32(ebp);
    eax = MEM32(edi);
    MEM32(eax + edx * 4) = ecx;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x50);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x50) = eax;
    ecx = eax;
    eax = MEM32(esi + 0x4C);
    edx = MEM32(eax + ecx * 4);
    MEM32(eax + ebx * 4) = edx;

loc_001BF76D: ;
    eax = MEM32(esp + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0xE0) = 4;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001BF79E; /* js: sign (negative) */

loc_001BF780: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x94);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BF79Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF79Bu); } /* indirect call */
    }

loc_001BF79E: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001BF6A2; /* jns: not sign (positive) */

loc_001BF7A5: ;
    edi = MEM32(esp + 0x18);

loc_001BF7A9: ;
    ecx = MEM32(esi + 0x5C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    if ((_fas < 0)) goto loc_001BF858; /* js: sign (negative) */

loc_001BF7B7: ;
    edx = MEM32(esi + 0x58);
    edi = MEM32(edx + ecx * 4);
    eax = edx + ecx * 4;
    edx = MEM32(edi + 0xC);
    ebx = MEM32(edx + 0x44);
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x24), 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF7D7; /* je: equal / zero */

loc_001BF7D1: ;
    edi = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x44);

loc_001BF7D7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF849; /* je: equal / zero */

loc_001BF7DB: ;
    edi = MEM32(esi + 0x5C);
    ebp = MEM32(eax);
    eax = MEM32(esi + 0x58);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x5C) = edi;
    edx = edi;
    edx = MEM32(eax + edx * 4);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(ebx + 0x60);
    ecx = MEM32(ebx + 0x5C);
    edi = ebx + 0x58;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF80C; /* jne: not equal / not zero */

loc_001BF801: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BF809u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BF809: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BF80C: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    MEM32(edx + ecx * 4) = ebp;
    eax = MEM32(edi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esp + 0x54;
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(ebp + 0x14) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001BF82Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF828u); } /* indirect call */
    }

loc_001BF82B: ;
    edx = MEM32(ebx);
    eax = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001BF838u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF835u); } /* indirect call */
    }

loc_001BF838: ;
    edx = MEM32(esi);
    eax = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001BF845u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BF842u); } /* indirect call */
    }

loc_001BF845: ;
    ecx = MEM32(esp + 0x14);

loc_001BF849: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    if ((_fas >= 0)) goto loc_001BF7B7; /* jns: not sign (positive) */

loc_001BF854: ;
    edi = MEM32(esp + 0x18);

loc_001BF858: ;
    eax = MEM32(esi + 0x6C);
    ebp = esi + 0x68;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001BF942; /* jle: less or equal (signed <=) */

loc_001BF870: ;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x10) = ebx;
    goto loc_001BF880;

    /* nop */

loc_001BF880: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebp);
    eax = MEM32(edx + ecx);
    edi = edx + ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF8AD; /* je: equal / zero */

loc_001BF8A1: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x44);

loc_001BF8AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BF8F7; /* je: equal / zero */

loc_001BF8B1: ;
    ecx = MEM32(eax + 0x6C);
    ebx = eax + 0x68;
    eax = MEM32(ebx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BF8CE; /* jne: not equal / not zero */

loc_001BF8C3: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BF8CBu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001BF8CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BF8CE: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi);
    MEM32(ecx) = edx;
    eax = MEM32(edi + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edi + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(ecx + 0xC) = eax;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(esp + 0x14);
    goto loc_001BF91F;

loc_001BF8F7: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(edi + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(edi + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(edi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = edx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x2C) = eax;

loc_001BF91F: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001BF880; /* jl: less (signed <) */

loc_001BF93E: ;
    edi = MEM32(esp + 0x18);

loc_001BF942: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BF962; /* jge: greater or equal (signed >=) */

loc_001BF94E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BF956; /* jl: less (signed <) */

loc_001BF954: ;
    eax = ebx;

loc_001BF956: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BF95Fu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BF95F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BF962: ;
    ecx = esp + 0x20;
    MEM32(ebp + 4) = ebx;
    MEM8(esp + 0xE0) = 3;
    PUSH32(esp, 0x001BF976u); RECOMP_ABI_CALL(0x002302F0u, sub_002302F0); /* call 0x002302F0 */

loc_001BF976: ;
    ebx = MEM32(esp + 0x30);

loc_001BF97A: ;
    ecx = esp + 0x34;
    MEM8(esi + 0x28) = 0;
    MEM8(esp + 0xE0) = 2;
    PUSH32(esp, 0x001BF98Fu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_001BF98F: ;
    ecx = esp + 0x78;
    MEM8(esp + 0xE0) = 1;
    PUSH32(esp, 0x001BF9A0u); RECOMP_ABI_CALL(0x001273C0u, sub_001273C0); /* call 0x001273C0 */

loc_001BF9A0: ;
    ecx = esp + 0x64;
    MEM8(esp + 0xE0) = 0;
    PUSH32(esp, 0x001BF9B1u); RECOMP_ABI_CALL(0x001273C0u, sub_001273C0); /* call 0x001273C0 */

loc_001BF9B1: ;
    ecx = esp + 0x40;
    MEM32(esp + 0xE0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001BF9C5u); RECOMP_ABI_CALL(0x001BE5F0u, sub_001BE5F0); /* call 0x001BE5F0 */

loc_001BF9C5: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BF9C7: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = ebx;
    if ((_fas >= 0)) goto loc_001BF410; /* jns: not sign (positive) */

loc_001BF9D2: ;
    POP32(esp, esi);

loc_001BF9D3: ;
    ecx = MEM32(esp + 0xD4);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BF9F0
 * Original: 0x001BF9F0 - 0x001BFCDA (746 bytes, 264 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BF9F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245728);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x001BFA18u); RECOMP_ABI_CALL(0x001BE690u, sub_001BE690); /* call 0x001BE690 */

loc_001BFA18: ;
    eax = MEM32(esp + 0x2C);
    edi = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x40) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001BFA46; /* jge: greater or equal (signed >=) */

loc_001BFA2E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFA36; /* jl: less (signed <) */

loc_001BFA34: ;
    eax = edi;

loc_001BFA36: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BFA43u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BFA43: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BFA46: ;
    eax = MEM32(esi + 4);
    edx = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x28) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001BFA86; /* jle: less or equal (signed <=) */

loc_001BFA55: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001BFA57: ;
    edx = MEM32(esi);
    edi = MEM32(esp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(edi + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(edi + 0xC) = edx;
    edx = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFA57; /* jl: less (signed <) */

loc_001BFA82: ;
    edx = MEM32(esp + 0x28);

loc_001BFA86: ;
    ebx = MEM32(esp + 0x48);
    eax = MEM32(esi + 4);
    edi = MEM32(ebx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFAB6; /* jge: greater or equal (signed >=) */

loc_001BFA9E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFAA6; /* jl: less (signed <) */

loc_001BFAA4: ;
    eax = edi;

loc_001BFAA6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BFAAFu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BFAAF: ;
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BFAB6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(esi + 4) = edi;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x20) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_001BFBF7; /* jle: less or equal (signed <=) */

loc_001BFACF: ;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x1C) = ebp;
    goto loc_001BFAE0;

    /* nop */

loc_001BFAE0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFBF7; /* jge: greater or equal (signed >=) */

loc_001BFAE9: ;
    eax = MEM32(ebx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x24);
    edi = MEM32(eax + ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    ebx = MEM32(edx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BFB22; /* jb: below (unsigned <) */

loc_001BFB08: ;
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFB62; /* jne: not equal / not zero */

loc_001BFB0F: ;
    edx = MEM32(ecx + 4);
    edi = MEM32(eax + 4);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    SET_LO8(edx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFB62; /* je: equal / zero */

loc_001BFB22: ;
    edx = MEM32(esi);
    edi = MEM32(ecx);
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(ecx + 8);
    MEM32(edx + 8) = edi;
    ecx = MEM32(ecx + 0xC);
    edi = MEM32(esp + 0x1C);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(esp + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = eax;
    goto loc_001BFBDD;

loc_001BFB62: ;
    edx = MEM32(ecx);
    edi = MEM32(eax);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFBA7; /* jne: not equal / not zero */

loc_001BFB6E: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(eax + 4);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFBA7; /* jne: not equal / not zero */

loc_001BFB7C: ;
    eax = MEM32(eax + 8);
    edx = MEM32(eax);
    edi = MEM32(eax + 8);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001BFB89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BFB86u); } /* indirect call */
    }

loc_001BFB89: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001BFB90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BFB8Du); } /* indirect call */
    }

loc_001BFB90: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x20) = eax;
    goto loc_001BFBE1;

loc_001BFBA7: ;
    edx = MEM32(esi);
    edi = MEM32(eax);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    eax = MEM32(eax + 0xC);
    edi = MEM32(esp + 0x10);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = ecx;

loc_001BFBDD: ;
    MEM32(esp + 0xC) = edx;

loc_001BFBE1: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edx (32-bit) */
    ecx = MEM32(esp + 0xC);
    ebx = MEM32(esp + 0x48);
    if (CMP_L(_fas, _fbs)) goto loc_001BFAE0; /* jl: less (signed <) */

loc_001BFBF7: ;
    eax = MEM32(ebx + 4);
    edi = edx;
    _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFC2A; /* jge: greater or equal (signed >=) */

loc_001BFC0E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFC16; /* jl: less (signed <) */

loc_001BFC14: ;
    eax = edi;

loc_001BFC16: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001BFC1Fu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BFC1F: ;
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BFC2A: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi + 4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001BFC7A; /* jne: not equal / not zero */

loc_001BFC35: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFCB7; /* jge: greater or equal (signed >=) */

loc_001BFC3A: ;
    eax = ebp;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001BFC48;

loc_001BFC44: ;
    ebx = MEM32(esp + 0x48);

loc_001BFC48: ;
    edx = MEM32(ebx);
    edi = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(edi + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(edi + 0xC) = edx;
    edx = MEM32(esp + 0x48);
    edi = MEM32(edx + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFC44; /* jl: less (signed <) */

loc_001BFC78: ;
    goto loc_001BFCB7;

loc_001BFC7A: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001BFCB7; /* jge: greater or equal (signed >=) */

loc_001BFC7C: ;
    edx = MEM32(esp + 0x14);
    eax = edx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001BFC88: ;
    edi = MEM32(esp + 0x24);
    ebx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    edi = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = edi;
    edi = MEM32(esp + 0x28);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFC88; /* jl: less (signed <) */

loc_001BFCB7: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x40) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001BFCC8u); RECOMP_ABI_CALL(0x001BE720u, sub_001BE720); /* call 0x001BE720 */

loc_001BFCC8: ;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001BFCE0
 * Original: 0x001BFCE0 - 0x001BFF4D (621 bytes, 239 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BFCE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    esi = ecx;
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001BFF44; /* je: equal / zero */

loc_001BFCFA: ;
    SET_LO8(eax, MEM8(ebx + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFD07; /* jne: not equal / not zero */

loc_001BFD01: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BFD07u); RECOMP_ABI_CALL(0x001BDA30u, sub_001BDA30); /* call 0x001BDA30 */

loc_001BFD07: ;
    SET_LO8(eax, MEM8(edi + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFD16; /* jne: not equal / not zero */

loc_001BFD0E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001BFD16u); RECOMP_ABI_CALL(0x001BDA30u, sub_001BDA30); /* call 0x001BDA30 */

loc_001BFD16: ;
    eax = edi + 0x68;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    esi = ebx + 0x68;
    PUSH32(esp, 0x001BFD23u); RECOMP_ABI_CALL(0x001BF9F0u, sub_001BF9F0); /* call 0x001BF9F0 */

loc_001BFD23: ;
    ebp = MEM32(ebx + 0x40);
    esi = MEM32(edi + 0x40);
    eax = MEM32(ebx + 0x44);
    ecx = ebx + 0x3C;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001BFD51; /* jge: greater or equal (signed >=) */

loc_001BFD3D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFD45; /* jl: less (signed <) */

loc_001BFD43: ;
    eax = esi;

loc_001BFD45: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001BFD4Eu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BFD4E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BFD51: ;
    MEM32(ebx + 0x40) = esi;
    ecx = MEM32(edi + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BFD87; /* jle: less or equal (signed <=) */

loc_001BFD5D: ;
    /* nop */

loc_001BFD60: ;
    ecx = MEM32(edi + 0x3C);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ebx + 0x3C);
    MEM32(edx + ebp * 4) = ecx;
    edx = MEM32(edi + 0x3C);
    ecx = MEM32(edx + eax * 4);
    MEM32(ecx + 0x44) = ebx;
    edx = MEM32(edi + 0x3C);
    ecx = MEM32(edx + eax * 4);
    MEM32(ecx + 0x5C) = ebp;
    ecx = MEM32(edi + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFD60; /* jl: less (signed <) */

loc_001BFD87: ;
    ecx = MEM32(ebx + 0x50);
    esi = MEM32(edi + 0x50);
    eax = MEM32(ebx + 0x54);
    ebp = ebx + 0x4C;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001BFDBA; /* jge: greater or equal (signed >=) */

loc_001BFDA2: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFDAA; /* jl: less (signed <) */

loc_001BFDA8: ;
    eax = esi;

loc_001BFDAA: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BFDB3u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BFDB3: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BFDBA: ;
    MEM32(ebp + 4) = esi;
    edx = MEM32(edi + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BFDF0; /* jle: less or equal (signed <=) */

loc_001BFDC6: ;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    /* nop */

loc_001BFDD0: ;
    edx = MEM32(edi + 0x4C);
    edx = MEM32(edx + eax * 4);
    esi = MEM32(ebp);
    MEM32(ecx + esi) = edx;
    edx = MEM32(edi + 0x4C);
    edx = MEM32(edx + eax * 4);
    MEM32(edx + 0x10) = ebx;
    edx = MEM32(edi + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFDD0; /* jl: less (signed <) */

loc_001BFDF0: ;
    ecx = MEM32(ebx + 0x5C);
    esi = MEM32(edi + 0x5C);
    eax = MEM32(ebx + 0x60);
    ebp = ebx + 0x58;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001BFE23; /* jge: greater or equal (signed >=) */

loc_001BFE0B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFE13; /* jl: less (signed <) */

loc_001BFE11: ;
    eax = esi;

loc_001BFE13: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BFE1Cu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BFE1C: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BFE23: ;
    MEM32(ebp + 4) = esi;
    edx = MEM32(edi + 0x5C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BFE50; /* jle: less or equal (signed <=) */

loc_001BFE2F: ;
    edx = ecx * 4;

loc_001BFE36: ;
    ecx = MEM32(edi + 0x58);
    ecx = MEM32(ecx + eax * 4);
    esi = MEM32(ebp);
    MEM32(edx + esi) = ecx;
    MEM32(ecx + 0x14) = ebx;
    ecx = MEM32(edi + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFE36; /* jl: less (signed <) */

loc_001BFE50: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BFE5C; /* jle: less or equal (signed <=) */

loc_001BFE5A: ;
    eax = ecx;

loc_001BFE5C: ;
    ebp = MEM32(ebx + 0xC);
    esi = MEM32(ebx + 0x10);
    MEM32(ebx + 8) = eax;
    edx = MEM32(edi + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx + 0x18);
    MEM32(ebx + 0xC) = ebp;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x14);
    MEM32(ebx + 0x10) = esi;
    ecx = MEM32(edi + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0x78);
    MEM32(ebx + 0x18) = edx;
    edx = MEM32(edi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x14) = eax;
    esi = MEM32(edi + 0x78);
    eax = MEM32(ebx + 0x7C);
    ebp = ebx + 0x74;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001BFEBE; /* jge: greater or equal (signed >=) */

loc_001BFEA6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFEAE; /* jl: less (signed <) */

loc_001BFEAC: ;
    eax = esi;

loc_001BFEAE: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001BFEB7u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001BFEB7: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001BFEBE: ;
    MEM32(ebp + 4) = esi;
    edx = MEM32(edi + 0x78);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001BFEEF; /* jle: less or equal (signed <=) */

loc_001BFECA: ;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    /* nop */

loc_001BFED0: ;
    edx = MEM32(edi + 0x74);
    ebp = MEM32(edx + eax * 8);
    esi = MEM32(ebx + 0x74);
    MEM32(ecx + esi) = ebp;
    edx = MEM32(edx + eax * 8 + 4);
    MEM32(ecx + esi + 4) = edx;
    edx = MEM32(edi + 0x78);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BFED0; /* jl: less (signed <) */

loc_001BFEEF: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    edx = MEM32(ecx + edx * 4 + -4);
    esi = MEM32(edi + 0x24);
    MEM32(ecx + esi * 4) = edx;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(eax + 8);
    edx = MEM32(edx + ecx * 4);
    MEM32(edx + 0x24) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(ebx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_001BFF37; /* jne: not equal / not zero */

loc_001BFF1A: ;
    SET_LO8(eax, MEM8(edi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BFF37; /* jne: not equal / not zero */

loc_001BFF21: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ebx + 0x28) = LO8(eax);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BFF2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BFF2Cu); } /* indirect call */
    }

loc_001BFF2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001BFF37: ;
    SET_LO8(eax, 1);
    MEM8(ebx + 0x28) = LO8(eax);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001BFF44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BFF42u); } /* indirect call */
    }

loc_001BFF44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BFF50
 * Original: 0x001BFF50 - 0x001BFF75 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFF50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001BFF58u); RECOMP_ABI_CALL(0x001BE970u, sub_001BE970); /* call 0x001BE970 */

loc_001BFF58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001BFF6F; /* je: equal / zero */

loc_001BFF5F: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001BFF6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BFF6Cu); } /* indirect call */
    }

loc_001BFF6F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BFF80
 * Original: 0x001BFF80 - 0x001BFFA2 (34 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFF80(void)
{

loc_001BFF80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001BFF8Eu); RECOMP_ABI_CALL(0x001BEE30u, sub_001BEE30); /* call 0x001BEE30 */

loc_001BFF8E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001BFF96u); RECOMP_ABI_CALL(0x001BEC70u, sub_001BEC70); /* call 0x001BEC70 */

loc_001BFF96: ;
    eax = MEM32(edi + 0x44);
    POP32(esp, edi);
    MEM8(eax + 0x28) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BFFB0
 * Original: 0x001BFFB0 - 0x001C001D (109 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BFFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BFFB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x12C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM8(esi + 0x12C) = 1;
    SET_LO8(eax, MEM8(edi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BFFDF; /* je: equal / zero */

loc_001BFFCE: ;
    eax = MEM32(esi + 0x134);
    ecx = eax + -1;
    MEM32(esi + 0x134) = ecx;
    goto loc_001BFFEE;

loc_001BFFDF: ;
    eax = MEM32(esi + 0x130);
    edx = eax + 1;
    MEM32(esi + 0x130) = edx;

loc_001BFFEE: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(edi + 0x20) = eax;
    PUSH32(esp, 0x001BFFF9u); RECOMP_ABI_CALL(0x001BD600u, sub_001BD600); /* call 0x001BD600 */

loc_001BFFF9: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C0001u); RECOMP_ABI_CALL(0x001BEC70u, sub_001BEC70); /* call 0x001BEC70 */

loc_001C0001: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x12C) = LO8(ebx);
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C0012u); RECOMP_ABI_CALL(0x001C9C70u, sub_001C9C70); /* call 0x001C9C70 */

loc_001C0012: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0020
 * Original: 0x001C0020 - 0x001C0051 (49 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0020(void)
{

loc_001C0020: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x12C);
    PUSH32(esp, edi);
    MEM8(esi + 0x12C) = 1;
    PUSH32(esp, 0x001C003Du); RECOMP_ABI_CALL(0x001BD600u, sub_001BD600); /* call 0x001BD600 */

loc_001C003D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C0045u); RECOMP_ABI_CALL(0x001BEC70u, sub_001BEC70); /* call 0x001BEC70 */

loc_001C0045: ;
    POP32(esp, edi);
    MEM8(esi + 0x12C) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0060
 * Original: 0x001C0060 - 0x001C0389 (809 bytes, 265 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0060: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245748);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = (uint32_t)(int32_t)SMEM8(esi + 0x12C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEM8(esi + 0x12C) = 1;
    PUSH32(esp, 0x001C0096u); RECOMP_ABI_CALL(0x001BD600u, sub_001BD600); /* call 0x001BD600 */

loc_001C0096: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001C009Eu); RECOMP_ABI_CALL(0x001BEC70u, sub_001BEC70); /* call 0x001BEC70 */

loc_001C009E: ;
    MEM8(esi + 0x12C) = LO8(ebx);
    ebx = MEM32(esp + 0x54);
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(ebp + 0x44);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001C0143; /* jle: less or equal (signed <=) */

loc_001C00C2: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C00C5: ;
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(edi + 8);
    eax = MEM32(ebx);
    edx = MEM32(edi + 4);
    ebp = ebp << 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x54) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001C00F3; /* jne: not equal / not zero */

loc_001C00E4: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C00ECu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C00EC: ;
    eax = MEM32(esp + 0x5C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C00F3: ;
    eax = MEM32(eax);
    edx = MEM32(edi + 4);
    ecx = MEM32(edi);
    MEM32(ecx + edx * 4) = eax;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx);
    ecx = MEM32(ecx + ebp);
    edx = MEM32(ecx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001C010Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C010Cu); } /* indirect call */
    }

loc_001C010F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    eax = MEM32(eax + ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001C0123u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0120u); } /* indirect call */
    }

loc_001C0123: ;
    ecx = MEM32(ebx);
    ebp = MEM32(ecx + ebp);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    MEM32(ebp + 0x14) = edx;
    ecx = MEM32(ebx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C00C5; /* jl: less (signed <) */

loc_001C013F: ;
    ebp = MEM32(esp + 0x50);

loc_001C0143: ;
    eax = MEM32(ebp + 0x90);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x50) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001C0239; /* jle: less or equal (signed <=) */

loc_001C0157: ;
    goto loc_001C0160;

    /* nop */

loc_001C0160: ;
    eax = MEM32(ebp + 0x8C);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001C016Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C016Bu); } /* indirect call */
    }

loc_001C016E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0226; /* je: equal / zero */

loc_001C0177: ;
    eax = MEM32(ebp + 0x8C);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001C01DB; /* jne: not equal / not zero */

loc_001C018B: ;
    edx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(edx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x54) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001C01DB; /* jne: not equal / not zero */

loc_001C0199: ;
    ebx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x28);
    edi = esi + 0x20;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C01C4; /* jge: greater or equal (signed >=) */

loc_001C01AC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C01B4; /* jl: less (signed <) */

loc_001C01B2: ;
    eax = ebx;

loc_001C01B4: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C01BDu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001C01BD: ;
    edx = MEM32(esp + 0x60);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C01C4: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(edi);
    MEM32(ecx + eax * 8 + -8) = ebp;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(edi);
    MEM32(ecx + eax * 8 + -4) = edx;
    goto loc_001C0222;

loc_001C01DB: ;
    SET_LO8(eax, MEM8(ecx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0226; /* jne: not equal / not zero */

loc_001C01E2: ;
    ebx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x28);
    edi = esi + 0x20;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C020D; /* jge: greater or equal (signed >=) */

loc_001C01F5: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C01FD; /* jl: less (signed <) */

loc_001C01FB: ;
    eax = ebx;

loc_001C01FD: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0206u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001C0206: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C020D: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 0x24);
    edx = MEM32(edi);
    MEM32(edx + eax * 8 + -8) = ebp;
    eax = MEM32(esi + 0x24);
    edx = MEM32(edi);
    MEM32(edx + eax * 8 + -4) = ecx;

loc_001C0222: ;
    edi = MEM32(esp + 0x50);

loc_001C0226: ;
    eax = MEM32(ebp + 0x90);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x50) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001C0160; /* jl: less (signed <) */

loc_001C0239: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x30;
    PUSH32(esp, 0x001C0244u); RECOMP_ABI_CALL(0x001BE4C0u, sub_001BE4C0); /* call 0x001BE4C0 */

loc_001C0244: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(ebp + 0x9C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x50) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001C0363; /* jle: less or equal (signed <=) */

loc_001C0266: ;
    goto loc_001C0270;

loc_001C0268: ;
    eax = MEM32(esp + 0x54);
    /* nop */

loc_001C0270: ;
    edx = MEM32(eax + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C02C0; /* jle: less or equal (signed <=) */

loc_001C0279: ;
    ecx = MEM32(ebp + 0x98);
    ecx = MEM32(ecx + ebx * 4);
    eax = MEM32(eax);

loc_001C0284: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0292; /* je: equal / zero */

loc_001C0288: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0284; /* jl: less (signed <) */

loc_001C0290: ;
    goto loc_001C02C0;

loc_001C0292: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001C029Eu); RECOMP_ABI_CALL(0x001C8950u, sub_001C8950); /* call 0x001C8950 */

loc_001C029E: ;
    edx = MEM32(esp + 0x54);
    eax = MEM32(edx);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0x001C02B0u); RECOMP_ABI_CALL(0x001C85B0u, sub_001C85B0); /* call 0x001C85B0 */

loc_001C02B0: ;
    edx = MEM32(ebp + 0x98);
    eax = MEM32(esp + 0x50);
    eax = MEM32(edx + eax * 4);
    MEM32(eax + 0x10) = ebx;

loc_001C02C0: ;
    ecx = MEM32(ebp + 0x98);
    ebx = MEM32(esp + 0x50);
    ecx = MEM32(ecx + ebx * 4);
    edx = MEM32(ecx);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C02D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C02D4u); } /* indirect call */
    }

loc_001C02D7: ;
    eax = MEM32(esp + 0x30);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001C0350; /* jle: less or equal (signed <=) */

loc_001C02E5: ;
    ecx = MEM32(esp + 0x2C);
    ecx = MEM32(ecx + edx * 4);
    SET_LO8(eax, MEM8(ecx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001C033F; /* jne: not equal / not zero */

loc_001C02F7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C033F; /* je: equal / zero */

loc_001C02FB: ;
    ebx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x28);
    edi = esi + 0x20;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C032A; /* jge: greater or equal (signed >=) */

loc_001C030E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0316; /* jl: less (signed <) */

loc_001C0314: ;
    eax = ebx;

loc_001C0316: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C031Fu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001C031F: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C032A: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 0x24);
    ebx = MEM32(edi);
    MEM32(ebx + eax * 8 + -8) = ecx;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(edi);
    MEM32(ecx + eax * 8 + -4) = ebp;

loc_001C033F: ;
    eax = MEM32(esp + 0x30);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001C02E5; /* jl: less (signed <) */

loc_001C034C: ;
    ebx = MEM32(esp + 0x50);

loc_001C0350: ;
    eax = MEM32(ebp + 0x9C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x50) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001C0268; /* jl: less (signed <) */

loc_001C0363: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C0374u); RECOMP_ABI_CALL(0x001BE550u, sub_001BE550); /* call 0x001BE550 */

loc_001C0374: ;
    ecx = MEM32(esp + 0x40);
    POP32(esp, edi);
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
 * sub_001C0390
 * Original: 0x001C0390 - 0x001C03D2 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0390: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C03C8; /* jle: less or equal (signed <=) */

loc_001C039D: ;
    /* nop */

loc_001C03A0: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + edi * 8);
    edx = MEM32(eax + edi * 8 + 4);
    ecx = MEM32(ecx + 0x44);
    eax = eax + edi * 8;
    eax = MEM32(edx + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C03C0; /* je: equal / zero */

loc_001C03B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C03C0u); RECOMP_ABI_CALL(0x001BFCE0u, sub_001BFCE0); /* call 0x001BFCE0 */

loc_001C03C0: ;
    eax = MEM32(esi + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C03A0; /* jl: less (signed <) */

loc_001C03C8: ;
    POP32(esp, edi);
    MEM32(esi + 0x24) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C03E0
 * Original: 0x001C03E0 - 0x001C04CB (235 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C03E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C03E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001C043A; /* jle: less or equal (signed <=) */

loc_001C03F4: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + eax * 4);
    ecx = MEM32(edi + 0x40);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C042E; /* jle: less or equal (signed <=) */

loc_001C0406: ;
    edx = MEM32(edi);
    ebp = MEM32(edx + ebx * 4);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001C0413u); RECOMP_ABI_CALL(0x001BEE30u, sub_001BEE30); /* call 0x001BEE30 */

loc_001C0413: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001C041Bu); RECOMP_ABI_CALL(0x001BEC70u, sub_001BEC70); /* call 0x001BEC70 */

loc_001C041B: ;
    eax = MEM32(ebp + 0x44);
    MEM8(eax + 0x28) = 1;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0406; /* jl: less (signed <) */

loc_001C042A: ;
    eax = MEM32(esp + 0x10);

loc_001C042E: ;
    ecx = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C03F4; /* jl: less (signed <) */

loc_001C043A: ;
    ecx = MEM32(esi + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001C0494; /* jle: less or equal (signed <=) */

loc_001C0447: ;
    ecx = MEM32(esi + 0x14);
    edi = MEM32(ecx + eax * 4);
    ecx = MEM32(edi + 0x40);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x3C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C0488; /* jle: less or equal (signed <=) */

loc_001C0459: ;
    /* nop */

loc_001C0460: ;
    edx = MEM32(edi);
    ebp = MEM32(edx + ebx * 4);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001C046Du); RECOMP_ABI_CALL(0x001BEE30u, sub_001BEE30); /* call 0x001BEE30 */

loc_001C046D: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001C0475u); RECOMP_ABI_CALL(0x001BEC70u, sub_001BEC70); /* call 0x001BEC70 */

loc_001C0475: ;
    eax = MEM32(ebp + 0x44);
    MEM8(eax + 0x28) = 1;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0460; /* jl: less (signed <) */

loc_001C0484: ;
    eax = MEM32(esp + 0x10);

loc_001C0488: ;
    ecx = MEM32(esi + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C0447; /* jl: less (signed <) */

loc_001C0494: ;
    eax = MEM32(esi + 0x124);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C04C5; /* jle: less or equal (signed <=) */

loc_001C04A0: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM8(eax) = 1;
    ecx = MEM32(esi + 0x120);
    edx = MEM32(ecx + edi * 4);
    eax = ecx + edi * 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001C04BAu); RECOMP_ABI_CALL(0x001BE9D0u, sub_001BE9D0); /* call 0x001BE9D0 */

loc_001C04BA: ;
    eax = MEM32(esi + 0x124);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C04A0; /* jl: less (signed <) */

loc_001C04C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C04D0
 * Original: 0x001C04D0 - 0x001C0573 (163 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C04D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C04D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x12C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x12C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0522; /* jne: not equal / not zero */

loc_001C04DD: ;
    eax = MEM32(edi + 0xF8);
    ecx = MEM32(edi + 0xF4);
    esi = edi + 0xF0;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0503; /* jne: not equal / not zero */

loc_001C04F8: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C0500u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C0500: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C0503: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 0x10);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM8(eax) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001C0522: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C0530; /* jle: less or equal (signed <=) */

loc_001C0529: ;
    ecx = edi;
    PUSH32(esp, 0x001C0530u); RECOMP_ABI_CALL(0x001C0390u, sub_001C0390); /* call 0x001C0390 */

loc_001C0530: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001C053Cu); RECOMP_ABI_CALL(0x001BEE30u, sub_001BEE30); /* call 0x001BEE30 */

loc_001C053C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0543u); RECOMP_ABI_CALL(0x001C9CE0u, sub_001C9CE0); /* call 0x001C9CE0 */

loc_001C0543: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C0549u); RECOMP_ABI_CALL(0x001CAFC0u, sub_001CAFC0); /* call 0x001CAFC0 */

loc_001C0549: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001C0554u); RECOMP_ABI_CALL(0x001BEFB0u, sub_001BEFB0); /* call 0x001BEFB0 */

loc_001C0554: ;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0567; /* jne: not equal / not zero */

loc_001C055F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C0567u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0565u); } /* indirect call */
    }

loc_001C0567: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM8(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0580
 * Original: 0x001C0580 - 0x001C0606 (134 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C0580: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x12C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x12C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C05D0; /* jne: not equal / not zero */

loc_001C058C: ;
    eax = MEM32(esi + 0xF8);
    ecx = MEM32(esi + 0xF4);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C05B2; /* jne: not equal / not zero */

loc_001C05A7: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C05AFu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C05AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C05B2: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 0xC);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001C05D0: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C05DE; /* jle: less or equal (signed <=) */

loc_001C05D7: ;
    ecx = esi;
    PUSH32(esp, 0x001C05DEu); RECOMP_ABI_CALL(0x001C0390u, sub_001C0390); /* call 0x001C0390 */

loc_001C05DE: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C05EBu); RECOMP_ABI_CALL(0x001BEE30u, sub_001BEE30); /* call 0x001BEE30 */

loc_001C05EB: ;
    ecx = edi;
    PUSH32(esp, 0x001C05F2u); RECOMP_ABI_CALL(0x001BE010u, sub_001BE010); /* call 0x001BE010 */

loc_001C05F2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C05FAu); RECOMP_ABI_CALL(0x001BEFB0u, sub_001BEFB0); /* call 0x001BEFB0 */

loc_001C05FA: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM8(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C0610
 * Original: 0x001C0610 - 0x001C07E9 (473 bytes, 160 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0610: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245748);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x44);
    eax = MEM32(edi + 0x5C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001C071B; /* jle: less or equal (signed <=) */

loc_001C0644: ;
    eax = MEM32(edi + 0x58);
    ecx = MEM32(eax + ebp * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001C064Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C064Cu); } /* indirect call */
    }

loc_001C064F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C070F; /* je: equal / zero */

loc_001C0658: ;
    eax = MEM32(edi + 0x58);
    ecx = eax + ebp * 4;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0670; /* jne: not equal / not zero */

loc_001C0667: ;
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x40), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0684; /* jne: not equal / not zero */

loc_001C0670: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C070F; /* jne: not equal / not zero */

loc_001C0679: ;
    SET_LO8(eax, MEM8(edx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C070F; /* je: equal / zero */

loc_001C0684: ;
    esi = MEM32(edi + 0x5C);
    ebx = MEM32(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    MEM32(edi + 0x5C) = esi;
    eax = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001C06A9; /* jge: greater or equal (signed >=) */

loc_001C0695: ;
    ecx = MEM32(edi + 0x58);
    edx = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edx;
    ecx = MEM32(edi + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0695; /* jl: less (signed <) */

loc_001C06A9: ;
    eax = MEM32(ebx);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001C06B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C06B2u); } /* indirect call */
    }

loc_001C06B5: ;
    edx = MEM32(edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001C06C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C06BFu); } /* indirect call */
    }

loc_001C06C2: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx + 0x2C);
    edx = MEM32(esi + 0x60);
    eax = MEM32(esi + 0x5C);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C06E7; /* jne: not equal / not zero */

loc_001C06DC: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C06E4u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C06E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C06E7: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(ecx + eax * 4) = ebx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001C0704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0701u); } /* indirect call */
    }

loc_001C0704: ;
    esi = MEM32(esi + 0x2C);
    MEM32(ebx + 0x14) = esi;
    ebx = MEM32(esp + 0x48);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001C070F: ;
    eax = MEM32(edi + 0x5C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0644; /* jl: less (signed <) */

loc_001C071B: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x28;
    PUSH32(esp, 0x001C0726u); RECOMP_ABI_CALL(0x001BE4C0u, sub_001BE4C0); /* call 0x001BE4C0 */

loc_001C0726: ;
    eax = MEM32(ebx + 0x9C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x40) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_001C07B4; /* jle: less or equal (signed <=) */

loc_001C0736: ;
    goto loc_001C0740;

    /* nop */
    /* nop */

loc_001C0740: ;
    ecx = MEM32(ebx + 0x98);
    ecx = MEM32(ecx + ebp * 4);
    edx = MEM32(ecx);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C0753u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0750u); } /* indirect call */
    }

loc_001C0753: ;
    esi = MEM32(esp + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C0773; /* jle: less or equal (signed <=) */

loc_001C075D: ;
    edx = MEM32(esp + 0x24);

loc_001C0761: ;
    eax = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x40), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C076E; /* jne: not equal / not zero */

loc_001C076A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C07A9; /* jne: not equal / not zero */

loc_001C076E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0761; /* jl: less (signed <) */

loc_001C0773: ;
    ecx = MEM32(ebx + 0x98);
    edx = MEM32(ecx + ebp * 4);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C0789u); RECOMP_ABI_CALL(0x001C8950u, sub_001C8950); /* call 0x001C8950 */

loc_001C0789: ;
    eax = MEM32(ebx + 0x98);
    ecx = MEM32(eax + ebp * 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001C079Au); RECOMP_ABI_CALL(0x001C85B0u, sub_001C85B0); /* call 0x001C85B0 */

loc_001C079A: ;
    edx = MEM32(ebx + 0x98);
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(edx + ebp * 4);
    MEM32(ecx + 0x10) = eax;

loc_001C07A9: ;
    eax = MEM32(ebx + 0x9C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0740; /* jl: less (signed <) */

loc_001C07B4: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C07C3u); RECOMP_ABI_CALL(0x001C0580u, sub_001C0580); /* call 0x001C0580 */

loc_001C07C3: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x40) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C07D4u); RECOMP_ABI_CALL(0x001BE550u, sub_001BE550); /* call 0x001BE550 */

loc_001C07D4: ;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C07F0
 * Original: 0x001C07F0 - 0x001C08D1 (225 bytes, 87 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C07F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C07F0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    ebx = MEM32(ebp + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x58;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = esi;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), esi (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_001C08B6; /* jle: less or equal (signed <=) */

loc_001C0815: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    eax = eax + esi * 4;
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001C082F; /* je: equal / zero */

loc_001C082A: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C08AA; /* jne: not equal / not zero */

loc_001C082F: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C084E; /* jne: not equal / not zero */

loc_001C083F: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C0847u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C0847: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C084E: ;
    eax = MEM32(eax);
    edx = MEM32(edi + 4);
    ecx = MEM32(edi);
    MEM32(ecx + edx * 4) = eax;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx);
    ecx = MEM32(ecx + esi * 4);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001C086Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0867u); } /* indirect call */
    }

loc_001C086A: ;
    ecx = MEM32(ebp + 0x2C);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    eax = MEM32(eax + esi * 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001C087Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C087Au); } /* indirect call */
    }

loc_001C087D: ;
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(eax + 0x5C);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 4) = ecx;
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C08A9; /* jge: greater or equal (signed >=) */

loc_001C0892: ;
    edx = MEM32(eax);
    ebp = MEM32(edx + ecx * 4 + 4);
    edx = edx + ecx * 4;
    MEM32(edx) = ebp;
    edx = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0892; /* jl: less (signed <) */

loc_001C08A5: ;
    ebp = MEM32(esp + 0x10);

loc_001C08A9: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001C08AA: ;
    eax = MEM32(ebx + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0815; /* jl: less (signed <) */

loc_001C08B6: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x001C08C7u); RECOMP_ABI_CALL(0x001C0580u, sub_001C0580); /* call 0x001C0580 */

loc_001C08C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C08E0
 * Original: 0x001C08E0 - 0x001C0941 (97 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C08E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C08E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xF4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C0933; /* jle: less or equal (signed <=) */

loc_001C08F1: ;
    eax = MEM32(esi + 0xF0);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(eax + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C090E; /* je: equal / zero */

loc_001C0901: ;
    PUSH32(esp, eax);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C090Eu); RECOMP_ABI_CALL(0x001C04D0u, sub_001C04D0); /* call 0x001C04D0 */

loc_001C090E: ;
    edx = MEM32(esi + 0xF0);
    ecx = MEM32(edx + edi * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0928; /* jne: not equal / not zero */

loc_001C0922: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C0928u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0926u); } /* indirect call */
    }

loc_001C0928: ;
    eax = MEM32(esi + 0xF4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C08F1; /* jl: less (signed <) */

loc_001C0933: ;
    POP32(esp, edi);
    MEM32(esi + 0xF4) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C0950
 * Original: 0x001C0950 - 0x001C0B90 (576 bytes, 157 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0950(void)
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

loc_001C0950: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x4409E8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_001C0982; /* jae: above or equal (unsigned >=) */

loc_001C0966: ;
    MEM32(ecx) = 0x2F817C;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C0982: ;
    eax = MEM32(esi + 0xCC);
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(ebp);
    MEM32(esi + 0x150) = ecx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 0x154) = edx;
    edx = MEM32(eax);
    ebx = esi + 0x140;
    ecx = ebx;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x180)); /* fmul dword ptr [esi + 0x180] */
    MEMF(esi + 0x170) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x170);
    fp_push((double)SMEM32(esi + 0x17C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 4)); /* fmul dword ptr [ebp + 4] */
    MEMF(esi + 0x174) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x198) = ecx;
    edx = MEM32(esi + 0x174);
    MEM32(esi + 0x19C) = edx;
    fp_push((double)SMEM32(esi + 0x17C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x170)); /* fmul dword ptr [esi + 0x170] */
    MEMF(esi + 0x1A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x180)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x174)); /* fmul dword ptr [esi + 0x174] */
    MEMF(esi + 0x1A4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x12C) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_001C0A2B; /* jle: less or equal (signed <=) */

loc_001C0A24: ;
    ecx = esi;
    PUSH32(esp, 0x001C0A2Bu); RECOMP_ABI_CALL(0x001C0390u, sub_001C0390); /* call 0x001C0390 */

loc_001C0A2B: ;
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x12D) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_001C0ADD; /* jle: less or equal (signed <=) */

loc_001C0A3F: ;
    /* nop */

loc_001C0A40: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C0A53u); RECOMP_ABI_CALL(0x001C98D0u, sub_001C98D0); /* call 0x001C98D0 */

loc_001C0A53: ;
    eax = MEM32(esi + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0AD1; /* je: equal / zero */

loc_001C0A5D: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C0A87; /* jae: above or equal (unsigned >=) */

loc_001C0A6B: ;
    MEM32(ecx) = 0x2F8164;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x18) = eax;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C0A87: ;
    eax = MEM32(esi + 8);
    MEM8(esi + 0x12D) = 0;
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C0A9Cu); RECOMP_ABI_CALL(0x001CA4B0u, sub_001CA4B0); /* call 0x001CA4B0 */

loc_001C0A9C: ;
    MEM8(esi + 0x12D) = 1;
    ecx = MEM32(0x4409E4);
    eax = MEM32(0x4409E8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C0AD1; /* jae: above or equal (unsigned >=) */

loc_001C0AB5: ;
    MEM32(ecx) = 0x2F19C0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x10) = eax;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C0AD1: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0A40; /* jl: less (signed <) */

loc_001C0ADD: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x12D) = 0;
    MEM8(esi + 0x12C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001C0AF9; /* jle: less or equal (signed <=) */

loc_001C0AF2: ;
    ecx = esi;
    PUSH32(esp, 0x001C0AF9u); RECOMP_ABI_CALL(0x001C0390u, sub_001C0390); /* call 0x001C0390 */

loc_001C0AF9: ;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0B0A; /* je: equal / zero */

loc_001C0B03: ;
    ecx = esi;
    PUSH32(esp, 0x001C0B0Au); RECOMP_ABI_CALL(0x001C08E0u, sub_001C08E0); /* call 0x001C08E0 */

loc_001C0B0A: ;
    eax = MEM32(esi + 0x100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0B1B; /* je: equal / zero */

loc_001C0B14: ;
    ecx = esi;
    PUSH32(esp, 0x001C0B1Bu); RECOMP_ABI_CALL(0x001BDB00u, sub_001BDB00); /* call 0x001BDB00 */

loc_001C0B1B: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C0B29; /* jle: less or equal (signed <=) */

loc_001C0B22: ;
    ecx = esi;
    PUSH32(esp, 0x001C0B29u); RECOMP_ABI_CALL(0x001C0390u, sub_001C0390); /* call 0x001C0390 */

loc_001C0B29: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C0B53; /* jae: above or equal (unsigned >=) */

loc_001C0B37: ;
    MEM32(ecx) = 0x2F8154;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C0B53: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C0B5Au); RECOMP_ABI_CALL(0x001CA390u, sub_001CA390); /* call 0x001CA390 */

loc_001C0B5A: ;
    ecx = MEM32(0x4409E4);
    eax = MEM32(0x4409E8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_001C0B8C; /* jae: above or equal (unsigned >=) */

loc_001C0B70: ;
    MEM32(ecx) = 0x2F7504;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 8) = eax;
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C0B8C: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C0B90
 * Original: 0x001C0B90 - 0x001C0E3B (683 bytes, 186 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0B90(void)
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

loc_001C0B90: ;
    eax = MEM32(0x4409E8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C0BC2; /* jae: above or equal (unsigned >=) */

loc_001C0BA6: ;
    MEM32(ecx) = 0x2F81B8;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C0BC2: ;
    ebx = MEM32(esp + 0x14);
    ecx = MEM32(ebx);
    MEM32(esi + 0x150) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(esi + 0x154) = edx;
    fp_push(MEMF(esi + 0x180)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x170) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x170);
    fp_push((double)SMEM32(esi + 0x17C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    MEMF(esi + 0x174) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x198) = eax;
    ecx = MEM32(esi + 0x174);
    MEM32(esi + 0x19C) = ecx;
    fp_push((double)SMEM32(esi + 0x17C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x170)); /* fmul dword ptr [esi + 0x170] */
    MEMF(esi + 0x1A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x180)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x174)); /* fmul dword ptr [esi + 0x174] */
    MEMF(esi + 0x1A4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001C0C35u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_001C0C35: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C0C43; /* jle: less or equal (signed <=) */

loc_001C0C3C: ;
    ecx = esi;
    PUSH32(esp, 0x001C0C43u); RECOMP_ABI_CALL(0x001C0390u, sub_001C0390); /* call 0x001C0390 */

loc_001C0C43: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0C54; /* je: equal / zero */

loc_001C0C4D: ;
    ecx = esi;
    PUSH32(esp, 0x001C0C54u); RECOMP_ABI_CALL(0x001BDB70u, sub_001BDB70); /* call 0x001BDB70 */

loc_001C0C54: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0xC);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(esi + 0x10C) = 0;
    MEM8(esi + 0x12C) = 1;
    if ((_fas < 0)) goto loc_001C0D20; /* js: sign (negative) */

loc_001C0C71: ;
    SET_LO8(eax, MEM8(esi + 0x23D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(esi + 8);
    edi = MEM32(edx + ebp * 4);
    if (CMP_EQ(_fa, _fb)) goto loc_001C0C9D; /* je: equal / zero */

loc_001C0C81: ;
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001C0C8Eu); RECOMP_ABI_CALL(0x001C8720u, sub_001C8720); /* call 0x001C8720 */

loc_001C0C8E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0C9D; /* je: equal / zero */

loc_001C0C93: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C0C9Bu); RECOMP_ABI_CALL(0x001BD9C0u, sub_001BD9C0); /* call 0x001BD9C0 */

loc_001C0C9B: ;
    goto loc_001C0CAF;

loc_001C0C9D: ;
    ecx = esi + 0x140;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001C0CABu); RECOMP_ABI_CALL(0x001C8610u, sub_001C8610); /* call 0x001C8610 */

loc_001C0CAB: ;
    MEM8(edi + 0x30) = 0;

loc_001C0CAF: ;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0D19; /* je: equal / zero */

loc_001C0CB9: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C0CE3; /* jae: above or equal (unsigned >=) */

loc_001C0CC7: ;
    MEM32(ecx) = 0x2F81A4;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x10) = eax;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C0CE3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C0CEBu); RECOMP_ABI_CALL(0x001CA420u, sub_001CA420); /* call 0x001CA420 */

loc_001C0CEB: ;
    ecx = MEM32(0x4409E4);
    eax = MEM32(0x4409E8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C0D19; /* jae: above or equal (unsigned >=) */

loc_001C0CFD: ;
    MEM32(ecx) = 0x2F19C0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C0D19: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C0C71; /* jns: not sign (positive) */

loc_001C0D20: ;
    SET_LO8(eax, MEM8(esi + 0x23C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0D31; /* je: equal / zero */

loc_001C0D2A: ;
    ecx = esi;
    PUSH32(esp, 0x001C0D31u); RECOMP_ABI_CALL(0x001BF3D0u, sub_001BF3D0); /* call 0x001BF3D0 */

loc_001C0D31: ;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x12C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C0D49; /* je: equal / zero */

loc_001C0D42: ;
    ecx = esi;
    PUSH32(esp, 0x001C0D49u); RECOMP_ABI_CALL(0x001C08E0u, sub_001C08E0); /* call 0x001C08E0 */

loc_001C0D49: ;
    eax = MEM32(esi + 0x100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C0D5A; /* je: equal / zero */

loc_001C0D53: ;
    ecx = esi;
    PUSH32(esp, 0x001C0D5Au); RECOMP_ABI_CALL(0x001BDB00u, sub_001BDB00); /* call 0x001BDB00 */

loc_001C0D5A: ;
    eax = MEM32(esi + 0x118);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C0DA3; /* jle: less or equal (signed <=) */

loc_001C0D66: ;
    goto loc_001C0D70;

    /* nop */
    /* nop */

loc_001C0D70: ;
    ecx = MEM32(esi + 0x114);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, 0x001C0D7Eu); RECOMP_ABI_CALL(0x001BE0F0u, sub_001BE0F0); /* call 0x001BE0F0 */

loc_001C0D7E: ;
    edx = MEM32(esi + 0x114);
    ecx = MEM32(edx + edi * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C0D98; /* jne: not equal / not zero */

loc_001C0D92: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C0D98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C0D96u); } /* indirect call */
    }

loc_001C0D98: ;
    eax = MEM32(esi + 0x118);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C0D70; /* jl: less (signed <) */

loc_001C0DA3: ;
    MEM32(esi + 0x118) = 0;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_AE(_fa, _fb)) goto loc_001C0DFE; /* jae: above or equal (unsigned >=) */

loc_001C0DBD: ;
    MEM32(ecx) = 0x2F7504;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x14) = eax;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    eax = MEM32(0x4409E8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(0x4409E4) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_001C0DFE; /* jae: above or equal (unsigned >=) */

loc_001C0DE2: ;
    MEM32(ecx) = 0x2F8190;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C0DFE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C0E05u); RECOMP_ABI_CALL(0x001CA2F0u, sub_001CA2F0); /* call 0x001CA2F0 */

loc_001C0E05: ;
    ecx = MEM32(0x4409E4);
    eax = MEM32(0x4409E8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_001C0E35; /* jae: above or equal (unsigned >=) */

loc_001C0E19: ;
    MEM32(ecx) = 0x2F19C0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0xC) = eax;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C0E35: ;
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
 * sub_001C0E40
 * Original: 0x001C0E40 - 0x001C155D (1821 bytes, 440 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C0E40(void)
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

loc_001C0E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2458EF);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x2E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2E8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = esi;
    MEM16(esi + 6) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2F8230;
    eax = 0x80000000u;
    MEM32(esp + 0x2FC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = ebx;
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xFC) = ebx;
    MEM32(esi + 0x100) = ebx;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = ebx;
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x114) = ebx;
    MEM32(esi + 0x118) = ebx;
    MEM32(esi + 0x11C) = eax;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = ebx;
    MEM32(esi + 0x128) = eax;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x4F4C (32-bit) */
    MEM8(esp + 0x2FC) = 0x13;
    if (CMP_EQ(_fa, _fb)) goto loc_001C103D; /* je: equal / zero */

loc_001C0FA3: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x1C) = esp;
    MEM8(eax) = 1;
    PUSH32(esp, 0x200);
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0FC3u); RECOMP_ABI_CALL(0x0018F980u, sub_0018F980); /* call 0x0018F980 */

loc_001C0FC3: ;
    PUSH32(esp, 0x2F8228);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F8208);
    PUSH32(esp, 0x4F4C);
    PUSH32(esp, 0x2F81E4);
    ecx = esp + 0x34;
    MEM8(esp + 0x310) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0FE9u); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_001C0FE9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0FF0u); RECOMP_ABI_CALL(0x0018F830u, sub_0018F830); /* call 0x0018F830 */

loc_001C0FF0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0FF7u); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_001C0FF7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C0FFEu); RECOMP_ABI_CALL(0x0018F880u, sub_0018F880); /* call 0x0018F880 */

loc_001C0FFE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C1005u); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_001C1005: ;
    ecx = MEM32(0x4409DC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA62);
    PUSH32(esp, 0x2F81D0);
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x53C94B42);
    PUSH32(esp, 0x2F6314);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001C102Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1029u); } /* indirect call */
    }

loc_001C102C: ;
    ecx = esp + 0x20;
    MEM8(esp + 0x2FC) = 0x13;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C103Du); RECOMP_ABI_CALL(0x0018FA00u, sub_0018FA00); /* call 0x0018FA00 */

loc_001C103D: ;
    edi = MEM32(ebp + 8);
    MEM32(esi + 0x130) = 1;
    MEM32(esi + 0x134) = 0xFFFFFFF;
    xmm0 = XMM_MEM(edi); /* movaps */
    XMM_STORE(esi + 0xE0, xmm0); /* movaps */
    SET_LO8(ecx, MEM8(edi + 0x10));
    MEM8(esi + 0x23C) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x84));
    MEM8(esi + 0x23D) = LO8(edx);
    eax = MEM32(edi + 0x88);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(edi + 0x8C);
    MEM32(esi + 0x34) = ecx;
    xmm0 = XMM_MEM(edi + 0x20); /* movaps */
    eax = esi + 0x210;
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x30); /* movaps */
    ecx = esi + 0x220;
    XMM_STORE(ecx, xmm0); /* movaps */
    edx = MEM32(edi + 0x40);
    MEM32(esi + 0x230) = edx;
    edx = MEM32(edi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C10B3u); RECOMP_ABI_CALL(0x00146660u, sub_00146660); /* call 0x00146660 */

loc_001C10B3: ;
    MEM32(esi + 0xC4) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x234) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x238) = eax;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x104);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C10E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C10DFu); } /* indirect call */
    }

loc_001C10E2: ;
    MEM32(esp + 0x18) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x2FC) = 0x15;
    if (CMP_EQ(_fa, _fb)) goto loc_001C10FB; /* je: equal / zero */

loc_001C10F2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C10F9u); RECOMP_ABI_CALL(0x00230680u, sub_00230680); /* call 0x00230680 */

loc_001C10F9: ;
    goto loc_001C10FD;

loc_001C10FB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C10FD: ;
    MEM32(esi + 0x138) = eax;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 4);
    MEM8(esp + 0x304) = 0x13;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C111Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1117u); } /* indirect call */
    }

loc_001C111A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1126; /* je: equal / zero */

loc_001C111E: ;
    MEM32(eax) = 0x2F80F4;
    goto loc_001C1128;

loc_001C1126: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C1128: ;
    ecx = MEM32(esi + 0x138);
    MEM32(esi + 0x13C) = eax;
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(esi + 0x13C);
    ecx = MEM32(esi + 0x138);
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(esi + 0x13C);
    ecx = MEM32(esi + 0x138);
    MEM32(ecx + 0x48) = eax;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C1164u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1161u); } /* indirect call */
    }

loc_001C1164: ;
    MEM16(eax + 4) = 0xC;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, esi);
    ecx = eax;
    MEM8(esp + 0x300) = 0x16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C117Eu); RECOMP_ABI_CALL(0x001CAC70u, sub_001CAC70); /* call 0x001CAC70 */

loc_001C117E: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x4DA8);
    MEM32(esp + 0x20) = eax;
    MEM8(esp + 0x304) = 0x13;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C119Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1199u); } /* indirect call */
    }

loc_001C119C: ;
    MEM16(eax + 4) = 0x4DA8;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B2D60);
    ecx = eax;
    MEM8(esp + 0x304) = 0x17;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C11BFu); RECOMP_ABI_CALL(0x001ACBF0u, sub_001ACBF0); /* call 0x001ACBF0 */

loc_001C11BF: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0xC8) = eax;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    MEM8(esp + 0x2FC) = 0x13;
    if (CMP_NE(_fa, _fb)) goto loc_001C11E1; /* jne: not equal / not zero */

loc_001C11DB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C11E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C11DFu); } /* indirect call */
    }

loc_001C11E1: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C11F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C11EDu); } /* indirect call */
    }

loc_001C11F0: ;
    MEM16(eax + 4) = 0x18;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0x2F6AE8;
    MEM32(eax + 0xC) = 0x2F1038;
    MEM32(eax + 0x10) = 0x2F1040;
    MEM32(eax + 0x14) = 0x2F6AE8;
    MEM32(eax) = 0x2F8134;
    MEM32(eax + 8) = 0x2F8120;
    MEM32(eax + 0xC) = 0x2F812C;
    MEM32(eax + 0x10) = 0x2F8124;
    MEM32(eax + 0x14) = 0x2F8120;
    MEM32(esi + 0xD0) = eax;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C124Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C124Cu); } /* indirect call */
    }

loc_001C124F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1264; /* je: equal / zero */

loc_001C1253: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    goto loc_001C1266;

loc_001C1264: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C1266: ;
    ecx = MEM32(esi + 0xC8);
    MEM32(esi + 0xCC) = eax;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edi + 0x60);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C128Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C128Cu); } /* indirect call */
    }

loc_001C128F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C12B8; /* je: equal / zero */

loc_001C1293: ;
    ecx = 0x3DCCCCCD;
    MEM8(eax) = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ebx;
    MEM8(eax + 0x14) = 1;
    MEM32(eax + 0x18) = 0x3C23D70A;
    MEM32(eax + 0x1C) = 0x14;
    goto loc_001C12BA;

loc_001C12B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C12BA: ;
    ecx = MEM32(esi + 0xCC);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(edi + 0x68);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(edi + 0x6C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(edi + 0x70);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(edi + 0x74);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edx + 0xC);
    SET_LO8(ecx, MEM8(edi + 0x64));
    MEM8(eax) = LO8(ecx);
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edx + 0xC);
    SET_LO8(ecx, MEM8(edi + 0x78));
    MEM8(eax + 0x14) = LO8(ecx);
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(edi + 0x7C);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(edi + 0x80);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C134C; /* je: equal / zero */

loc_001C1347: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001C134E;

loc_001C134C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C134E: ;
    edx = MEM32(esi + 0xCC);
    ecx = esi;
    MEM32(edx + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C135Eu); RECOMP_ABI_CALL(0x001BD4E0u, sub_001BD4E0); /* call 0x001BD4E0 */

loc_001C135E: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0xA8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C1370u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C136Du); } /* indirect call */
    }

loc_001C1370: ;
    MEM16(eax + 4) = 0xA8;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, esi);
    ecx = eax;
    MEM8(esp + 0x300) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C138Au); RECOMP_ABI_CALL(0x001C8D60u, sub_001C8D60); /* call 0x001C8D60 */

loc_001C138A: ;
    MEM32(esi + 0x2C) = eax;
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x29) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x29;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = LO8(ebx);
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    MEM8(esp + 0x2FC) = 0x13;
    MEM8(eax) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C13B6u); RECOMP_ABI_CALL(0x001C45D0u, sub_001C45D0); /* call 0x001C45D0 */

loc_001C13B6: ;
    ecx = MEM32(0x4409AC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x28);
    MEM8(esp + 0xE8) = 7;
    MEM32(esp + 0xD4) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, 0xA4);
    MEM8(esp + 0x304) = 0x19;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C13E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C13E0u); } /* indirect call */
    }

loc_001C13E3: ;
    MEM16(eax + 4) = 0xA4;
    MEM32(esp + 0x1C) = eax;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(esp + 0x300) = 0x1A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C1401u); RECOMP_ABI_CALL(0x001C3E60u, sub_001C3E60); /* call 0x001C3E60 */

loc_001C1401: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x300) = 0x19;
    MEM32(esi + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C1414u); RECOMP_ABI_CALL(0x001BFFB0u, sub_001BFFB0); /* call 0x001BFFB0 */

loc_001C1414: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x2FC) = 0x13;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C143F; /* js: sign (negative) */

loc_001C1424: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C143Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C143Cu); } /* indirect call */
    }

loc_001C143F: ;
    edx = MEM32(esi + 0xCC);
    eax = MEM32(edx);
    ecx = esi + 0x140;
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    MEM32(esi + 0x160) = 0x3F800000;
    eax = MEM32(edi + 0x44);
    MEM32(esi + 0x164) = eax;
    ecx = MEM32(edi + 0x48);
    MEM32(esi + 0x168) = ecx;
    fp_push(MEMF(edi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esi + 0x16C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi + 0x4C);
    MEM32(esi + 0x17C) = edx;
    fp_push((double)SMEM32(edi + 0x4C)); /* fild */
    MEM32(esi + 0x178) = 0x3F7D70A4;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    MEMF(esi + 0x180) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x180);
    MEM32(esi + 0x1AC) = eax;
    ecx = MEM32(esi + 0x178);
    MEM32(esi + 0x1A8) = ecx;
    MEM32(esi + 0x150) = ebx;
    MEM32(esi + 0x254) = ebx;
    MEM8(esi + 0x23E) = LO8(ebx);
    MEM8(esi + 0x240) = LO8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0x50)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x50), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C14F0; /* je: equal / zero */

loc_001C14E3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 0x51));
    ecx = esi;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C14F0u); RECOMP_ABI_CALL(0x001BD8D0u, sub_001BD8D0); /* call 0x001BD8D0 */

loc_001C14F0: ;
    fp_push(MEMF(edi + 0x54)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEMF(esi + 0x244) = (float)fp_top(); /* fst */
    PUSH32(esp, 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x58)); /* fmul dword ptr [edi + 0x58] */
    MEMF(esi + 0x248) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x5C);
    MEM32(esi + 0x24C) = eax;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C151Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1517u); } /* indirect call */
    }

loc_001C151A: ;
    ecx = MEM32(esp + 0x2F4);
    MEM16(eax + 4) = 8;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F8118;
    MEM8(esi + 0x12C) = LO8(ebx);
    MEM32(esi + 0x250) = eax;
    MEM32(esi + 0xC0) = ebx;
    MEM8(esi + 0x12D) = LO8(ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
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
 * sub_001C1560
 * Original: 0x001C1560 - 0x001C15EC (140 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001C158C; /* jne: not equal / not zero */

loc_001C156C: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C157Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1578u); } /* indirect call */
    }

loc_001C157B: ;
    ecx = eax;
    MEM16(eax + 4) = 0x18;
    PUSH32(esp, 0x001C1588u); RECOMP_ABI_CALL(0x001BDF20u, sub_001BDF20); /* call 0x001BDF20 */

loc_001C1588: ;
    edi = eax;
    goto loc_001C1590;

loc_001C158C: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001C1590: ;
    ecx = MEM32(esi + 0xD0);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C15A7; /* jne: not equal / not zero */

loc_001C15A1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C15A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C15A5u); } /* indirect call */
    }

loc_001C15A7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xD0) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001C15B6; /* je: equal / zero */

loc_001C15B1: ;
    eax = edi + 0xC;
    goto loc_001C15B8;

loc_001C15B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C15B8: ;
    ecx = MEM32(esi + 0xCC);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C15D0; /* je: equal / zero */

loc_001C15CB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001C15D2;

loc_001C15D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C15D2: ;
    MEM32(esi + 0x144) = eax;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C15E7; /* je: equal / zero */

loc_001C15E0: ;
    ecx = esi;
    PUSH32(esp, 0x001C15E7u); RECOMP_ABI_CALL(0x001C03E0u, sub_001C03E0); /* call 0x001C03E0 */

loc_001C15E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C15F0
 * Original: 0x001C15F0 - 0x001C16A4 (180 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C15F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C15F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    edi = ecx;
    PUSH32(esp, eax);
    ecx = 0x440DA0;
    PUSH32(esp, 0x001C1608u); RECOMP_ABI_CALL(0x0018F700u, sub_0018F700); /* call 0x0018F700 */

loc_001C1608: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C161A; /* je: equal / zero */

loc_001C160E: ;
    ecx = edi;
    PUSH32(esp, 0x001C1615u); RECOMP_ABI_CALL(0x001BFFB0u, sub_001BFFB0); /* call 0x001BFFB0 */

loc_001C1615: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C161A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = 0x440EE8;
    PUSH32(esp, 0x001C1629u); RECOMP_ABI_CALL(0x0018F700u, sub_0018F700); /* call 0x0018F700 */

loc_001C1629: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C163B; /* je: equal / zero */

loc_001C162F: ;
    ecx = edi;
    PUSH32(esp, 0x001C1636u); RECOMP_ABI_CALL(0x001BF180u, sub_001BF180); /* call 0x001BF180 */

loc_001C1636: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C163B: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = 0x440E98;
    PUSH32(esp, 0x001C164Au); RECOMP_ABI_CALL(0x0018F700u, sub_0018F700); /* call 0x0018F700 */

loc_001C164A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C165C; /* je: equal / zero */

loc_001C1650: ;
    ecx = edi;
    PUSH32(esp, 0x001C1657u); RECOMP_ABI_CALL(0x001BDFA0u, sub_001BDFA0); /* call 0x001BDFA0 */

loc_001C1657: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C165C: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = 0x440EC0;
    PUSH32(esp, 0x001C166Bu); RECOMP_ABI_CALL(0x0018F700u, sub_0018F700); /* call 0x0018F700 */

loc_001C166B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C167D; /* je: equal / zero */

loc_001C1671: ;
    ecx = edi;
    PUSH32(esp, 0x001C1678u); RECOMP_ABI_CALL(0x001BF080u, sub_001BF080); /* call 0x001BF080 */

loc_001C1678: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C167D: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = 0x440B80;
    PUSH32(esp, 0x001C168Cu); RECOMP_ABI_CALL(0x0018F700u, sub_0018F700); /* call 0x0018F700 */

loc_001C168C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C169F; /* je: equal / zero */

loc_001C1691: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(eax) = 1;
    PUSH32(esp, 0x001C169Fu); RECOMP_ABI_CALL(0x001C1560u, sub_001C1560); /* call 0x001C1560 */

loc_001C169F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C16B0
 * Original: 0x001C16B0 - 0x001C1C6A (1466 bytes, 468 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C16B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C16B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2459FF);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = esi;
    MEM32(esi) = 0x2F8230;
    eax = MEM32(esi + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = 0x13;
    if (CMP_LE(_fas, _fbs)) goto loc_001C16EC; /* jle: less or equal (signed <=) */

loc_001C16E7: ;
    PUSH32(esp, 0x001C16ECu); RECOMP_ABI_CALL(0x001C0390u, sub_001C0390); /* call 0x001C0390 */

loc_001C16EC: ;
    _fa = (uint32_t)(MEM32(esi + 0x124)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x124), ebx (32-bit) */
    MEM8(esi + 0x12C) = LO8(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_001C1718; /* jle: less or equal (signed <=) */

loc_001C16FA: ;
    /* nop */

loc_001C1700: ;
    eax = MEM32(esi + 0x120);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C1710u); RECOMP_ABI_CALL(0x001BF2B0u, sub_001BF2B0); /* call 0x001BF2B0 */

loc_001C1710: ;
    _fa = (uint32_t)(MEM32(esi + 0x124)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x124), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C1700; /* jg: greater (signed >) */

loc_001C1718: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C173C; /* jle: less or equal (signed <=) */

loc_001C171D: ;
    /* nop */

loc_001C1720: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001C1737u); RECOMP_ABI_CALL(0x001C04D0u, sub_001C04D0); /* call 0x001C04D0 */

loc_001C1737: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C1720; /* jg: greater (signed >) */

loc_001C173C: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C175D; /* jle: less or equal (signed <=) */

loc_001C1741: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x3C);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    edx = esp + 0xF;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001C1758u); RECOMP_ABI_CALL(0x001C04D0u, sub_001C04D0); /* call 0x001C04D0 */

loc_001C1758: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C1741; /* jg: greater (signed >) */

loc_001C175D: ;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C179A; /* je: equal / zero */

loc_001C1768: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C1794; /* jle: less or equal (signed <=) */

loc_001C176E: ;
    edi = edi;

loc_001C1770: ;
    eax = MEM32(esi + 0xF0);
    ecx = MEM32(eax + edi * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1789; /* jne: not equal / not zero */

loc_001C1783: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C1789u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1787u); } /* indirect call */
    }

loc_001C1789: ;
    eax = MEM32(esi + 0xF4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1770; /* jl: less (signed <) */

loc_001C1794: ;
    MEM32(esi + 0xF4) = ebx;

loc_001C179A: ;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C17AAu); RECOMP_ABI_CALL(0x001C04D0u, sub_001C04D0); /* call 0x001C04D0 */

loc_001C17AA: ;
    ecx = MEM32(esi + 0x38);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C17BD; /* jne: not equal / not zero */

loc_001C17B7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C17BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C17BBu); } /* indirect call */
    }

loc_001C17BD: ;
    eax = MEM32(esi + 0x2C);
    MEM32(esi + 0x38) = ebx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C17E5; /* jle: less or equal (signed <=) */

loc_001C17C8: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx + 0x3C);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C17DDu); RECOMP_ABI_CALL(0x001C04D0u, sub_001C04D0); /* call 0x001C04D0 */

loc_001C17DD: ;
    edx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM32(edx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x40), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C17C8; /* jg: greater (signed >) */

loc_001C17E5: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C17F2; /* je: equal / zero */

loc_001C17EC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C17F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C17F0u); } /* indirect call */
    }

loc_001C17F2: ;
    eax = MEM32(esi + 0x118);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x2C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001C1833; /* jle: less or equal (signed <=) */

loc_001C1801: ;
    ecx = MEM32(esi + 0x114);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, 0x001C180Fu); RECOMP_ABI_CALL(0x001BE0F0u, sub_001BE0F0); /* call 0x001BE0F0 */

loc_001C180F: ;
    edx = MEM32(esi + 0x114);
    ecx = MEM32(edx + edi * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1828; /* jne: not equal / not zero */

loc_001C1822: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C1828u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1826u); } /* indirect call */
    }

loc_001C1828: ;
    eax = MEM32(esi + 0x118);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C1801; /* jl: less (signed <) */

loc_001C1833: ;
    PUSH32(esp, esi);
    MEM32(esi + 0x118) = ebx;
    PUSH32(esp, 0x001C183Fu); RECOMP_ABI_CALL(0x001CA0C0u, sub_001CA0C0); /* call 0x001CA0C0 */

loc_001C183F: ;
    ecx = MEM32(esi + 0xC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1858; /* jne: not equal / not zero */

loc_001C1852: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C1858u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1856u); } /* indirect call */
    }

loc_001C1858: ;
    ecx = MEM32(esi + 0xC8);
    MEM32(esi + 0xC4) = ebx;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1874; /* jne: not equal / not zero */

loc_001C186E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C1874u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1872u); } /* indirect call */
    }

loc_001C1874: ;
    ecx = MEM32(esi + 0x250);
    MEM32(esi + 0xC8) = ebx;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C1890; /* jne: not equal / not zero */

loc_001C188A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C1890u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C188Eu); } /* indirect call */
    }

loc_001C1890: ;
    edi = MEM32(esi + 0x138);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C18B4; /* je: equal / zero */

loc_001C189A: ;
    ecx = edi;
    PUSH32(esp, 0x001C18A1u); RECOMP_ABI_CALL(0x002304F0u, sub_002304F0); /* call 0x002304F0 */

loc_001C18A1: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x104);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C18B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C18B1u); } /* indirect call */
    }

loc_001C18B4: ;
    ecx = MEM32(esi + 0x13C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C18C4; /* je: equal / zero */

loc_001C18BE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C18C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C18C2u); } /* indirect call */
    }

loc_001C18C4: ;
    ecx = MEM32(esi + 0xD0);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C18DA; /* jne: not equal / not zero */

loc_001C18D4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C18DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C18D8u); } /* indirect call */
    }

loc_001C18DA: ;
    ecx = MEM32(esi + 0xCC);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C18F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C18F0u); } /* indirect call */
    }

loc_001C18F3: ;
    eax = MEM32(esi + 0xCC);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C1909u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1906u); } /* indirect call */
    }

loc_001C1909: ;
    ecx = MEM32(esi + 0x254);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C1919; /* je: equal / zero */

loc_001C1913: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C1919u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1917u); } /* indirect call */
    }

loc_001C1919: ;
    eax = MEM32(esi + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 0x12;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1945; /* js: sign (negative) */

loc_001C1928: ;
    edx = MEM32(esi + 0x120);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1945u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1942u); } /* indirect call */
    }

loc_001C1945: ;
    eax = MEM32(esi + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 0x11;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1971; /* js: sign (negative) */

loc_001C1954: ;
    edx = MEM32(esi + 0x114);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1971u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C196Eu); } /* indirect call */
    }

loc_001C1971: ;
    eax = MEM32(esi + 0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 0x10;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C199D; /* js: sign (negative) */

loc_001C1980: ;
    edx = MEM32(esi + 0x108);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C199Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C199Au); } /* indirect call */
    }

loc_001C199D: ;
    eax = MEM32(esi + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 0xF;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C19C9; /* js: sign (negative) */

loc_001C19AC: ;
    edx = MEM32(esi + 0xFC);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C19C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C19C6u); } /* indirect call */
    }

loc_001C19C9: ;
    eax = MEM32(esi + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 0xE;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C19F5; /* js: sign (negative) */

loc_001C19D8: ;
    edx = MEM32(esi + 0xF0);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C19F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C19F2u); } /* indirect call */
    }

loc_001C19F5: ;
    eax = MEM32(esi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 0xD;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1A21; /* js: sign (negative) */

loc_001C1A04: ;
    edx = MEM32(esi + 0xB4);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1A21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1A1Eu); } /* indirect call */
    }

loc_001C1A21: ;
    eax = MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 0xC;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1A4D; /* js: sign (negative) */

loc_001C1A30: ;
    edx = MEM32(esi + 0xA8);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1A4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1A4Au); } /* indirect call */
    }

loc_001C1A4D: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 0xB;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1A79; /* js: sign (negative) */

loc_001C1A5C: ;
    edx = MEM32(esi + 0x9C);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1A79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1A76u); } /* indirect call */
    }

loc_001C1A79: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 0xA;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1AA5; /* js: sign (negative) */

loc_001C1A88: ;
    edx = MEM32(esi + 0x90);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1AA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1AA2u); } /* indirect call */
    }

loc_001C1AA5: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 9;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1AD1; /* js: sign (negative) */

loc_001C1AB4: ;
    edx = MEM32(esi + 0x84);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1AD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1ACEu); } /* indirect call */
    }

loc_001C1AD1: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 8;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1AFA; /* js: sign (negative) */

loc_001C1AE0: ;
    edx = MEM32(esi + 0x78);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1AFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1AF7u); } /* indirect call */
    }

loc_001C1AFA: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 7;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1B20; /* js: sign (negative) */

loc_001C1B06: ;
    edx = MEM32(esi + 0x6C);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1B20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1B1Du); } /* indirect call */
    }

loc_001C1B20: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 6;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1B46; /* js: sign (negative) */

loc_001C1B2C: ;
    edx = MEM32(esi + 0x60);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1B46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1B43u); } /* indirect call */
    }

loc_001C1B46: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 5;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1B6C; /* js: sign (negative) */

loc_001C1B52: ;
    edx = MEM32(esi + 0x54);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1B6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1B69u); } /* indirect call */
    }

loc_001C1B6C: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 4;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1B92; /* js: sign (negative) */

loc_001C1B78: ;
    edx = MEM32(esi + 0x48);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1B92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1B8Fu); } /* indirect call */
    }

loc_001C1B92: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 3;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1BB8; /* js: sign (negative) */

loc_001C1B9E: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1BB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1BB5u); } /* indirect call */
    }

loc_001C1BB8: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1BDE; /* js: sign (negative) */

loc_001C1BC4: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1BDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1BDBu); } /* indirect call */
    }

loc_001C1BDE: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1C04; /* js: sign (negative) */

loc_001C1BEA: ;
    edx = MEM32(esi + 0x14);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1C04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1C01u); } /* indirect call */
    }

loc_001C1C04: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = LO8(ebx);
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C1C29; /* js: sign (negative) */

loc_001C1C0F: ;
    edx = MEM32(esi + 8);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C1C29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1C26u); } /* indirect call */
    }

loc_001C1C29: ;
    MEM32(esi) = 0x2DC688;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    MEM32(esp + 0x1C) = 0x14;
    POP32(esp, edi);
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001C1C53; /* jns: not sign (positive) */

loc_001C1C42: ;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ecx = esi;
    MEM16(esi + 4) = LO16(eax);
    PUSH32(esp, 0x001C1C53u); RECOMP_ABI_CALL(0x0018D710u, sub_0018D710); /* call 0x0018D710 */

loc_001C1C53: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi) = 0x2DC684;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C1C70
 * Original: 0x001C1C70 - 0x001C1C98 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C1C78u); RECOMP_ABI_CALL(0x001C16B0u, sub_001C16B0); /* call 0x001C16B0 */

loc_001C1C78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1C92; /* je: equal / zero */

loc_001C1C7F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2A);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C1C92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1C8Fu); } /* indirect call */
    }

loc_001C1C92: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1C89
 * Original: 0x001C1C89 - 0x001C1C98 (15 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1C89(void)
{

loc_001C1C89: ;
    eax = MEM32(ecx);
    PUSH32(esp, 0x2A);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C1C92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1C8Fu); } /* indirect call */
    }

loc_001C1C92: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1CA0
 * Original: 0x001C1CA0 - 0x001C1CDB (59 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1CA0(void)
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

loc_001C1CA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0xC)); /* fdiv dword ptr [esp + 0xc] */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001C1CC8u); RECOMP_ABI_CALL(0x001C0950u, sub_001C0950); /* call 0x001C0950 */

loc_001C1CC8: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001C1CD4u); RECOMP_ABI_CALL(0x001C0B90u, sub_001C0B90); /* call 0x001C0B90 */

loc_001C1CD4: ;
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
 * sub_001C1CE0
 * Original: 0x001C1CE0 - 0x001C1CE7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1CE0(void)
{

loc_001C1CE0: ;
    eax = ecx + 0xAC;
    esp += 4; return; /* ret */

}

/**
 * sub_001C1CF0
 * Original: 0x001C1CF0 - 0x001C1CF8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1CF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001C1FC0(); return; /* tail jmp 0x001C1FC0 */

}

/**
 * sub_001C1D00
 * Original: 0x001C1D00 - 0x001C1D7E (126 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1D00(void)
{

loc_001C1D00: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(ecx + 0x50, xmm0); /* movaps */
    edx = MEM32(eax + 0x90);
    MEM32(ecx + 0xA0) = edx;
    edx = MEM32(eax + 0x94);
    MEM32(ecx + 0xA4) = edx;
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    XMM_STORE(ecx + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    XMM_STORE(ecx + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x70); /* movaps */
    XMM_STORE(ecx + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x80); /* movaps */
    XMM_STORE(ecx + 0x90, xmm0); /* movaps */
    eax = MEM32(eax + 0x98);
    edx = MEM32(ecx);
    MEM32(ecx + 0xA8) = eax;
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001C1D7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1D78u); } /* indirect call */
    }

loc_001C1D7B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1D80
 * Original: 0x001C1D80 - 0x001C1E00 (128 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1D80(void)
{

loc_001C1D80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C1D8Eu); RECOMP_ABI_CALL(0x001BCC40u, sub_001BCC40); /* call 0x001BCC40 */

loc_001C1D8E: ;
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(edi + 0x40, xmm0); /* movaps */
    eax = MEM32(esi + 0xA0);
    MEM32(edi + 0x90) = eax;
    ecx = MEM32(esi + 0xA4);
    MEM32(edi + 0x94) = ecx;
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    XMM_STORE(edi + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    XMM_STORE(edi + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x80); /* movaps */
    XMM_STORE(edi + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x90); /* movaps */
    XMM_STORE(edi + 0x80, xmm0); /* movaps */
    edx = MEM32(esi + 0xA8);
    MEM32(edi + 0x98) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1E00
 * Original: 0x001C1E00 - 0x001C1E30 (48 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1E00(void)
{

loc_001C1E00: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 8) = 0x40;
    MEM32(eax + 4) = 0x120;
    MEM32(eax + 0xC) = 7;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1E30
 * Original: 0x001C1E30 - 0x001C1F1E (238 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C1E30(void)
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

loc_001C1E30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_MEM(ecx + 0x60); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD6EC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd6ec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C1EF3; /* jp: parity */

loc_001C1E77: ;
    xmm0 = XMM_MEM(ecx + 0x60); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    edx = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD6EC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd6ec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C1EF3; /* jp: parity */

loc_001C1EB5: ;
    xmm0 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD6EC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd6ec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C1EFF; /* jnp: not parity */

loc_001C1EF3: ;
    eax = MEM32(ebp + 8);

loc_001C1EF6: ;
    MEM8(eax) = 0;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001C1EFF: ;
    fp_push(MEMF(ecx + 0xA0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xA4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xa4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_001C1EF6; /* je: equal / zero */

loc_001C1F15: ;
    MEM8(eax) = 1;
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
 * sub_001C1F20
 * Original: 0x001C1F20 - 0x001C1FBC (156 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1F20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245A18);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x001C1F48u); RECOMP_ABI_CALL(0x001BCE30u, sub_001BCE30); /* call 0x001BCE30 */

loc_001C1F48: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2F8280;
    MEM32(esi + 8) = 0x2F8270;
    MEM32(esi + 0xAC) = ecx;
    MEM32(esi + 0xB0) = ecx;
    eax = esi + 0xAC;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C1FA7u); RECOMP_ABI_CALL(0x001C1D00u, sub_001C1D00); /* call 0x001C1D00 */

loc_001C1FA7: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1FC0
 * Original: 0x001C1FC0 - 0x001C1FE8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C1FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C1FC8u); RECOMP_ABI_CALL(0x00015D40u, sub_00015D40); /* call 0x00015D40 */

loc_001C1FC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C1FE2; /* je: equal / zero */

loc_001C1FCF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C1FE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C1FDFu); } /* indirect call */
    }

loc_001C1FE2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C1FF0
 * Original: 0x001C1FF0 - 0x001C200B (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1FF0(void)
{

loc_001C1FF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C1FFEu); RECOMP_ABI_CALL(0x001BCC30u, sub_001BCC30); /* call 0x001BCC30 */

loc_001C1FFE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C2006u); RECOMP_ABI_CALL(0x001C1D00u, sub_001C1D00); /* call 0x001C1D00 */

loc_001C2006: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2010
 * Original: 0x001C2010 - 0x001C22C2 (690 bytes, 185 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C2010(void)
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

loc_001C2010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    PUSH32(esp, 8);
    eax = esi + 0xAC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C2037u); RECOMP_ABI_CALL(0x00232B50u, sub_00232B50); /* call 0x00232B50 */

loc_001C2037: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi + 0x70;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xB8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C206Du); RECOMP_ABI_CALL(0x001CF5F0u, sub_001CF5F0); /* call 0x001CF5F0 */

loc_001C206D: ;
    xmm0 = XMM_MEM(esp + 0xB0); /* movaps */
    ecx = MEM32(esp + 0x14);
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    PUSH32(esp, edi);
    edx = esp + 0x74;
    XMM_STORE(esp + 0x84, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xD4); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x9C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C20A6u); RECOMP_ABI_CALL(0x00232ED0u, sub_00232ED0); /* call 0x00232ED0 */

loc_001C20A6: ;
    xmm0 = XMM_MEM(esp + 0xCC); /* movaps */
    eax = MEM32(esp + 0x20);
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x80); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    XMM_STORE(esp + 0x58, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C20D9u); RECOMP_ABI_CALL(0x00232ED0u, sub_00232ED0); /* call 0x00232ED0 */

loc_001C20D9: ;
    xmm0 = XMM_MEM(esp + 0x38); /* movaps */
    edx = MEM32(esp + 0x2C);
    XMM_STORE(esp + 0x58, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xA8); /* movaps */
    PUSH32(esp, edi);
    eax = esp + 0x3C;
    XMM_STORE(esp + 0x3C, xmm0); /* movaps */
    xmm0 = XMM_MEM(edx); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x54, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C2108u); RECOMP_ABI_CALL(0x00232ED0u, sub_00232ED0); /* call 0x00232ED0 */

loc_001C2108: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(edx + 0x3C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C2125u); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001C2125: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x3C);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C2142u); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001C2142: ;
    ecx = esi + 0x50;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C215Cu); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); /* call 0x001CF840 */

loc_001C215C: ;
    xmm3 = XMM_MEM(esp + 0x60); /* movaps */
    xmm1 = XMM_MEM(esp + 0xA0); /* movaps */
    xmm2 = XMM_MEM(esp + 0x50); /* movaps */
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x3C);
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm5 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    XMM_STORE(esp + 0x20, xmm3); /* movaps */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    ecx = esi + 0x60;
    xmm3 = xmm0; /* movaps */
    PUSH32(esp, ecx);
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm3); /* addps */
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    XMM_STORE(esp + 0x38, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C21C1u); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); /* call 0x001CF840 */

loc_001C21C1: ;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C21CDu); RECOMP_ABI_CALL(0x00233350u, sub_00233350); /* call 0x00233350 */

loc_001C21CD: ;
    xmm0 = XMM_MEM(esp + 0x4C); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MEM(esp + 0x5C); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xD2); /* shufps */
    PUSH32(esp, edi);
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xC9); /* shufps */
    edx = esp + 0x30;
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    PUSH32(esp, ebx);
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x58, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C2210u); RECOMP_ABI_CALL(0x00233350u, sub_00233350); /* call 0x00233350 */

loc_001C2210: ;
    xmm0 = XMM_MEM(esp + 0x78); /* movaps */
    eax = MEM32(esi + 0xA0);
    ecx = MEM32(esi + 0xA4);
    XMM_STORE(esp + 0xC8, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xB8); /* movaps */
    PUSH32(esp, edi);
    edx = esp + 0xCC;
    XMM_STORE(esp + 0xDC, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x6C); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x104) = eax;
    MEM32(esp + 0x108) = ecx;
    XMM_STORE(esp + 0xF4, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C2263u); RECOMP_ABI_CALL(0x00233530u, sub_00233530); /* call 0x00233530 */

loc_001C2263: ;
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C22B9; /* jne: not equal / not zero */

loc_001C2279: ;
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    eax = MEM32(esi + 0xA8);
    PUSH32(esp, edi);
    ecx = esp + 0x74;
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x54); /* movaps */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xDC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    XMM_STORE(esp + 0x8C, xmm0); /* movaps */
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C22B6u); RECOMP_ABI_CALL(0x002331B0u, sub_002331B0); /* call 0x002331B0 */

loc_001C22B6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C22B9: ;
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
 * sub_001C22D0
 * Original: 0x001C22D0 - 0x001C22DF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C22D0(void)
{

loc_001C22D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C22DEu); RECOMP_ABI_CALL(0x001C1D80u, sub_001C1D80); /* call 0x001C1D80 */

loc_001C22DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C22E0
 * Original: 0x001C22E0 - 0x001C22EF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C22E0(void)
{

loc_001C22E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C22EEu); RECOMP_ABI_CALL(0x001C1FF0u, sub_001C1FF0); /* call 0x001C1FF0 */

loc_001C22EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C22F0
 * Original: 0x001C22F0 - 0x001C22F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C22F0(void)
{

loc_001C22F0: ;
    eax = 0x440D50;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2300
 * Original: 0x001C2300 - 0x001C2361 (97 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2300(void)
{

loc_001C2300: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C2308u); RECOMP_ABI_CALL(0x001CB1C0u, sub_001CB1C0); /* call 0x001CB1C0 */

loc_001C2308: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    XMM_STORE(esi + 0x80, xmm0); /* movaps */
    eax = 0x3F800000;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x90) = 0xFF7FFFFFu;
    MEM32(esi + 0x94) = 0x7F7FFFFF;
    MEM32(esi + 0x98) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C2370
 * Original: 0x001C2370 - 0x001C23C4 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2370: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245A3B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x27);
    PUSH32(esp, 0xF0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C2398u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2395u); } /* indirect call */
    }

loc_001C2398: ;
    MEM16(eax + 4) = 0xF0;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001C23B5u); RECOMP_ABI_CALL(0x001C1F20u, sub_001C1F20); /* call 0x001C1F20 */

loc_001C23B5: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C23D0
 * Original: 0x001C23D0 - 0x001C240D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C23D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C23D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245A61);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C23FE; /* je: equal / zero */

loc_001C23F9: ;
    PUSH32(esp, 0x001C23FEu); RECOMP_ABI_CALL(0x001C2300u, sub_001C2300); /* call 0x001C2300 */

loc_001C23FE: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C2410
 * Original: 0x001C2410 - 0x001C2441 (49 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2410(void)
{

loc_001C2410: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C241Eu); RECOMP_ABI_CALL(0x001BCC40u, sub_001BCC40); /* call 0x001BCC40 */

loc_001C241E: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    MEM8(edi + 0xC) = LO8(eax);
    ecx = MEM32(esi + 0x28);
    MEM32(edi + 0x10) = ecx;
    SET_LO8(edx, MEM8(esi + 0x2D));
    MEM8(edi + 0x14) = LO8(edx);
    eax = MEM32(esi + 0x20);
    MEM32(edi + 0x1C) = eax;
    ecx = MEM32(esi + 0x24);
    MEM32(edi + 0x18) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2450
 * Original: 0x001C2450 - 0x001C24B5 (101 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2450: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245A78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F8404;
    MEM32(esi + 8) = 0x2F83F4;
    ecx = MEM32(esi + 0x20);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001C2496; /* jne: not equal / not zero */

loc_001C2490: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C2496u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2494u); } /* indirect call */
    }

loc_001C2496: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C24A5u); RECOMP_ABI_CALL(0x001BCCB0u, sub_001BCCB0); /* call 0x001BCCB0 */

loc_001C24A5: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C24C0
 * Original: 0x001C24C0 - 0x001C24C8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C24C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C24C0: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_001C24D0
 * Original: 0x001C24D0 - 0x001C24D8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C24D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C24D0: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_001C24E0
 * Original: 0x001C24E0 - 0x001C24E8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C24E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C24E0: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_001C24F0
 * Original: 0x001C24F0 - 0x001C2504 (20 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C24F0(void)
{

loc_001C24F0: ;
    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001C24FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C24FBu); } /* indirect call */
    }

loc_001C24FE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2510
 * Original: 0x001C2510 - 0x001C2518 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2510: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001C2520(); return; /* tail jmp 0x001C2520 */

}

/**
 * sub_001C2520
 * Original: 0x001C2520 - 0x001C2548 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2520: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C2528u); RECOMP_ABI_CALL(0x001C2450u, sub_001C2450); /* call 0x001C2450 */

loc_001C2528: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2542; /* je: equal / zero */

loc_001C252F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C2542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C253Fu); } /* indirect call */
    }

loc_001C2542: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2550
 * Original: 0x001C2550 - 0x001C2575 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2550(void)
{

loc_001C2550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C255Eu); RECOMP_ABI_CALL(0x001BCC30u, sub_001BCC30); /* call 0x001BCC30 */

loc_001C255E: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    MEM8(esi + 0x2C) = LO8(eax);
    ecx = MEM32(edi + 0x10);
    MEM32(esi + 0x28) = ecx;
    SET_LO8(edx, MEM8(edi + 0x14));
    POP32(esp, edi);
    MEM8(esi + 0x2D) = LO8(edx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2580
 * Original: 0x001C2580 - 0x001C2705 (389 bytes, 156 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2580(void)
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

loc_001C2580: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001C2647; /* jne: not equal / not zero */

loc_001C2592: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C259Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2598u); } /* indirect call */
    }

loc_001C259B: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C25A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C25A2u); } /* indirect call */
    }

loc_001C25A5: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C25F5; /* jl: less (signed <) */

loc_001C25B2: ;
    edx = eax + -4;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx + 0x10;
    edi = edx * 4;

loc_001C25C3: ;
    fp_push(MEMF(ecx + -16)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(ecx + -40)); /* fld float */
    fp_push(MEMF(ecx + -32)); /* fld float */
    fp_push(MEMF(ecx + -24)); /* fld float */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 5) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 5) & 7] + fp_top()); fp_pop(); /* faddp st(5) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    if ((_fa != 0)) goto loc_001C25C3; /* jne: not equal / not zero */

loc_001C25F5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C2610; /* jge: greater or equal (signed >=) */

loc_001C25F9: ;
    /* nop */

loc_001C2600: ;
    fp_push(MEMF(ebx + edi * 8)); /* fld float */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_001C2600; /* jl: less (signed <) */

loc_001C2610: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x28] */
    POP32(esp, ebx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C2645; /* jne: not equal / not zero */

loc_001C261B: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi + 0x2C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001C2645; /* je: equal / zero */

loc_001C2626: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    SET_LO8(edx, MEM8(esi + 0x2D));
    eax = MEM32(esi + 0x20);
    MEM8(esp + 0x10) = LO8(edx);
    edx = esp + 8;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C2643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2641u); } /* indirect call */
    }

loc_001C2643: ;
    goto loc_001C2647;

loc_001C2645: ;
    fp_pop(); /* fstp st(0) */

loc_001C2647: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2696; /* je: equal / zero */

loc_001C264E: ;
    SET_LO8(ecx, MEM8(esi + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2692; /* je: equal / zero */

loc_001C2655: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C265Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C265Au); } /* indirect call */
    }

loc_001C265D: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C2667u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2664u); } /* indirect call */
    }

loc_001C2667: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C2679u); RECOMP_ABI_CALL(0x00232B50u, sub_00232B50); /* call 0x00232B50 */

loc_001C2679: ;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C268Au); RECOMP_ABI_CALL(0x001BD750u, sub_001BD750); /* call 0x001BD750 */

loc_001C268A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001C2692: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C26D6; /* jne: not equal / not zero */

loc_001C2696: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C269Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C269Bu); } /* indirect call */
    }

loc_001C269E: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C26A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C26A5u); } /* indirect call */
    }

loc_001C26A8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C26BC; /* jle: less or equal (signed <=) */

loc_001C26AE: ;
    edi = edi;

loc_001C26B0: ;
    MEM32(edi + ecx * 8) = 0;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C26B0; /* jl: less (signed <) */

loc_001C26BC: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001C26CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C26CBu); } /* indirect call */
    }

loc_001C26CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001C26D6: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C26DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C26DBu); } /* indirect call */
    }

loc_001C26DE: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C26E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C26E5u); } /* indirect call */
    }

loc_001C26E8: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001C26FAu); RECOMP_ABI_CALL(0x00232B50u, sub_00232B50); /* call 0x00232B50 */

loc_001C26FA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_001C2710
 * Original: 0x001C2710 - 0x001C27BA (170 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2710: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245A78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 6) = 1;
    MEM32(esi + 8) = 0x2F8098;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x18) = ecx;
    edi = MEM32(esp + 0x1C);
    MEM32(esi) = 0x2F8404;
    MEM32(esi + 8) = 0x2F83F4;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x20) = eax;
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0x30) = ecx;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = eax;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001C277Fu); RECOMP_ABI_CALL(0x001BCD60u, sub_001BCD60); /* call 0x001BCD60 */

loc_001C277F: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C278Du); RECOMP_ABI_CALL(0x001BCDB0u, sub_001BCDB0); /* call 0x001BCDB0 */

loc_001C278D: ;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x18) = edx;
    SET_LO8(eax, MEM8(edi + 0xC));
    MEM8(esi + 0x2C) = LO8(eax);
    ecx = MEM32(edi + 0x10);
    MEM32(esi + 0x28) = ecx;
    SET_LO8(edx, MEM8(edi + 0x14));
    ecx = MEM32(esp + 0xC);
    MEM8(esi + 0x2D) = LO8(edx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C27C0
 * Original: 0x001C27C0 - 0x001C286E (174 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C27C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C27C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245A98);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 6) = 1;
    MEM32(esi + 8) = 0x2F8098;
    MEM32(esp + 4) = esi;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x18) = ecx;
    eax = MEM32(esp + 0x38);
    MEM32(esi + 0x20) = eax;
    MEM32(esi) = 0x2F8404;
    MEM32(esi + 8) = 0x2F83F4;
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x3C);
    MEM32(esi + 0x30) = ecx;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = eax;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001C282Eu); RECOMP_ABI_CALL(0x001BCD60u, sub_001BCD60); /* call 0x001BCD60 */

loc_001C282E: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C283Cu); RECOMP_ABI_CALL(0x001BCDB0u, sub_001BCDB0); /* call 0x001BCDB0 */

loc_001C283C: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001C2845u); RECOMP_ABI_CALL(0x001CB1E0u, sub_001CB1E0); /* call 0x001CB1E0 */

loc_001C2845: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    eax = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(esi + 0x2D) = LO8(ecx);
    ecx = MEM32(esp + 0x28);
    MEM32(esi + 0x28) = eax;
    MEM8(esi + 0x2C) = LO8(edx);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C2870
 * Original: 0x001C2870 - 0x001C288D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2870: ;
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C2881; /* jne: not equal / not zero */

loc_001C2877: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0;
    esp += 8; return; /* ret 4 */

loc_001C2881: ;
    SET_LO8(ecx, MEM8(eax + 0x29));
    eax = MEM32(esp + 4);
    MEM8(eax) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2890
 * Original: 0x001C2890 - 0x001C28BB (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2890: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C28B9; /* je: equal / zero */

loc_001C289A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C28A0u); RECOMP_ABI_CALL(0x001BD2F0u, sub_001BD2F0); /* call 0x001BD2F0 */

loc_001C28A0: ;
    eax = MEM32(esi + 0x44);
    SET_LO8(ecx, MEM8(eax + 0x29));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C28B9; /* jne: not equal / not zero */

loc_001C28AA: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C28B9; /* je: equal / zero */

loc_001C28B0: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C28B9u); RECOMP_ABI_CALL(0x001BDA30u, sub_001BDA30); /* call 0x001BDA30 */

loc_001C28B9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C28C0
 * Original: 0x001C28C0 - 0x001C28E2 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C28C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C28C0: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C28E1; /* je: equal / zero */

loc_001C28C9: ;
    edx = MEM32(eax + 0x44);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x29));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C28E0; /* je: equal / zero */

loc_001C28D4: ;
    _fa = (uint32_t)(MEM32(edx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C28E0; /* je: equal / zero */

loc_001C28DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C28E0u); RECOMP_ABI_CALL(0x001BD980u, sub_001BD980); /* call 0x001BD980 */

loc_001C28E0: ;
    POP32(esp, ebx);

loc_001C28E1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C28F0
 * Original: 0x001C28F0 - 0x001C293B (75 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C28F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C28F0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x9C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001C2914; /* jle: less or equal (signed <=) */

loc_001C28FE: ;
    edx = MEM32(ecx + 0x98);
    edi = MEM32(esp + 0xC);

loc_001C2908: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2917; /* je: equal / zero */

loc_001C290C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C2908; /* jl: less (signed <) */

loc_001C2914: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C2917: ;
    edx = MEM32(ecx + 0x98);
    POP32(esp, edi);
    MEM32(edx + eax * 4) = 0;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C2938; /* je: equal / zero */

loc_001C292D: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_001BDAB0(); return; /* tail jmp 0x001BDAB0 */

loc_001C2938: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2940
 * Original: 0x001C2940 - 0x001C298B (75 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2940: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x90);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001C2964; /* jle: less or equal (signed <=) */

loc_001C294E: ;
    edx = MEM32(ecx + 0x8C);
    edi = MEM32(esp + 0xC);

loc_001C2958: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2967; /* je: equal / zero */

loc_001C295C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C2958; /* jl: less (signed <) */

loc_001C2964: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C2967: ;
    edx = MEM32(ecx + 0x8C);
    POP32(esp, edi);
    MEM32(edx + eax * 4) = 0;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C2988; /* je: equal / zero */

loc_001C297D: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_001BDAB0(); return; /* tail jmp 0x001BDAB0 */

loc_001C2988: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2990
 * Original: 0x001C2990 - 0x001C29DB (75 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C2990: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x84);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001C29B4; /* jle: less or equal (signed <=) */

loc_001C299E: ;
    edx = MEM32(ecx + 0x80);
    edi = MEM32(esp + 0xC);

loc_001C29A8: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C29B7; /* je: equal / zero */

loc_001C29AC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C29A8; /* jl: less (signed <) */

loc_001C29B4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C29B7: ;
    edx = MEM32(ecx + 0x80);
    POP32(esp, edi);
    MEM32(edx + eax * 4) = 0;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C29D8; /* je: equal / zero */

loc_001C29CD: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_001BDAB0(); return; /* tail jmp 0x001BDAB0 */

loc_001C29D8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C29E0
 * Original: 0x001C29E0 - 0x001C2A1F (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C29E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C29E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x68);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001C29FE; /* jle: less or equal (signed <=) */

loc_001C29EB: ;
    edx = MEM32(ecx + 0x64);
    edi = MEM32(esp + 0xC);

loc_001C29F2: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2A10; /* je: equal / zero */

loc_001C29F6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C29F2; /* jl: less (signed <) */

loc_001C29FE: ;
    edx = MEM32(ecx + 0x64);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001C2A10: ;
    ecx = MEM32(ecx + 0x64);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2A20
 * Original: 0x001C2A20 - 0x001C2A45 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2A20: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C2A44; /* js: sign (negative) */

loc_001C2A29: ;
    ecx = MEM32(0x4409AC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001C2A43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2A40u); } /* indirect call */
    }

loc_001C2A43: ;
    POP32(esp, esi);

loc_001C2A44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2A50
 * Original: 0x001C2A50 - 0x001C2A71 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2A50(void)
{

loc_001C2A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C2A5Eu); RECOMP_ABI_CALL(0x001CB390u, sub_001CB390); /* call 0x001CB390 */

loc_001C2A5E: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    MEM8(edi + 0x18) = LO8(eax);
    SET_LO16(ecx, MEM16(esi + 0x60));
    MEM16(edi + 0x1A) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2A80
 * Original: 0x001C2A80 - 0x001C2AB7 (55 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2A80: ;
    eax = MEM32(ecx + 0xA0);
    PUSH32(esp, esi);
    esi = ecx + 0x98;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C2AA4; /* jne: not equal / not zero */

loc_001C2A99: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C2AA1u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C2AA1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C2AA4: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2AC0
 * Original: 0x001C2AC0 - 0x001C2AF7 (55 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2AC0: ;
    eax = MEM32(ecx + 0x94);
    PUSH32(esp, esi);
    esi = ecx + 0x8C;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C2AE4; /* jne: not equal / not zero */

loc_001C2AD9: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C2AE1u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C2AE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C2AE4: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2B00
 * Original: 0x001C2B00 - 0x001C2B37 (55 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2B00: ;
    eax = MEM32(ecx + 0x88);
    PUSH32(esp, esi);
    esi = ecx + 0x80;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C2B24; /* jne: not equal / not zero */

loc_001C2B19: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C2B21u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C2B21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C2B24: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2B40
 * Original: 0x001C2B40 - 0x001C2B71 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2B40: ;
    eax = MEM32(ecx + 0x6C);
    PUSH32(esp, esi);
    esi = ecx + 0x64;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C2B5E; /* jne: not equal / not zero */

loc_001C2B53: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C2B5Bu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C2B5B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C2B5E: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2B80
 * Original: 0x001C2B80 - 0x001C2C0A (138 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2B80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245AC3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F8430;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001C2BC3; /* je: equal / zero */

loc_001C2BB2: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C2BC3; /* jne: not equal / not zero */

loc_001C2BBD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C2BC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2BC1u); } /* indirect call */
    }

loc_001C2BC3: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C2BEB; /* js: sign (negative) */

loc_001C2BCF: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(0x4409AC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C2BEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2BE7u); } /* indirect call */
    }

loc_001C2BEA: ;
    POP32(esp, edi);

loc_001C2BEB: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C2BFAu); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_001C2BFA: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C2C10
 * Original: 0x001C2C10 - 0x001C2C31 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2C10(void)
{

loc_001C2C10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C2C1Eu); RECOMP_ABI_CALL(0x001CB420u, sub_001CB420); /* call 0x001CB420 */

loc_001C2C1E: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    MEM8(esi + 0x48) = LO8(eax);
    SET_LO16(ecx, MEM16(edi + 0x1A));
    POP32(esp, edi);
    MEM16(esi + 0x60) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2C40
 * Original: 0x001C2C40 - 0x001C2C68 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C2C48u); RECOMP_ABI_CALL(0x001C2B80u, sub_001C2B80); /* call 0x001C2B80 */

loc_001C2C48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2C62; /* je: equal / zero */

loc_001C2C4F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C2C62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2C5Fu); } /* indirect call */
    }

loc_001C2C62: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2C70
 * Original: 0x001C2C70 - 0x001C2D13 (163 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2C70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C2C7Eu); RECOMP_ABI_CALL(0x001CB4F0u, sub_001CB4F0); /* call 0x001CB4F0 */

loc_001C2C7E: ;
    MEM32(esi) = 0x2F8444;
    MEM32(esi + 0x4C) = 0x3F000000;
    MEM32(esi + 0x50) = 0x3ECCCCCD;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = 0x80000001u;
    ecx = esi + 0x70;
    MEM32(esi + 0x64) = ecx;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0x7C) = ecx;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = ecx;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = ecx;
    MEM32(esi + 0x2C) = esi;
    SET_LO8(edx, MEM8(edi + 0x18));
    MEM32(esi + 0x44) = eax;
    MEM8(esi + 0x40) = LO8(eax);
    MEM8(esi + 0x48) = LO8(edx);
    SET_LO16(ecx, MEM16(edi + 0x1A));
    MEM32(esi + 0x58) = eax;
    POP32(esp, edi);
    MEM16(esi + 0x60) = LO16(ecx);
    MEM32(esi + 0x5C) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2D20
 * Original: 0x001C2D20 - 0x001C2E5D (317 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2D20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245B18);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x2F8444;
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = 5;
    PUSH32(esp, 0x001C2D52u); RECOMP_ABI_CALL(0x001CAF30u, sub_001CAF30); /* call 0x001CAF30 */

loc_001C2D52: ;
    ecx = MEM32(esi + 0x58);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C2D6D; /* je: equal / zero */

loc_001C2D5C: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C2D6D; /* jne: not equal / not zero */

loc_001C2D67: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C2D6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2D6Bu); } /* indirect call */
    }

loc_001C2D6D: ;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 4;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C2D99; /* js: sign (negative) */

loc_001C2D7C: ;
    edx = MEM32(esi + 0x98);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C2D99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2D96u); } /* indirect call */
    }

loc_001C2D99: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 3;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C2DC5; /* js: sign (negative) */

loc_001C2DA8: ;
    edx = MEM32(esi + 0x8C);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C2DC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2DC2u); } /* indirect call */
    }

loc_001C2DC5: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C2DF1; /* js: sign (negative) */

loc_001C2DD4: ;
    edx = MEM32(esi + 0x80);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C2DF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2DEEu); } /* indirect call */
    }

loc_001C2DF1: ;
    eax = MEM32(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C2E17; /* js: sign (negative) */

loc_001C2DFD: ;
    edx = MEM32(esi + 0x74);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C2E17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2E14u); } /* indirect call */
    }

loc_001C2E17: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C2E3D; /* js: sign (negative) */

loc_001C2E23: ;
    edx = MEM32(esi + 0x64);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C2E3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2E3Au); } /* indirect call */
    }

loc_001C2E3D: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C2E4Cu); RECOMP_ABI_CALL(0x001C2B80u, sub_001C2B80); /* call 0x001C2B80 */

loc_001C2E4C: ;
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
 * sub_001C2E60
 * Original: 0x001C2E60 - 0x001C2E88 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C2E68u); RECOMP_ABI_CALL(0x001C2D20u, sub_001C2D20); /* call 0x001C2D20 */

loc_001C2E68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C2E82; /* je: equal / zero */

loc_001C2E6F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C2E82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2E7Fu); } /* indirect call */
    }

loc_001C2E82: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2E90
 * Original: 0x001C2E90 - 0x001C2E97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2E90(void)
{

loc_001C2E90: ;
    eax = ecx + 0x90;
    esp += 4; return; /* ret */

}

/**
 * sub_001C2EA0
 * Original: 0x001C2EA0 - 0x001C2F1A (122 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2EA0(void)
{

loc_001C2EA0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x80);
    MEM32(ecx + 0xC8) = edx;
    edx = MEM32(eax + 0x84);
    MEM32(ecx + 0xCC) = edx;
    edx = MEM32(eax + 0x88);
    MEM32(ecx + 0xD0) = edx;
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    XMM_STORE(ecx + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(ecx + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x70); /* movaps */
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    XMM_STORE(ecx + 0x80, xmm0); /* movaps */
    MEM32(ecx + 0xD4) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001C2F17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C2F14u); } /* indirect call */
    }

loc_001C2F17: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2F20
 * Original: 0x001C2F20 - 0x001C2F92 (114 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2F20(void)
{

loc_001C2F20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C2F2Eu); RECOMP_ABI_CALL(0x001BCC40u, sub_001BCC40); /* call 0x001BCC40 */

loc_001C2F2E: ;
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    XMM_STORE(edi + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(edi + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(edi + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x80); /* movaps */
    XMM_STORE(edi + 0x70, xmm0); /* movaps */
    eax = MEM32(esi + 0xC8);
    MEM32(edi + 0x80) = eax;
    ecx = MEM32(esi + 0xCC);
    MEM32(edi + 0x84) = ecx;
    edx = MEM32(esi + 0xD0);
    MEM32(edi + 0x88) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2FA0
 * Original: 0x001C2FA0 - 0x001C2FC2 (34 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2FA0(void)
{

loc_001C2FA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    MEM32(eax + 8) = 0x44;
    MEM32(eax + 4) = 0x110;
    MEM32(eax + 0xC) = 7;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C2FD0
 * Original: 0x001C2FD0 - 0x001C306C (156 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C2FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C2FD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245B38);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x001C2FF8u); RECOMP_ABI_CALL(0x001BCE30u, sub_001BCE30); /* call 0x001BCE30 */

loc_001C2FF8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2F8460;
    MEM32(esi + 8) = 0x2F8270;
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x94) = ecx;
    eax = esi + 0x90;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C3057u); RECOMP_ABI_CALL(0x001C2EA0u, sub_001C2EA0); /* call 0x001C2EA0 */

loc_001C3057: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3070
 * Original: 0x001C3070 - 0x001C3263 (499 bytes, 138 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C3070(void)
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

loc_001C3070: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD6EC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd6ec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C31FC; /* jp: parity */

loc_001C30BB: ;
    xmm1 = XMM_MEM(ecx + 0x70); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x80); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    edx = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD6EC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd6ec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C31FC; /* jp: parity */

loc_001C3100: ;
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD6EC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd6ec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C31FC; /* jp: parity */

loc_001C3142: ;
    xmm0 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    edx = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD6EC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd6ec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C31FC; /* jp: parity */

loc_001C3180: ;
    xmm0 = XMM_MEM(ecx + 0x70); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD6EC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd6ec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C31FC; /* jp: parity */

loc_001C31BE: ;
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    edx = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD6EC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd6ec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C3208; /* jnp: not parity */

loc_001C31FC: ;
    eax = MEM32(ebp + 8);

loc_001C31FF: ;
    MEM8(eax) = 0;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001C3208: ;
    fp_push(MEMF(ecx + 0xC8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C323E; /* jp: parity */

loc_001C321B: ;
    fp_push(MEMF(ecx + 0xCC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C323E; /* jp: parity */

loc_001C322E: ;
    fp_push(MEMF(ecx + 0xC8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xCC)); /* fadd dword ptr [ecx + 0xcc] */
    goto loc_001C324A;

loc_001C323E: ;
    fp_push(MEMF(ecx + 0xCC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC8)); /* fsub dword ptr [ecx + 0xc8] */

loc_001C324A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD3D8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd3d8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_001C31FF; /* je: equal / zero */

loc_001C325A: ;
    MEM8(eax) = 1;
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
 * sub_001C3270
 * Original: 0x001C3270 - 0x001C328B (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3270(void)
{

loc_001C3270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C327Eu); RECOMP_ABI_CALL(0x001BCC30u, sub_001BCC30); /* call 0x001BCC30 */

loc_001C327E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C3286u); RECOMP_ABI_CALL(0x001C2EA0u, sub_001C2EA0); /* call 0x001C2EA0 */

loc_001C3286: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3290
 * Original: 0x001C3290 - 0x001C357A (746 bytes, 207 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C3290(void)
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

loc_001C3290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 8);
    eax = esi + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C32B7u); RECOMP_ABI_CALL(0x00232B50u, sub_00232B50); /* call 0x00232B50 */

loc_001C32B7: ;
    edi = MEM32(esi + 0xC);
    eax = MEM32(edi + 0x3C);
    ecx = esi + 0x20;
    edx = esp + 0x60;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 4;

loc_001C32D3: ;
    xmm0 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(edx + ecx, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C32D3; /* jne: not equal / not zero */

loc_001C330F: ;
    eax = MEM32(edi + 0x3C);
    xmm0 = XMM_MEM(eax + 0xB0); /* movaps */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    eax = MEM32(esi + 0x10);
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(esp + 0x50, xmm1); /* movaps */
    eax = MEM32(eax + 0x3C);
    ecx = esi + 0x60;
    edx = esp + 0x90;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 3;

loc_001C3342: ;
    xmm0 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(edx + ecx, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C3342; /* jne: not equal / not zero */

loc_001C337E: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(ecx + 0xB0); /* movaps */
    xmm1 = XMM_MEM(esp + 0x90); /* movaps */
    edi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x80); /* movaps */
    PUSH32(esp, edi);
    edx = esp + 0x24;
    XMM_STORE(esp + 0x24, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0xA4); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x9C, xmm1); /* movaps */
    XMM_STORE(esp + 0x3C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C33D4u); RECOMP_ABI_CALL(0x00232ED0u, sub_00232ED0); /* call 0x00232ED0 */

loc_001C33D4: ;
    xmm0 = XMM_MEM(esp + 0x8C); /* movaps */
    xmm1 = XMM_MEM(esp + 0xAC); /* movaps */
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x7C); /* movaps */
    PUSH32(esp, edi);
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x2F6A30); /* movaps */
    eax = esp + 0x30;
    PUSH32(esp, ebx);
    xmm1 = XMM_XOR(xmm1, xmm0); /* xorps */
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x48, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C340Eu); RECOMP_ABI_CALL(0x00232ED0u, sub_00232ED0); /* call 0x00232ED0 */

loc_001C340E: ;
    xmm1 = XMM_MEM(esp + 0xC8); /* movaps */
    xmm0 = XMM_MEM(esp + 0x78); /* movaps */
    xmm2 = XMM_MEM(esp + 0x88); /* movaps */
    ecx = MEM32(esi + 0xC8);
    edx = MEM32(esi + 0xCC);
    XMM_STORE(esp + 0x38, xmm0); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MEM(esp + 0xB8); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xC9); /* shufps */
    eax = esp + 0x34;
    MEMF(eax) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    xmm4 = xmm1; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm1, 0xD2); /* shufps */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xD2); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xC9); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm4); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm0; /* movaps */
    MEM32(esp + 0x48) = ecx;
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x30;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x4C) = edx;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C34BDu); RECOMP_ABI_CALL(0x001CFAB0u, sub_001CFAB0); /* call 0x001CFAB0 */

loc_001C34BD: ;
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F845C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f845c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C34E1; /* jne: not equal / not zero */

loc_001C34D9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DD3D8)); /* fadd dword ptr [0x2dd3d8] */
    goto loc_001C34FC;

loc_001C34E1: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xD4)); /* fsub dword ptr [esi + 0xd4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F845C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f845c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C3500; /* jne: not equal / not zero */

loc_001C34F6: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DD3D8)); /* fsub dword ptr [0x2dd3d8] */

loc_001C34FC: ;
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */

loc_001C3500: ;
    PUSH32(esp, edi);
    MEMF(esi + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C3512u); RECOMP_ABI_CALL(0x00233720u, sub_00233720); /* call 0x00233720 */

loc_001C3512: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C3526u); RECOMP_ABI_CALL(0x00233880u, sub_00233880); /* call 0x00233880 */

loc_001C3526: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C3571; /* jnp: not parity */

loc_001C353E: ;
    edx = MEM32(esi + 0xD0);
    PUSH32(esp, edi);
    eax = esp + 0x24;
    ecx = esp + 0x64;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = 1;
    MEM32(esp + 0x30) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C356Eu); RECOMP_ABI_CALL(0x00233020u, sub_00233020); /* call 0x00233020 */

loc_001C356E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C3571: ;
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
 * sub_001C3580
 * Original: 0x001C3580 - 0x001C358F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3580(void)
{

loc_001C3580: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C358Eu); RECOMP_ABI_CALL(0x001C2F20u, sub_001C2F20); /* call 0x001C2F20 */

loc_001C358E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C3590
 * Original: 0x001C3590 - 0x001C359F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3590(void)
{

loc_001C3590: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C359Eu); RECOMP_ABI_CALL(0x001C3270u, sub_001C3270); /* call 0x001C3270 */

loc_001C359E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C35A0
 * Original: 0x001C35A0 - 0x001C35A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C35A0(void)
{

loc_001C35A0: ;
    eax = 0x440D78;
    esp += 4; return; /* ret */

}

/**
 * sub_001C35B0
 * Original: 0x001C35B0 - 0x001C35F9 (73 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C35B0(void)
{

loc_001C35B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C35B8u); RECOMP_ABI_CALL(0x001CB1C0u, sub_001CB1C0); /* call 0x001CB1C0 */

loc_001C35B8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    MEM32(esi + 0x80) = 0xC0490FDBu;
    MEM32(esi + 0x84) = 0x40490FDB;
    MEM32(esi + 0x88) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3600
 * Original: 0x001C3600 - 0x001C3654 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3600: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245B5B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x27);
    PUSH32(esp, 0xE0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C3628u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3625u); } /* indirect call */
    }

loc_001C3628: ;
    MEM16(eax + 4) = 0xE0;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001C3645u); RECOMP_ABI_CALL(0x001C2FD0u, sub_001C2FD0); /* call 0x001C2FD0 */

loc_001C3645: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C3660
 * Original: 0x001C3660 - 0x001C369D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3660: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245B81);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C368E; /* je: equal / zero */

loc_001C3689: ;
    PUSH32(esp, 0x001C368Eu); RECOMP_ABI_CALL(0x001C35B0u, sub_001C35B0); /* call 0x001C35B0 */

loc_001C368E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C36A0
 * Original: 0x001C36A0 - 0x001C373A (154 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C36A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C36A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245B98);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = edi;
    MEM32(edi) = 0x2F85D8;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    MEM32(esp + 0x14) = 0;
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001C36D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C36D3u); } /* indirect call */
    }

loc_001C36D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C36EE; /* jne: not equal / not zero */

loc_001C36DB: ;
    ecx = esi;
    PUSH32(esp, 0x001C36E2u); RECOMP_ABI_CALL(0x001BCFA0u, sub_001BCFA0); /* call 0x001BCFA0 */

loc_001C36E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C36EE; /* je: equal / zero */

loc_001C36E6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C36EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C36ECu); } /* indirect call */
    }

loc_001C36EE: ;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001C36F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C36F3u); } /* indirect call */
    }

loc_001C36F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C370E; /* jne: not equal / not zero */

loc_001C36FB: ;
    ecx = esi;
    PUSH32(esp, 0x001C3702u); RECOMP_ABI_CALL(0x001BCFA0u, sub_001BCFA0); /* call 0x001BCFA0 */

loc_001C3702: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C370E; /* je: equal / zero */

loc_001C3706: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C370Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C370Cu); } /* indirect call */
    }

loc_001C370E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C371A; /* je: equal / zero */

loc_001C3712: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C371Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3718u); } /* indirect call */
    }

loc_001C371A: ;
    ecx = edi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C3729u); RECOMP_ABI_CALL(0x001C2D20u, sub_001C2D20); /* call 0x001C2D20 */

loc_001C3729: ;
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
 * sub_001C3740
 * Original: 0x001C3740 - 0x001C375A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3740(void)
{

loc_001C3740: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x26);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C3758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3755u); } /* indirect call */
    }

loc_001C3758: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3760
 * Original: 0x001C3760 - 0x001C377A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3760(void)
{

loc_001C3760: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x29);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C3778u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3775u); } /* indirect call */
    }

loc_001C3778: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C3780
 * Original: 0x001C3780 - 0x001C381D (157 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C3780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245BB8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = esi;
    MEM32(esi + 8) = edi;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x2F85F0;
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    MEM32(esi + 0xC) = 0x3F800000;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    MEM32(esi + 0x6C) = edi;
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 0xC);
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    PUSH32(esp, eax);
    ecx = esi + 0x80;
    MEM32(esp + 0x20) = edi;
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C3805u); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001C3805: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x7C) = edi;
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C3820
 * Original: 0x001C3820 - 0x001C3848 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3820: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C3828u); RECOMP_ABI_CALL(0x001C36A0u, sub_001C36A0); /* call 0x001C36A0 */

loc_001C3828: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C3842; /* je: equal / zero */

loc_001C382F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C3842u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C383Fu); } /* indirect call */
    }

loc_001C3842: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3850
 * Original: 0x001C3850 - 0x001C3933 (227 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3850(void)
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

loc_001C3850: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C385Eu); RECOMP_ABI_CALL(0x001C2A50u, sub_001C2A50); /* call 0x001C2A50 */

loc_001C385E: ;
    eax = MEM32(esi + 0x3C);
    xmm0 = XMM_MEM(eax + 0xB0); /* movaps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    ecx = MEM32(esi + 0x3C);
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    edx = MEM32(esi + 0x3C);
    xmm0 = XMM_MEM(edx + 0x40); /* movaps */
    XMM_STORE(edi + 0x40, xmm0); /* movaps */
    eax = MEM32(esi + 0x3C);
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    XMM_STORE(edi + 0x50, xmm0); /* movaps */
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C3895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3892u); } /* indirect call */
    }

loc_001C3895: ;
    MEM8(edi + 0xB4) = LO8(eax);
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = edi + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001C38A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C38A4u); } /* indirect call */
    }

loc_001C38A7: ;
    eax = MEM32(esi + 0x3C);
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C38C8; /* jp: parity */

loc_001C38BE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */
    goto loc_001C38CE;

loc_001C38C8: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */

loc_001C38CE: ;
    MEMF(edi + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x3C);
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    XMM_STORE(edi + 0x90, xmm0); /* movaps */
    edx = MEM32(esi + 0x4C);
    MEM32(edi + 0xAC) = edx;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0xA4) = ecx;
    edx = MEM32(esi + 0x3C);
    eax = MEM32(edx + 0x18);
    MEM32(edi + 0xA8) = eax;
    ecx = MEM32(esi + 0x50);
    MEM32(edi + 0xB0) = ecx;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3923; /* je: equal / zero */

loc_001C3913: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001C3918u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3915u); } /* indirect call */
    }

loc_001C3918: ;
    MEM8(edi + 0xB5) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C3923: ;
    eax = 1;
    MEM8(edi + 0xB5) = LO8(eax);
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
 * sub_001C3940
 * Original: 0x001C3940 - 0x001C3A36 (246 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3940: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245BDB);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3971; /* je: equal / zero */

loc_001C3964: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001C3969u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3966u); } /* indirect call */
    }

loc_001C3969: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3A23; /* je: equal / zero */

loc_001C3971: ;
    eax = esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C39FD; /* je: equal / zero */

loc_001C397A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C3A23; /* jne: not equal / not zero */

loc_001C3981: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x60);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C3990u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C398Du); } /* indirect call */
    }

loc_001C3990: ;
    MEM16(eax + 4) = 0x60;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x001C39AAu); RECOMP_ABI_CALL(0x001CC0F0u, sub_001CC0F0); /* call 0x001CC0F0 */

loc_001C39AA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_001C39BC; /* je: equal / zero */

loc_001C39B8: ;
    MEM16(esi + 6) = MEM16(esi + 6) + 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001C39BC: ;
    ecx = MEM32(edi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C39D4; /* je: equal / zero */

loc_001C39C3: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C39D4; /* jne: not equal / not zero */

loc_001C39CE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C39D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C39D2u); } /* indirect call */
    }

loc_001C39D4: ;
    MEM32(edi + 0x58) = esi;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3A23; /* jne: not equal / not zero */

loc_001C39E2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C39EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C39E8u); } /* indirect call */
    }

loc_001C39EA: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001C39FD: ;
    MEM16(0x440FDE) = MEM16(0x440FDE) + 1;
    _fa = (uint32_t)(MEM16(0x440FDE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3A1C; /* je: equal / zero */

loc_001C3A0B: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3A1C; /* jne: not equal / not zero */

loc_001C3A16: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C3A1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3A1Au); } /* indirect call */
    }

loc_001C3A1C: ;
    MEM32(edi + 0x58) = 0x440FD8;

loc_001C3A23: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3A40
 * Original: 0x001C3A40 - 0x001C3B1E (222 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C3A40(void)
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

loc_001C3A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30EDE0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001C3A60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3A5Du); } /* indirect call */
    }

loc_001C3A60: ;
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    esi = MEM32(esi + 0x3C);
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_MEM(esi + 0x20); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    eax = esp + 0xC;
    MEMF(eax) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEM32(esp + 8) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_001C3B20
 * Original: 0x001C3B20 - 0x001C3BA2 (130 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3B20: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C3B34u); RECOMP_ABI_CALL(0x001C3780u, sub_001C3780); /* call 0x001C3780 */

loc_001C3B34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2F8670;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0xDC) = eax;
    MEM32(esi + 0xE0) = eax;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0xE8) = eax;
    MEM32(esi + 0xEC) = eax;
    MEM32(esi + 0xF0) = eax;
    MEM32(esi + 0xF4) = eax;
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xFC) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C3BB0
 * Original: 0x001C3BB0 - 0x001C3BD0 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3BB0(void)
{

loc_001C3BB0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C3BC4u); RECOMP_ABI_CALL(0x001C3B20u, sub_001C3B20); /* call 0x001C3B20 */

loc_001C3BC4: ;
    MEM32(esi) = 0x2F86F0;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C3BD0
 * Original: 0x001C3BD0 - 0x001C3BF8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C3BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C3BD8u); RECOMP_ABI_CALL(0x0019FDA0u, sub_0019FDA0); /* call 0x0019FDA0 */

loc_001C3BD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C3BF2; /* je: equal / zero */

loc_001C3BDF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C3BF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3BEFu); } /* indirect call */
    }

loc_001C3BF2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3C00
 * Original: 0x001C3C00 - 0x001C3E44 (580 bytes, 171 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3C00(void)
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

loc_001C3C00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245C48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    eax = ebx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_001C3DD4; /* ja: above (unsigned >) */

loc_001C3C31: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1C3E44); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001C3C38u) goto loc_001C3C38;
    if (_jt == 0x001C3C6Au) goto loc_001C3C6A;
    if (_jt == 0x001C3C9Cu) goto loc_001C3C9C;
    if (_jt == 0x001C3CCEu) goto loc_001C3CCE;
    if (_jt == 0x001C3D00u) goto loc_001C3D00;
    if (_jt == 0x001C3DA5u) goto loc_001C3DA5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C3C38: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x100);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C3C4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3C47u); } /* indirect call */
    }

loc_001C3C4A: ;
    MEM16(eax + 4) = 0x100;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x001C3C65u); RECOMP_ABI_CALL(0x001C3B20u, sub_001C3B20); /* call 0x001C3B20 */

loc_001C3C65: ;
    goto loc_001C3E01;

loc_001C3C6A: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x110);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C3C7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3C79u); } /* indirect call */
    }

loc_001C3C7C: ;
    MEM16(eax + 4) = 0x110;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x24) = 1;
    PUSH32(esp, 0x001C3C97u); RECOMP_ABI_CALL(0x001CD540u, sub_001CD540); /* call 0x001CD540 */

loc_001C3C97: ;
    goto loc_001C3E01;

loc_001C3C9C: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x100);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C3CAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3CABu); } /* indirect call */
    }

loc_001C3CAE: ;
    MEM16(eax + 4) = 0x100;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x24) = 2;
    PUSH32(esp, 0x001C3CC9u); RECOMP_ABI_CALL(0x001C3BB0u, sub_001C3BB0); /* call 0x001C3BB0 */

loc_001C3CC9: ;
    goto loc_001C3E01;

loc_001C3CCE: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x110);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C3CE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3CDDu); } /* indirect call */
    }

loc_001C3CE0: ;
    MEM16(eax + 4) = 0x110;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x24) = 3;
    PUSH32(esp, 0x001C3CFBu); RECOMP_ABI_CALL(0x001CD060u, sub_001CD060); /* call 0x001CD060 */

loc_001C3CFB: ;
    goto loc_001C3E01;

loc_001C3D00: ;
    fp_push(MEMF(ebp)); /* fld float */
    ecx = MEM32(0x4409AC);
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, 0x29);
    fp_push(MEMF(ebp + 0x28)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD414)); /* fmul dword ptr [0x2dd414] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C3D7E; /* jp: parity */

loc_001C3D54: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C3D5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3D5Bu); } /* indirect call */
    }

loc_001C3D5E: ;
    MEM16(eax + 4) = 0x100;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x24) = 4;
    PUSH32(esp, 0x001C3D79u); RECOMP_ABI_CALL(0x001C3B20u, sub_001C3B20); /* call 0x001C3B20 */

loc_001C3D79: ;
    goto loc_001C3E01;

loc_001C3D7E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x110);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C3D88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3D85u); } /* indirect call */
    }

loc_001C3D88: ;
    MEM16(eax + 4) = 0x110;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x24) = 5;
    PUSH32(esp, 0x001C3DA3u); RECOMP_ABI_CALL(0x001CD540u, sub_001CD540); /* call 0x001CD540 */

loc_001C3DA3: ;
    goto loc_001C3E01;

loc_001C3DA5: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C3DB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3DB4u); } /* indirect call */
    }

loc_001C3DB7: ;
    MEM16(eax + 4) = 0xD0;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x24) = 6;
    PUSH32(esp, 0x001C3DD2u); RECOMP_ABI_CALL(0x001CB7B0u, sub_001CB7B0); /* call 0x001CB7B0 */

loc_001C3DD2: ;
    goto loc_001C3E01;

loc_001C3DD4: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C3DE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3DE3u); } /* indirect call */
    }

loc_001C3DE6: ;
    MEM16(eax + 4) = 0xD0;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    MEM32(esp + 0x24) = 7;
    PUSH32(esp, 0x001C3E01u); RECOMP_ABI_CALL(0x001CCEE0u, sub_001CCEE0); /* call 0x001CCEE0 */

loc_001C3E01: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001C3E30; /* je: equal / zero */

loc_001C3E10: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x001C3E18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3E15u); } /* indirect call */
    }

loc_001C3E18: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x001C3E24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3E21u); } /* indirect call */
    }

loc_001C3E24: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001C3E30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3E2Du); } /* indirect call */
    }

loc_001C3E30: ;
    ecx = MEM32(esp + 0x14);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_001C3E60
 * Original: 0x001C3E60 - 0x001C3FCB (363 bytes, 115 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3E60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245C73);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x001C3E88u); RECOMP_ABI_CALL(0x001C2C70u, sub_001C2C70); /* call 0x001C2C70 */

loc_001C3E88: ;
    MEM32(esi) = 0x2F85D8;
    SET_LO8(eax, MEM8(ebp + 0xB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C3EE7; /* je: equal / zero */

loc_001C3EA5: ;
    MEM8(esi + 0x40) = 1;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C3EBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3EB8u); } /* indirect call */
    }

loc_001C3EBB: ;
    MEM16(eax + 4) = 0xD0;
    MEM32(esp + 0x1C) = eax;
    ecx = ebp + 0x30;
    PUSH32(esp, ecx);
    edx = ebp + 0x20;
    PUSH32(esp, edx);
    ecx = eax;
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x001C3ED9u); RECOMP_ABI_CALL(0x001CCEE0u, sub_001CCEE0); /* call 0x001CCEE0 */

loc_001C3ED9: ;
    MEM32(esi + 0x3C) = eax;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    goto loc_001C3FA4;

loc_001C3EE7: ;
    PUSH32(esp, edi);
    ecx = ebp + 0x90;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xA0);
    edx = ebp + 0x60;
    PUSH32(esp, edx);
    edx = SX8(LO8(eax));
    PUSH32(esp, ecx);
    ecx = ebp + 0x30;
    edi = ebp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C3F09u); RECOMP_ABI_CALL(0x001C3C00u, sub_001C3C00); /* call 0x001C3C00 */

loc_001C3F09: ;
    MEM32(esi + 0x3C) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001C3F1Bu); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_001C3F1B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001C3F2F; /* jne: not equal / not zero */

loc_001C3F21: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3F2F; /* je: equal / zero */

loc_001C3F28: ;
    ecx = esi;
    PUSH32(esp, 0x001C3F2Fu); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_001C3F2F: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = ebp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001C3F3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3F38u); } /* indirect call */
    }

loc_001C3F3B: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C3F47u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_001C3F47: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C3F5A; /* jne: not equal / not zero */

loc_001C3F4C: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3F5A; /* je: equal / zero */

loc_001C3F53: ;
    ecx = esi;
    PUSH32(esp, 0x001C3F5Au); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_001C3F5A: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = ebp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001C3F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C3F63u); } /* indirect call */
    }

loc_001C3F66: ;
    edx = MEM32(ebp + 0xA4);
    ecx = MEM32(esi + 0x3C);
    MEM32(ecx + 0x14) = edx;
    ecx = MEM32(ebp + 0xA8);
    eax = MEM32(esi + 0x3C);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = edx;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0xB5);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001C3F96u); RECOMP_ABI_CALL(0x001C3940u, sub_001C3940); /* call 0x001C3940 */

loc_001C3F96: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C3FA4; /* je: equal / zero */

loc_001C3F9D: ;
    ecx = esi;
    PUSH32(esp, 0x001C3FA4u); RECOMP_ABI_CALL(0x001C3A40u, sub_001C3A40); /* call 0x001C3A40 */

loc_001C3FA4: ;
    ecx = MEM32(ebp + 0xAC);
    MEM32(esi + 0x4C) = ecx;
    edx = MEM32(ebp + 0xB0);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x50) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C3FD0
 * Original: 0x001C3FD0 - 0x001C405F (143 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C3FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C3FD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245C88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0x80000000u;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = ebx * 4 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C4023; /* jle: less or equal (signed <=) */

loc_001C401B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001C4021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C401Eu); } /* indirect call */
    }

loc_001C4021: ;
    goto loc_001C4037;

loc_001C4023: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ebp = edi + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    POP32(esp, edi);
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebp);

loc_001C4037: ;
    ecx = ebx;
    MEM32(esi) = eax;
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C4060
 * Original: 0x001C4060 - 0x001C40FB (155 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4060: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245C88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x4409AC);
    eax = eax * 4 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_001C40B2; /* je: equal / zero */

loc_001C409E: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C40A9; /* je: equal / zero */

loc_001C40A5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C40B2; /* jne: not equal / not zero */

loc_001C40A9: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x2C); PUSH32(esp, 0x001C40B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C40ADu); } /* indirect call */
    }

loc_001C40B0: ;
    goto loc_001C40C2;

loc_001C40B2: ;
    edi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;

loc_001C40C2: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C40EA; /* js: sign (negative) */

loc_001C40D1: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C40EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C40E7u); } /* indirect call */
    }

loc_001C40EA: ;
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
 * sub_001C4100
 * Original: 0x001C4100 - 0x001C4402 (770 bytes, 262 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C4100(void)
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

loc_001C4100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245CBE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001C412Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4128u); } /* indirect call */
    }

loc_001C412B: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001C43EE; /* je: equal / zero */

loc_001C413A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4149; /* je: equal / zero */

loc_001C413F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    MEM8(esp + 0x1B) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001C414E; /* jne: not equal / not zero */

loc_001C4149: ;
    MEM8(esp + 0x1B) = 0;

loc_001C414E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C415D; /* je: equal / zero */

loc_001C4153: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM8(esp + 0x1A) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001C4162; /* jne: not equal / not zero */

loc_001C415D: ;
    MEM8(esp + 0x1A) = 0;

loc_001C4162: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4182; /* je: equal / zero */

loc_001C416A: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4182; /* jne: not equal / not zero */

loc_001C4172: ;
    ecx = MEM32(esi + 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C417Au); RECOMP_ABI_CALL(0x001BCFA0u, sub_001BCFA0); /* call 0x001BCFA0 */

loc_001C417A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C43EE; /* je: equal / zero */

loc_001C4182: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, 0x10);
    ecx = esp + 0x30;
    MEM32(esp + 0x20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4194u); RECOMP_ABI_CALL(0x001C3FD0u, sub_001C3FD0); /* call 0x001C3FD0 */

loc_001C4194: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x7C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C41C1; /* je: equal / zero */

loc_001C41A0: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C41B4; /* jne: not equal / not zero */

loc_001C41A7: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C41B4u); RECOMP_ABI_CALL(0x001C07F0u, sub_001C07F0); /* call 0x001C07F0 */

loc_001C41B4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C41C1; /* jne: not equal / not zero */

loc_001C41B9: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C41C1u); RECOMP_ABI_CALL(0x001C0610u, sub_001C0610); /* call 0x001C0610 */

loc_001C41C1: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C42D4; /* je: equal / zero */

loc_001C41CD: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C423C; /* je: equal / zero */

loc_001C41D5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C43A6; /* je: equal / zero */

loc_001C41DE: ;
    ebx = MEM32(esi + 0x3C);
    edx = MEM32(ebx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001C41EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C41EAu); } /* indirect call */
    }

loc_001C41ED: ;
    ecx = ebx + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C41FDu); RECOMP_ABI_CALL(0x000397B0u, sub_000397B0); /* call 0x000397B0 */

loc_001C41FD: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx + 0x30;
    edi = ebx + 0xB0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4213u); RECOMP_ABI_CALL(0x001C3C00u, sub_001C3C00); /* call 0x001C3C00 */

loc_001C4213: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001C4220u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C421Du); } /* indirect call */
    }

loc_001C4220: ;
    eax = MEM32(ebx + 0x14);
    MEM32(edi + 0x14) = eax;
    ecx = MEM32(ebx + 0x18);
    MEM32(edi + 0x18) = ecx;
    MEM32(esi + 0x3C) = edi;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C4237u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4235u); } /* indirect call */
    }

loc_001C4237: ;
    goto loc_001C439F;

loc_001C423C: ;
    edi = MEM32(esi + 0x3C);
    ecx = edi;
    MEM32(esp + 0x20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C424Au); RECOMP_ABI_CALL(0x001BCFA0u, sub_001BCFA0); /* call 0x001BCFA0 */

loc_001C424A: ;
    MEM32(esi + 0x3C) = eax;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C4254u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4251u); } /* indirect call */
    }

loc_001C4254: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C42B3; /* je: equal / zero */

loc_001C4258: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C42B3; /* je: equal / zero */

loc_001C425D: ;
    ebx = MEM32(esi + 0x3C);
    eax = MEM32(ebx);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001C426Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4269u); } /* indirect call */
    }

loc_001C426C: ;
    edx = ebx + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C427Cu); RECOMP_ABI_CALL(0x000397B0u, sub_000397B0); /* call 0x000397B0 */

loc_001C427C: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx + 0x30;
    edi = ebx + 0xB0;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4292u); RECOMP_ABI_CALL(0x001C3C00u, sub_001C3C00); /* call 0x001C3C00 */

loc_001C4292: ;
    ecx = MEM32(ebx + 0x14);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(ebx + 0x18);
    MEM32(eax + 0x18) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C42ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C42AAu); } /* indirect call */
    }

loc_001C42AC: ;
    edi = MEM32(esp + 0x20);
    ebx = MEM32(ebp + 8);

loc_001C42B3: ;
    eax = MEM32(esi + 0x3C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001C42BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C42BBu); } /* indirect call */
    }

loc_001C42BE: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001C42C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C42C4u); } /* indirect call */
    }

loc_001C42C7: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C42CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C42CDu); } /* indirect call */
    }

loc_001C42CF: ;
    goto loc_001C43A2;

loc_001C42D4: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C42E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C42E3u); } /* indirect call */
    }

loc_001C42E6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM16(eax + 4) = 0xD0;
    if (CMP_NE(_fa, _fb)) goto loc_001C4314; /* jne: not equal / not zero */

loc_001C42F5: ;
    ecx = MEM32(esi + 0x3C);
    edx = ecx + 0x30;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(esp + 0x84) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4312u); RECOMP_ABI_CALL(0x001CCEE0u, sub_001CCEE0); /* call 0x001CCEE0 */

loc_001C4312: ;
    goto loc_001C4331;

loc_001C4314: ;
    ecx = MEM32(esi + 0x3C);
    edx = ecx + 0x30;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(esp + 0x84) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4331u); RECOMP_ABI_CALL(0x001CB7B0u, sub_001CB7B0); /* call 0x001CB7B0 */

loc_001C4331: ;
    edi = eax;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x7C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C4350; /* je: equal / zero */

loc_001C4340: ;
    eax = MEM32(esi + 0x3C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001C434Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4348u); } /* indirect call */
    }

loc_001C434B: ;
    MEM32(esi + 0x3C) = edi;
    goto loc_001C43A2;

loc_001C4350: ;
    ebx = MEM32(esi + 0x3C);
    ecx = ebx;
    MEM32(esp + 0x20) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C435Eu); RECOMP_ABI_CALL(0x001BCFA0u, sub_001BCFA0); /* call 0x001BCFA0 */

loc_001C435E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4390; /* je: equal / zero */

loc_001C4362: ;
    eax = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C436Fu); RECOMP_ABI_CALL(0x001BCFA0u, sub_001BCFA0); /* call 0x001BCFA0 */

loc_001C436F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001C4379u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4376u); } /* indirect call */
    }

loc_001C4379: ;
    eax = MEM32(edi);
    ecx = ebx;
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4386u); RECOMP_ABI_CALL(0x001BCFA0u, sub_001BCFA0); /* call 0x001BCFA0 */

loc_001C4386: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001C4390u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C438Du); } /* indirect call */
    }

loc_001C4390: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x3C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001C439F; /* je: equal / zero */

loc_001C4397: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C439Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C439Du); } /* indirect call */
    }

loc_001C439F: ;
    ebx = MEM32(ebp + 8);

loc_001C43A2: ;
    edi = MEM32(esp + 0x1C);

loc_001C43A6: ;
    eax = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x40) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C43DD; /* je: equal / zero */

loc_001C43BC: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C43D0; /* jne: not equal / not zero */

loc_001C43C3: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C43D0u); RECOMP_ABI_CALL(0x001C0060u, sub_001C0060); /* call 0x001C0060 */

loc_001C43D0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C43DD; /* jne: not equal / not zero */

loc_001C43D5: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C43DDu); RECOMP_ABI_CALL(0x001C0020u, sub_001C0020); /* call 0x001C0020 */

loc_001C43DD: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C43EEu); RECOMP_ABI_CALL(0x001C4060u, sub_001C4060); /* call 0x001C4060 */

loc_001C43EE: ;
    ecx = MEM32(esp + 0x74);
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
 * sub_001C4410
 * Original: 0x001C4410 - 0x001C451A (266 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4410: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0xB4);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001C4425u); RECOMP_ABI_CALL(0x001C4100u, sub_001C4100); /* call 0x001C4100 */

loc_001C4425: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C442Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C442Au); } /* indirect call */
    }

loc_001C442D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4503; /* je: equal / zero */

loc_001C4436: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001C4442u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_001C4442: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4455; /* jne: not equal / not zero */

loc_001C4447: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4455; /* je: equal / zero */

loc_001C444E: ;
    ecx = esi;
    PUSH32(esp, 0x001C4455u); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_001C4455: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = edi + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001C4461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C445Eu); } /* indirect call */
    }

loc_001C4461: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C446Du); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_001C446D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C4480; /* jne: not equal / not zero */

loc_001C4472: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C4480; /* je: equal / zero */

loc_001C4479: ;
    ecx = esi;
    PUSH32(esp, 0x001C4480u); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_001C4480: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = edi + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001C448Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4489u); } /* indirect call */
    }

loc_001C448C: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C4494u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4491u); } /* indirect call */
    }

loc_001C4494: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C44C3; /* je: equal / zero */

loc_001C4499: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = edi + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x001C44A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C44A2u); } /* indirect call */
    }

loc_001C44A5: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = edi + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x001C44B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C44B1u); } /* indirect call */
    }

loc_001C44B4: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(edi + 0xA0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001C44C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C44C0u); } /* indirect call */
    }

loc_001C44C3: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(edi + 0xA4);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(esi + 0x3C);
    eax = MEM32(edi + 0xA8);
    MEM32(edx + 0x18) = eax;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C44F4; /* je: equal / zero */

loc_001C44E2: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0xB5);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001C44EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C44ECu); } /* indirect call */
    }

loc_001C44EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C4503; /* je: equal / zero */

loc_001C44F4: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0xB5);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001C4503u); RECOMP_ABI_CALL(0x001C3940u, sub_001C3940); /* call 0x001C3940 */

loc_001C4503: ;
    ecx = MEM32(edi + 0xAC);
    MEM32(esi + 0x4C) = ecx;
    edx = MEM32(edi + 0xB0);
    POP32(esp, edi);
    MEM32(esi + 0x50) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C4520
 * Original: 0x001C4520 - 0x001C453B (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4520(void)
{

loc_001C4520: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C452Eu); RECOMP_ABI_CALL(0x001C2C10u, sub_001C2C10); /* call 0x001C2C10 */

loc_001C452E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C4536u); RECOMP_ABI_CALL(0x001C4410u, sub_001C4410); /* call 0x001C4410 */

loc_001C4536: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C4540
 * Original: 0x001C4540 - 0x001C454F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4540(void)
{

loc_001C4540: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C454Eu); RECOMP_ABI_CALL(0x001C3850u, sub_001C3850); /* call 0x001C3850 */

loc_001C454E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C4550
 * Original: 0x001C4550 - 0x001C455F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4550(void)
{

loc_001C4550: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C455Eu); RECOMP_ABI_CALL(0x001C4520u, sub_001C4520); /* call 0x001C4520 */

loc_001C455E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C4560
 * Original: 0x001C4560 - 0x001C4566 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4560(void)
{

loc_001C4560: ;
    eax = 0x440DA0;
    esp += 4; return; /* ret */

}

/**
 * sub_001C4570
 * Original: 0x001C4570 - 0x001C45C4 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4570: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245CDB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xA4);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C4598u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C4595u); } /* indirect call */
    }

loc_001C4598: ;
    MEM16(eax + 4) = 0xA4;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001C45B5u); RECOMP_ABI_CALL(0x001C3E60u, sub_001C3E60); /* call 0x001C3E60 */

loc_001C45B5: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C45D0
 * Original: 0x001C45D0 - 0x001C4655 (133 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C45D0(void)
{

loc_001C45D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C45D8u); RECOMP_ABI_CALL(0x001CB5D0u, sub_001CB5D0); /* call 0x001CB5D0 */

loc_001C45D8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    eax = 0x3F800000;
    MEM32(esi + 0x3C) = eax;
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    XMM_STORE(esi + 0x80, xmm0); /* movaps */
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0xA0) = eax;
    XMM_STORE(esi + 0x90, xmm0); /* movaps */
    MEM32(esi + 0xA4) = 0;
    MEM32(esi + 0xA8) = 0x3D4CCCCD;
    MEM32(esi + 0xAC) = 0x3F000000;
    MEM32(esi + 0xB0) = 0x3ECCCCCD;
    MEM8(esi + 0xB4) = 1;
    MEM8(esi + 0xB5) = 2;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4660
 * Original: 0x001C4660 - 0x001C469D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4660: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245D01);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C468E; /* je: equal / zero */

loc_001C4689: ;
    PUSH32(esp, 0x001C468Eu); RECOMP_ABI_CALL(0x001C45D0u, sub_001C45D0); /* call 0x001C45D0 */

loc_001C468E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C46A0
 * Original: 0x001C46A0 - 0x001C46BC (28 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C46A0(void)
{

loc_001C46A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C46AEu); RECOMP_ABI_CALL(0x001BCC40u, sub_001BCC40); /* call 0x001BCC40 */

loc_001C46AE: ;
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x001C46B7u); RECOMP_ABI_CALL(0x001CE110u, sub_001CE110); /* call 0x001CE110 */

loc_001C46B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C46C0
 * Original: 0x001C46C0 - 0x001C46DC (28 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C46C0(void)
{

loc_001C46C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C46CEu); RECOMP_ABI_CALL(0x001BCC30u, sub_001BCC30); /* call 0x001BCC30 */

loc_001C46CE: ;
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x001C46D7u); RECOMP_ABI_CALL(0x001CE300u, sub_001CE300); /* call 0x001CE300 */

loc_001C46D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C46E0
 * Original: 0x001C46E0 - 0x001C46E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C46E0(void)
{

loc_001C46E0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001C46F0
 * Original: 0x001C46F0 - 0x001C46F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C46F0(void)
{

loc_001C46F0: ;
    eax = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_001C4700
 * Original: 0x001C4700 - 0x001C472D (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4700: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C4730
 * Original: 0x001C4730 - 0x001C4768 (56 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4730: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C4764; /* jge: greater or equal (signed >=) */

loc_001C4740: ;
    eax = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edx;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = edi;

loc_001C4750: ;
    edi = MEM32(ecx + 0x30);
    xmm0 = XMM_MEM(edx); /* movaps */
    XMM_STORE(edi + eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C4750; /* jne: not equal / not zero */

loc_001C4763: ;
    POP32(esp, edi);

loc_001C4764: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C4770
 * Original: 0x001C4770 - 0x001C4805 (149 bytes, 46 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C4770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    xmm0 = XMM_MEM(esi); /* movaps */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    PUSH32(esp, edi);
    XMM_STORE(esp + 0x24, xmm0); /* movaps */
    eax = esp + 0x14;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    XMM_STORE(esp + 0x38, xmm0); /* movaps */
    PUSH32(esp, eax);
    MEM32(esp + 0x3C) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C47B2u); RECOMP_ABI_CALL(0x00233350u, sub_00233350); /* call 0x00233350 */

loc_001C47B2: ;
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C47CEu); RECOMP_ABI_CALL(0x00233350u, sub_00233350); /* call 0x00233350 */

loc_001C47CE: ;
    PUSH32(esp, edi);
    edx = esp + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C47EAu); RECOMP_ABI_CALL(0x00233350u, sub_00233350); /* call 0x00233350 */

loc_001C47EA: ;
    eax = MEM32(esi + 0xB8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C4810
 * Original: 0x001C4810 - 0x001C4874 (100 bytes, 35 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C4810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    ecx = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = edx;
    eax = MEM32(eax);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + esi); /* movaps */
    PUSH32(esp, ecx);
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi); /* movaps */
    PUSH32(esp, edx);
    eax = esp + 0x18;
    XMM_STORE(esp + 0x18, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C485Du); RECOMP_ABI_CALL(0x00233350u, sub_00233350); /* call 0x00233350 */

loc_001C485D: ;
    eax = MEM32(esi + 0xB8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C4880
 * Original: 0x001C4880 - 0x001C490F (143 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C4880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi * 4 + 0x30EDBC);
    eax = edx + 5;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm1 = XMM_MEM(eax + ecx); /* movaps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi * 4 + 0x30EDC0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + ecx); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(edx + ecx); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 8;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    eax = esp + 0xC;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEMF(eax) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4908u); RECOMP_ABI_CALL(0x001CFAB0u, sub_001CFAB0); /* call 0x001CFAB0 */

loc_001C4908: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4910
 * Original: 0x001C4910 - 0x001C49BF (175 bytes, 56 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C4910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    eax = edi;
    eax = MEM32(eax);
    ecx = MEM32(eax * 4 + 0x30EDBC);
    edx = MEM32(eax * 4 + 0x30EDC0);
    edi = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(ecx + esi); /* movaps */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(edx + esi); /* movaps */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + esi); /* movaps */
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C497Au); RECOMP_ABI_CALL(0x00232ED0u, sub_00232ED0); /* call 0x00232ED0 */

loc_001C497A: ;
    xmm1 = XMM_MEM(0x2F6A30); /* movaps */
    xmm0 = XMM_MEM(esp + 0x3C); /* movaps */
    PUSH32(esp, edi);
    xmm0 = XMM_XOR(xmm0, xmm1); /* xorps */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    ecx = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    XMM_STORE(esp + 0x48, xmm1); /* movaps */
    XMM_STORE(esp + 0x28, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C49A4u); RECOMP_ABI_CALL(0x00232ED0u, sub_00232ED0); /* call 0x00232ED0 */

loc_001C49A4: ;
    eax = MEM32(esi + 0xB8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C49C0
 * Original: 0x001C49C0 - 0x001C4A71 (177 bytes, 53 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C49C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C49C0: ;
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
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1C);
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x90); /* movaps */
    PUSH32(esp, edi);
    eax = esp + 0x44;
    XMM_STORE(esp + 0x54, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x6C, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C49FFu); RECOMP_ABI_CALL(0x00232ED0u, sub_00232ED0); /* call 0x00232ED0 */

loc_001C49FF: ;
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    XMM_STORE(esp + 0x1C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xA0); /* movaps */
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    XMM_STORE(esp + 0x48, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4A2Au); RECOMP_ABI_CALL(0x00232ED0u, sub_00232ED0); /* call 0x00232ED0 */

loc_001C4A2A: ;
    xmm0 = XMM_MEM(esi + 0x80); /* movaps */
    XMM_STORE(esp + 0x38, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x28); /* movaps */
    PUSH32(esp, edi);
    edx = esp + 0x2C;
    XMM_STORE(esp + 0x4C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x7C); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4A56u); RECOMP_ABI_CALL(0x00232ED0u, sub_00232ED0); /* call 0x00232ED0 */

loc_001C4A56: ;
    eax = MEM32(esi + 0xB8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C4A80
 * Original: 0x001C4A80 - 0x001C4B13 (147 bytes, 58 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C4A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = ecx + 8;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edx + 8;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4AD3u); RECOMP_ABI_CALL(0x001CE550u, sub_001CE550); /* call 0x001CE550 */

loc_001C4AD3: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    edx = eax + 0x10;
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    MEM32(esp + 0x38) = ecx;
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4AFCu); RECOMP_ABI_CALL(0x00233720u, sub_00233720); /* call 0x00233720 */

loc_001C4AFC: ;
    eax = MEM32(esi + 0xB8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C4B20
 * Original: 0x001C4B20 - 0x001C4B9B (123 bytes, 39 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4B20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    eax = MEM32(ecx);
    edx = eax + 0x10;
    MEM32(ecx) = edx;
    eax = MEM32(eax);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0xB8);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 0x40);
    edx = MEM32(esp + 0x2C);
    ecx = eax + ecx * 8;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0x001C4B84u); RECOMP_ABI_CALL(0x00233020u, sub_00233020); /* call 0x00233020 */

loc_001C4B84: ;
    eax = MEM32(esi + 0xB8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C4BA0
 * Original: 0x001C4BA0 - 0x001C4BA4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4BA0(void)
{

loc_001C4BA0: ;
    eax = MEM32(ecx + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4BB0
 * Original: 0x001C4BB0 - 0x001C4BB4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4BB0(void)
{

loc_001C4BB0: ;
    eax = MEM32(ecx + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_001C4BC0
 * Original: 0x001C4BC0 - 0x001C4C33 (115 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C4BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4BC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245D18);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 6) = 1;
    MEM32(esi + 8) = 0x2F8098;
    MEM32(esp + 4) = esi;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEM32(esi) = 0x2F8244;
    MEM32(esi + 8) = 0x2F8270;
    PUSH32(esp, 0x001C4C13u); RECOMP_ABI_CALL(0x001BCD60u, sub_001BCD60); /* call 0x001BCD60 */

loc_001C4C13: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C4C1Fu); RECOMP_ABI_CALL(0x001BCDB0u, sub_001BCDB0); /* call 0x001BCDB0 */

loc_001C4C1F: ;
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
 * sub_001C4C40
 * Original: 0x001C4C40 - 0x001C4CBB (123 bytes, 43 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C4C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C4C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = ecx;
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + esi); /* movaps */
    eax = MEM32(ecx);
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    edx = eax + 0x10;
    MEM32(ecx) = edx;
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    ecx = MEM32(eax);
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4CA4u); RECOMP_ABI_CALL(0x00233530u, sub_00233530); /* call 0x00233530 */

loc_001C4CA4: ;
    eax = MEM32(esi + 0xB8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C4CC0
 * Original: 0x001C4CC0 - 0x001C4DAC (236 bytes, 79 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C4CC0(void)
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

loc_001C4CC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = edx;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    eax = esi + 5;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + edi); /* movaps */
    ecx = edi;
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4CF2u); RECOMP_ABI_CALL(0x001C4880u, sub_001C4880); /* call 0x001C4880 */

loc_001C4CF2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2dc098] */
    eax = MEM32(ebp + 0xC);
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    ecx = MEM32(eax);
    edx = ecx + 0x10;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    MEM32(esp + 0x20) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    MEM32(esp + 0x24) = edx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C4D46; /* jp: parity */

loc_001C4D1A: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C4D46; /* jne: not equal / not zero */

loc_001C4D2A: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F8AD8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f8ad8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C4D46; /* jne: not equal / not zero */

loc_001C4D3C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DD3D8)); /* fadd dword ptr [0x2dd3d8] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */

loc_001C4D46: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C4D7F; /* jne: not equal / not zero */

loc_001C4D53: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C4D7F; /* jp: parity */

loc_001C4D63: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F8AD8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f8ad8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C4D7F; /* jne: not equal / not zero */

loc_001C4D75: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DD3D8)); /* fsub dword ptr [0x2dd3d8] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */

loc_001C4D7F: ;
    eax = MEM32(ebp + 0x1C);
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4D94u); RECOMP_ABI_CALL(0x00233720u, sub_00233720); /* call 0x00233720 */

loc_001C4D94: ;
    eax = MEM32(edi + 0xB8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0xB8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C4DB0
 * Original: 0x001C4DB0 - 0x001C4F3B (395 bytes, 112 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C4DB0(void)
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

loc_001C4DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    eax = esi;
    eax = MEM32(eax);
    esi = MEM32(ebp + 0x14);
    ecx = eax + 5;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(ecx + esi); /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xC9); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xD2); /* shufps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm3); /* subps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    edx = esp + 0xC;
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(edx) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F8AD4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f8ad4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C4F34; /* jnp: not parity */

loc_001C4E47: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C4EBE; /* jnp: not parity */

loc_001C4E78: ;
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0xC) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_001C4ECC;

loc_001C4EBE: ;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_001C4ECC: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    eax = MEM32(ecx);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = eax + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    xmm2 = xmm0; /* movaps */
    MEM32(ecx) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x30, xmm2); /* movaps */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax);
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4F24u); RECOMP_ABI_CALL(0x00233720u, sub_00233720); /* call 0x00233720 */

loc_001C4F24: ;
    eax = MEM32(esi + 0xB8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xB8) = eax;

loc_001C4F34: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C4F40
 * Original: 0x001C4F40 - 0x001C51A1 (609 bytes, 183 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C4F40(void)
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

loc_001C4F40: ;
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
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    eax = edi;
    ebx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    edi = MEM32(eax);
    MEM32(esp + 0x28) = ecx;
    ecx = edi + 0x10;
    MEM32(eax) = ecx;
    fp_push(MEMF(edi)); /* fld float */
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C4F7Du); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001C4F7D: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0x34);
    eax = MEM32(edx + eax * 4);
    esi = MEM32(ebp + 0x14);
    ecx = MEM32(ecx + 0x40);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0xB8);
    edx = ebx + 5;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(edx + esi); /* movaps */
    edx = ecx + eax * 8;
    ecx = MEM32(ebx * 4 + 0x30EDBC);
    eax = ecx + 5;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    MEM32(esp + 0x6C) = edx;
    xmm1 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebx * 4 + 0x30EDC0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(ecx + esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    eax = esp + 0x1C;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x28;
    MEMF(edx) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C5036u); RECOMP_ABI_CALL(0x001CFAB0u, sub_001CFAB0); /* call 0x001CFAB0 */

loc_001C5036: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2F8AD8)); /* fadd dword ptr [0x2f8ad8] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2E0A1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2e0a1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C5064; /* jp: parity */

loc_001C5056: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    goto loc_001C507B;

loc_001C5064: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F8AD8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f8ad8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C507F; /* jne: not equal / not zero */

loc_001C5071: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */

loc_001C507B: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_001C507F: ;
    ecx = MEM32(esp + 0x14);
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C518B; /* je: equal / zero */

loc_001C509C: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(edx + 0x3C);
    edx = MEM32(eax + 0x10);
    xmm2 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    eax = MEM32(edx + 0x3C);
    edi = MEM32(ebp + 0x18);
    ebx = MEM32(ebp + 0x1C);
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm2 = XMM_MEM(eax + 0x50); /* movaps */
    eax = MEM32(ebx);
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xAA); /* shufps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, edi);
    edx = esp + 0x54;
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, edx);
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    ecx = esp + 0x30;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    PUSH32(esp, eax);
    MEMF(ecx) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C510Eu); RECOMP_ABI_CALL(0x00232C30u, sub_00232C30); /* call 0x00232C30 */

loc_001C510E: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C5116u); RECOMP_ABI_CALL(0x00232AB0u, sub_00232AB0); /* call 0x00232AB0 */

loc_001C5116: ;
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x14);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = MEM32(edi + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3D8)); /* fmul dword ptr [0x2dd3d8] */
    ecx = MEM32(esp + 0x7C);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 0x38);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEM32(esp + 0x54) = edx;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x4C) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    MEM32(esp + 0x50) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C5162u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C515Fu); } /* indirect call */
    }

loc_001C5162: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    ecx = MEM32(esp + 0x30);
    fp_top() = -fp_top(); /* fchs */
    edx = MEM32(esp + 0x2C);
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    eax = esp + 0x54;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x74) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C5188u); RECOMP_ABI_CALL(0x00232B90u, sub_00232B90); /* call 0x00232B90 */

loc_001C5188: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C518B: ;
    eax = MEM32(esi + 0xB8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C51B0
 * Original: 0x001C51B0 - 0x001C535A (426 bytes, 136 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C51B0(void)
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

loc_001C51B0: ;
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
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    ebx = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = esi;
    esi = MEM32(eax);
    eax = MEM32(ecx);
    edx = eax + 0x10;
    MEM32(ecx) = edx;
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C51DDu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001C51DD: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0x34);
    edi = MEM32(edx + eax * 4);
    eax = esi + 2;
    esi = MEM32(ebp + 0x14);
    edx = MEM32(esi + 0xB8);
    xmm0 = XMM_MEM(esi); /* movaps */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm1 = XMM_MEM(eax + esi); /* movaps */
    eax = MEM32(ecx + 0x40);
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    ecx = eax + edx * 8;
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = esi + 0x10;
    edx = esp + 0x10;
    MEMF(edx) = xmm3.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    MEM32(esp + 0x6C) = ecx;
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x14;
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x50, xmm1); /* movaps */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001C5344; /* je: equal / zero */

loc_001C525C: ;
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(edx + 0x3C);
    xmm2 = XMM_MEM(ecx + 0x40); /* movaps */
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(edx + 0x3C);
    ebx = MEM32(ebp + 0x18);
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm2 = XMM_MEM(ecx + 0x40); /* movaps */
    ecx = MEM32(ebp + 0x1C);
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xAA); /* shufps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, ebx);
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    PUSH32(esp, eax);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x20;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    eax = esp + 0x58;
    MEMF(edx) = xmm2.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C52C6u); RECOMP_ABI_CALL(0x00232D50u, sub_00232D50); /* call 0x00232D50 */

loc_001C52C6: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C52D1u); RECOMP_ABI_CALL(0x00232AC0u, sub_00232AC0); /* call 0x00232AC0 */

loc_001C52D1: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx + 0x14);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = MEM32(ebx + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    ecx = MEM32(esp + 0x80);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(ecx);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEM32(esp + 0x40) = edx;
    edx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C5318u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5315u); } /* indirect call */
    }

loc_001C5318: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = MEM32(esp + 0x20);
    fp_top() = -fp_top(); /* fchs */
    ecx = MEM32(ebp + 0x1C);
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x64) = edx;
    edx = esp + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x74) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C5341u); RECOMP_ABI_CALL(0x00232BE0u, sub_00232BE0); /* call 0x00232BE0 */

loc_001C5341: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C5344: ;
    eax = MEM32(esi + 0xB8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C5360
 * Original: 0x001C5360 - 0x001C53E5 (133 bytes, 46 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C5360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    eax = esi;
    eax = MEM32(eax);
    esi = MEM32(ebp + 0x14);
    xmm1 = XMM_MEM(esi); /* movaps */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + esi); /* movaps */
    eax = MEM32(ecx);
    edx = eax + 0x10;
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    MEM32(ecx) = edx;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(esi + 0xB8);
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    eax = MEM32(eax);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(edx + 0x40);
    edx = MEM32(ebp + 0x1C);
    ecx = eax + ecx * 8;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C53CEu); RECOMP_ABI_CALL(0x002331B0u, sub_002331B0); /* call 0x002331B0 */

loc_001C53CE: ;
    eax = MEM32(esi + 0xB8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xB8) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001C53F0
 * Original: 0x001C53F0 - 0x001C5A10 (1568 bytes, 498 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C53F0(void)
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

loc_001C53F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xD4));
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0xC8) = edx;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    MEM32(esp + 0xC8) = eax;
    eax = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0xD8) = 0;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x14) = eax;

loc_001C5440: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001C5979; /* ja: above (unsigned >) */

loc_001C544F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1C599C); /* switch: 26 entries, 26 targets */
    if (_jt == 0x001C5456u) goto loc_001C5456;
    if (_jt == 0x001C545Fu) goto loc_001C545F;
    if (_jt == 0x001C54D7u) goto loc_001C54D7;
    if (_jt == 0x001C550Au) goto loc_001C550A;
    if (_jt == 0x001C5538u) goto loc_001C5538;
    if (_jt == 0x001C5566u) goto loc_001C5566;
    if (_jt == 0x001C55A1u) goto loc_001C55A1;
    if (_jt == 0x001C55DFu) goto loc_001C55DF;
    if (_jt == 0x001C5629u) goto loc_001C5629;
    if (_jt == 0x001C5676u) goto loc_001C5676;
    if (_jt == 0x001C56A4u) goto loc_001C56A4;
    if (_jt == 0x001C56D2u) goto loc_001C56D2;
    if (_jt == 0x001C5704u) goto loc_001C5704;
    if (_jt == 0x001C5736u) goto loc_001C5736;
    if (_jt == 0x001C5768u) goto loc_001C5768;
    if (_jt == 0x001C579Au) goto loc_001C579A;
    if (_jt == 0x001C57CCu) goto loc_001C57CC;
    if (_jt == 0x001C57FEu) goto loc_001C57FE;
    if (_jt == 0x001C5830u) goto loc_001C5830;
    if (_jt == 0x001C5862u) goto loc_001C5862;
    if (_jt == 0x001C589Bu) goto loc_001C589B;
    if (_jt == 0x001C58D4u) goto loc_001C58D4;
    if (_jt == 0x001C5902u) goto loc_001C5902;
    if (_jt == 0x001C5922u) goto loc_001C5922;
    if (_jt == 0x001C5941u) goto loc_001C5941;
    if (_jt == 0x001C5990u) goto loc_001C5990;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C5456: ;
    edx = MEM32(esp + 0xD0);
    goto loc_001C5466;

loc_001C545F: ;
    edx = MEM32(esp + 0xD4);

loc_001C5466: ;
    xmm0 = XMM_MEM(esi); /* movaps */
    eax = MEM32(edx + 0x3C);
    xmm2 = XMM_MEM(eax + 0xA0); /* movaps */
    xmm3 = XMM_MEM(eax + 0x90); /* movaps */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80)) >> 32) & 1);
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ecx);
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esp + eax + 0x40, xmm0); /* movaps */
    eax = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C54D7: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 4);
    xmm0 = XMM_MEM(esi); /* movaps */
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + ecx + 0x40, xmm0); /* movaps */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C550A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C5521u); RECOMP_ABI_CALL(0x001C4810u, sub_001C4810); /* call 0x001C4810 */

loc_001C5521: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5538: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C554Fu); RECOMP_ABI_CALL(0x001C4770u, sub_001C4770); /* call 0x001C4770 */

loc_001C554F: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5566: ;
    ecx = MEM32(esp + 0xD0);
    edx = MEM32(ecx + 0x3C);
    eax = esi;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x80)) >> 32) & 1);
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x30)) >> 32) & 1);
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x78;
    MEM32(esp + 0x14) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C558Au); RECOMP_ABI_CALL(0x001CF5F0u, sub_001CF5F0); /* call 0x001CF5F0 */

loc_001C558A: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C55A1: ;
    eax = esi;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xD8);
    ecx = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x80)) >> 32) & 1);
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x30)) >> 32) & 1);
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xA8;
    MEM32(esp + 0x14) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C55C8u); RECOMP_ABI_CALL(0x001CF5F0u, sub_001CF5F0); /* call 0x001CF5F0 */

loc_001C55C8: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C55DF: ;
    edx = MEM32(esp + 0xD0);
    eax = MEM32(edx + 0x3C);
    xmm0 = XMM_MEM(eax + 0x80); /* movaps */
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80)) >> 32) & 1);
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5629: ;
    eax = MEM32(esp + 0xD4);
    eax = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(eax + 0x80); /* movaps */
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80)) >> 32) & 1);
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5676: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C568Du); RECOMP_ABI_CALL(0x001C4910u, sub_001C4910); /* call 0x001C4910 */

loc_001C568D: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C56A4: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C56BBu); RECOMP_ABI_CALL(0x001C49C0u, sub_001C49C0); /* call 0x001C49C0 */

loc_001C56BB: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C56D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C56E9u); RECOMP_ABI_CALL(0x001C4C40u, sub_001C4C40); /* call 0x001C4C40 */

loc_001C56E9: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5704: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C571Bu); RECOMP_ABI_CALL(0x001C4CC0u, sub_001C4CC0); /* call 0x001C4CC0 */

loc_001C571B: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5736: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C574Du); RECOMP_ABI_CALL(0x001C4DB0u, sub_001C4DB0); /* call 0x001C4DB0 */

loc_001C574D: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5768: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C577Fu); RECOMP_ABI_CALL(0x001C4A80u, sub_001C4A80); /* call 0x001C4A80 */

loc_001C577F: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C579A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C57B1u); RECOMP_ABI_CALL(0x001C4F40u, sub_001C4F40); /* call 0x001C4F40 */

loc_001C57B1: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C57CC: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C57E3u); RECOMP_ABI_CALL(0x001C51B0u, sub_001C51B0); /* call 0x001C51B0 */

loc_001C57E3: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C57FE: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C5815u); RECOMP_ABI_CALL(0x001C4B20u, sub_001C4B20); /* call 0x001C4B20 */

loc_001C5815: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5830: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C5847u); RECOMP_ABI_CALL(0x001C5360u, sub_001C5360); /* call 0x001C5360 */

loc_001C5847: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5862: ;
    ecx = MEM32(esp + 0xD0);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x80)) >> 32) & 1);
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C587Du); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001C587D: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C589B: ;
    eax = MEM32(esp + 0xD4);
    ecx = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x80)) >> 32) & 1);
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C58B6u); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001C58B6: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C58D4: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C58E1u); RECOMP_ABI_CALL(0x00232B00u, sub_00232B00); /* call 0x00232B00 */

loc_001C58E1: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5902: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C5908u); RECOMP_ABI_CALL(0x00232B30u, sub_00232B30); /* call 0x00232B30 */

loc_001C5908: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5922: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C593Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C593Du); } /* indirect call */
    }

loc_001C593F: ;
    goto loc_001C5974;

loc_001C5941: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C595Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C595Cu); } /* indirect call */
    }

loc_001C595F: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C5971u); RECOMP_ABI_CALL(0x00232AD0u, sub_00232AD0); /* call 0x00232AD0 */

loc_001C5971: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C5974: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x14)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 4;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C5979: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_001C5440;

loc_001C5990: ;
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
 * sub_001C5A10
 * Original: 0x001C5A10 - 0x001C5B03 (243 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5A10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245D5C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 3;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C5A57; /* js: sign (negative) */

loc_001C5A3D: ;
    edx = MEM32(esi + 0x40);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C5A57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5A54u); } /* indirect call */
    }

loc_001C5A57: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C5A7D; /* js: sign (negative) */

loc_001C5A63: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C5A7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5A7Au); } /* indirect call */
    }

loc_001C5A7D: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C5AA3; /* js: sign (negative) */

loc_001C5A89: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C5AA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5AA0u); } /* indirect call */
    }

loc_001C5AA3: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C5AC9; /* js: sign (negative) */

loc_001C5AAF: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C5AC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5AC6u); } /* indirect call */
    }

loc_001C5AC9: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C5AF2; /* js: sign (negative) */

loc_001C5AD8: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C5AF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5AEFu); } /* indirect call */
    }

loc_001C5AF2: ;
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
 * sub_001C5B10
 * Original: 0x001C5B10 - 0x001C5B7F (111 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5B10: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C5B24u); RECOMP_ABI_CALL(0x001C4BC0u, sub_001C4BC0); /* call 0x001C4BC0 */

loc_001C5B24: ;
    MEM32(esi) = 0x2F8AEC;
    MEM32(esi + 8) = 0x2F8ADC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ecx;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = ecx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    eax = 0x18;
    MEM32(esi + 0x28) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C5B80
 * Original: 0x001C5B80 - 0x001C5B88 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C5B80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001C5D10(); return; /* tail jmp 0x001C5D10 */

}

/**
 * sub_001C5B90
 * Original: 0x001C5B90 - 0x001C5C1C (140 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5B90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245D83);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x2F8AEC;
    MEM32(esi + 8) = 0x2F8ADC;
    eax = MEM32(esi + 0x58);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_001C5BEF; /* jle: less or equal (signed <=) */

loc_001C5BCC: ;
    /* nop */

loc_001C5BD0: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax + edi * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C5BE7; /* jne: not equal / not zero */

loc_001C5BE1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C5BE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5BE5u); } /* indirect call */
    }

loc_001C5BE7: ;
    eax = MEM32(esi + 0x58);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C5BD0; /* jl: less (signed <) */

loc_001C5BEF: ;
    ecx = esi + 0x20;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x001C5BFCu); RECOMP_ABI_CALL(0x001C5A10u, sub_001C5A10); /* call 0x001C5A10 */

loc_001C5BFC: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C5C0Bu); RECOMP_ABI_CALL(0x001BCCB0u, sub_001BCCB0); /* call 0x001BCCB0 */

loc_001C5C0B: ;
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
 * sub_001C5C20
 * Original: 0x001C5C20 - 0x001C5C50 (48 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5C20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001C5C3Au); RECOMP_ABI_CALL(0x00232B50u, sub_00232B50); /* call 0x00232B50 */

loc_001C5C3A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001C5C4Au); RECOMP_ABI_CALL(0x001C53F0u, sub_001C53F0); /* call 0x001C53F0 */

loc_001C5C4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C5C50
 * Original: 0x001C5C50 - 0x001C5D0A (186 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5C50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245D83);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x001C5C79u); RECOMP_ABI_CALL(0x001BCE30u, sub_001BCE30); /* call 0x001BCE30 */

loc_001C5C79: ;
    esi = edi + 0x20;
    MEM32(edi) = 0x2F8AEC;
    MEM32(edi + 8) = 0x2F8ADC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esp + 0x18) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(ebx + 0x14);
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM8(esp + 0x18) = LO8(ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_001C5CE4; /* jge: greater or equal (signed >=) */

loc_001C5CD1: ;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = 0x18;
    MEM32(esi + 8) = eax;

loc_001C5CE4: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001C5CECu); RECOMP_ABI_CALL(0x001BCC30u, sub_001BCC30); /* call 0x001BCC30 */

loc_001C5CEC: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001C5CF4u); RECOMP_ABI_CALL(0x001CE300u, sub_001CE300); /* call 0x001CE300 */

loc_001C5CF4: ;
    ecx = MEM32(esp + 0x10);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C5D10
 * Original: 0x001C5D10 - 0x001C5D38 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C5D18u); RECOMP_ABI_CALL(0x001C5B90u, sub_001C5B90); /* call 0x001C5B90 */

loc_001C5D18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C5D32; /* je: equal / zero */

loc_001C5D1F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C5D32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5D2Fu); } /* indirect call */
    }

loc_001C5D32: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C5D40
 * Original: 0x001C5D40 - 0x001C5D4F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5D40(void)
{

loc_001C5D40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C5D4Eu); RECOMP_ABI_CALL(0x001C46A0u, sub_001C46A0); /* call 0x001C46A0 */

loc_001C5D4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C5D50
 * Original: 0x001C5D50 - 0x001C5D5F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5D50(void)
{

loc_001C5D50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C5D5Eu); RECOMP_ABI_CALL(0x001C46C0u, sub_001C46C0); /* call 0x001C46C0 */

loc_001C5D5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C5D60
 * Original: 0x001C5D60 - 0x001C5D66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5D60(void)
{

loc_001C5D60: ;
    eax = 0x440DC8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C5D70
 * Original: 0x001C5D70 - 0x001C5DC1 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5D70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245D9B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x27);
    PUSH32(esp, 0x6C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C5D95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5D92u); } /* indirect call */
    }

loc_001C5D95: ;
    MEM16(eax + 4) = 0x6C;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001C5DB2u); RECOMP_ABI_CALL(0x001C5C50u, sub_001C5C50); /* call 0x001C5C50 */

loc_001C5DB2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C5DD0
 * Original: 0x001C5DD0 - 0x001C5E16 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C5DD8u); RECOMP_ABI_CALL(0x001CB1C0u, sub_001CB1C0); /* call 0x001CB1C0 */

loc_001C5DD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x4C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C5E20
 * Original: 0x001C5E20 - 0x001C5E5D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5E20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245DC1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C5E4E; /* je: equal / zero */

loc_001C5E49: ;
    PUSH32(esp, 0x001C5E4Eu); RECOMP_ABI_CALL(0x001C5DD0u, sub_001C5DD0); /* call 0x001C5DD0 */

loc_001C5E4E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C5E60
 * Original: 0x001C5E60 - 0x001C5F2D (205 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5E60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245DF1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C5EA7; /* js: sign (negative) */

loc_001C5E8D: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C5EA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5EA4u); } /* indirect call */
    }

loc_001C5EA7: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C5ECD; /* js: sign (negative) */

loc_001C5EB3: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C5ECDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5ECAu); } /* indirect call */
    }

loc_001C5ECD: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C5EF3; /* js: sign (negative) */

loc_001C5ED9: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C5EF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5EF0u); } /* indirect call */
    }

loc_001C5EF3: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C5F1C; /* js: sign (negative) */

loc_001C5F02: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C5F1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C5F19u); } /* indirect call */
    }

loc_001C5F1C: ;
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
 * sub_001C5F30
 * Original: 0x001C5F30 - 0x001C5F39 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C5F30: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_001C5E60(); return; /* tail jmp 0x001C5E60 */

}

/**
 * sub_001C5F40
 * Original: 0x001C5F40 - 0x001C5F7F (63 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C5F40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x001C5F4Fu); RECOMP_ABI_CALL(0x001C46E0u, sub_001C46E0); /* call 0x001C46E0 */

loc_001C5F4F: ;
    MEM32(esi + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x10) = LO8(eax);
    MEM8(esi + 0x11) = LO8(eax);
    MEM8(esi + 0x12) = LO8(eax);
    MEM8(esi + 0x13) = LO8(eax);
    MEM8(esi + 0x14) = LO8(eax);
    MEM8(esi + 0x15) = LO8(eax);
    MEM8(esi + 0x18) = LO8(eax);
    MEM8(esi + 0x19) = LO8(eax);
    MEM8(esi + 0x16) = LO8(eax);
    MEM8(esi + 0x17) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C5F80
 * Original: 0x001C5F80 - 0x001C6034 (180 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C5F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C5F80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C5FA6; /* jne: not equal / not zero */

loc_001C5F9B: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C5FA3u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C5FA3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C5FA6: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = 5;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C5FD5; /* jne: not equal / not zero */

loc_001C5FCA: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C5FD2u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C5FD2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C5FD5: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    ebx = MEM32(esp + 0x18);
    MEM32(edx + ecx * 4) = ebx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 4);
    ebp = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x14);
    esi = eax + 0x10;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6007; /* jne: not equal / not zero */

loc_001C5FFC: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C6004u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C6004: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6007: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    SET_LO8(eax, 1);
    MEM8(ebx + edi + 0x10) = LO8(eax);
    MEM8(ebx + edi + 0x13) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C6040
 * Original: 0x001C6040 - 0x001C607A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6040: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6064; /* jne: not equal / not zero */

loc_001C6059: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C6061u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C6061: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6064: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = 0xA;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + 0x16) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C6080
 * Original: 0x001C6080 - 0x001C60BA (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6080: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C60A4; /* jne: not equal / not zero */

loc_001C6099: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C60A1u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C60A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C60A4: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = 0xB;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + 0x17) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C60C0
 * Original: 0x001C60C0 - 0x001C613D (125 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C60C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C60C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C60E5; /* jne: not equal / not zero */

loc_001C60DA: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C60E2u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C60E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C60E5: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = 1;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 4);
    ebx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x14);
    esi = eax + 0x10;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6117; /* jne: not equal / not zero */

loc_001C610C: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C6114u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C6114: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6117: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    MEM8(edi + 0x18) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C6140
 * Original: 0x001C6140 - 0x001C61BD (125 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6140: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6165; /* jne: not equal / not zero */

loc_001C615A: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C6162u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C6162: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6165: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = 2;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 4);
    ebx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x14);
    esi = eax + 0x10;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6197; /* jne: not equal / not zero */

loc_001C618C: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C6194u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C6194: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6197: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    MEM8(edi + 0x19) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C61C0
 * Original: 0x001C61C0 - 0x001C622E (110 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C61C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C61C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C61EDu); RECOMP_ABI_CALL(0x001CF750u, sub_001CF750); /* call 0x001CF750 */

loc_001C61ED: ;
    edx = MEM32(edi + 0x3C);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C6201u); RECOMP_ABI_CALL(0x001CF750u, sub_001CF750); /* call 0x001CF750 */

loc_001C6201: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C620Du); RECOMP_ABI_CALL(0x001C60C0u, sub_001C60C0); /* call 0x001C60C0 */

loc_001C620D: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C621Bu); RECOMP_ABI_CALL(0x001C6140u, sub_001C6140); /* call 0x001C6140 */

loc_001C621B: ;
    SET_LO8(eax, 1);
    MEM8(esi + 0x18) = LO8(eax);
    MEM8(esi + 0x19) = LO8(eax);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C6230
 * Original: 0x001C6230 - 0x001C6348 (280 bytes, 99 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C6230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C625E; /* jne: not equal / not zero */

loc_001C6253: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C625Bu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C625B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C625E: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    ebx = ZX8(MEM8(ebp + 8));
    MEM32(edx + ecx * 4) = 0x10;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6291; /* jne: not equal / not zero */

loc_001C6286: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C628Eu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C628E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6291: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(ebp + 0xC);
    MEM32(edx + ecx * 4) = ebx;
    edx = MEM32(esi + 4);
    ecx = MEM32(ebp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi + 4);
    edx = MEM32(eax + 0x18);
    ebx = MEM32(eax + 0x14);
    esi = eax + 0x10;
    eax = MEM32(esi + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001C62E2; /* jne: not equal / not zero */

loc_001C62D7: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C62DFu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C62DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C62E2: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    XMM_STORE(eax, xmm0); /* movaps */
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6336; /* jne: not equal / not zero */

loc_001C632B: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C6333u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C6333: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6336: ;
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C6350
 * Original: 0x001C6350 - 0x001C6467 (279 bytes, 97 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C6350(void)
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

loc_001C6350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C637E; /* jne: not equal / not zero */

loc_001C6373: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C637Bu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C637B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C637E: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    ebx = ZX8(MEM8(ebp + 8));
    MEM32(edx + ecx * 4) = 0x12;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C63B1; /* jne: not equal / not zero */

loc_001C63A6: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C63AEu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C63AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C63B1: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = MEM32(esi + 4);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = ebx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 4);
    ebx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x14);
    esi = eax + 0x10;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = 0x42C80000;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_001C6400; /* jne: not equal / not zero */

loc_001C63F5: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C63FDu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C63FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6400: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    XMM_STORE(eax, xmm0); /* movaps */
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 4) = edx;
    esi = MEM32(edi + 4);
    ecx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6455; /* jne: not equal / not zero */

loc_001C644A: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C6452u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C6452: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6455: ;
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    eax = ebx;
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
 * sub_001C6470
 * Original: 0x001C6470 - 0x001C6539 (201 bytes, 72 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C6470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    esi = MEM32(edi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C64A5; /* jne: not equal / not zero */

loc_001C649A: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C64A2u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C64A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C64A5: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(ebp + 8);
    MEM32(edx + ecx * 4) = 0x16;
    edx = MEM32(esi + 4);
    ecx = MEM32(ebp + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi + 4);
    edx = MEM32(eax + 0x18);
    ebx = MEM32(eax + 0x14);
    esi = eax + 0x10;
    eax = MEM32(esi + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001C64FA; /* jne: not equal / not zero */

loc_001C64EF: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C64F7u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C64F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C64FA: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    XMM_STORE(eax, xmm0); /* movaps */
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax + 8) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C6540
 * Original: 0x001C6540 - 0x001C6599 (89 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6540: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    esi = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C656B; /* jne: not equal / not zero */

loc_001C6560: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C6568u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C6568: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C656B: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = 0x17;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C65A0
 * Original: 0x001C65A0 - 0x001C65F9 (89 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C65A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C65A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C65C4; /* jne: not equal / not zero */

loc_001C65B9: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C65C1u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C65C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C65C4: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + ecx * 4) = edx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 0x44);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C65F6; /* jle: less or equal (signed <=) */

loc_001C65DD: ;
    /* nop */

loc_001C65E0: ;
    eax = MEM32(eax + 0x40);
    eax = eax + ecx * 8;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 0x44);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C65E0; /* jl: less (signed <) */

loc_001C65F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C6600
 * Original: 0x001C6600 - 0x001C66BB (187 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6600: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6624; /* jne: not equal / not zero */

loc_001C6619: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C6621u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C6621: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6624: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = 7;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = 0x30;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = esi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = edx;
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    esi = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = esi;
    eax = MEM32(edi + 4);
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = esi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = edx;
    esi = MEM32(edi + 4);
    edi = MEM32(esi + 0x44);
    eax = MEM32(esi + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C66B5; /* jge: greater or equal (signed >=) */

loc_001C66A1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C66A9; /* jl: less (signed <) */

loc_001C66A7: ;
    eax = edi;

loc_001C66A9: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C66B2u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001C66B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C66B5: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C66C0
 * Original: 0x001C66C0 - 0x001C6719 (89 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C66C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C66C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245E0B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x260);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C66E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C66E5u); } /* indirect call */
    }

loc_001C66E8: ;
    MEM16(eax + 4) = 0x260;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x4F4C);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x001C670Au); RECOMP_ABI_CALL(0x001C0E40u, sub_001C0E40); /* call 0x001C0E40 */

loc_001C670A: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C6720
 * Original: 0x001C6720 - 0x001C672F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6720(void)
{

loc_001C6720: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C672Eu); RECOMP_ABI_CALL(0x001BCFE0u, sub_001BCFE0); /* call 0x001BCFE0 */

loc_001C672E: ;
    esp += 4; return; /* ret */

}
