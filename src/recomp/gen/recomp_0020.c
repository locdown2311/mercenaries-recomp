/**
 * Mercenaries - Recompiled code chunk 20
 * Functions: 250 (0x0010FCE0 - 0x00117040)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0010FCE0
 * Original: 0x0010FCE0 - 0x0010FD32 (82 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010FCE0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x30E794);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FD30; /* je: equal / zero */

loc_0010FCEE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    /* nop */

loc_0010FD00: ;
    _fa = (uint32_t)(MEM32(eax + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FD24; /* je: equal / zero */

loc_0010FD09: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x19 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FD24; /* jne: not equal / not zero */

loc_0010FD0F: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FD24; /* jne: not equal / not zero */

loc_0010FD1A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax + 0x18;
    PUSH32(esp, 0x0010FD24u); RECOMP_ABI_CALL(0x0010F440u, sub_0010F440); /* call 0x0010F440 */

loc_0010FD24: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FD00; /* jne: not equal / not zero */

loc_0010FD2D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0010FD30: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FD40
 * Original: 0x0010FD40 - 0x0010FD59 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FD40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FD40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x2ED1E8;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, 0x0010FD56u); RECOMP_ABI_CALL(0x0010ED00u, sub_0010ED00); /* call 0x0010ED00 */

loc_0010FD56: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0010FD60
 * Original: 0x0010FD60 - 0x0010FD81 (33 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FD60: ;
    PUSH32(esp, 0x0010FD65u); RECOMP_ABI_CALL(0x0010ED00u, sub_0010ED00); /* call 0x0010ED00 */

loc_0010FD65: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x365EB0);
    MEM32(ecx + 0xA8) = edx;
    MEM32(0x365EB0) = MEM32(0x365EB0) + 1;
    _fa = (uint32_t)(MEM32(0x365EB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FD90
 * Original: 0x0010FD90 - 0x0010FE3F (175 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FD90(void)
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

loc_0010FD90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FE3D; /* je: equal / zero */

loc_0010FD9E: ;
    PUSH32(esp, edi);
    edi = esi + 0x98;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FDACu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0010FDAC: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FDBAu); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_0010FDBA: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010FDC5u); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_0010FDC5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FE07; /* je: equal / zero */

loc_0010FDCC: ;
    fp_push(MEMD(0x2ED218)); /* fld double */
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010FDE1u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_0010FDE1: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FDEBu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0010FDEB: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010FDF6u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_0010FDF6: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010FE04u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_0010FE04: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010FE07: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FE12u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_0010FE12: ;
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010FE1Eu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_0010FE1E: ;
    eax = MEM32(esi + 4);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FE2Bu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0010FE2B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010FE39u); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_0010FE39: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0010FE3D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010FE40
 * Original: 0x0010FE40 - 0x0010FEF8 (184 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FE40(void)
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

loc_0010FE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FEF6; /* je: equal / zero */

loc_0010FE4E: ;
    PUSH32(esp, edi);
    edi = esi + 0x98;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FE5Cu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0010FE5C: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FE6Au); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_0010FE6A: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010FE75u); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_0010FE75: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FEB7; /* je: equal / zero */

loc_0010FE7C: ;
    fp_push(MEMD(0x2ED218)); /* fld double */
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010FE91u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_0010FE91: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FE9Bu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0010FE9B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010FEA6u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_0010FEA6: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010FEB4u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_0010FEB4: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010FEB7: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FEC2u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_0010FEC2: ;
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010FECEu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_0010FECE: ;
    eax = MEM32(esi + 4);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010FEDBu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0010FEDB: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010FEE9u); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_0010FEE9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0010FEF5u); RECOMP_ABI_CALL(0x0010E000u, sub_0010E000); /* call 0x0010E000 */

loc_0010FEF5: ;
    POP32(esp, edi);

loc_0010FEF6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010FF00
 * Original: 0x0010FF00 - 0x0010FF1D (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FF00: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(ecx + 0x14) = 0x13;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010FF1Au); RECOMP_ABI_CALL(0x0010F1B0u, sub_0010F1B0); /* call 0x0010F1B0 */

loc_0010FF1A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010FF20
 * Original: 0x0010FF20 - 0x0010FF3D (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FF20: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(ecx + 0x14) = 0x15;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010FF3Au); RECOMP_ABI_CALL(0x0010F3A0u, sub_0010F3A0); /* call 0x0010F3A0 */

loc_0010FF3A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010FF40
 * Original: 0x0010FF40 - 0x0010FF5D (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FF40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FF40: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(ecx + 0x14) = 0x1A;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010FF5Au); RECOMP_ABI_CALL(0x0010F470u, sub_0010F470); /* call 0x0010F470 */

loc_0010FF5A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010FF60
 * Original: 0x0010FF60 - 0x0010FF78 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FF60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FF60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 0x14) = 3;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010FF75u); RECOMP_ABI_CALL(0x0010F9D0u, sub_0010F9D0); /* call 0x0010F9D0 */

loc_0010FF75: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010FF80
 * Original: 0x0010FF80 - 0x0010FFAC (44 bytes, 15 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FF80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FF80: ;
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
    MEM32(ecx + 0x14) = 0x1E;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010FFA9u); RECOMP_ABI_CALL(0x0010F5C0u, sub_0010F5C0); /* call 0x0010F5C0 */

loc_0010FFA9: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0010FFB0
 * Original: 0x0010FFB0 - 0x0010FFF0 (64 bytes, 21 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FFB0: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(ecx + 0x14) = 0x1F;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0010FFEDu); RECOMP_ABI_CALL(0x0010F700u, sub_0010F700); /* call 0x0010F700 */

loc_0010FFED: ;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0010FFF0
 * Original: 0x0010FFF0 - 0x0010FFFF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010FFF0: ;
    MEM32(ecx + 0x14) = 0x23;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0010F8D0(); return; /* tail jmp 0x0010F8D0 */

}

/**
 * sub_00110000
 * Original: 0x00110000 - 0x001100CC (204 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00110000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00110000: ;
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
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001100AA; /* je: equal / zero */

loc_00110017: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011001Cu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011001C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001100AA; /* jne: not equal / not zero */

loc_00110025: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110032u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00110032: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEM32(esp + 8) = edx;
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    if (TEST_NZ(_fa, _fb)) goto loc_0011008C; /* jne: not equal / not zero */

loc_00110077: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */

loc_0011008C: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001100BB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001100A1: ;
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001100AA: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xA8);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001100B8u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_001100B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001100BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x1C));
    SET_LO8(eax, ~LO8(eax));
    POP32(esp, esi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001100D0
 * Original: 0x001100D0 - 0x001101FD (301 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001100D0(void)
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

loc_001100D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001101DB; /* je: equal / zero */

loc_001100E7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001100ECu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001100EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001101DB; /* jne: not equal / not zero */

loc_001100F5: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001101DB; /* je: equal / zero */

loc_00110100: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110105u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110105: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001101DB; /* jne: not equal / not zero */

loc_0011010E: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011011Bu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0011011B: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011013Fu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0011013F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 8);
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00110186; /* je: equal / zero */

loc_00110169: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    goto loc_001101C7;

loc_00110186: ;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001101BAu); RECOMP_ABI_CALL(0x00015420u, sub_00015420); /* call 0x00015420 */

loc_001101BA: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001101C7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001101EC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001101D1: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001101DB: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xA8);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001101E9u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_001101E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001101EC: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
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
 * sub_00110200
 * Original: 0x00110200 - 0x001103B4 (436 bytes, 151 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00110200(void)
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

loc_00110200: ;
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
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00110398; /* je: equal / zero */

loc_00110219: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011021Eu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011021E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00110398; /* jne: not equal / not zero */

loc_00110227: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00110398; /* je: equal / zero */

loc_00110232: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110237u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110237: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00110398; /* jne: not equal / not zero */

loc_00110240: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011024Du); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0011024D: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110271u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00110271: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEM32(esp + 0x2C) = edx;
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x2C); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x28) = ecx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x28); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001103A9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001102D7: ;
    eax = MEM32(esi + 4);
    esi = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    ecx = 0x30D4B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001102E8u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_001102E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00110303; /* je: equal / zero */

loc_001102EC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001102F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001102F0u); } /* indirect call */
    }

loc_001102F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00110303; /* je: equal / zero */

loc_001102FA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00110301u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001102FEu); } /* indirect call */
    }

loc_00110301: ;
    esi = eax;

loc_00110303: ;
    PUSH32(esp, esi);
    ecx = 0x30D38C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011030Eu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0011030E: ;
    PUSH32(esp, esi);
    ecx = 0x30D8A0;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011031Bu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0011031B: ;
    PUSH32(esp, esi);
    ecx = 0x30D3AC;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110328u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00110328: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011033C; /* je: equal / zero */

loc_0011032C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110333u); RECOMP_ABI_CALL(0x00049CD0u, sub_00049CD0); /* call 0x00049CD0 */

loc_00110333: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0011033C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011034B; /* je: equal / zero */

loc_00110340: ;
    eax = MEM32(edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    goto loc_00110358;

loc_0011034B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0011038D; /* je: equal / zero */

loc_0011034F: ;
    eax = MEM32(ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebx;

loc_00110358: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0011035Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110358u); } /* indirect call */
    }

loc_0011035B: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110365u); RECOMP_ABI_CALL(0x00015420u, sub_00015420); /* call 0x00015420 */

loc_00110365: ;
    fp_push(MEMF(0x2ED1BC)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00110382; /* jbe: below or equal (unsigned <=) */

loc_00110374: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00110382: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0011038D: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00110398: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001103A6u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_001103A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001103A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
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
 * sub_001103C0
 * Original: 0x001103C0 - 0x00110483 (195 bytes, 65 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001103C0(void)
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

loc_001103C0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(esp + 0x10));
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = 0;
    MEM8(esi + 0x10) = LO8(edx);
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x11) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0011047F; /* je: equal / zero */

loc_001103F5: ;
    PUSH32(esp, 0x001103FAu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001103FA: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    SET_LO8(eax, MEM8(ecx + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00110453; /* je: equal / zero */

loc_0011040A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6E99129D);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00110414u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110411u); } /* indirect call */
    }

loc_00110414: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011042D; /* je: equal / zero */

loc_00110418: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011041Eu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0011041E: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00110430;

loc_0011042D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00110430: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00110444; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0011043A: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    MEM8(esi + 0x11) = LO8(eax);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00110444: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x11) = LO8(ecx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00110453: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110474; /* je: equal / zero */

loc_0011045B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00110462u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011045Fu); } /* indirect call */
    }

loc_00110462: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110476; /* je: equal / zero */

loc_00110474: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00110476: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0011047Eu); RECOMP_ABI_CALL(0x0010F170u, sub_0010F170); /* call 0x0010F170 */

loc_0011047E: ;
    POP32(esp, edi);

loc_0011047F: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00110490
 * Original: 0x00110490 - 0x001104C4 (52 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110490: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x11));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001104C0; /* je: equal / zero */

loc_0011049C: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001104AD; /* je: equal / zero */

loc_001104A3: ;
    PUSH32(esp, 0x001104A8u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001104A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001104BE; /* je: equal / zero */

loc_001104AD: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001104BBu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_001104BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001104BE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001104C0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001104D0
 * Original: 0x001104D0 - 0x00110540 (112 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001104D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001104D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110514; /* je: equal / zero */

loc_001104DA: ;
    PUSH32(esp, 0x001104DFu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001104DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110514; /* jne: not equal / not zero */

loc_001104E4: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00110525; /* jne: not equal / not zero */

loc_001104F2: ;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x00110500u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00110500: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110525; /* je: equal / zero */

loc_00110504: ;
    ecx = MEM32(eax + 0x768);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0xC) = LO8(edx);
    goto loc_00110525;

loc_00110514: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00110522u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110522: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110525: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xD), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110532; /* jne: not equal / not zero */

loc_0011052B: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110532: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110540
 * Original: 0x00110540 - 0x001105A6 (102 bytes, 33 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110540: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00110563; /* je: equal / zero */

loc_0011055B: ;
    PUSH32(esp, 0x00110560u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110560: ;
    MEM32(esi + 8) = eax;

loc_00110563: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0011057D; /* je: equal / zero */

loc_00110575: ;
    PUSH32(esp, 0x0011057Au); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011057A: ;
    MEM32(esi + 0x10) = eax;

loc_0011057D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(esi + 0x15) = LO8(ecx);
    MEM8(esi + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001105A2; /* je: equal / zero */

loc_0011058F: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001105A2; /* je: equal / zero */

loc_00110596: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0011059Fu); RECOMP_ABI_CALL(0x0010F260u, sub_0010F260); /* call 0x0010F260 */

loc_0011059F: ;
    MEM8(esi + 0x14) = LO8(eax);

loc_001105A2: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001105B0
 * Original: 0x001105B0 - 0x00110612 (98 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001105B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001105B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001105E6; /* je: equal / zero */

loc_001105BA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001105E6; /* je: equal / zero */

loc_001105C1: ;
    PUSH32(esp, 0x001105C6u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001105C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001105E6; /* jne: not equal / not zero */

loc_001105CB: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001105D3u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001105D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001105E6; /* jne: not equal / not zero */

loc_001105D8: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001105E1u); RECOMP_ABI_CALL(0x0010F260u, sub_0010F260); /* call 0x0010F260 */

loc_001105E1: ;
    MEM8(esi + 0x14) = LO8(eax);
    goto loc_001105F7;

loc_001105E6: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001105F4u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_001105F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001105F7: ;
    _fa = (uint32_t)(MEM8(esi + 0x15)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x15), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110604; /* jne: not equal / not zero */

loc_001105FD: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110604: ;
    SET_LO8(ecx, MEM8(esi + 0x14));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110620
 * Original: 0x00110620 - 0x0011068B (107 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110620: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110674; /* je: equal / zero */

loc_0011062A: ;
    PUSH32(esp, 0x0011062Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011062F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110674; /* jne: not equal / not zero */

loc_00110634: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00110685; /* jne: not equal / not zero */

loc_00110642: ;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    ecx = 0x30C0B0;
    PUSH32(esp, 0x00110650u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00110650: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110685; /* je: equal / zero */

loc_00110654: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0011065Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110658u); } /* indirect call */
    }

loc_0011065E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110685; /* je: equal / zero */

loc_00110662: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00110669u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110666u); } /* indirect call */
    }

loc_00110669: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0xC) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110685; /* jne: not equal / not zero */

loc_0011066E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110674: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00110682u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110682: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110685: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110690
 * Original: 0x00110690 - 0x00110714 (132 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110690: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001106E8; /* je: equal / zero */

loc_0011069A: ;
    PUSH32(esp, 0x0011069Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011069F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001106E8; /* jne: not equal / not zero */

loc_001106A4: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001106F9; /* jne: not equal / not zero */

loc_001106B2: ;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x001106C0u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_001106C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001106F9; /* je: equal / zero */

loc_001106C4: ;
    eax = MEM32(eax + 0x768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001106E1; /* je: equal / zero */

loc_001106CE: ;
    _fa = (uint32_t)(MEM32(eax + 0x114)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x114), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001106E1; /* je: equal / zero */

loc_001106D7: ;
    eax = 1;
    MEM8(esi + 0xC) = LO8(eax);
    goto loc_001106F9;

loc_001106E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0xC) = LO8(eax);
    goto loc_001106F9;

loc_001106E8: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001106F6u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_001106F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001106F9: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xD), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110706; /* jne: not equal / not zero */

loc_001106FF: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110706: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110720
 * Original: 0x00110720 - 0x00110795 (117 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110720: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011077E; /* je: equal / zero */

loc_0011072A: ;
    PUSH32(esp, 0x0011072Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011072F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011077E; /* jne: not equal / not zero */

loc_00110734: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011078F; /* jne: not equal / not zero */

loc_00110742: ;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    ecx = 0x30C0B0;
    PUSH32(esp, 0x00110750u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00110750: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011078F; /* je: equal / zero */

loc_00110754: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0011075Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110758u); } /* indirect call */
    }

loc_0011075E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011078F; /* je: equal / zero */

loc_00110762: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = eax + 0x54;
    PUSH32(esp, 0x0011076Eu); RECOMP_ABI_CALL(0x00065EB0u, sub_00065EB0); /* call 0x00065EB0 */

loc_0011076E: ;
    ecx = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011077E: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011078Cu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_0011078C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011078F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001107A0
 * Original: 0x001107A0 - 0x00110804 (100 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001107A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001107A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001107ED; /* je: equal / zero */

loc_001107AA: ;
    PUSH32(esp, 0x001107AFu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001107AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001107ED; /* jne: not equal / not zero */

loc_001107B4: ;
    esi = MEM32(esi + 4);
    SET_LO8(eax, MEM8(esi + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001107FE; /* jne: not equal / not zero */

loc_001107C1: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = 0x30C0B0;
    PUSH32(esp, 0x001107CFu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_001107CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001107FE; /* je: equal / zero */

loc_001107D3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001107DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001107D7u); } /* indirect call */
    }

loc_001107DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001107FE; /* je: equal / zero */

loc_001107E1: ;
    ecx = eax + 0x54;
    PUSH32(esp, 0x001107E9u); RECOMP_ABI_CALL(0x00064130u, sub_00064130); /* call 0x00064130 */

loc_001107E9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001107ED: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001107FBu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_001107FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001107FE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110810
 * Original: 0x00110810 - 0x00110847 (55 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110810: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110830; /* je: equal / zero */

loc_0011081A: ;
    PUSH32(esp, 0x0011081Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011081F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110830; /* jne: not equal / not zero */

loc_00110824: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110830: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011083Eu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_0011083E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110850
 * Original: 0x00110850 - 0x00110980 (304 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00110850(void)
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

loc_00110850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011095E; /* je: equal / zero */

loc_00110867: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011095E; /* je: equal / zero */

loc_00110872: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110877u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110877: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011095E; /* jne: not equal / not zero */

loc_00110880: ;
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110888u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110888: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011095E; /* jne: not equal / not zero */

loc_00110891: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011089Eu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0011089E: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001108C2u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_001108C2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 8);
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00110909; /* je: equal / zero */

loc_001108EC: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    goto loc_0011094A;

loc_00110909: ;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011093Du); RECOMP_ABI_CALL(0x00015420u, sub_00015420); /* call 0x00015420 */

loc_0011093D: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011094A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011096F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00110954: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0011095E: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xA8);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011096Cu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_0011096C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011096F: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
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
 * sub_00110980
 * Original: 0x00110980 - 0x00110B5B (475 bytes, 178 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00110980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110980: ;
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
    edi = ecx;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110B40; /* je: equal / zero */

loc_00110998: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011099Du); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011099D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110B40; /* jne: not equal / not zero */

loc_001109A6: ;
    ecx = MEM32(edi + 0x14);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001109B3u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_001109B3: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0xFFFFFFF5u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF5u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    if (CMP_A(_fa, _fb)) goto loc_00110B25; /* ja: above (unsigned >) */

loc_001109D9: ;
    ecx = ZX8(MEM8(eax + 0x110B74));
    { uint32_t _jt = MEM32(ecx * 4 + 0x110B5C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001109E7u) goto loc_001109E7;
    if (_jt == 0x00110A24u) goto loc_00110A24;
    if (_jt == 0x00110A5Fu) goto loc_00110A5F;
    if (_jt == 0x00110A9Eu) goto loc_00110A9E;
    if (_jt == 0x00110ADAu) goto loc_00110ADA;
    if (_jt == 0x00110B25u) goto loc_00110B25;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001109E7: ;
    esi = MEM32(0x3172D0);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110A12; /* je: equal / zero */

loc_001109F4: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110A01u); RECOMP_ABI_CALL(0x0010F670u, sub_0010F670); /* call 0x0010F670 */

loc_00110A01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110B1A; /* jne: not equal / not zero */

loc_00110A09: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001109F4; /* jne: not equal / not zero */

loc_00110A12: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00110A24: ;
    esi = MEM32(0x320100);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110A12; /* je: equal / zero */

loc_00110A31: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110A3Eu); RECOMP_ABI_CALL(0x0010F670u, sub_0010F670); /* call 0x0010F670 */

loc_00110A3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110B1A; /* jne: not equal / not zero */

loc_00110A46: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110A31; /* jne: not equal / not zero */

loc_00110A4F: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00110A5F: ;
    esi = MEM32(0x320630);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110A12; /* je: equal / zero */

loc_00110A6C: ;
    /* nop */

loc_00110A70: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110A7Du); RECOMP_ABI_CALL(0x0010F670u, sub_0010F670); /* call 0x0010F670 */

loc_00110A7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110B1A; /* jne: not equal / not zero */

loc_00110A85: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110A70; /* jne: not equal / not zero */

loc_00110A8E: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00110A9E: ;
    esi = MEM32(0x321860);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110A12; /* je: equal / zero */

loc_00110AAF: ;
    /* nop */

loc_00110AB0: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110ABDu); RECOMP_ABI_CALL(0x0010F670u, sub_0010F670); /* call 0x0010F670 */

loc_00110ABD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110B1A; /* jne: not equal / not zero */

loc_00110AC1: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110AB0; /* jne: not equal / not zero */

loc_00110ACA: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00110ADA: ;
    esi = MEM32(0x321980);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110A12; /* je: equal / zero */

loc_00110AEB: ;
    goto loc_00110AF0;

    /* nop */

loc_00110AF0: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110AFDu); RECOMP_ABI_CALL(0x0010F670u, sub_0010F670); /* call 0x0010F670 */

loc_00110AFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110B1A; /* jne: not equal / not zero */

loc_00110B01: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110AF0; /* jne: not equal / not zero */

loc_00110B0A: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00110B1A: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00110B25: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110B33u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110B33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00110B40: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110B4Eu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110B4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110B90
 * Original: 0x00110B90 - 0x00110CD2 (322 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0xFFFFFFF5u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF5u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00110CBA; /* ja: above (unsigned >) */

loc_00110BA3: ;
    eax = ZX8(MEM8(eax + 0x110CEC));
    { uint32_t _jt = MEM32(eax * 4 + 0x110CD4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00110BB1u) goto loc_00110BB1;
    if (_jt == 0x00110BE8u) goto loc_00110BE8;
    if (_jt == 0x00110C1Bu) goto loc_00110C1B;
    if (_jt == 0x00110C4Au) goto loc_00110C4A;
    if (_jt == 0x00110C79u) goto loc_00110C79;
    if (_jt == 0x00110CBAu) goto loc_00110CBA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00110BB1: ;
    esi = MEM32(0x3172D0);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110BD9; /* je: equal / zero */

loc_00110BBE: ;
    edi = edi;

loc_00110BC0: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00110BC8u); RECOMP_ABI_CALL(0x0010F7C0u, sub_0010F7C0); /* call 0x0010F7C0 */

loc_00110BC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110CB2; /* jne: not equal / not zero */

loc_00110BD0: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110BC0; /* jne: not equal / not zero */

loc_00110BD9: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110BE8: ;
    esi = MEM32(0x320100);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110BD9; /* je: equal / zero */

loc_00110BF5: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00110BFDu); RECOMP_ABI_CALL(0x0010F7C0u, sub_0010F7C0); /* call 0x0010F7C0 */

loc_00110BFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110CB2; /* jne: not equal / not zero */

loc_00110C05: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110BF5; /* jne: not equal / not zero */

loc_00110C0E: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110C1B: ;
    esi = MEM32(0x320630);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110BD9; /* je: equal / zero */

loc_00110C28: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00110C30u); RECOMP_ABI_CALL(0x0010F7C0u, sub_0010F7C0); /* call 0x0010F7C0 */

loc_00110C30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110CB2; /* jne: not equal / not zero */

loc_00110C34: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110C28; /* jne: not equal / not zero */

loc_00110C3D: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110C4A: ;
    esi = MEM32(0x321860);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110BD9; /* je: equal / zero */

loc_00110C57: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00110C5Fu); RECOMP_ABI_CALL(0x0010F7C0u, sub_0010F7C0); /* call 0x0010F7C0 */

loc_00110C5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110CB2; /* jne: not equal / not zero */

loc_00110C63: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110C57; /* jne: not equal / not zero */

loc_00110C6C: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110C79: ;
    esi = MEM32(0x321980);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110BD9; /* je: equal / zero */

loc_00110C8A: ;
    /* nop */

loc_00110C90: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00110C98u); RECOMP_ABI_CALL(0x0010F7C0u, sub_0010F7C0); /* call 0x0010F7C0 */

loc_00110C98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110CB2; /* jne: not equal / not zero */

loc_00110C9C: ;
    esi = MEM32(esi);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110C90; /* jne: not equal / not zero */

loc_00110CA5: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110CB2: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110CBA: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx + 0xA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00110CC8u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110CC8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110D00
 * Original: 0x00110D00 - 0x00110D5B (91 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110D44; /* je: equal / zero */

loc_00110D0A: ;
    PUSH32(esp, 0x00110D0Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110D0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110D44; /* jne: not equal / not zero */

loc_00110D14: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00110D1Eu); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_00110D1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110D55; /* je: equal / zero */

loc_00110D25: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00110D2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110D29u); } /* indirect call */
    }

loc_00110D2C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38C); PUSH32(esp, 0x00110D36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110D30u); } /* indirect call */
    }

loc_00110D36: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110D55; /* jne: not equal / not zero */

loc_00110D3E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110D44: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110D52u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110D52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110D55: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110D60
 * Original: 0x00110D60 - 0x00110DB8 (88 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110D60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    edi = ecx;
    PUSH32(esp, 0x00110D6Eu); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_00110D6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110DB1; /* je: equal / zero */

loc_00110D75: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00110D7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110D79u); } /* indirect call */
    }

loc_00110D7C: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x00110D88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110D82u); } /* indirect call */
    }

loc_00110D88: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00110D90u); RECOMP_ABI_CALL(0x0010F900u, sub_0010F900); /* call 0x0010F900 */

loc_00110D90: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110DAA; /* je: equal / zero */

loc_00110D94: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x390); PUSH32(esp, 0x00110D9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110D98u); } /* indirect call */
    }

loc_00110D9E: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00110DA6u); RECOMP_ABI_CALL(0x0010F900u, sub_0010F900); /* call 0x0010F900 */

loc_00110DA6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110DB1; /* jne: not equal / not zero */

loc_00110DAA: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110DB1: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110DC0
 * Original: 0x00110DC0 - 0x00110DF2 (50 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110DDB; /* je: equal / zero */

loc_00110DCA: ;
    PUSH32(esp, 0x00110DCFu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110DCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110DDB; /* jne: not equal / not zero */

loc_00110DD4: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110DDB: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00110DE9u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110DE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110E00
 * Original: 0x00110E00 - 0x00110E32 (50 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110E00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110E1B; /* je: equal / zero */

loc_00110E0A: ;
    PUSH32(esp, 0x00110E0Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110E0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110E1B; /* jne: not equal / not zero */

loc_00110E14: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110E1B: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00110E29u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110E29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110E40
 * Original: 0x00110E40 - 0x00110EA4 (100 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00110E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00110E8C; /* je: equal / zero */

loc_00110E4B: ;
    PUSH32(esp, 0x00110E50u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110E50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00110E8C; /* jne: not equal / not zero */

loc_00110E55: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00110E9D; /* je: equal / zero */

loc_00110E5F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00110E66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110E63u); } /* indirect call */
    }

loc_00110E66: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00110E9D; /* jne: not equal / not zero */

loc_00110E78: ;
    ecx = edi;
    PUSH32(esp, 0x00110E7Fu); RECOMP_ABI_CALL(0x0004FC10u, sub_0004FC10); /* call 0x0004FC10 */

loc_00110E7F: ;
    _fb = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(MEM8(esi + 0xC)));
    SET_LO8(eax, LO8(eax) - MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00110E8C: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00110E9Au); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110E9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110E9D: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110EB0
 * Original: 0x00110EB0 - 0x00110F28 (120 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00110EB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00110F10; /* je: equal / zero */

loc_00110EBB: ;
    PUSH32(esp, 0x00110EC0u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110EC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00110F10; /* jne: not equal / not zero */

loc_00110EC5: ;
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00110F21; /* je: equal / zero */

loc_00110ECF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00110ED6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110ED3u); } /* indirect call */
    }

loc_00110ED6: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00110F21; /* jne: not equal / not zero */

loc_00110EE8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x00110EF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110EECu); } /* indirect call */
    }

loc_00110EF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00110F21; /* je: equal / zero */

loc_00110EF6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x00110F00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110EFAu); } /* indirect call */
    }

loc_00110F00: ;
    SET_LO8(eax, MEM8(eax + 0x62));
    _fb = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(MEM8(edi + 0xC)));
    SET_LO8(eax, LO8(eax) - MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_00110F10: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00110F1Eu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110F1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110F21: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110F30
 * Original: 0x00110F30 - 0x00110F87 (87 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110F70; /* je: equal / zero */

loc_00110F3A: ;
    PUSH32(esp, 0x00110F3Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110F3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110F70; /* jne: not equal / not zero */

loc_00110F44: ;
    eax = MEM32(0x363244);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110F4Fu); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_00110F4F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110F81; /* je: equal / zero */

loc_00110F56: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x28);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x00110F65u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110F65: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00110F81; /* jne: not equal / not zero */

loc_00110F6A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110F70: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110F7Eu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00110F7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110F81: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110F90
 * Original: 0x00110F90 - 0x0011101D (141 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00110F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00111004; /* je: equal / zero */

loc_00110F9C: ;
    PUSH32(esp, 0x00110FA1u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110FA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00111004; /* jne: not equal / not zero */

loc_00110FA6: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00111004; /* je: equal / zero */

loc_00110FAD: ;
    PUSH32(esp, 0x00110FB2u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00110FB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00111004; /* jne: not equal / not zero */

loc_00110FB7: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110FC0u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_00110FC0: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x00110FCBu); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_00110FCB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00111015; /* je: equal / zero */

loc_00110FD4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00111015; /* je: equal / zero */

loc_00110FD8: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00110FE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110FDCu); } /* indirect call */
    }

loc_00110FE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00111015; /* je: equal / zero */

loc_00110FE6: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00110FEEu); RECOMP_ABI_CALL(0x00067E10u, sub_00067E10); /* call 0x00067E10 */

loc_00110FEE: ;
    ecx = ZX8(MEM8(esi + 0x14));
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00111004: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111012u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00111012: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00111015: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111020
 * Original: 0x00111020 - 0x001110A6 (134 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00111020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111020: ;
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
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111084; /* je: equal / zero */

loc_00111033: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111084; /* je: equal / zero */

loc_0011103A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011103Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011103F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111084; /* jne: not equal / not zero */

loc_00111044: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00111051u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00111051: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00111076u); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_00111076: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111095; /* jne: not equal / not zero */

loc_0011107A: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00111084: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00111092u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00111092: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00111095: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001110B0
 * Original: 0x001110B0 - 0x00111136 (134 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001110B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001110B0: ;
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
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111114; /* je: equal / zero */

loc_001110C3: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111114; /* je: equal / zero */

loc_001110CA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001110CFu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001110CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111114; /* jne: not equal / not zero */

loc_001110D4: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001110E1u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_001110E1: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    MEM32(esp + 4) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00111106u); RECOMP_ABI_CALL(0x0014CB30u, sub_0014CB30); /* call 0x0014CB30 */

loc_00111106: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111125; /* jne: not equal / not zero */

loc_0011110A: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00111114: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00111122u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00111122: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00111125: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111140
 * Original: 0x00111140 - 0x0011119D (93 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111140: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111185; /* je: equal / zero */

loc_0011114A: ;
    PUSH32(esp, 0x0011114Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011114F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111185; /* jne: not equal / not zero */

loc_00111154: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00111196; /* jne: not equal / not zero */

loc_00111162: ;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x00111170u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00111170: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111196; /* je: equal / zero */

loc_00111174: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x318); PUSH32(esp, 0x0011117Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00111178u); } /* indirect call */
    }

loc_0011117E: ;
    MEM8(esi + 0xC) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00111185: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00111193u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00111193: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00111196: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001111A0
 * Original: 0x001111A0 - 0x001111E8 (72 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001111A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001111A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001111C9; /* je: equal / zero */

loc_001111AA: ;
    PUSH32(esp, 0x001111AFu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001111AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001111C9; /* jne: not equal / not zero */

loc_001111B4: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001111DA; /* je: equal / zero */

loc_001111C2: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001111C9: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001111D7u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_001111D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001111DA: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001111F0
 * Original: 0x001111F0 - 0x00111276 (134 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001111F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001111F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011125F; /* je: equal / zero */

loc_001111FA: ;
    PUSH32(esp, 0x001111FFu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001111FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011125F; /* jne: not equal / not zero */

loc_00111204: ;
    ecx = MEM32(esi + 4);
    SET_LO16(eax, MEM16(ecx + 0x30));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) >> 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00111248; /* jne: not equal / not zero */

loc_00111215: ;
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00111248; /* jne: not equal / not zero */

loc_0011121C: ;
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, ecx);
    ecx = 0x30D3AC;
    PUSH32(esp, 0x0011122Au); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0011122A: ;
    _fa = (uint32_t)(MEM32(eax + 0xB80)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xB80), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011123A; /* jne: not equal / not zero */

loc_00111233: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011123A: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00111248: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00111256u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00111256: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0011125F: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011126Du); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_0011126D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111280
 * Original: 0x00111280 - 0x001112CA (74 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111280: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001112A6; /* je: equal / zero */

loc_0011128A: ;
    PUSH32(esp, 0x0011128Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_0011128F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001112A6; /* jne: not equal / not zero */

loc_00111294: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001112A6; /* jne: not equal / not zero */

loc_001112A2: ;
    SET_LO8(ecx, 1);
    goto loc_001112A8;

loc_001112A6: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001112A8: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001112C6; /* jne: not equal / not zero */

loc_001112AF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001112C6; /* jne: not equal / not zero */

loc_001112B3: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001112C1u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_001112C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001112C6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001112D0
 * Original: 0x001112D0 - 0x0011137A (170 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001112D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001112D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111363; /* je: equal / zero */

loc_001112DE: ;
    PUSH32(esp, 0x001112E3u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001112E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111363; /* jne: not equal / not zero */

loc_001112E8: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00111354; /* jne: not equal / not zero */

loc_001112F7: ;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    ecx = 0x30D350;
    PUSH32(esp, 0x00111305u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00111305: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111354; /* je: equal / zero */

loc_0011130B: ;
    PUSH32(esp, esi);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x00111316u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00111316: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111330; /* je: equal / zero */

loc_0011131A: ;
    eax = MEM32(eax + 0x768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111330; /* je: equal / zero */

loc_00111324: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011132E; /* jne: not equal / not zero */

loc_0011132A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00111330;

loc_0011132E: ;
    esi = MEM32(eax);

loc_00111330: ;
    ecx = MEM32(edi + 0xC);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 3;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + 0x254)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x254), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00111354; /* je: equal / zero */

loc_00111344: ;
    _fa = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x244), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00111354; /* je: equal / zero */

loc_0011134C: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00111354: ;
    SET_LO8(ecx, MEM8(edi + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00111363: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 0xA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111371u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_00111371: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111380
 * Original: 0x00111380 - 0x0011139E (30 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111380: ;
    ecx = 0x30E794;
    PUSH32(esp, 0x0011138Au); RECOMP_ABI_CALL(0x000D7C10u, sub_000D7C10); /* call 0x000D7C10 */

loc_0011138A: ;
    ecx = 0x30E7A4;
    PUSH32(esp, 0x00111394u); RECOMP_ABI_CALL(0x000D7C10u, sub_000D7C10); /* call 0x000D7C10 */

loc_00111394: ;
    ecx = 0x371780;
    g_seh_ebp = ebp; sub_001FA1D0(); return; /* tail jmp 0x001FA1D0 */

}

/**
 * sub_001113A0
 * Original: 0x001113A0 - 0x00111B2E (1934 bytes, 586 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001113A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001113A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x242698);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = 0x2ED22C;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 8) = 0x2ED228;
    MEM32(esp + 0xC) = 0x2ED220;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x27 (32-bit) */
    MEM8(esp + 0x18) = 2;
    if (CMP_A(_fa, _fb)) goto loc_00111B1C; /* ja: above (unsigned >) */

loc_001113EC: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x111B30); /* switch: 40 entries, 40 targets */
    if (_jt == 0x001113F4u) goto loc_001113F4;
    if (_jt == 0x00111423u) goto loc_00111423;
    if (_jt == 0x00111451u) goto loc_00111451;
    if (_jt == 0x0011147Fu) goto loc_0011147F;
    if (_jt == 0x001114ADu) goto loc_001114AD;
    if (_jt == 0x001114DBu) goto loc_001114DB;
    if (_jt == 0x00111509u) goto loc_00111509;
    if (_jt == 0x00111537u) goto loc_00111537;
    if (_jt == 0x00111565u) goto loc_00111565;
    if (_jt == 0x00111593u) goto loc_00111593;
    if (_jt == 0x001115C1u) goto loc_001115C1;
    if (_jt == 0x001115EFu) goto loc_001115EF;
    if (_jt == 0x0011161Eu) goto loc_0011161E;
    if (_jt == 0x0011164Cu) goto loc_0011164C;
    if (_jt == 0x0011167Au) goto loc_0011167A;
    if (_jt == 0x001116A8u) goto loc_001116A8;
    if (_jt == 0x001116D6u) goto loc_001116D6;
    if (_jt == 0x00111704u) goto loc_00111704;
    if (_jt == 0x00111733u) goto loc_00111733;
    if (_jt == 0x00111761u) goto loc_00111761;
    if (_jt == 0x0011178Fu) goto loc_0011178F;
    if (_jt == 0x001117BEu) goto loc_001117BE;
    if (_jt == 0x001117ECu) goto loc_001117EC;
    if (_jt == 0x0011181Au) goto loc_0011181A;
    if (_jt == 0x00111848u) goto loc_00111848;
    if (_jt == 0x00111876u) goto loc_00111876;
    if (_jt == 0x001118A4u) goto loc_001118A4;
    if (_jt == 0x001118D2u) goto loc_001118D2;
    if (_jt == 0x00111900u) goto loc_00111900;
    if (_jt == 0x0011192Eu) goto loc_0011192E;
    if (_jt == 0x0011195Cu) goto loc_0011195C;
    if (_jt == 0x0011198Au) goto loc_0011198A;
    if (_jt == 0x001119B8u) goto loc_001119B8;
    if (_jt == 0x001119E7u) goto loc_001119E7;
    if (_jt == 0x00111A15u) goto loc_00111A15;
    if (_jt == 0x00111A43u) goto loc_00111A43;
    if (_jt == 0x00111A71u) goto loc_00111A71;
    if (_jt == 0x00111A9Cu) goto loc_00111A9C;
    if (_jt == 0x00111AC3u) goto loc_00111AC3;
    if (_jt == 0x00111AEEu) goto loc_00111AEE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001113F4: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, 0x00111401u); RECOMP_ABI_CALL(0x0010E550u, sub_0010E550); /* call 0x0010E550 */

loc_00111401: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111409: ;
    ecx = esi;
    PUSH32(esp, 0x00111410u); RECOMP_ABI_CALL(0x0010FE40u, sub_0010FE40); /* call 0x0010FE40 */

loc_00111410: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00111423: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111432u); RECOMP_ABI_CALL(0x001104D0u, sub_001104D0); /* call 0x001104D0 */

loc_00111432: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_0011143A: ;
    ecx = esi;
    PUSH32(esp, 0x00111441u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111441: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0011144Cu); RECOMP_ABI_CALL(0x0010E260u, sub_0010E260); /* call 0x0010E260 */

loc_0011144C: ;
    goto loc_00111B13;

loc_00111451: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111460u); RECOMP_ABI_CALL(0x00110850u, sub_00110850); /* call 0x00110850 */

loc_00111460: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111468: ;
    ecx = esi;
    PUSH32(esp, 0x0011146Fu); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_0011146F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011147Au); RECOMP_ABI_CALL(0x0010E570u, sub_0010E570); /* call 0x0010E570 */

loc_0011147A: ;
    goto loc_00111B13;

loc_0011147F: ;
    edx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0011148Eu); RECOMP_ABI_CALL(0x00110620u, sub_00110620); /* call 0x00110620 */

loc_0011148E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111496: ;
    ecx = esi;
    PUSH32(esp, 0x0011149Du); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_0011149D: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001114A8u); RECOMP_ABI_CALL(0x0010EB90u, sub_0010EB90); /* call 0x0010EB90 */

loc_001114A8: ;
    goto loc_00111B13;

loc_001114AD: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001114BCu); RECOMP_ABI_CALL(0x00110690u, sub_00110690); /* call 0x00110690 */

loc_001114BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001114C4: ;
    ecx = esi;
    PUSH32(esp, 0x001114CBu); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_001114CB: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001114D6u); RECOMP_ABI_CALL(0x0010E260u, sub_0010E260); /* call 0x0010E260 */

loc_001114D6: ;
    goto loc_00111B13;

loc_001114DB: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001114EAu); RECOMP_ABI_CALL(0x001105B0u, sub_001105B0); /* call 0x001105B0 */

loc_001114EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001114F2: ;
    ecx = esi;
    PUSH32(esp, 0x001114F9u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_001114F9: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111504u); RECOMP_ABI_CALL(0x0010E290u, sub_0010E290); /* call 0x0010E290 */

loc_00111504: ;
    goto loc_00111B13;

loc_00111509: ;
    edx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111518u); RECOMP_ABI_CALL(0x00110720u, sub_00110720); /* call 0x00110720 */

loc_00111518: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111520: ;
    ecx = esi;
    PUSH32(esp, 0x00111527u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111527: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111532u); RECOMP_ABI_CALL(0x0010E340u, sub_0010E340); /* call 0x0010E340 */

loc_00111532: ;
    goto loc_00111B13;

loc_00111537: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111546u); RECOMP_ABI_CALL(0x001107A0u, sub_001107A0); /* call 0x001107A0 */

loc_00111546: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_0011154E: ;
    ecx = esi;
    PUSH32(esp, 0x00111555u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111555: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111560u); RECOMP_ABI_CALL(0x0010E3C0u, sub_0010E3C0); /* call 0x0010E3C0 */

loc_00111560: ;
    goto loc_00111B13;

loc_00111565: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111574u); RECOMP_ABI_CALL(0x00110810u, sub_00110810); /* call 0x00110810 */

loc_00111574: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_0011157C: ;
    ecx = esi;
    PUSH32(esp, 0x00111583u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111583: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011158Eu); RECOMP_ABI_CALL(0x0010E420u, sub_0010E420); /* call 0x0010E420 */

loc_0011158E: ;
    goto loc_00111B13;

loc_00111593: ;
    edx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001115A2u); RECOMP_ABI_CALL(0x0010F4B0u, sub_0010F4B0); /* call 0x0010F4B0 */

loc_001115A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001115AA: ;
    ecx = esi;
    PUSH32(esp, 0x001115B1u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_001115B1: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001115BCu); RECOMP_ABI_CALL(0x0010E460u, sub_0010E460); /* call 0x0010E460 */

loc_001115BC: ;
    goto loc_00111B13;

loc_001115C1: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001115D0u); RECOMP_ABI_CALL(0x0010E4D0u, sub_0010E4D0); /* call 0x0010E4D0 */

loc_001115D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001115D8: ;
    ecx = esi;
    PUSH32(esp, 0x001115DFu); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_001115DF: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001115EAu); RECOMP_ABI_CALL(0x0010E510u, sub_0010E510); /* call 0x0010E510 */

loc_001115EA: ;
    goto loc_00111B13;

loc_001115EF: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, 0x001115FCu); RECOMP_ABI_CALL(0x0010F4F0u, sub_0010F4F0); /* call 0x0010F4F0 */

loc_001115FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111604: ;
    ecx = esi;
    PUSH32(esp, 0x0011160Bu); RECOMP_ABI_CALL(0x0010FE40u, sub_0010FE40); /* call 0x0010FE40 */

loc_0011160B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0011161E: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011162Du); RECOMP_ABI_CALL(0x00110490u, sub_00110490); /* call 0x00110490 */

loc_0011162D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111635: ;
    ecx = esi;
    PUSH32(esp, 0x0011163Cu); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_0011163C: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111647u); RECOMP_ABI_CALL(0x0010E220u, sub_0010E220); /* call 0x0010E220 */

loc_00111647: ;
    goto loc_00111B13;

loc_0011164C: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0011165Bu); RECOMP_ABI_CALL(0x0010E600u, sub_0010E600); /* call 0x0010E600 */

loc_0011165B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111663: ;
    ecx = esi;
    PUSH32(esp, 0x0011166Au); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_0011166A: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111675u); RECOMP_ABI_CALL(0x0010E610u, sub_0010E610); /* call 0x0010E610 */

loc_00111675: ;
    goto loc_00111B13;

loc_0011167A: ;
    edx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111689u); RECOMP_ABI_CALL(0x0010E690u, sub_0010E690); /* call 0x0010E690 */

loc_00111689: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111691: ;
    ecx = esi;
    PUSH32(esp, 0x00111698u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111698: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001116A3u); RECOMP_ABI_CALL(0x0010E6A0u, sub_0010E6A0); /* call 0x0010E6A0 */

loc_001116A3: ;
    goto loc_00111B13;

loc_001116A8: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001116B7u); RECOMP_ABI_CALL(0x00110980u, sub_00110980); /* call 0x00110980 */

loc_001116B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001116BF: ;
    ecx = esi;
    PUSH32(esp, 0x001116C6u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_001116C6: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001116D1u); RECOMP_ABI_CALL(0x0010E6E0u, sub_0010E6E0); /* call 0x0010E6E0 */

loc_001116D1: ;
    goto loc_00111B13;

loc_001116D6: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001116E5u); RECOMP_ABI_CALL(0x00110B90u, sub_00110B90); /* call 0x00110B90 */

loc_001116E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001116ED: ;
    ecx = esi;
    PUSH32(esp, 0x001116F4u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_001116F4: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001116FFu); RECOMP_ABI_CALL(0x0010E800u, sub_0010E800); /* call 0x0010E800 */

loc_001116FF: ;
    goto loc_00111B13;

loc_00111704: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    ecx = esi + 0x18;
    PUSH32(esp, 0x00111711u); RECOMP_ABI_CALL(0x0010E950u, sub_0010E950); /* call 0x0010E950 */

loc_00111711: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111719: ;
    ecx = esi;
    PUSH32(esp, 0x00111720u); RECOMP_ABI_CALL(0x0010FE40u, sub_0010FE40); /* call 0x0010FE40 */

loc_00111720: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00111733: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111742u); RECOMP_ABI_CALL(0x00110D00u, sub_00110D00); /* call 0x00110D00 */

loc_00111742: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_0011174A: ;
    ecx = esi;
    PUSH32(esp, 0x00111751u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111751: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011175Cu); RECOMP_ABI_CALL(0x0010EAD0u, sub_0010EAD0); /* call 0x0010EAD0 */

loc_0011175C: ;
    goto loc_00111B13;

loc_00111761: ;
    edx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111770u); RECOMP_ABI_CALL(0x0010F880u, sub_0010F880); /* call 0x0010F880 */

loc_00111770: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111778: ;
    ecx = esi;
    PUSH32(esp, 0x0011177Fu); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_0011177F: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0011178Au); RECOMP_ABI_CALL(0x0010E990u, sub_0010E990); /* call 0x0010E990 */

loc_0011178A: ;
    goto loc_00111B13;

loc_0011178F: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi + 0x18;
    PUSH32(esp, 0x0011179Cu); RECOMP_ABI_CALL(0x00110D60u, sub_00110D60); /* call 0x00110D60 */

loc_0011179C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001117A4: ;
    ecx = esi;
    PUSH32(esp, 0x001117ABu); RECOMP_ABI_CALL(0x0010FE40u, sub_0010FE40); /* call 0x0010FE40 */

loc_001117AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001117BE: ;
    edx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001117CDu); RECOMP_ABI_CALL(0x0010E9F0u, sub_0010E9F0); /* call 0x0010E9F0 */

loc_001117CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001117D5: ;
    ecx = esi;
    PUSH32(esp, 0x001117DCu); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_001117DC: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001117E7u); RECOMP_ABI_CALL(0x0010EA10u, sub_0010EA10); /* call 0x0010EA10 */

loc_001117E7: ;
    goto loc_00111B13;

loc_001117EC: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001117FBu); RECOMP_ABI_CALL(0x00110000u, sub_00110000); /* call 0x00110000 */

loc_001117FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111803: ;
    ecx = esi;
    PUSH32(esp, 0x0011180Au); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_0011180A: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111815u); RECOMP_ABI_CALL(0x0010E0B0u, sub_0010E0B0); /* call 0x0010E0B0 */

loc_00111815: ;
    goto loc_00111B13;

loc_0011181A: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111829u); RECOMP_ABI_CALL(0x001100D0u, sub_001100D0); /* call 0x001100D0 */

loc_00111829: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111831: ;
    ecx = esi;
    PUSH32(esp, 0x00111838u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111838: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111843u); RECOMP_ABI_CALL(0x0010E570u, sub_0010E570); /* call 0x0010E570 */

loc_00111843: ;
    goto loc_00111B13;

loc_00111848: ;
    edx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111857u); RECOMP_ABI_CALL(0x00110DC0u, sub_00110DC0); /* call 0x00110DC0 */

loc_00111857: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_0011185F: ;
    ecx = esi;
    PUSH32(esp, 0x00111866u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111866: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111871u); RECOMP_ABI_CALL(0x0010E3C0u, sub_0010E3C0); /* call 0x0010E3C0 */

loc_00111871: ;
    goto loc_00111B13;

loc_00111876: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111885u); RECOMP_ABI_CALL(0x00110DC0u, sub_00110DC0); /* call 0x00110DC0 */

loc_00111885: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_0011188D: ;
    ecx = esi;
    PUSH32(esp, 0x00111894u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111894: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0011189Fu); RECOMP_ABI_CALL(0x0010E3C0u, sub_0010E3C0); /* call 0x0010E3C0 */

loc_0011189F: ;
    goto loc_00111B13;

loc_001118A4: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001118B3u); RECOMP_ABI_CALL(0x00110E00u, sub_00110E00); /* call 0x00110E00 */

loc_001118B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001118BB: ;
    ecx = esi;
    PUSH32(esp, 0x001118C2u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_001118C2: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001118CDu); RECOMP_ABI_CALL(0x0010EA60u, sub_0010EA60); /* call 0x0010EA60 */

loc_001118CD: ;
    goto loc_00111B13;

loc_001118D2: ;
    edx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001118E1u); RECOMP_ABI_CALL(0x00110E40u, sub_00110E40); /* call 0x00110E40 */

loc_001118E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001118E9: ;
    ecx = esi;
    PUSH32(esp, 0x001118F0u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_001118F0: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001118FBu); RECOMP_ABI_CALL(0x0010EAD0u, sub_0010EAD0); /* call 0x0010EAD0 */

loc_001118FB: ;
    goto loc_00111B13;

loc_00111900: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011190Fu); RECOMP_ABI_CALL(0x00110EB0u, sub_00110EB0); /* call 0x00110EB0 */

loc_0011190F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111917: ;
    ecx = esi;
    PUSH32(esp, 0x0011191Eu); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_0011191E: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111929u); RECOMP_ABI_CALL(0x0010EAD0u, sub_0010EAD0); /* call 0x0010EAD0 */

loc_00111929: ;
    goto loc_00111B13;

loc_0011192E: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0011193Du); RECOMP_ABI_CALL(0x00110F30u, sub_00110F30); /* call 0x00110F30 */

loc_0011193D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111945: ;
    ecx = esi;
    PUSH32(esp, 0x0011194Cu); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_0011194C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111957u); RECOMP_ABI_CALL(0x0010E3C0u, sub_0010E3C0); /* call 0x0010E3C0 */

loc_00111957: ;
    goto loc_00111B13;

loc_0011195C: ;
    edx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0011196Bu); RECOMP_ABI_CALL(0x00110F90u, sub_00110F90); /* call 0x00110F90 */

loc_0011196B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111973: ;
    ecx = esi;
    PUSH32(esp, 0x0011197Au); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_0011197A: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111985u); RECOMP_ABI_CALL(0x0010EB50u, sub_0010EB50); /* call 0x0010EB50 */

loc_00111985: ;
    goto loc_00111B13;

loc_0011198A: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111999u); RECOMP_ABI_CALL(0x00111020u, sub_00111020); /* call 0x00111020 */

loc_00111999: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001119A1: ;
    ecx = esi;
    PUSH32(esp, 0x001119A8u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_001119A8: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001119B3u); RECOMP_ABI_CALL(0x0010F990u, sub_0010F990); /* call 0x0010F990 */

loc_001119B3: ;
    goto loc_00111B13;

loc_001119B8: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, 0x001119C5u); RECOMP_ABI_CALL(0x001110B0u, sub_001110B0); /* call 0x001110B0 */

loc_001119C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001119CD: ;
    ecx = esi;
    PUSH32(esp, 0x001119D4u); RECOMP_ABI_CALL(0x0010FE40u, sub_0010FE40); /* call 0x0010FE40 */

loc_001119D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001119E7: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001119F6u); RECOMP_ABI_CALL(0x00111140u, sub_00111140); /* call 0x00111140 */

loc_001119F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_001119FE: ;
    ecx = esi;
    PUSH32(esp, 0x00111A05u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111A05: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111A10u); RECOMP_ABI_CALL(0x0010E3C0u, sub_0010E3C0); /* call 0x0010E3C0 */

loc_00111A10: ;
    goto loc_00111B13;

loc_00111A15: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111A24u); RECOMP_ABI_CALL(0x001111A0u, sub_001111A0); /* call 0x001111A0 */

loc_00111A24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111A2C: ;
    ecx = esi;
    PUSH32(esp, 0x00111A33u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111A33: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111A3Eu); RECOMP_ABI_CALL(0x0010EB90u, sub_0010EB90); /* call 0x0010EB90 */

loc_00111A3E: ;
    goto loc_00111B13;

loc_00111A43: ;
    edx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111A52u); RECOMP_ABI_CALL(0x001111F0u, sub_001111F0); /* call 0x001111F0 */

loc_00111A52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111A5A: ;
    ecx = esi;
    PUSH32(esp, 0x00111A61u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111A61: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111A6Cu); RECOMP_ABI_CALL(0x0010EB90u, sub_0010EB90); /* call 0x0010EB90 */

loc_00111A6C: ;
    goto loc_00111B13;

loc_00111A71: ;
    ecx = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111A80u); RECOMP_ABI_CALL(0x00111280u, sub_00111280); /* call 0x00111280 */

loc_00111A80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111A88: ;
    ecx = esi;
    PUSH32(esp, 0x00111A8Fu); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111A8F: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00111A9Au); RECOMP_ABI_CALL(0x0010E3C0u, sub_0010E3C0); /* call 0x0010E3C0 */

loc_00111A9A: ;
    goto loc_00111B13;

loc_00111A9C: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111AABu); RECOMP_ABI_CALL(0x001112D0u, sub_001112D0); /* call 0x001112D0 */

loc_00111AAB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111AAF: ;
    ecx = esi;
    PUSH32(esp, 0x00111AB6u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111AB6: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111AC1u); RECOMP_ABI_CALL(0x0010EC40u, sub_0010EC40); /* call 0x0010EC40 */

loc_00111AC1: ;
    goto loc_00111B13;

loc_00111AC3: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    ecx = esi + 0x18;
    PUSH32(esp, 0x00111AD0u); RECOMP_ABI_CALL(0x0010ECA0u, sub_0010ECA0); /* call 0x0010ECA0 */

loc_00111AD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111AD4: ;
    ecx = esi;
    PUSH32(esp, 0x00111ADBu); RECOMP_ABI_CALL(0x0010FE40u, sub_0010FE40); /* call 0x0010FE40 */

loc_00111ADB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00111AEE: ;
    eax = MEM32(esp + 0x24);
    edi = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00111AFDu); RECOMP_ABI_CALL(0x00110200u, sub_00110200); /* call 0x00110200 */

loc_00111AFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111B1B; /* je: equal / zero */

loc_00111B01: ;
    ecx = esi;
    PUSH32(esp, 0x00111B08u); RECOMP_ABI_CALL(0x0010FD90u, sub_0010FD90); /* call 0x0010FD90 */

loc_00111B08: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00111B13u); RECOMP_ABI_CALL(0x0010E1E0u, sub_0010E1E0); /* call 0x0010E1E0 */

loc_00111B13: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111B1Bu); RECOMP_ABI_CALL(0x0010E000u, sub_0010E000); /* call 0x0010E000 */

loc_00111B1B: ;
    POP32(esp, edi);

loc_00111B1C: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111BD0
 * Original: 0x00111BD0 - 0x00111BF2 (34 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111BD0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx + 0x14) = 0x12;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00111BEFu); RECOMP_ABI_CALL(0x00110540u, sub_00110540); /* call 0x00110540 */

loc_00111BEF: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00111C00
 * Original: 0x00111C00 - 0x00111C22 (34 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111C00: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ecx + 0x14) = 0;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00111C1Fu); RECOMP_ABI_CALL(0x001103C0u, sub_001103C0); /* call 0x001103C0 */

loc_00111C1F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00111C30
 * Original: 0x00111C30 - 0x00111D86 (342 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111C30: ;
    ecx = 0x30E794;
    PUSH32(esp, 0x00111C3Au); RECOMP_ABI_CALL(0x000D7C10u, sub_000D7C10); /* call 0x000D7C10 */

loc_00111C3A: ;
    ecx = 0x30E7A4;
    PUSH32(esp, 0x00111C44u); RECOMP_ABI_CALL(0x000D7C10u, sub_000D7C10); /* call 0x000D7C10 */

loc_00111C44: ;
    eax = 0x365EC4;
    /* nop */

loc_00111C50: ;
    ecx = MEM32(0x30E7B0);
    edx = MEM32(0x30E7A8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x30E7B0) = ecx;
    MEM32(eax + -4) = 0x30E7A4;
    MEM32(eax) = edx;
    ecx = eax + -12;
    MEM32(eax + 4) = ecx;
    ecx = eax + -4;
    MEM32(0x30E7A8) = ecx;
    MEM32(edx) = ecx;
    edx = MEM32(0x30E7B0);
    MEM32(eax + 0xA8) = 0x30E7A4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x30E7B0) = edx;
    edx = MEM32(0x30E7A8);
    MEM32(eax + 0xAC) = edx;
    ecx = eax + 0xA0;
    MEM32(eax + 0xB0) = ecx;
    ecx = eax + 0xA8;
    MEM32(0x30E7A8) = ecx;
    MEM32(edx) = ecx;
    ecx = MEM32(0x30E7B0);
    edx = MEM32(0x30E7A8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x30E7B0) = ecx;
    MEM32(eax + 0x154) = 0x30E7A4;
    MEM32(eax + 0x158) = edx;
    ecx = eax + 0x14C;
    MEM32(eax + 0x15C) = ecx;
    ecx = eax + 0x154;
    MEM32(0x30E7A8) = ecx;
    MEM32(edx) = ecx;
    MEM32(0x30E7B0) = MEM32(0x30E7B0) + 1;
    _fa = (uint32_t)(MEM32(0x30E7B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(0x30E7A8);
    ecx = eax + 0x1F8;
    MEM32(eax + 0x208) = ecx;
    ecx = eax + 0x200;
    MEM32(0x30E7A8) = ecx;
    MEM32(ecx) = 0x30E7A4;
    MEM32(eax + 0x204) = edx;
    MEM32(edx) = ecx;
    ecx = MEM32(0x30E7B0);
    edx = MEM32(0x30E7A8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x30E7B0) = ecx;
    ecx = eax + 0x2A4;
    MEM32(eax + 0x2B4) = ecx;
    ecx = eax + 0x2AC;
    MEM32(eax + 0x2B0) = edx;
    _fb = (uint32_t)(0x35C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x35C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x371788) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x371788 (32-bit) */
    MEM32(ecx) = 0x30E7A4;
    MEM32(0x30E7A8) = ecx;
    MEM32(edx) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00111C50; /* jl: less (signed <) */

loc_00111D72: ;
    MEM32(0x37179C) = 0x37177C;
    ecx = 0x371780;
    g_seh_ebp = ebp; sub_001FA170(); return; /* tail jmp 0x001FA170 */

}

/**
 * sub_00111D90
 * Original: 0x00111D90 - 0x00111E2B (155 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111D90: ;
    edx = MEM32(0x30E794);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00111DFC; /* je: equal / zero */

loc_00111DA3: ;
    _fa = (uint32_t)(MEM32(ecx + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA8), ebp (32-bit) */
    edx = MEM32(edx);
    if (CMP_NE(_fa, _fb)) goto loc_00111DF5; /* jne: not equal / not zero */

loc_00111DAD: ;
    edi = MEM32(0x30E7A0);
    eax = ecx + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x30E7A0) = edi;
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = 0;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    MEM32(esi) = edi;
    MEM32(0x30E7B0) = MEM32(0x30E7B0) + 1;
    _fa = (uint32_t)(MEM32(0x30E7B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x30E7A4;
    ecx = MEM32(0x30E7A8);
    MEM32(eax + 4) = ecx;
    MEM32(0x30E7A8) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;

loc_00111DF5: ;
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111DA3; /* jne: not equal / not zero */

loc_00111DFC: ;
    esi = MEM32(0x30E794);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111E27; /* je: equal / zero */

loc_00111E09: ;
    edi = MEM32(esp + 0x10);
    /* nop */

loc_00111E10: ;
    _fa = (uint32_t)(MEM32(ecx + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA8), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111E1E; /* je: equal / zero */

loc_00111E18: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00111E1Eu); RECOMP_ABI_CALL(0x001113A0u, sub_001113A0); /* call 0x001113A0 */

loc_00111E1E: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00111E10; /* jne: not equal / not zero */

loc_00111E27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00111E30
 * Original: 0x00111E30 - 0x00111EA5 (117 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00111E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111E30: ;
    eax = MEM32(0x30E7A4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111EA2; /* je: equal / zero */

loc_00111E3C: ;
    ecx = MEM32(0x30E7A0);
    edx = MEM32(0x365EB4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00111E53; /* jle: less or equal (signed <=) */

loc_00111E4D: ;
    MEM32(0x365EB4) = ecx;

loc_00111E53: ;
    edx = MEM32(0x30E7B0);
    ecx = eax + 8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x30E7B0) = edx;
    edx = MEM32(ecx);
    MEM32(ecx + 8) = 0;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    edx = MEM32(ecx + 4);
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    esi = MEM32(0x30E7A0);
    edx = MEM32(0x30E794);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x30E7A0) = esi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00111EA2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00111EB0
 * Original: 0x00111EB0 - 0x00111EBE (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111EB0(void)
{

loc_00111EB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00111EBAu); RECOMP_ABI_CALL(0x00111D90u, sub_00111D90); /* call 0x00111D90 */

loc_00111EBA: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111EC0
 * Original: 0x00111EC0 - 0x00111EE2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00111EC8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00111EC8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi) = 0x2ED234;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00111EF0
 * Original: 0x00111EF0 - 0x00111EFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111EF0: ;
    MEM32(ecx) = 0x2ED234;
    g_seh_ebp = ebp; sub_001FA0A0(); return; /* tail jmp 0x001FA0A0 */

}

/**
 * sub_00111F00
 * Original: 0x00111F00 - 0x00111F14 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111F00: ;
    ecx = 0x371848;
    PUSH32(esp, 0x00111F0Au); RECOMP_ABI_CALL(0x0011D280u, sub_0011D280); /* call 0x0011D280 */

loc_00111F0A: ;
    ecx = 0x3717A0;
    g_seh_ebp = ebp; sub_001138F0(); return; /* tail jmp 0x001138F0 */

}

/**
 * sub_00111F20
 * Original: 0x00111F20 - 0x00111F2A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111F20: ;
    ecx = 0x3717A0;
    g_seh_ebp = ebp; sub_00113A50(); return; /* tail jmp 0x00113A50 */

}

/**
 * sub_00111F30
 * Original: 0x00111F30 - 0x00111F56 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111F30: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00111F33: ;
    PUSH32(esp, esi);
    ecx = 0x371848;
    PUSH32(esp, 0x00111F3Eu); RECOMP_ABI_CALL(0x001131C0u, sub_001131C0); /* call 0x001131C0 */

loc_00111F3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00111F4E; /* je: equal / zero */

loc_00111F42: ;
    PUSH32(esp, 0x2ED24C);
    ecx = eax;
    PUSH32(esp, 0x00111F4Eu); RECOMP_ABI_CALL(0x00113A50u, sub_00113A50); /* call 0x00113A50 */

loc_00111F4E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00111F33; /* jl: less (signed <) */

loc_00111F54: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00111F60
 * Original: 0x00111F60 - 0x00111F7E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111F60(void)
{

loc_00111F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x112580);
    PUSH32(esp, 0x112510);
    PUSH32(esp, 5);
    esi = ecx;
    PUSH32(esp, 0xA4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111F7Au); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00111F7A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00111F80
 * Original: 0x00111F80 - 0x00111F93 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111F80(void)
{

loc_00111F80: ;
    PUSH32(esp, 0x112580);
    PUSH32(esp, 5);
    PUSH32(esp, 0xA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00111F92u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00111F92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00111FA0
 * Original: 0x00111FA0 - 0x00111FBE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00111FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00111FA8u); RECOMP_ABI_CALL(0x00111EF0u, sub_00111EF0); /* call 0x00111EF0 */

loc_00111FA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00111FB8; /* je: equal / zero */

loc_00111FAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111FB5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00111FB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00111FB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00111FC0
 * Original: 0x00111FC0 - 0x00112017 (87 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111FC0: ;
    PUSH32(esp, esi);
    ecx = 0x3717A0;
    PUSH32(esp, 0x00111FCBu); RECOMP_ABI_CALL(0x00112590u, sub_00112590); /* call 0x00112590 */

loc_00111FCB: ;
    ecx = 0x3717A0;
    PUSH32(esp, 0x00111FD5u); RECOMP_ABI_CALL(0x00112830u, sub_00112830); /* call 0x00112830 */

loc_00111FD5: ;
    ecx = 0x3717A0;
    PUSH32(esp, 0x00111FDFu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00111FDF: ;
    esi = MEM32(0x3717BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111FEBu); RECOMP_ABI_CALL(0x001DD280u, sub_001DD280); /* call 0x001DD280 */

loc_00111FEB: ;
    PUSH32(esp, 0x2ED264);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111FF6u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00111FF6: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00111FFEu); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_00111FFE: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112009u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_00112009: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x371848;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001131A0(); return; /* tail jmp 0x001131A0 */

}

/**
 * sub_00112020
 * Original: 0x00112020 - 0x0011204E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112020: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011204C; /* je: equal / zero */

loc_0011202A: ;
    PUSH32(esp, eax);
    ecx = 0x3717A0;
    PUSH32(esp, 0x00112035u); RECOMP_ABI_CALL(0x0011F780u, sub_0011F780); /* call 0x0011F780 */

loc_00112035: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0x2ED26C);
    ecx = 0x3717A0;
    MEM32(0x3717C8) = eax;
    PUSH32(esp, 0x0011204Cu); RECOMP_ABI_CALL(0x00113A50u, sub_00113A50); /* call 0x00113A50 */

loc_0011204C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112050
 * Original: 0x00112050 - 0x0011209A (74 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112050: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x8C);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00112067u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00112067: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0x2ED278);
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0011207Fu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0011207F: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112089u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00112089: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001120A0
 * Original: 0x001120A0 - 0x0011211F (127 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001120A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001120A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x24); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0011211B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_001120BC: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001120F8; /* jge: greater or equal (signed >=) */

loc_001120C4: ;
    PUSH32(esp, eax);
    ecx = 0x371848;
    PUSH32(esp, 0x001120CFu); RECOMP_ABI_CALL(0x001131C0u, sub_001131C0); /* call 0x001131C0 */

loc_001120CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001120E5; /* je: equal / zero */

loc_001120D3: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001120E5; /* je: equal / zero */

loc_001120DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001120E2u); RECOMP_ABI_CALL(0x001DD680u, sub_001DD680); /* call 0x001DD680 */

loc_001120E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001120E5: ;
    eax = MEM32(esi + 0x28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x28) = eax;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001120F8: ;
    eax = MEM32(0x3717BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011210C; /* je: equal / zero */

loc_00112101: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112109u); RECOMP_ABI_CALL(0x001DD680u, sub_001DD680); /* call 0x001DD680 */

loc_00112109: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011210C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x28) = 0;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */

loc_0011211B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00112120
 * Original: 0x00112120 - 0x0011213E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112120: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(0x3717BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3717BC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112132; /* jne: not equal / not zero */

loc_0011212C: ;
    eax = 0x3717A0;
    esp += 4; return; /* ret */

loc_00112132: ;
    PUSH32(esp, eax);
    ecx = 0x371848;
    PUSH32(esp, 0x0011213Du); RECOMP_ABI_CALL(0x0011D2E0u, sub_0011D2E0); /* call 0x0011D2E0 */

loc_0011213D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00112140
 * Original: 0x00112140 - 0x0011215E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112140: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(0x3717C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3717C8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112152; /* jne: not equal / not zero */

loc_0011214C: ;
    eax = 0x3717A0;
    esp += 4; return; /* ret */

loc_00112152: ;
    PUSH32(esp, eax);
    ecx = 0x371848;
    PUSH32(esp, 0x0011215Du); RECOMP_ABI_CALL(0x0011D320u, sub_0011D320); /* call 0x0011D320 */

loc_0011215D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00112160
 * Original: 0x00112160 - 0x001121D0 (112 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112160: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00112170: ;
    PUSH32(esp, edi);
    ecx = 0x371848;
    PUSH32(esp, 0x0011217Bu); RECOMP_ABI_CALL(0x001131C0u, sub_001131C0); /* call 0x001131C0 */

loc_0011217B: ;
    esi = MEM32(eax + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001121C6; /* je: equal / zero */

loc_00112182: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112188u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00112188: ;
    PUSH32(esp, 0x2ED288);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112193u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00112193: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011219Eu); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_0011219E: ;
    eax = ZX8(LO8(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001121A8u); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_001121A8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001121B4u); RECOMP_ABI_CALL(0x001DD5A0u, sub_001DD5A0); /* call 0x001DD5A0 */

loc_001121B4: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001121C6; /* je: equal / zero */

loc_001121BB: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001121C3u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001121C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001121C6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00112170; /* jl: less (signed <) */

loc_001121CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001121D0
 * Original: 0x001121D0 - 0x00112205 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001121D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001121D0: ;
    PUSH32(esp, esi);
    ecx = 0x3717A0;
    PUSH32(esp, 0x001121DBu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_001121DB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001121E0: ;
    PUSH32(esp, esi);
    ecx = 0x371848;
    PUSH32(esp, 0x001121EBu); RECOMP_ABI_CALL(0x001131C0u, sub_001131C0); /* call 0x001131C0 */

loc_001121EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001121FD; /* je: equal / zero */

loc_001121EF: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001121FD; /* je: equal / zero */

loc_001121F6: ;
    ecx = eax;
    PUSH32(esp, 0x001121FDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_001121FD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001121E0; /* jl: less (signed <) */

loc_00112203: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112210
 * Original: 0x00112210 - 0x00112215 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112210: ;
    g_seh_ebp = ebp; sub_001120A0(); return; /* tail jmp 0x001120A0 */

}

/**
 * sub_00112220
 * Original: 0x00112220 - 0x00112230 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112220: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00112224
 * Original: 0x00112224 - 0x00112230 (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112224(void)
{

loc_00112224: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00112230
 * Original: 0x00112230 - 0x0011223F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112230: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011223E; /* je: equal / zero */

loc_00112237: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011223Du); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0011223D: ;
    POP32(esp, ecx);

loc_0011223E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00112240
 * Original: 0x00112240 - 0x00112292 (82 bytes, 24 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112240: ;
    PUSH32(esp, esi);
    esi = MEM32(0x371B98);
    PUSH32(esp, 0x2E3DF0);
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x10);
    MEM32(0x371B98) = esi;
    PUSH32(esp, 0x0011225Cu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0011225C: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x2E3DBC);
    MEM32(esi) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0011227Bu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0011227B: ;
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x371B7C);
    MEM32(esi + 0xC) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x371B7C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001122A0
 * Original: 0x001122A0 - 0x001123B1 (273 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001122A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001122A0: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x12C);
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001123A6; /* jl: less (signed <) */

loc_001122C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001122C4: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x001122D0u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_001122D0: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x454D414E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x454D414E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112373; /* je: equal / zero */

loc_001122DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F464E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F464E49 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112342; /* je: equal / zero */

loc_001122E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59444F42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x59444F42 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112395; /* jne: not equal / not zero */

loc_001122F1: ;
    _fa = (uint32_t)(MEM8(0x30E7B4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30E7B4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112320; /* jne: not equal / not zero */

loc_001122FA: ;
    edi = MEM32(esp + 0x28);
    PUSH32(esp, 0x2ED2B8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011230Au); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0011230A: ;
    ecx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0011231Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011231Bu); } /* indirect call */
    }

loc_0011231E: ;
    goto loc_00112395;

loc_00112320: ;
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 0x2ED298);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011232Fu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0011232F: ;
    ecx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00112340u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00112340: ;
    goto loc_00112395;

loc_00112342: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00112356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112353u); } /* indirect call */
    }

loc_00112356: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0011236Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00112367u); } /* indirect call */
    }

loc_0011236A: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 8) = eax;
    goto loc_00112395;

loc_00112373: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0x00112386u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00112386: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112390u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00112390: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_00112395: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001122C4; /* jge: greater or equal (signed >=) */

loc_001123A4: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001123A6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001123C0
 * Original: 0x001123C0 - 0x00112428 (104 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001123C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001123C0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112426; /* je: equal / zero */

loc_001123C7: ;
    eax = MEM32(esi + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112414; /* je: equal / zero */

loc_001123D3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx + 4;

loc_001123D8: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    edi = edx;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001123F1u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_001123F1: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011240B; /* je: equal / zero */

loc_001123FB: ;
    ecx = edi;
    PUSH32(esp, 0x00112402u); RECOMP_ABI_CALL(0x00112230u, sub_00112230); /* call 0x00112230 */

loc_00112402: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00112408u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00112408: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011240B: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001123D8; /* jne: not equal / not zero */

loc_00112412: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00112414: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011241Du); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0011241D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112423u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00112423: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112426: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112430
 * Original: 0x00112430 - 0x00112440 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112430(void)
{

loc_00112430: ;
    PUSH32(esp, 0x200);
    ecx = 0x371B7C;
    PUSH32(esp, 0x0011243Fu); RECOMP_ABI_CALL(0x0014AA10u, sub_0014AA10); /* call 0x0014AA10 */

loc_0011243F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00112440
 * Original: 0x00112440 - 0x001124FD (189 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112440: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ecx = edi;
    PUSH32(esp, 0x0011244Fu); RECOMP_ABI_CALL(0x002094F0u, sub_002094F0); /* call 0x002094F0 */

loc_0011244F: ;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001124F8; /* jl: less (signed <) */

loc_0011245E: ;
    PUSH32(esp, esi);
    /* nop */

loc_00112460: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0011246Cu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_0011246C: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F726373) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x5F726373 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001124E8; /* jne: not equal / not zero */

loc_00112476: ;
    PUSH32(esp, 0x2ED2D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00112484u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00112484: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112496; /* je: equal / zero */

loc_0011248B: ;
    ecx = eax;
    PUSH32(esp, 0x00112492u); RECOMP_ABI_CALL(0x00112220u, sub_00112220); /* call 0x00112220 */

loc_00112492: ;
    esi = eax;
    goto loc_00112498;

loc_00112496: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00112498: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001124A4u); RECOMP_ABI_CALL(0x001122A0u, sub_001122A0); /* call 0x001122A0 */

loc_001124A4: ;
    eax = MEM32(0x371B7C);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    MEM32(edx + ecx * 4) = esi;
    eax = MEM32(0x371B7C);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x371B80);
    edx = MEM32(0x371B8C);
    eax = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001124D1u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_001124D1: ;
    ecx = MEM32(0x371B88);
    MEM32(ecx + eax * 4) = esi;
    eax = MEM32(0x371B84);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x371B84) = eax;

loc_001124E8: ;
    edx = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(edi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00112460; /* jge: greater or equal (signed >=) */

loc_001124F7: ;
    POP32(esp, esi);

loc_001124F8: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00112500
 * Original: 0x00112500 - 0x0011250A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112500: ;
    ecx = 0x371B7C;
    g_seh_ebp = ebp; sub_001123C0(); return; /* tail jmp 0x001123C0 */

}

/**
 * sub_00112510
 * Original: 0x00112510 - 0x0011257E (110 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112510: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2426B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x00112533u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00112533: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x24;
    MEM32(esp + 0x14) = ebx;
    MEM32(esi) = 0x2EFF7C;
    PUSH32(esp, 0x00112547u); RECOMP_ABI_CALL(0x001F2AB0u, sub_001F2AB0); /* call 0x001F2AB0 */

loc_00112547: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x35) = LO8(ebx);
    MEM8(esi + 0x36) = LO8(ebx);
    MEM8(esi + 0x37) = LO8(ebx);
    MEM8(esi + 0x38) = LO8(ebx);
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;
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
 * sub_00112580
 * Original: 0x00112580 - 0x0011258B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112580: ;
    MEM32(ecx) = 0x2EFF7C;
    g_seh_ebp = ebp; sub_001FA0A0(); return; /* tail jmp 0x001FA0A0 */

}

/**
 * sub_00112590
 * Original: 0x00112590 - 0x001127D1 (577 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112590(void)
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

loc_00112590: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001125A1u); RECOMP_ABI_CALL(0x001DDB00u, sub_001DDB00); /* call 0x001DDB00 */

loc_001125A1: ;
    PUSH32(esp, 0x6C);
    PUSH32(esp, eax);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x001125ACu); RECOMP_ABI_CALL(0x001DC870u, sub_001DC870); /* call 0x001DC870 */

loc_001125AC: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001125B5u); RECOMP_ABI_CALL(0x001DB820u, sub_001DB820); /* call 0x001DB820 */

loc_001125B5: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001125BEu); RECOMP_ABI_CALL(0x001DA5C0u, sub_001DA5C0); /* call 0x001DA5C0 */

loc_001125BE: ;
    edx = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001125CAu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001125CA: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001125D3u); RECOMP_ABI_CALL(0x00120DA0u, sub_00120DA0); /* call 0x00120DA0 */

loc_001125D3: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001125DEu); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_001125DE: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x2F0010);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001125ECu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001125EC: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001125F7u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001125F7: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112605u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_00112605: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011260Fu); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_0011260F: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2F0008);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112620u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00112620: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011262Bu); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_0011262B: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112639u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_00112639: ;
    fp_push(MEMD(0x2DF118)); /* fld double */
    eax = MEM32(esi + 0x1C);
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011264Fu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_0011264F: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x2EFFF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011265Du); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0011265D: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112668u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_00112668: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112676u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_00112676: ;
    fp_push(MEMD(0x2ED218)); /* fld double */
    ecx = MEM32(esi + 0x1C);
    MEMD(esp + 0x1C) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011268Cu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_0011268C: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x2EFFE8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011269Au); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0011269A: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001126A5u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001126A5: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001126B3u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_001126B3: ;
    fp_push(MEMD(0x2DF110)); /* fld double */
    edx = MEM32(esi + 0x1C);
    MEMD(esp + 0x1C) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001126C9u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001126C9: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0x2EFFD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001126D7u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001126D7: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001126E2u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001126E2: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001126F0u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_001126F0: ;
    fp_push(MEMD(0x2EFFD0)); /* fld double */
    eax = MEM32(esi + 0x1C);
    MEMD(esp + 0x1C) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112706u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00112706: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x2EFFC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112714u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00112714: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011271Fu); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_0011271F: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011272Du); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_0011272D: ;
    fp_push(MEMD(0x2EFFB8)); /* fld double */
    ecx = MEM32(esi + 0x1C);
    MEMD(esp + 0x1C) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112743u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00112743: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x2EFFA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112751u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00112751: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011275Cu); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_0011275C: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011276Au); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_0011276A: ;
    fp_push(MEMD(0x2EFFA0)); /* fld double */
    edx = MEM32(esi + 0x1C);
    MEMD(esp + 0x1C) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112780u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00112780: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0x2EFF90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011278Eu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0011278E: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112799u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_00112799: ;
    PUSH32(esp, 0xFFFFD8EFu);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001127A7u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_001127A7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x34) = LO8(ebx);
    MEM8(esi + 0x35) = LO8(ebx);
    MEM8(esi + 0x36) = LO8(ebx);
    MEM8(esi + 0x37) = LO8(ebx);
    MEM8(esi + 0x38) = LO8(ebx);
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0xA0) = ebx;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001127E0
 * Original: 0x001127E0 - 0x001127F5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001127E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001127E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001127ECu); RECOMP_ABI_CALL(0x0010FAB0u, sub_0010FAB0); /* call 0x0010FAB0 */

loc_001127EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x35) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112800
 * Original: 0x00112800 - 0x0011282B (43 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112800: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    MEM32(esi + 0x9C) = eax;
    PUSH32(esp, 0x0011281Du); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_0011281D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x9B) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00112830
 * Original: 0x00112830 - 0x00112929 (249 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112830: ;
    eax = MEM32(0x2ED308);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0x2ED308;
    if (CMP_EQ(_fa, _fb)) goto loc_00112884; /* je: equal / zero */

loc_00112849: ;
    /* nop */

loc_00112850: ;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011285Au); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0011285A: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112869u); RECOMP_ABI_CALL(0x001DD0D0u, sub_001DD0D0); /* call 0x001DD0D0 */

loc_00112869: ;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112877u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_00112877: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112850; /* jne: not equal / not zero */

loc_00112884: ;
    eax = MEM32(0x2EDCA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = 0x2EDCA8;
    if (CMP_EQ(_fa, _fb)) goto loc_0011291F; /* je: equal / zero */

loc_00112896: ;
    PUSH32(esp, edi);
    goto loc_001128A0;

    /* nop */

loc_001128A0: ;
    ecx = MEM32(0x2F0018);
    SET_LO16(edx, MEM16(0x2F001C));
    MEM32(esp + 0x10) = ecx;
    SET_LO8(ecx, MEM8(0x2F001E));
    MEM16(esp + 0x14) = LO16(edx);
    MEM8(esp + 0x16) = LO8(ecx);
    esi = eax;

loc_001128C2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001128C2; /* jne: not equal / not zero */

loc_001128C9: ;
    edi = esp + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001128D0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001128D0; /* jne: not equal / not zero */

loc_001128D8: ;
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
    eax = MEM32(ebx + 0x1C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x001128F4u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001128F4: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112903u); RECOMP_ABI_CALL(0x001DD0D0u, sub_001DD0D0); /* call 0x001DD0D0 */

loc_00112903: ;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112911u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_00112911: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001128A0; /* jne: not equal / not zero */

loc_0011291E: ;
    POP32(esp, edi);

loc_0011291F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00112930
 * Original: 0x00112930 - 0x00112981 (81 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112930: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112948u); RECOMP_ABI_CALL(0x001DDC70u, sub_001DDC70); /* call 0x001DDC70 */

loc_00112948: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011297B; /* jne: not equal / not zero */

loc_00112950: ;
    eax = MEM32(esi + 0x1C);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F0020);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112963u); RECOMP_ABI_CALL(0x001DE6A0u, sub_001DE6A0); /* call 0x001DE6A0 */

loc_00112963: ;
    edx = MEM32(esi + 0x1C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112973u); RECOMP_ABI_CALL(0x001DDC70u, sub_001DDC70); /* call 0x001DDC70 */

loc_00112973: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112950; /* je: equal / zero */

loc_0011297B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00112990
 * Original: 0x00112990 - 0x001129A9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00112990: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011299Fu); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_0011299F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
 * sub_001129B0
 * Original: 0x001129B0 - 0x001129BE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001129B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001129B0: ;
    eax = ZX8(MEM8(esp + 8));
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_001DD160(); return; /* tail jmp 0x001DD160 */

}

/**
 * sub_001129C0
 * Original: 0x001129C0 - 0x00112A06 (70 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001129C0(void)
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

loc_001129C0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001129DBu); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001129DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001129F0; /* je: equal / zero */

loc_001129E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001129E9u); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_001129E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001129F0: ;
    PUSH32(esp, 0x2F0028);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001129FBu); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001129FB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00112A10
 * Original: 0x00112A10 - 0x00112ACA (186 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112A10(void)
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

loc_00112A10: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112A26u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_00112A26: ;
    ebp = edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(esp + 0x40) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    PUSH32(esp, 0x00112A37u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_00112A37: ;
    ebx = edi + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(esp + 0x2B) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    PUSH32(esp, 0x00112A48u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_00112A48: ;
    SET_LO8(edx, MEM8(esp + 0x48));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, 1);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112A9A; /* jne: not equal / not zero */

loc_00112A5A: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112A9A; /* jne: not equal / not zero */

loc_00112A60: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112A9A; /* jne: not equal / not zero */

loc_00112A64: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112A6Bu); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_00112A6B: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112A76u); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_00112A76: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112A81u); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_00112A81: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    goto loc_00112AA8;

loc_00112A9A: ;
    PUSH32(esp, 0x2F0068);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112AA5u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_00112AA5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112AA8: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x18);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(edx + 8) = ecx;
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
 * sub_00112AD0
 * Original: 0x00112AD0 - 0x00112B0D (61 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00112AE4u); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_00112AE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112AF9; /* je: equal / zero */

loc_00112AEB: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112AF2u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_00112AF2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00112AF9: ;
    PUSH32(esp, 0x2F00A8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112B04u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_00112B04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00112B10
 * Original: 0x00112B10 - 0x00112B15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00112B10: ;
    g_seh_ebp = ebp; sub_001DD000(); return; /* tail jmp 0x001DD000 */

}

/**
 * sub_00112B20
 * Original: 0x00112B20 - 0x00112B48 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112B20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00112B32u); RECOMP_ABI_CALL(0x00120E60u, sub_00120E60); /* call 0x00120E60 */

loc_00112B32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112B44; /* je: equal / zero */

loc_00112B39: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112B3Fu); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_00112B3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00112B44: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112B50
 * Original: 0x00112B50 - 0x00112B8D (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112B50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112B6A; /* jne: not equal / not zero */

loc_00112B5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112B65u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00112B65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00112B6A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112B75u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00112B75: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112B80u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00112B80: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112B87u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_00112B87: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112B90
 * Original: 0x00112B90 - 0x00112BCF (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112B90(void)
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

loc_00112B90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112BAA; /* jne: not equal / not zero */

loc_00112B9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112BA5u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00112BA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00112BAA: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112BB5u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00112BB5: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112BC2u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00112BC2: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112BC9u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_00112BC9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00112BD0
 * Original: 0x00112BD0 - 0x00112C28 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112BD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112BEA; /* jne: not equal / not zero */

loc_00112BDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112BE5u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00112BE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00112BEA: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112BF5u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00112BF5: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112BFCu); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_00112BFC: ;
    edi = MEM32(esp + 0x28);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    MEM8(edi) = 0;
    PUSH32(esp, 0x00112C0Bu); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_00112C0B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112C23; /* je: equal / zero */

loc_00112C12: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    MEM8(edi) = 1;
    PUSH32(esp, 0x00112C1Du); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00112C1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00112C23: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112C30
 * Original: 0x00112C30 - 0x00112C8C (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112C30(void)
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

loc_00112C30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112C4A; /* jne: not equal / not zero */

loc_00112C3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112C45u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00112C45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00112C4A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112C55u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00112C55: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112C5Cu); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_00112C5C: ;
    edi = MEM32(esp + 0x28);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    MEM8(edi) = 0;
    PUSH32(esp, 0x00112C6Bu); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_00112C6B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112C83; /* je: equal / zero */

loc_00112C72: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    MEM8(edi) = 1;
    PUSH32(esp, 0x00112C7Du); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00112C7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00112C83: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
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
 * sub_00112C90
 * Original: 0x00112C90 - 0x00112D45 (181 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112C90(void)
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

loc_00112C90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112C9Fu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_00112C9F: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x1A) = 0;
    PUSH32(esp, 0x00112CB4u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_00112CB4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00112CE0; /* je: equal / zero */

loc_00112CBB: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112CC3u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00112CC3: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0xA) = 1;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00112CE0; /* jnp: not parity */

loc_00112CDB: ;
    MEM8(esp + 0xA) = 0;

loc_00112CE0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM8(esp + 0x13) = 1;
    PUSH32(esp, 0x00112CEDu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_00112CED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00112D01; /* jne: not equal / not zero */

loc_00112CF5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112CFCu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00112CFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00112D05;

loc_00112D01: ;
    SET_LO8(eax, MEM8(esp + 0xB));

loc_00112D05: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00112D15; /* jne: not equal / not zero */

loc_00112D09: ;
    SET_LO8(ecx, MEM8(esp + 0xA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00112D15; /* jne: not equal / not zero */

loc_00112D11: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00112D3F; /* jne: not equal / not zero */

loc_00112D15: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112D1Du); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_00112D1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00112D2F; /* je: equal / zero */

loc_00112D24: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112D2Cu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00112D2C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112D2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112D35u); RECOMP_ABI_CALL(0x00112120u, sub_00112120); /* call 0x00112120 */

loc_00112D35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x00112D3Fu); RECOMP_ABI_CALL(0x00112930u, sub_00112930); /* call 0x00112930 */

loc_00112D3F: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00112D50
 * Original: 0x00112D50 - 0x00112D62 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00112D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112D50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112D5Cu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00112D5C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00112D70
 * Original: 0x00112D70 - 0x00112D93 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112D70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112D7Du); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_00112D7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112D8F; /* je: equal / zero */

loc_00112D84: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112D8Cu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_00112D8C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112D8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112DA0
 * Original: 0x00112DA0 - 0x00112E08 (104 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112DA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x00112DB5u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_00112DB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112DCB; /* jne: not equal / not zero */

loc_00112DBD: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112DC4u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00112DC4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 8) = LO8(eax);

loc_00112DCB: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    MEM8(esp + 0xC) = 1;
    PUSH32(esp, 0x00112DD8u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_00112DD8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112DEF; /* jne: not equal / not zero */

loc_00112DE0: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112DE8u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00112DE8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 4) = LO8(eax);

loc_00112DEF: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00112DFEu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00112DFE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00112E10
 * Original: 0x00112E10 - 0x00112E18 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00112E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112E10: ;
    PUSH32(esp, 0x00112E15u); RECOMP_ABI_CALL(0x001121D0u, sub_001121D0); /* call 0x001121D0 */

loc_00112E15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00112E20
 * Original: 0x00112E20 - 0x00112E65 (69 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112E20: ;
    edx = MEM32(esp + 4);
    eax = edx;
    PUSH32(esp, esi);
    esi = eax + 1;
    /* nop */

loc_00112E30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112E30; /* jne: not equal / not zero */

loc_00112E37: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    POP32(esp, esi);
    if (CMP_B(_fa, _fb)) goto loc_00112E5F; /* jb: below (unsigned <) */

loc_00112E3F: ;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x66 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112E49; /* je: equal / zero */

loc_00112E45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x46) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x46 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112E5F; /* jne: not equal / not zero */

loc_00112E49: ;
    SET_LO8(eax, MEM8(edx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x69 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112E54; /* je: equal / zero */

loc_00112E50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x49) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x49 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00112E5F; /* jne: not equal / not zero */

loc_00112E54: ;
    SET_LO8(eax, MEM8(edx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112E62; /* je: equal / zero */

loc_00112E5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x4F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x4F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112E62; /* je: equal / zero */

loc_00112E5F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00112E62: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00112E70
 * Original: 0x00112E70 - 0x00112EB1 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112E70(void)
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

loc_00112E70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112E7Eu); RECOMP_ABI_CALL(0x00120E60u, sub_00120E60); /* call 0x00120E60 */

loc_00112E7E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112EAC; /* je: equal / zero */

loc_00112E85: ;
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00112E95; /* jge: greater or equal (signed >=) */

loc_00112E8F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x2ED1E0)); /* fadd qword ptr [0x2ed1e0] */

loc_00112E95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112EA1u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00112EA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00112EAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_00112EC0
 * Original: 0x00112EC0 - 0x00112F0B (75 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00112EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00112ECEu); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00112ECE: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00112ED8u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00112ED8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00112F06; /* je: equal / zero */

loc_00112EDF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00112EF8; /* je: equal / zero */

loc_00112EE5: ;
    PUSH32(esp, 0x00112EEAu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00112EEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112EF0u); RECOMP_ABI_CALL(0x001EC560u, sub_001EC560); /* call 0x001EC560 */

loc_00112EF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00112EF8: ;
    PUSH32(esp, 0x00112EFDu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_00112EFD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00112F03u); RECOMP_ABI_CALL(0x001EE430u, sub_001EE430); /* call 0x001EE430 */

loc_00112F03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00112F06: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00112F10
 * Original: 0x00112F10 - 0x00112F38 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112F10(void)
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

loc_00112F10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112F1Du); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00112F1D: ;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00112F25u); RECOMP_ABI_CALL(0x00237629u, sub_00237629); /* call 0x00237629 */

loc_00112F25: ;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112F2Eu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00112F2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00112F40
 * Original: 0x00112F40 - 0x00112F8A (74 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112F40(void)
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

loc_00112F40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112F4Fu); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00112F4F: ;
    PUSH32(esp, 0x00112F54u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_00112F54: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00112F5Eu); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00112F5E: ;
    PUSH32(esp, 0x00112F63u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_00112F63: ;
    ecx = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00112F7Eu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00112F7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
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
 * sub_00112F90
 * Original: 0x00112F90 - 0x00113076 (230 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00112F90(void)
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

loc_00112F90: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ebx = esp + 0x14;
    ebp = esp + 0x28;
    PUSH32(esp, 0x00112FA9u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00112FA9: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00112FD0; /* jbe: below or equal (unsigned <=) */

loc_00112FBC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    MEM8(esp + 0x20) = 0x2D;
    ebp = esp + 0x21;
    goto loc_00112FD6;

loc_00112FD0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00112FD6: ;
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2DEA44);
    edx = esp + 0x14;
    PUSH32(esp, 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00112FECu); RECOMP_ABI_CALL(0x00237E3Au, sub_00237E3A); /* call 0x00237E3A */

loc_00112FEC: ;
    eax = esp + 0x1C;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x1F) = 0;
    edx = eax + 1;
    goto loc_00113000;

    /* nop */

loc_00113000: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00113000; /* jne: not equal / not zero */

loc_00113007: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00113018; /* jne: not equal / not zero */

loc_00113016: ;
    edx = ecx;

loc_00113018: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(ebp) = 0x24;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00113055; /* je: equal / zero */

loc_00113025: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00113027: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00113043; /* jle: less or equal (signed <=) */

loc_0011302B: ;
    ecx = edx;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx;
    edi = ebp;
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
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edx)) >> 32) & 1);
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(edx)) >> 32) & 1);
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113043: ;
    SET_LO8(eax, MEM8(ebx));
    MEM8(ebp) = 0x2C;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = 3;
    if (CMP_NE(_fa, _fb)) goto loc_00113027; /* jne: not equal / not zero */

loc_00113053: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00113055: ;
    edx = MEM32(esp + 0x38);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(ebp + -1) = 0;
    PUSH32(esp, 0x00113068u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00113068: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
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
 * sub_00113080
 * Original: 0x00113080 - 0x001130F2 (114 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113080: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011308Fu); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_0011308F: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00113099u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00113099: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001130A3u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001130A3: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x001130ADu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_001130AD: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_001130C8; /* jle: less or equal (signed <=) */

loc_001130B9: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001130C1u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001130C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_001130CA;

loc_001130C8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001130CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001130D0u); RECOMP_ABI_CALL(0x00112120u, sub_00112120); /* call 0x00112120 */

loc_001130D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = 0x35F798;
    PUSH32(esp, 0x001130EAu); RECOMP_ABI_CALL(0x00100740u, sub_00100740); /* call 0x00100740 */

loc_001130EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00113100
 * Original: 0x00113100 - 0x00113197 (151 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113100: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113111u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00113111: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011311Bu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_0011311B: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00113125u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00113125: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x0011312Fu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_0011312F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_0011314C; /* jle: less or equal (signed <=) */

loc_0011313B: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113143u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00113143: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_00113154;

loc_0011314C: ;
    MEM32(esp + 0x10) = 0;

loc_00113154: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00113168; /* jle: less or equal (signed <=) */

loc_00113159: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113161u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00113161: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_0011316A;

loc_00113168: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0011316A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113170u); RECOMP_ABI_CALL(0x00112120u, sub_00112120); /* call 0x00112120 */

loc_00113170: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = 0x35F798;
    PUSH32(esp, 0x0011318Du); RECOMP_ABI_CALL(0x00100740u, sub_00100740); /* call 0x00100740 */

loc_0011318D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001131A0
 * Original: 0x001131A0 - 0x001131BE (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001131A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001131A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0xC0) = eax;
    MEM32(ecx + 0x164) = eax;
    MEM32(ecx + 0x208) = eax;
    MEM32(ecx + 0x2AC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001131C0
 * Original: 0x001131C0 - 0x001131D9 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001131C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001131C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001131D4; /* jge: greater or equal (signed >=) */

loc_001131C9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001131D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001131E0
 * Original: 0x001131E0 - 0x001132CB (235 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001131E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001131E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F0134);
    esi = ebp;
    PUSH32(esp, 0x001131F9u); RECOMP_ABI_CALL(0x00238170u, sub_00238170); /* call 0x00238170 */

loc_001131F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113217; /* je: equal / zero */

loc_00113200: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2F0134);
    PUSH32(esp, 0x00113210u); RECOMP_ABI_CALL(0x00238170u, sub_00238170); /* call 0x00238170 */

loc_00113210: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113200; /* jne: not equal / not zero */

loc_00113217: ;
    edx = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00113220u); RECOMP_ABI_CALL(0x00237E91u, sub_00237E91); /* call 0x00237E91 */

loc_00113220: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113228; /* je: equal / zero */

loc_00113227: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00113228: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113231u); RECOMP_ABI_CALL(0x00237E91u, sub_00237E91); /* call 0x00237E91 */

loc_00113231: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113239; /* je: equal / zero */

loc_00113238: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00113239: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011326B; /* jne: not equal / not zero */

loc_0011323E: ;
    ecx = MEM32(esp + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = 1;
    edx = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00113252u); RECOMP_ABI_CALL(0x00237E91u, sub_00237E91); /* call 0x00237E91 */

loc_00113252: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011325A; /* je: equal / zero */

loc_00113259: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011325A: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113263u); RECOMP_ABI_CALL(0x00237E91u, sub_00237E91); /* call 0x00237E91 */

loc_00113263: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011326B; /* je: equal / zero */

loc_0011326A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011326B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00113274u); RECOMP_ABI_CALL(0x00237E91u, sub_00237E91); /* call 0x00237E91 */

loc_00113274: ;
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011328D; /* je: equal / zero */

loc_0011327F: ;
    PUSH32(esp, 0x2F0104);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011328Au); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_0011328A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011328D: ;
    edi = esi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001132A7; /* jle: less or equal (signed <=) */

loc_00113299: ;
    PUSH32(esp, 0x2F00E8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001132A4u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001132A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001132A7: ;
    ebx = MEM32(esp + 0x1C);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = ebx + 1;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    MEM8(ebx) = 0x25;
    PUSH32(esp, 0x001132BCu); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_001132BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + ebx + 2) = 0;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001132D0
 * Original: 0x001132D0 - 0x0011350C (572 bytes, 195 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001132D0(void)
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

loc_001132D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x434;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001132F3u); RECOMP_ABI_CALL(0x001DC6A0u, sub_001DC6A0); /* call 0x001DC6A0 */

loc_001132F3: ;
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x3C;
    esi = eax;
    PUSH32(esp, edx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011330Au); RECOMP_ABI_CALL(0x001DC0A0u, sub_001DC0A0); /* call 0x001DC0A0 */

loc_0011330A: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001134C9; /* jae: above or equal (unsigned >=) */

loc_00113319: ;
    /* nop */

loc_00113320: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x25 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113353; /* je: equal / zero */

loc_00113325: ;
    ecx = MEM32(esp + 0x30);
    eax = esp + 0x23C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00113341; /* jb: below (unsigned <) */

loc_00113334: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011333Eu); RECOMP_ABI_CALL(0x001DBF10u, sub_001DBF10); /* call 0x001DBF10 */

loc_0011333E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113341: ;
    SET_LO8(edx, MEM8(esi));
    eax = MEM32(esp + 0x30);
    MEM8(eax) = LO8(edx);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001134BF;

loc_00113353: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x25 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113389; /* jne: not equal / not zero */

loc_0011335B: ;
    eax = MEM32(esp + 0x30);
    ecx = esp + 0x23C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00113377; /* jb: below (unsigned <) */

loc_0011336A: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00113374u); RECOMP_ABI_CALL(0x001DBF10u, sub_001DBF10); /* call 0x001DBF10 */

loc_00113374: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113377: ;
    SET_LO8(eax, MEM8(esi));
    ecx = MEM32(esp + 0x30);
    MEM8(ecx) = LO8(eax);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001134BF;

loc_00113389: ;
    edx = SX8(LO8(eax));
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011339Au); RECOMP_ABI_CALL(0x00237E91u, sub_00237E91); /* call 0x00237E91 */

loc_0011339A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001133AB; /* je: equal / zero */

loc_001133A1: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x24 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001134E2; /* je: equal / zero */

loc_001133AB: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001133BDu); RECOMP_ABI_CALL(0x001131E0u, sub_001131E0); /* call 0x001131E0 */

loc_001133BD: ;
    esi = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x45) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x45;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001134F7; /* ja: above (unsigned >) */

loc_001133D2: ;
    edx = ZX8(MEM8(eax + 0x113520));
    { uint32_t _jt = MEM32(edx * 4 + 0x11350C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001133E0u) goto loc_001133E0;
    if (_jt == 0x00113407u) goto loc_00113407;
    if (_jt == 0x0011342Bu) goto loc_0011342B;
    if (_jt == 0x0011344Cu) goto loc_0011344C;
    if (_jt == 0x001134F7u) goto loc_001134F7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001133E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001133E7u); RECOMP_ABI_CALL(0x001DC770u, sub_001DC770); /* call 0x001DC770 */

loc_001133E7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001133ECu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001133EC: ;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x250;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001133FFu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_001133FF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00113493;

loc_00113407: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011340Eu); RECOMP_ABI_CALL(0x001DC770u, sub_001DC770); /* call 0x001DC770 */

loc_0011340E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00113413u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_00113413: ;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x250;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00113426u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00113426: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00113493;

loc_0011342B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00113432u); RECOMP_ABI_CALL(0x001DC770u, sub_001DC770); /* call 0x001DC770 */

loc_00113432: ;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x24C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00113447u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00113447: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00113493;

loc_0011344C: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00113458u); RECOMP_ABI_CALL(0x001DC6A0u, sub_001DC6A0); /* call 0x001DC6A0 */

loc_00113458: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011347D; /* jne: not equal / not zero */

loc_00113463: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0x64 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0011347D; /* jb: below (unsigned <) */

loc_0011346A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00113471u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_00113471: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011347Bu); RECOMP_ABI_CALL(0x001DC000u, sub_001DC000); /* call 0x001DC000 */

loc_0011347B: ;
    goto loc_001134BC;

loc_0011347D: ;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x248;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00113490u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00113490: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113493: ;
    eax = esp + 0x240;
    edx = eax + 1;
    /* nop */

loc_001134A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001134A0; /* jne: not equal / not zero */

loc_001134A7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 0x244;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001134BCu); RECOMP_ABI_CALL(0x001DBF50u, sub_001DBF50); /* call 0x001DBF50 */

loc_001134BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001134BF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00113320; /* jb: below (unsigned <) */

loc_001134C9: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001134D3u); RECOMP_ABI_CALL(0x001DBFB0u, sub_001DBFB0); /* call 0x001DBFB0 */

loc_001134D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001134E2: ;
    PUSH32(esp, 0x2F0158);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001134EDu); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001134ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001134F7: ;
    PUSH32(esp, 0x2F013C);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00113502u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_00113502: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00113560
 * Original: 0x00113560 - 0x001135D2 (114 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113560: ;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x21C);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011357Du); RECOMP_ABI_CALL(0x001DC6A0u, sub_001DC6A0); /* call 0x001DC6A0 */

loc_0011357D: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00113587u); RECOMP_ABI_CALL(0x001DC770u, sub_001DC770); /* call 0x001DC770 */

loc_00113587: ;
    PUSH32(esp, 0x0011358Cu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0011358C: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00113599u); RECOMP_ABI_CALL(0x001DC0A0u, sub_001DC0A0); /* call 0x001DC0A0 */

loc_00113599: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001135B6; /* jle: less or equal (signed <=) */

loc_001135A0: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001135B0u); RECOMP_ABI_CALL(0x001DBF50u, sub_001DBF50); /* call 0x001DBF50 */

loc_001135B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001135A0; /* jne: not equal / not zero */

loc_001135B6: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001135C0u); RECOMP_ABI_CALL(0x001DBFB0u, sub_001DBFB0); /* call 0x001DBFB0 */

loc_001135C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001135E0
 * Original: 0x001135E0 - 0x0011361B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001135E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001135E0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001135F7u); RECOMP_ABI_CALL(0x001DD5A0u, sub_001DD5A0); /* call 0x001DD5A0 */

loc_001135F7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113619; /* je: equal / zero */

loc_001135FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113604u); RECOMP_ABI_CALL(0x00112120u, sub_00112120); /* call 0x00112120 */

loc_00113604: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0011360Eu); RECOMP_ABI_CALL(0x00112930u, sub_00112930); /* call 0x00112930 */

loc_0011360E: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113616u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_00113616: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113619: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113620
 * Original: 0x00113620 - 0x0011364C (44 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113620: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3F);
    eax = esi + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00113636u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00113636: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00113644; /* jge: greater or equal (signed >=) */

loc_0011363D: ;
    eax = esi + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00113644: ;
    eax = esi + eax * 4 + 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113650
 * Original: 0x00113650 - 0x0011368F (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113650: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011367C; /* je: equal / zero */

loc_0011365A: ;
    esi = ZX16(MEM16(ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011367C; /* jle: less or equal (signed <=) */

loc_00113663: ;
    edx = ecx + 0x1A8;
    /* nop */

loc_00113670: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113683; /* je: equal / zero */

loc_00113674: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00113670; /* jl: less (signed <) */

loc_0011367C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00113683: ;
    eax = MEM32(ecx + eax * 8 + 0x1AC);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113690
 * Original: 0x00113690 - 0x001136CA (58 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113690(void)
{

loc_00113690: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = 9;
    MEM32(eax) = 0x2E3FB4;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = 0;
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x28);
    MEM32(eax + 0x18) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001136D0
 * Original: 0x001136D0 - 0x001136FA (42 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001136D0(void)
{

loc_001136D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = 0xC;
    MEM32(eax) = 0x2E6420;
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x28);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113700
 * Original: 0x00113700 - 0x00113704 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113700(void)
{

loc_00113700: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00113710
 * Original: 0x00113710 - 0x00113768 (88 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113710: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM32(eax + 4) = 0xE;
    MEM32(eax) = 0x2F017C;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax + 0x1C);
    MEM32(eax + 0x10) = ecx;
    edx = edx ^ MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax + 0x1C);
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x20) = LO8(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00113770
 * Original: 0x00113770 - 0x001137C0 (80 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113770: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM32(eax + 4) = 0xE;
    MEM32(eax) = 0x2F017C;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax + 0x1C);
    MEM32(eax + 0x10) = ecx;
    edx = edx ^ MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax + 0x1C);
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x20));
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x20) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001137C0
 * Original: 0x001137C0 - 0x0011380C (76 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001137C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001137C0: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = MEM32(eax + 0x1C);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax + 0x1C);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(eax + 4) = 0xE;
    MEM32(eax) = 0x2F017C;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x20) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00113810
 * Original: 0x00113810 - 0x00113814 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113810(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00113810: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113820
 * Original: 0x00113820 - 0x00113824 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113820(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00113820: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113830
 * Original: 0x00113830 - 0x00113864 (52 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113830: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_00113840;

    /* nop */

loc_00113840: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113840; /* jne: not equal / not zero */

loc_00113847: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0011385F; /* jge: greater or equal (signed >=) */

loc_0011384E: ;
    edx = ecx + 0x38;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00113855: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113855; /* jne: not equal / not zero */

loc_0011385F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113870
 * Original: 0x00113870 - 0x001138A7 (55 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_00113880;

    /* nop */

loc_00113880: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113880; /* jne: not equal / not zero */

loc_00113887: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001138A2; /* jge: greater or equal (signed >=) */

loc_0011388E: ;
    edx = ecx + 0x98;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00113898: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113898; /* jne: not equal / not zero */

loc_001138A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001138B0
 * Original: 0x001138B0 - 0x001138C9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001138B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001138B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(0x371BB0) = LO16(eax);
    MEM16(0x371BB2) = LO16(eax);
    MEM32(0x371D78) = eax;
    MEM32(0x371BB4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001138D0
 * Original: 0x001138D0 - 0x001138EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001138D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001138D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001138D8u); RECOMP_ABI_CALL(0x00112580u, sub_00112580); /* call 0x00112580 */

loc_001138D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001138E8; /* je: equal / zero */

loc_001138DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001138E5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_001138E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001138E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001138F0
 * Original: 0x001138F0 - 0x00113925 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001138F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001138F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001138FCu); RECOMP_ABI_CALL(0x0010FAB0u, sub_0010FAB0); /* call 0x0010FAB0 */

loc_001138FC: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x28) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0011391D; /* je: equal / zero */

loc_0011390D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113913u); RECOMP_ABI_CALL(0x001DDB90u, sub_001DDB90); /* call 0x001DDB90 */

loc_00113913: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 0;

loc_0011391D: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_00113930
 * Original: 0x00113930 - 0x00113A50 (288 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113930: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2426E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = 0x2ED22C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0xC) = 0x2ED228;
    MEM32(esp + 0x10) = 0x2F01BC;
    _fa = (uint32_t)(MEM8(esi + 0x35)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x35), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */
    MEM8(esp + 0x1C) = 2;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001139DF; /* jne: not equal / not zero */

loc_00113985: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 0x35) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001139D8; /* je: equal / zero */

loc_00113992: ;
    SET_LO8(ecx, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_001139D7; /* je: equal / zero */

loc_0011399D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001139A3u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001139A3: ;
    eax = MEM32(esi + 0x9C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001139B0u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001139B0: ;
    ecx = MEM32(esi + 0x9C);
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001139C1u); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_001139C1: ;
    edx = MEM32(esi + 0x9C);
    PUSH32(esp, 0x2F01A8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001139D4u); RECOMP_ABI_CALL(0x001135E0u, sub_001135E0); /* call 0x001135E0 */

loc_001139D4: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001139D7: ;
    POP32(esp, edi);

loc_001139D8: ;
    ecx = esi;
    PUSH32(esp, 0x001139DFu); RECOMP_ABI_CALL(0x001138F0u, sub_001138F0); /* call 0x001138F0 */

loc_001139DF: ;
    _fa = (uint32_t)(MEM8(esi + 0x36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x36), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113A04; /* jne: not equal / not zero */

loc_001139E5: ;
    PUSH32(esp, ebx);
    MEM8(esi + 0x36) = LO8(ebx);
    PUSH32(esp, 0x001139EEu); RECOMP_ABI_CALL(0x00179430u, sub_00179430); /* call 0x00179430 */

loc_001139EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00113A04: ;
    _fa = (uint32_t)(MEM8(esi + 0x37)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x37), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113A1A; /* jne: not equal / not zero */

loc_00113A0A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x59C00449);
    MEM8(esi + 0x37) = LO8(ebx);
    PUSH32(esp, 0x00113A18u); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_00113A18: ;
    goto loc_00113A3A;

loc_00113A1A: ;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113A3D; /* je: equal / zero */

loc_00113A24: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAEF39CCFu);
    MEM32(0x42BE30) = eax;
    PUSH32(esp, 0x00113A34u); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_00113A34: ;
    MEM32(esi + 0xA0) = ebx;

loc_00113A3A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113A3D: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113A50
 * Original: 0x00113A50 - 0x00113ACA (122 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113A50: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113AC6; /* je: equal / zero */

loc_00113A59: ;
    eax = edi;
    PUSH32(esp, esi);
    esi = eax + 1;
    /* nop */

loc_00113A60: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113A60; /* jne: not equal / not zero */

loc_00113A67: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    if ((_fa == 0)) goto loc_00113AC5; /* je: equal / zero */

loc_00113A6F: ;
    esi = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113AC5; /* je: equal / zero */

loc_00113A76: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113A7Cu); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00113A7C: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113A83u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00113A83: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113A8Eu); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_00113A8E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113A94u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00113A94: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113A9Bu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_00113A9B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113ABA; /* jne: not equal / not zero */

loc_00113AA3: ;
    PUSH32(esp, 0x2F01C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113AB2u); RECOMP_ABI_CALL(0x001135E0u, sub_001135E0); /* call 0x001135E0 */

loc_00113AB2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00113ABA: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113AC2u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_00113AC2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113AC5: ;
    POP32(esp, esi);

loc_00113AC6: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00113AD0
 * Original: 0x00113AD0 - 0x00113B60 (144 bytes, 55 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113AD0(void)
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

loc_00113AD0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113B5C; /* je: equal / zero */

loc_00113ADD: ;
    eax = edi;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00113AE3: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113AE3; /* jne: not equal / not zero */

loc_00113AEA: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    if ((_fa == 0)) goto loc_00113B5B; /* je: equal / zero */

loc_00113AF2: ;
    esi = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113B5B; /* je: equal / zero */

loc_00113AF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113AFFu); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00113AFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113B06u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00113B06: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113B11u); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_00113B11: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113B19u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_00113B19: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113B50; /* jne: not equal / not zero */

loc_00113B21: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113B2Cu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00113B2C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113B39u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00113B39: ;
    PUSH32(esp, 0x2F01E4);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113B48u); RECOMP_ABI_CALL(0x001135E0u, sub_001135E0); /* call 0x001135E0 */

loc_00113B48: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_00113B50: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113B58u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_00113B58: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113B5B: ;
    POP32(esp, esi);

loc_00113B5C: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113B60
 * Original: 0x00113B60 - 0x00113B92 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113B60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113B6Bu); RECOMP_ABI_CALL(0x00112120u, sub_00112120); /* call 0x00112120 */

loc_00113B6B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113B90; /* je: equal / zero */

loc_00113B74: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00113B90; /* jne: not equal / not zero */

loc_00113B7A: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00113B85u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_00113B85: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00112930(); return; /* tail jmp 0x00112930 */

loc_00113B90: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113BA0
 * Original: 0x00113BA0 - 0x00113BE9 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113BA0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00113BB2u); RECOMP_ABI_CALL(0x00120E60u, sub_00120E60); /* call 0x00120E60 */

loc_00113BB2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113BE5; /* je: equal / zero */

loc_00113BB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113BBFu); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_00113BBF: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113BE1; /* je: equal / zero */

loc_00113BC8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00113BCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113BCCu); } /* indirect call */
    }

loc_00113BCF: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113BE5; /* je: equal / zero */

loc_00113BE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00113BE5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113BF0
 * Original: 0x00113BF0 - 0x00113C40 (80 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113BF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00113C04u); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_00113C04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113C2C; /* je: equal / zero */

loc_00113C0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113C12u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_00113C12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113C3A; /* je: equal / zero */

loc_00113C19: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113C1Fu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00113C1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113C25u); RECOMP_ABI_CALL(0x0014C890u, sub_0014C890); /* call 0x0014C890 */

loc_00113C25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00113C2C: ;
    PUSH32(esp, 0x2F020C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113C37u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_00113C37: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113C3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00113C40
 * Original: 0x00113C40 - 0x00113C82 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00113C4Cu); RECOMP_ABI_CALL(0x00112120u, sub_00112120); /* call 0x00112120 */

loc_00113C4C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00113C58u); RECOMP_ABI_CALL(0x00112930u, sub_00112930); /* call 0x00112930 */

loc_00113C58: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113C63u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_00113C63: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00113C6Bu); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_00113C6B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113C7D; /* je: equal / zero */

loc_00113C72: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00113C7Au); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_00113C7A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00113C7D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113C90
 * Original: 0x00113C90 - 0x00113CB8 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113C90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00113C9Cu); RECOMP_ABI_CALL(0x00112120u, sub_00112120); /* call 0x00112120 */

loc_00113C9C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113CB3; /* je: equal / zero */

loc_00113CA5: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00113CADu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00113CAD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x34) = LO8(eax);

loc_00113CB3: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113CC0
 * Original: 0x00113CC0 - 0x00113D0E (78 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00113CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113CC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113CCDu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113CCD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113CD5u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00113CD5: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00113CDFu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00113CDF: ;
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00113CE7u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00113CE7: ;
    ecx = MEM32(0x3FF730);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00113D03; /* jne: not equal / not zero */

loc_00113CF8: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113D00u); RECOMP_ABI_CALL(0x0016FB00u, sub_0016FB00); /* call 0x0016FB00 */

loc_00113D00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00113D03: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113D0Bu); RECOMP_ABI_CALL(0x0016FB00u, sub_0016FB00); /* call 0x0016FB00 */

loc_00113D0B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00113D10
 * Original: 0x00113D10 - 0x00113D3F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113D10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113D1Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113D1C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113D24u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00113D24: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x4031B0;
    PUSH32(esp, 0x00113D3Au); RECOMP_ABI_CALL(0x00170380u, sub_00170380); /* call 0x00170380 */

loc_00113D3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00113D40
 * Original: 0x00113D40 - 0x00113D77 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113D40(void)
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

loc_00113D40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113D4Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113D4B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113D51u); RECOMP_ABI_CALL(0x00112120u, sub_00112120); /* call 0x00112120 */

loc_00113D51: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00113D73; /* je: equal / zero */

loc_00113D5A: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113D69u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00113D69: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00113D73: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00113D80
 * Original: 0x00113D80 - 0x00113DA4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00113D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113D80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113D8Au); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113D8A: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00113D94u); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_00113D94: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1F4); PUSH32(esp, 0x00113DA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00113D9Bu); } /* indirect call */
    }

loc_00113DA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00113DB0
 * Original: 0x00113DB0 - 0x00113DDD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113DB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113DBBu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113DBB: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113DC3u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00113DC3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113DC9u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00113DC9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x34ABC8;
    PUSH32(esp, 0x00113DD9u); RECOMP_ABI_CALL(0x000CDA60u, sub_000CDA60); /* call 0x000CDA60 */

loc_00113DD9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113DE0
 * Original: 0x00113DE0 - 0x00113E0F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113DE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113DECu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113DEC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113DF4u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00113DF4: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x34ABC8;
    PUSH32(esp, 0x00113E0Au); RECOMP_ABI_CALL(0x000C8B20u, sub_000C8B20); /* call 0x000C8B20 */

loc_00113E0A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00113E10
 * Original: 0x00113E10 - 0x00113E2F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00113E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113E10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113E1Au); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113E1A: ;
    PUSH32(esp, 0xC92C594Cu);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x00113E29u); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_00113E29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00113E30
 * Original: 0x00113E30 - 0x00113E5D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113E30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113E3Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113E3B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113E43u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00113E43: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113E49u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00113E49: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = 0x343468;
    PUSH32(esp, 0x00113E59u); RECOMP_ABI_CALL(0x000CE860u, sub_000CE860); /* call 0x000CE860 */

loc_00113E59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113E60
 * Original: 0x00113E60 - 0x00113E8B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113E60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113E6Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113E6B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113E73u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00113E73: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113E79u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00113E79: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x343468;
    PUSH32(esp, 0x00113E87u); RECOMP_ABI_CALL(0x000CD3C0u, sub_000CD3C0); /* call 0x000CD3C0 */

loc_00113E87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113E90
 * Original: 0x00113E90 - 0x00113F17 (135 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00113E90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113E9Fu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113E9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113EA5u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00113EA5: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00113EAFu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_00113EAF: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM8(esp + 0x28) = 1;
    PUSH32(esp, 0x00113EBCu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_00113EBC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113EC2u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00113EC2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    ebp = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00113EE0; /* jle: less or equal (signed <=) */

loc_00113ECE: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113ED6u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00113ED6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00113EDEu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_00113EDE: ;
    ebx = eax;

loc_00113EE0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00113EF4; /* jle: less or equal (signed <=) */

loc_00113EE5: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113EEDu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00113EED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x10) = LO8(eax);

loc_00113EF4: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00113EFEu); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_00113EFE: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x00113F0Fu); RECOMP_ABI_CALL(0x0005A220u, sub_0005A220); /* call 0x0005A220 */

loc_00113F0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00113F20
 * Original: 0x00113F20 - 0x00113F62 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113F20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113F2Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113F2B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113F31u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00113F31: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113F39u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_00113F39: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113F41u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_00113F41: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113F47u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00113F47: ;
    PUSH32(esp, 0x660E4490);
    esi = eax;
    PUSH32(esp, 0x00113F53u); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_00113F53: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00113F5Eu); RECOMP_ABI_CALL(0x0005A4B0u, sub_0005A4B0); /* call 0x0005A4B0 */

loc_00113F5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00113F70
 * Original: 0x00113F70 - 0x00113F91 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00113F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113F70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113F7Au); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113F7A: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00113F84u); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_00113F84: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x00113F8Eu); RECOMP_ABI_CALL(0x0005A580u, sub_0005A580); /* call 0x0005A580 */

loc_00113F8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00113FA0
 * Original: 0x00113FA0 - 0x00113FE2 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113FA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113FADu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113FAD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113FB5u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00113FB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00113FBBu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00113FBB: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00113FC5u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00113FC5: ;
    MEM8(esp + 0x20) = LO8(eax);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x00113FDCu); RECOMP_ABI_CALL(0x0016A4B0u, sub_0016A4B0); /* call 0x0016A4B0 */

loc_00113FDC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00113FF0
 * Original: 0x00113FF0 - 0x00114032 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00113FF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00113FFDu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00113FFD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114005u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114005: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011400Bu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011400B: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00114015u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00114015: ;
    MEM8(esp + 0x20) = LO8(eax);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x0011402Cu); RECOMP_ABI_CALL(0x001694E0u, sub_001694E0); /* call 0x001694E0 */

loc_0011402C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00114040
 * Original: 0x00114040 - 0x0011406B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114040: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011404Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011404B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114053u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114053: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114059u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00114059: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3DC970;
    PUSH32(esp, 0x00114067u); RECOMP_ABI_CALL(0x00169500u, sub_00169500); /* call 0x00169500 */

loc_00114067: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114070
 * Original: 0x00114070 - 0x001140E5 (117 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011407Du); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011407D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114085u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114085: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011408Bu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011408B: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00114095u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114095: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011409Bu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011409B: ;
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001140A3u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001140A3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001140CE; /* jle: less or equal (signed <=) */

loc_001140AB: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001140B3u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_001140B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001140BBu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001140BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = 0x3DC970;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001140C8u); RECOMP_ABI_CALL(0x00169550u, sub_00169550); /* call 0x00169550 */

loc_001140C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001140CE: ;
    PUSH32(esp, 0x2710);
    PUSH32(esp, ebx);
    ecx = 0x3DC970;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001140DFu); RECOMP_ABI_CALL(0x00169550u, sub_00169550); /* call 0x00169550 */

loc_001140DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001140F0
 * Original: 0x001140F0 - 0x00114132 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001140F0(void)
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

loc_001140F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001140FDu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001140FD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114105u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114105: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011410Bu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011410B: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00114115u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114115: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x0011412Cu); RECOMP_ABI_CALL(0x001695C0u, sub_001695C0); /* call 0x001695C0 */

loc_0011412C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_00114140
 * Original: 0x00114140 - 0x00114182 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114140(void)
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

loc_00114140: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011414Du); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011414D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114155u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114155: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011415Bu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011415B: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00114165u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114165: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x0011417Cu); RECOMP_ABI_CALL(0x001695E0u, sub_001695E0); /* call 0x001695E0 */

loc_0011417C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_00114190
 * Original: 0x00114190 - 0x001141CE (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114190: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011419Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011419C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001141A4u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001141A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001141AAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001141AA: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001141B4u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001141B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001141BAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001141BA: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x001141C9u); RECOMP_ABI_CALL(0x00169650u, sub_00169650); /* call 0x00169650 */

loc_001141C9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001141D0
 * Original: 0x001141D0 - 0x001141FB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001141D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001141D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001141DBu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001141DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001141E3u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001141E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001141E9u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001141E9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3DC970;
    PUSH32(esp, 0x001141F7u); RECOMP_ABI_CALL(0x00169600u, sub_00169600); /* call 0x00169600 */

loc_001141F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114200
 * Original: 0x00114200 - 0x00114240 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114200(void)
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

loc_00114200: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011420Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011420C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114214u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114214: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011421Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011421A: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00114224u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114224: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC09C)); /* fmul dword ptr [0x2dc09c] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3DC970;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011423Bu); RECOMP_ABI_CALL(0x001696B0u, sub_001696B0); /* call 0x001696B0 */

loc_0011423B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00114240
 * Original: 0x00114240 - 0x00114290 (80 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114240(void)
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

loc_00114240: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011424Du); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011424D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114255u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114255: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011425Bu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011425B: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00114265u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114265: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x0011427Cu); RECOMP_ABI_CALL(0x00169710u, sub_00169710); /* call 0x00169710 */

loc_0011427C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_00114290
 * Original: 0x00114290 - 0x001142EF (95 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114290(void)
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

loc_00114290: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011429Du); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011429D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001142A5u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001142A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001142ABu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001142AB: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001142B5u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001142B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001142BBu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001142BB: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001142C5u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_001142C5: ;
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001142D2u); RECOMP_ABI_CALL(0x00237629u, sub_00237629); /* call 0x00237629 */

loc_001142D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001142DAu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001142DA: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x001142E9u); RECOMP_ABI_CALL(0x001696D0u, sub_001696D0); /* call 0x001696D0 */

loc_001142E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001142F0
 * Original: 0x001142F0 - 0x0011432E (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001142F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001142F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001142FCu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001142FC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114304u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114304: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011430Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011430A: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00114314u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114314: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011431Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011431A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x00114329u); RECOMP_ABI_CALL(0x00169730u, sub_00169730); /* call 0x00169730 */

loc_00114329: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114330
 * Original: 0x00114330 - 0x0011436E (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114330: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011433Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011433C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114344u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114344: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011434Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011434A: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00114354u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114354: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011435Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011435A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x00114369u); RECOMP_ABI_CALL(0x00169750u, sub_00169750); /* call 0x00169750 */

loc_00114369: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114370
 * Original: 0x00114370 - 0x001143B7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114370(void)
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

loc_00114370: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011437Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011437C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114384u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114384: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011438Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011438A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3DC970;
    PUSH32(esp, 0x00114398u); RECOMP_ABI_CALL(0x00169770u, sub_00169770); /* call 0x00169770 */

loc_00114398: ;
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001143ACu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001143AC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
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
 * sub_001143C0
 * Original: 0x001143C0 - 0x00114401 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001143C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001143C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001143CCu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001143CC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001143D4u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001143D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001143DAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001143DA: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001143E4u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_001143E4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001143ECu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001143EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001143FC; /* jl: less (signed <) */

loc_001143F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3DC970;
    PUSH32(esp, 0x001143FCu); RECOMP_ABI_CALL(0x00169880u, sub_00169880); /* call 0x00169880 */

loc_001143FC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114410
 * Original: 0x00114410 - 0x001145CE (446 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00114410(void)
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

loc_00114410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x878) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x878;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00114427u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114427: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011442Fu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_0011442F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00114435u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00114435: ;
    PUSH32(esp, 2);
    edi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00114444u); RECOMP_ABI_CALL(0x00112A10u, sub_00112A10); /* call 0x00112A10 */

loc_00114444: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011444Cu); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_0011444C: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011445Cu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0011445C: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2DC8E0);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011446Fu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0011446F: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x7C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011447Du); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0011447D: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011449Au); RECOMP_ABI_CALL(0x001F87C0u, sub_001F87C0); /* call 0x001F87C0 */

loc_0011449A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001144A4u); RECOMP_ABI_CALL(0x001F8750u, sub_001F8750); /* call 0x001F8750 */

loc_001144A4: ;
    xmm4 = XMM_SCALAR(MEMF(0x2DFE78)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = esp + 0x24;
    xmm6 = xmm5; /* movaps */
    PUSH32(esp, ecx);
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    ecx = esp + 0x34;
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011452Fu); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_0011452F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011457Au); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0011457A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001145C6; /* je: equal / zero */

loc_00114580: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00114587u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114584u); } /* indirect call */
    }

loc_00114587: ;
    edx = MEM32(0x30D374);
    ecx = MEM32(0x30D370);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001145C6; /* jne: not equal / not zero */

loc_00114599: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x001145A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011459Du); } /* indirect call */
    }

loc_001145A3: ;
    esi = MEM32(esp + 8);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x18);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = esi;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x001145C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001145C0u); } /* indirect call */
    }

loc_001145C6: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_001145D0
 * Original: 0x001145D0 - 0x001145FA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001145D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001145D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001145DBu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001145DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001145E3u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001145E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x99A85800u);
    ecx = 0x414150;
    PUSH32(esp, 0x001145F6u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_001145F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114600
 * Original: 0x00114600 - 0x0011463A (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114600: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011460Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011460C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114614u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114614: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011461Eu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_0011461E: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00114626u); RECOMP_ABI_CALL(0x0015FEC0u, sub_0015FEC0); /* call 0x0015FEC0 */

loc_00114626: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114635; /* je: equal / zero */

loc_0011462D: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00114635u); RECOMP_ABI_CALL(0x0015FAD0u, sub_0015FAD0); /* call 0x0015FAD0 */

loc_00114635: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114640
 * Original: 0x00114640 - 0x0011467A (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114640: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011464Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011464C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114654u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114654: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011465Eu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_0011465E: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00114666u); RECOMP_ABI_CALL(0x0015FEC0u, sub_0015FEC0); /* call 0x0015FEC0 */

loc_00114666: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114675; /* je: equal / zero */

loc_0011466D: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00114675u); RECOMP_ABI_CALL(0x0015FB10u, sub_0015FB10); /* call 0x0015FB10 */

loc_00114675: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114680
 * Original: 0x00114680 - 0x001146EE (110 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011468Du); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011468D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114695u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114695: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011469Fu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_0011469F: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x001146A7u); RECOMP_ABI_CALL(0x0015FEC0u, sub_0015FEC0); /* call 0x0015FEC0 */

loc_001146A7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001146E8; /* je: equal / zero */

loc_001146AE: ;
    edi = 0x2F0268;
    esi = ebx;
    ecx = 0x17;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001146CC; /* jne: not equal / not zero */

loc_001146C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x15C) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001146CC: ;
    edi = 0x2F024C;
    esi = ebx;
    ecx = 0x19;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001146E8; /* jne: not equal / not zero */

loc_001146DE: ;
    MEM32(eax + 0x15C) = 1;

loc_001146E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001146F0
 * Original: 0x001146F0 - 0x0011473F (79 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001146F0(void)
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

loc_001146F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001146FEu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001146FE: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114706u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114706: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00114710u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114710: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x0011471Au); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_0011471A: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00114724u); RECOMP_ABI_CALL(0x0015FEC0u, sub_0015FEC0); /* call 0x0015FEC0 */

loc_00114724: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114738; /* je: equal / zero */

loc_0011472B: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00114738u); RECOMP_ABI_CALL(0x0015FB50u, sub_0015FB50); /* call 0x0015FB50 */

loc_00114738: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00114740
 * Original: 0x00114740 - 0x0011487E (318 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114740(void)
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

loc_00114740: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114751u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114751: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114759u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114759: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00114765u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114765: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011476Fu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_0011476F: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00114779u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114779: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x00114783u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114783: ;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, 0x0011478Fu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_0011478F: ;
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    MEM8(esp + 0x68) = LO8(eax);
    PUSH32(esp, 0x0011479Bu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_0011479B: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    MEM8(esp + 0x6C) = LO8(eax);
    PUSH32(esp, 0x001147A7u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_001147A7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    MEM8(esp + 0x2C) = LO8(eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001147C4u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001147C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001147DA; /* je: equal / zero */

loc_001147CB: ;
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001147D3u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_001147D3: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001147DA: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, esi);
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x001147E7u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001147E7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001147FE; /* jne: not equal / not zero */

loc_001147EF: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001147F7u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_001147F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x14) = LO8(eax);

loc_001147FE: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, esi);
    MEM8(esp + 0x20) = 1;
    PUSH32(esp, 0x0011480Bu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_0011480B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114822; /* jne: not equal / not zero */

loc_00114813: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011481Bu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_0011481B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x18) = LO8(eax);

loc_00114822: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011482Cu); RECOMP_ABI_CALL(0x0015FEC0u, sub_0015FEC0); /* call 0x0015FEC0 */

loc_0011482C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114874; /* je: equal / zero */

loc_00114835: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011483Fu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011483F: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00114867u); RECOMP_ABI_CALL(0x00160120u, sub_00160120); /* call 0x00160120 */

loc_00114867: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00114874u); RECOMP_ABI_CALL(0x00160370u, sub_00160370); /* call 0x00160370 */

loc_00114874: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
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
 * sub_00114880
 * Original: 0x00114880 - 0x0011494D (205 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00114880: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114891u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114891: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114899u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114899: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001148A3u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001148A3: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001148ADu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001148AD: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x001148B7u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001148B7: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x001148C3u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001148C3: ;
    PUSH32(esp, 6);
    MEM32(esp + 0x40) = eax;
    eax = esp + 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001148D4u); RECOMP_ABI_CALL(0x00112A10u, sub_00112A10); /* call 0x00112A10 */

loc_001148D4: ;
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001148DCu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_001148DC: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xA);
    PUSH32(esp, esi);
    MEM8(esp + 0x24) = LO8(eax);
    PUSH32(esp, 0x001148EBu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_001148EB: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, esi);
    MEM8(esp + 0x28) = LO8(eax);
    PUSH32(esp, 0x001148F7u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_001148F7: ;
    PUSH32(esp, edi);
    MEM8(esp + 0x28) = LO8(eax);
    PUSH32(esp, 0x00114901u); RECOMP_ABI_CALL(0x0015FEC0u, sub_0015FEC0); /* call 0x0015FEC0 */

loc_00114901: ;
    esi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114943; /* je: equal / zero */

loc_0011490A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00114914u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00114914: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114931u); RECOMP_ABI_CALL(0x00160120u, sub_00160120); /* call 0x00160120 */

loc_00114931: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00114943u); RECOMP_ABI_CALL(0x00160520u, sub_00160520); /* call 0x00160520 */

loc_00114943: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114950
 * Original: 0x00114950 - 0x0011498A (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114950: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011495Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011495C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114964u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114964: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011496Eu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_0011496E: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00114976u); RECOMP_ABI_CALL(0x0015FEC0u, sub_0015FEC0); /* call 0x0015FEC0 */

loc_00114976: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114985; /* je: equal / zero */

loc_0011497D: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00114985u); RECOMP_ABI_CALL(0x00160280u, sub_00160280); /* call 0x00160280 */

loc_00114985: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00114990
 * Original: 0x00114990 - 0x001149B0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114990: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011499Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011499B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001149A3u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001149A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001149A9u); RECOMP_ABI_CALL(0x001602A0u, sub_001602A0); /* call 0x001602A0 */

loc_001149A9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001149B0
 * Original: 0x001149B0 - 0x001149E0 (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001149B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001149B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001149BCu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001149BC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001149C4u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_001149C4: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001149D2u); RECOMP_ABI_CALL(0x00159260u, sub_00159260); /* call 0x00159260 */

loc_001149D2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001149E0
 * Original: 0x001149E0 - 0x00114A0A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001149E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001149E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001149ECu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001149EC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001149F4u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_001149F4: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114A02u); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_00114A02: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00114A10
 * Original: 0x00114A10 - 0x00114AE1 (209 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114A10: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114A1Du); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114A1D: ;
    PUSH32(esp, 0x2E7890);
    PUSH32(esp, 0x00114A27u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00114A27: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114A2Du); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_00114A2D: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00114A3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114A38u); } /* indirect call */
    }

loc_00114A3B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, 0x32);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x2DC8AC); /* addss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, 0x32);
    edx = esp + 0x14;
    xmm4 = xmm3; /* movaps */
    PUSH32(esp, edx);
    eax = esp + 0x24;
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x00114AB0u); RECOMP_ABI_CALL(0x000A9850u, sub_000A9850); /* call 0x000A9850 */

loc_00114AB0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xA2483C4Eu);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00114ADBu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00114ADB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114AF0
 * Original: 0x00114AF0 - 0x00114BCE (222 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114AF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114AFEu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114AFE: ;
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114B0Bu); RECOMP_ABI_CALL(0x00112A10u, sub_00112A10); /* call 0x00112A10 */

loc_00114B0B: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114B13u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114B13: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114B19u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00114B19: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35AFD776) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x35AFD776 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114B89; /* je: equal / zero */

loc_00114B23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4BD02DB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4BD02DB4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114B5F; /* je: equal / zero */

loc_00114B2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2C4F48Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA2C4F48Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114BC7; /* jne: not equal / not zero */

loc_00114B35: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x00114B55u); RECOMP_ABI_CALL(0x000161A0u, sub_000161A0); /* call 0x000161A0 */

loc_00114B55: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00114B5F: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x00114B7Fu); RECOMP_ABI_CALL(0x00042640u, sub_00042640); /* call 0x00042640 */

loc_00114B7F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00114B89: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 0x437A0000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0x41700000);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x00114BC4u); RECOMP_ABI_CALL(0x000B6460u, sub_000B6460); /* call 0x000B6460 */

loc_00114BC4: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114BC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114BD0
 * Original: 0x00114BD0 - 0x00114C10 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114BD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114BDEu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114BDE: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114BE6u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00114BE6: ;
    PUSH32(esp, 2);
    MEM8(esp + 0x14) = LO8(eax);
    eax = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114BF7u); RECOMP_ABI_CALL(0x00112A10u, sub_00112A10); /* call 0x00112A10 */

loc_00114BF7: ;
    edx = MEM32(esp + 0x1C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00114C06u); RECOMP_ABI_CALL(0x000A6C20u, sub_000A6C20); /* call 0x000A6C20 */

loc_00114C06: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114C10
 * Original: 0x00114C10 - 0x00114C50 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114C10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114C1Eu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114C1E: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114C26u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00114C26: ;
    PUSH32(esp, 2);
    MEM8(esp + 0x14) = LO8(eax);
    eax = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114C37u); RECOMP_ABI_CALL(0x00112A10u, sub_00112A10); /* call 0x00112A10 */

loc_00114C37: ;
    edx = MEM32(esp + 0x1C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00114C46u); RECOMP_ABI_CALL(0x000A6B90u, sub_000A6B90); /* call 0x000A6B90 */

loc_00114C46: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114C50
 * Original: 0x00114C50 - 0x00114CD5 (133 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114C50(void)
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

loc_00114C50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114C5Eu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114C5E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114C64u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00114C64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114CCE; /* jne: not equal / not zero */

loc_00114C6C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114C74u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114C74: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114C80u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114C80: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114C8Cu); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114C8C: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114C98u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114C98: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114CA4u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114CA4: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114CCEu); RECOMP_ABI_CALL(0x00097970u, sub_00097970); /* call 0x00097970 */

loc_00114CCE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_00114CE0
 * Original: 0x00114CE0 - 0x00114D57 (119 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114CE0(void)
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

loc_00114CE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114CEEu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114CEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114CF4u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00114CF4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00114D50; /* jne: not equal / not zero */

loc_00114CFC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114D04u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114D04: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114D10u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114D10: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00114D50; /* jbe: below or equal (unsigned <=) */

loc_00114D27: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 4); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD3DC); /* mulss */
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114D50u); RECOMP_ABI_CALL(0x00097980u, sub_00097980); /* call 0x00097980 */

loc_00114D50: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_00114D60
 * Original: 0x00114D60 - 0x00114DB0 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114D60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114D6Eu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114D6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114D74u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00114D74: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114DA9; /* jne: not equal / not zero */

loc_00114D7C: ;
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114D89u); RECOMP_ABI_CALL(0x00112A10u, sub_00112A10); /* call 0x00112A10 */

loc_00114D89: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114DA9u); RECOMP_ABI_CALL(0x00097E60u, sub_00097E60); /* call 0x00097E60 */

loc_00114DA9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114DB0
 * Original: 0x00114DB0 - 0x00114E00 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114DB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114DBEu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114DBE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114DC4u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00114DC4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114DF9; /* jne: not equal / not zero */

loc_00114DCC: ;
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114DD9u); RECOMP_ABI_CALL(0x00112A10u, sub_00112A10); /* call 0x00112A10 */

loc_00114DD9: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114DF9u); RECOMP_ABI_CALL(0x00097910u, sub_00097910); /* call 0x00097910 */

loc_00114DF9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114E00
 * Original: 0x00114E00 - 0x00114E29 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00114E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114E00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114E0Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114E0B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114E13u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00114E13: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00114E26; /* je: equal / zero */

loc_00114E1B: ;
    PUSH32(esp, eax);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114E26u); RECOMP_ABI_CALL(0x00097900u, sub_00097900); /* call 0x00097900 */

loc_00114E26: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114E30
 * Original: 0x00114E30 - 0x00114EA8 (120 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114E30(void)
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

loc_00114E30: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114E3Eu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114E3E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114E44u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00114E44: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114EA1; /* jne: not equal / not zero */

loc_00114E4C: ;
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114E59u); RECOMP_ABI_CALL(0x00112A10u, sub_00112A10); /* call 0x00112A10 */

loc_00114E59: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114E61u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114E61: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114E6Du); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00114E6D: ;
    edx = MEM32(esp + 0x24);
    MEM8(esp + 0x20) = LO8(eax);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114EA1u); RECOMP_ABI_CALL(0x00097940u, sub_00097940); /* call 0x00097940 */

loc_00114EA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_00114EB0
 * Original: 0x00114EB0 - 0x00114EF8 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00114EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00114EB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00114EBAu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114EBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114EC9u); RECOMP_ABI_CALL(0x000976E0u, sub_000976E0); /* call 0x000976E0 */

loc_00114EC9: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114ED3u); RECOMP_ABI_CALL(0x00097A30u, sub_00097A30); /* call 0x00097A30 */

loc_00114ED3: ;
    edx = MEM32(0x4140E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = 0x4140E8;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00114EE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00114EE3u); } /* indirect call */
    }

loc_00114EE6: ;
    PUSH32(esp, 0x3F19999A);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114EF5u); RECOMP_ABI_CALL(0x00097800u, sub_00097800); /* call 0x00097800 */

loc_00114EF5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00114F00
 * Original: 0x00114F00 - 0x001150B1 (433 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114F00(void)
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

loc_00114F00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114F0Fu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00114F0F: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114F17u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00114F17: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    ebp = eax;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00114F28u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00114F28: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00114F3F; /* jle: less or equal (signed <=) */

loc_00114F30: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00114F38u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00114F38: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114F3F: ;
    ebx = MEM32(esp + 0x10);
    edi = 0x2F02AC;
    esi = ebp;
    ecx = 0xE;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00114F72; /* jne: not equal / not zero */

loc_00114F55: ;
    PUSH32(esp, 0xC2CBD863u);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x00114F64u); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_00114F64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114F72u); RECOMP_ABI_CALL(0x000976E0u, sub_000976E0); /* call 0x000976E0 */

loc_00114F72: ;
    edi = 0x2F029C;
    esi = ebp;
    ecx = 0xF;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00114FEE; /* jne: not equal / not zero */

loc_00114F84: ;
    eax = MEM32(0x41410C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00114F94; /* jne: not equal / not zero */

loc_00114F8D: ;
    eax = 0x6438E0;
    goto loc_00114F97;

loc_00114F94: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114F97: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114FB9u); RECOMP_ABI_CALL(0x00097E60u, sub_00097E60); /* call 0x00097E60 */

loc_00114FB9: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00114FC3u); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_00114FC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00114FD1; /* je: equal / zero */

loc_00114FCA: ;
    ecx = eax;
    PUSH32(esp, 0x00114FD1u); RECOMP_ABI_CALL(0x0005A610u, sub_0005A610); /* call 0x0005A610 */

loc_00114FD1: ;
    PUSH32(esp, ebx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00114FDCu); RECOMP_ABI_CALL(0x000977B0u, sub_000977B0); /* call 0x000977B0 */

loc_00114FDC: ;
    PUSH32(esp, 0x9F19476Eu);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x00114FEBu); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_00114FEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00114FEE: ;
    edi = 0x2F0290;
    esi = ebp;
    ecx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0011500B; /* jne: not equal / not zero */

loc_00115000: ;
    PUSH32(esp, ebx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0011500Bu); RECOMP_ABI_CALL(0x000977B0u, sub_000977B0); /* call 0x000977B0 */

loc_0011500B: ;
    edi = 0x2F0288;
    esi = ebp;
    ecx = 7;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0011508C; /* jne: not equal / not zero */

loc_0011501D: ;
    PUSH32(esp, 0xC2CBD863u);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x0011502Cu); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_0011502C: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00115036u); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_00115036: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00115042u); RECOMP_ABI_CALL(0x0008C980u, sub_0008C980); /* call 0x0008C980 */

loc_00115042: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115080; /* jne: not equal / not zero */

loc_00115048: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0011504Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011504Cu); } /* indirect call */
    }

loc_0011504F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115080; /* je: equal / zero */

loc_00115053: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0011505Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115057u); } /* indirect call */
    }

loc_0011505A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x00115064u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011505Eu); } /* indirect call */
    }

loc_00115064: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115080; /* je: equal / zero */

loc_00115068: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0011506Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011506Cu); } /* indirect call */
    }

loc_0011506F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x00115079u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115073u); } /* indirect call */
    }

loc_00115079: ;
    ecx = MEM32(eax + 4);
    edi = MEM32(eax + ecx * 4 + 0x14);

loc_00115080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0011508Cu); RECOMP_ABI_CALL(0x00097760u, sub_00097760); /* call 0x00097760 */

loc_0011508C: ;
    edi = 0x2F0280;
    esi = ebp;
    ecx = 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001150A9; /* jne: not equal / not zero */

loc_0011509E: ;
    PUSH32(esp, ebx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x001150A9u); RECOMP_ABI_CALL(0x000976E0u, sub_000976E0); /* call 0x000976E0 */

loc_001150A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001150C0
 * Original: 0x001150C0 - 0x001150FF (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001150C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001150C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001150CCu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001150CC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001150D4u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_001150D4: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001150DEu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001150DE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001150FA; /* je: equal / zero */

loc_001150E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001150EBu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001150EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x4140E8;
    PUSH32(esp, 0x001150FAu); RECOMP_ABI_CALL(0x000979C0u, sub_000979C0); /* call 0x000979C0 */

loc_001150FA: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00115100
 * Original: 0x00115100 - 0x0011511E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115100: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011510Au); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011510A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0011511Bu); RECOMP_ABI_CALL(0x000979C0u, sub_000979C0); /* call 0x000979C0 */

loc_0011511B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115120
 * Original: 0x00115120 - 0x00115164 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115120(void)
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

loc_00115120: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011512Eu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011512E: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115136u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00115136: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115142u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00115142: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0011515Du); RECOMP_ABI_CALL(0x000979B0u, sub_000979B0); /* call 0x000979B0 */

loc_0011515D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
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
 * sub_00115170
 * Original: 0x00115170 - 0x0011519F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115170: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011517Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011517C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115184u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00115184: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0011519Au); RECOMP_ABI_CALL(0x00097590u, sub_00097590); /* call 0x00097590 */

loc_0011519A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001151A0
 * Original: 0x001151A0 - 0x001151BC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001151A0(void)
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

loc_001151A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001151ABu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001151AB: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001151B3u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_001151B3: ;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001151C0
 * Original: 0x001151C0 - 0x00115215 (85 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001151C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001151C0: ;
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
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001151D3u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001151D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x4140E8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001151E0u); RECOMP_ABI_CALL(0x00097680u, sub_00097680); /* call 0x00097680 */

loc_001151E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011520E; /* je: equal / zero */

loc_001151E4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001151ECu); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_001151EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011520E; /* je: equal / zero */

loc_001151F3: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001151FFu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_001151FF: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = 0x4140E8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011520Eu); RECOMP_ABI_CALL(0x000978F0u, sub_000978F0); /* call 0x000978F0 */

loc_0011520E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00115220
 * Original: 0x00115220 - 0x001152B3 (147 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115220(void)
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

loc_00115220: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011522Eu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011522E: ;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011523Bu); RECOMP_ABI_CALL(0x00112A10u, sub_00112A10); /* call 0x00112A10 */

loc_0011523B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00115251u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_00115251: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115267; /* je: equal / zero */

loc_00115258: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115260u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00115260: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115267: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0011527Du); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_0011527D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115293; /* je: equal / zero */

loc_00115284: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011528Cu); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_0011528C: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115293: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = 0x4140E8;
    PUSH32(esp, 0x001152ACu); RECOMP_ABI_CALL(0x000994F0u, sub_000994F0); /* call 0x000994F0 */

loc_001152AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_001152C0
 * Original: 0x001152C0 - 0x00115305 (69 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001152C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001152C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001152CCu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001152CC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001152D4u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001152D4: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001152DEu); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_001152DE: ;
    esi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115300; /* je: equal / zero */

loc_001152E7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115300; /* je: equal / zero */

loc_001152EB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001152F1u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001152F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00115300u); RECOMP_ABI_CALL(0x000979E0u, sub_000979E0); /* call 0x000979E0 */

loc_00115300: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00115310
 * Original: 0x00115310 - 0x00115353 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115310: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011531Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011531C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115324u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00115324: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011532Eu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_0011532E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011534E; /* je: equal / zero */

loc_00115335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011534E; /* je: equal / zero */

loc_00115339: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011533Fu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0011533F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0011534Eu); RECOMP_ABI_CALL(0x000979F0u, sub_000979F0); /* call 0x000979F0 */

loc_0011534E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00115360
 * Original: 0x00115360 - 0x00115389 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115360: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011536Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011536B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115373u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00115373: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00115386; /* je: equal / zero */

loc_0011537B: ;
    PUSH32(esp, eax);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00115386u); RECOMP_ABI_CALL(0x00097A00u, sub_00097A00); /* call 0x00097A00 */

loc_00115386: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115390
 * Original: 0x00115390 - 0x001153BD (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115390: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011539Au); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011539A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x4140E8;
    PUSH32(esp, 0x001153A7u); RECOMP_ABI_CALL(0x00097A30u, sub_00097A30); /* call 0x00097A30 */

loc_001153A7: ;
    edx = MEM32(0x4140E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = 0x4140E8;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001153BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001153B7u); } /* indirect call */
    }

loc_001153BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001153C0
 * Original: 0x001153C0 - 0x00115496 (214 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001153C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001153C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001153CCu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001153CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001153D2u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001153D2: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001153F8; /* jne: not equal / not zero */

loc_001153DC: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001153E3u); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_001153E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011543B; /* jne: not equal / not zero */

loc_001153EA: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001153F1u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001153F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011543B; /* jne: not equal / not zero */

loc_001153F8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115428; /* jne: not equal / not zero */

loc_001153FD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115405u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_00115405: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115428; /* je: equal / zero */

loc_0011540C: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115413u); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_00115413: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011543B; /* jne: not equal / not zero */

loc_0011541A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115421u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_00115421: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011543B; /* jne: not equal / not zero */

loc_00115428: ;
    PUSH32(esp, 0x2F02BC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115433u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_00115433: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011543B: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115448; /* jne: not equal / not zero */

loc_00115445: ;
    PUSH32(esp, edi);
    goto loc_00115478;

loc_00115448: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115481; /* jne: not equal / not zero */

loc_0011544D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115455u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00115455: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011545Du); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0011545D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00115469; /* jge: greater or equal (signed >=) */

loc_00115462: ;
    eax = 1;
    goto loc_00115473;

loc_00115469: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00115473; /* jle: less or equal (signed <=) */

loc_0011546E: ;
    eax = 3;

loc_00115473: ;
    ebx = eax + -1;
    PUSH32(esp, 2);

loc_00115478: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011547Eu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_0011547E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115481: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x360F00);
    PUSH32(esp, 0x0011548Du); RECOMP_ABI_CALL(0x000F1970u, sub_000F1970); /* call 0x000F1970 */

loc_0011548D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001154A0
 * Original: 0x001154A0 - 0x00115500 (96 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001154A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001154A0: ;
    SET_LO8(eax, MEM8(0x30EC8D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001154FD; /* jne: not equal / not zero */

loc_001154A9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001154B4u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001154B4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001154BCu); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_001154BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001154E4; /* jne: not equal / not zero */

loc_001154C3: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001154CBu); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001154CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001154E4; /* jne: not equal / not zero */

loc_001154D2: ;
    PUSH32(esp, 0x2F02FC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001154DDu); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001154DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001154E4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001154ECu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001154EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x361548);
    PUSH32(esp, 0x001154F9u); RECOMP_ABI_CALL(0x000F1970u, sub_000F1970); /* call 0x000F1970 */

loc_001154F9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_001154FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115500
 * Original: 0x00115500 - 0x00115537 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115500: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011550Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011550B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115513u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00115513: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00115534; /* je: equal / zero */

loc_0011551B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115521u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00115521: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x363EE4) = eax;
    MEMF(0x363EE8) = xmm0.f[0]; /* movss */

loc_00115534: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115540
 * Original: 0x00115540 - 0x001155E0 (160 bytes, 67 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115540: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011554Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011554C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115552u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00115552: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011555Cu); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_0011555C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115585; /* jne: not equal / not zero */

loc_00115563: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011556Bu); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_0011556B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115585; /* jne: not equal / not zero */

loc_00115572: ;
    PUSH32(esp, 0x2F033C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011557Du); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_0011557D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00115585: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011558Eu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_0011558E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001155AD; /* jne: not equal / not zero */

loc_00115598: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x361B90);
    PUSH32(esp, 0x001155A4u); RECOMP_ABI_CALL(0x001002D0u, sub_001002D0); /* call 0x001002D0 */

loc_001155A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001155AD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001155DA; /* jne: not equal / not zero */

loc_001155B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001155B9u); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_001155B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001155C1u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001155C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001155DA; /* jne: not equal / not zero */

loc_001155C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4A208D56);
    PUSH32(esp, eax);
    PUSH32(esp, 0x361B90);
    PUSH32(esp, 0x001155D7u); RECOMP_ABI_CALL(0x000F1A70u, sub_000F1A70); /* call 0x000F1A70 */

loc_001155D7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001155DA: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001155E0
 * Original: 0x001155E0 - 0x00115600 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001155E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001155E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001155EAu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001155EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x361B90;
    PUSH32(esp, 0x001155F7u); RECOMP_ABI_CALL(0x000F1A40u, sub_000F1A40); /* call 0x000F1A40 */

loc_001155F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115600
 * Original: 0x00115600 - 0x00115655 (85 bytes, 33 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115600: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011560Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011560B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115613u); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_00115613: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011563B; /* jne: not equal / not zero */

loc_0011561A: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115622u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_00115622: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011563B; /* jne: not equal / not zero */

loc_00115629: ;
    PUSH32(esp, 0x2F033C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115634u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_00115634: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011563B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115643u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_00115643: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x35FD60);
    PUSH32(esp, 0x0011564Eu); RECOMP_ABI_CALL(0x000EB810u, sub_000EB810); /* call 0x000EB810 */

loc_0011564E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00115660
 * Original: 0x00115660 - 0x001156EF (143 bytes, 48 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115660: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x408);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115674u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115674: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011567Cu); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_0011567C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001156D7; /* je: equal / zero */

loc_00115683: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011568Bu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_0011568B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115691u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00115691: ;
    esi = eax;
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011569Eu); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0011569E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001156E5; /* je: equal / zero */

loc_001156A5: ;
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001156B7u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_001156B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001156E5; /* je: equal / zero */

loc_001156BB: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x35FD60);
    PUSH32(esp, 0x001156CAu); RECOMP_ABI_CALL(0x000EB810u, sub_000EB810); /* call 0x000EB810 */

loc_001156CA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001156D7: ;
    PUSH32(esp, 0x2F033C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001156E2u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001156E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001156E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001156F0
 * Original: 0x001156F0 - 0x00115777 (135 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001156F0(void)
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

loc_001156F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001156FEu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001156FE: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00115708u); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_00115708: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011571C; /* je: equal / zero */

loc_0011570F: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115717u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00115717: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_0011571C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00115726u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115726: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115739; /* je: equal / zero */

loc_0011572D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115734u); RECOMP_ABI_CALL(0x000D3600u, sub_000D3600); /* call 0x000D3600 */

loc_00115734: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_00115739: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115741u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_00115741: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115770; /* je: equal / zero */

loc_00115748: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115750u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00115750: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115772; /* je: equal / zero */

loc_0011575D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(edi + 0x234) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00115770: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00115772: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00115780
 * Original: 0x00115780 - 0x001157A7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115780: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011578Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011578B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115793u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115793: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001157A4; /* je: equal / zero */

loc_0011579B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001157A1u); RECOMP_ABI_CALL(0x000D2DB0u, sub_000D2DB0); /* call 0x000D2DB0 */

loc_001157A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001157A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001157B0
 * Original: 0x001157B0 - 0x0011587F (207 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001157B0(void)
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

loc_001157B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001157C0u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001157C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001157C8u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_001157C8: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001157EEu); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001157EE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115804; /* je: equal / zero */

loc_001157F5: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001157FDu); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_001157FD: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115804: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011580Cu); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_0011580C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115822; /* je: equal / zero */

loc_00115813: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011581Bu); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_0011581B: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115822: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x0011582Cu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_0011582C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115841; /* jne: not equal / not zero */

loc_00115834: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011583Cu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_0011583C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(eax));

loc_00115841: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115876; /* je: equal / zero */

loc_00115845: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011584Du); RECOMP_ABI_CALL(0x000D3190u, sub_000D3190); /* call 0x000D3190 */

loc_0011584D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115876; /* je: equal / zero */

loc_00115854: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 0xC8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 0xCC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x122) = LO8(ebx);

loc_00115876: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_00115880
 * Original: 0x00115880 - 0x001158A7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115880: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011588Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011588B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115893u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115893: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001158A4; /* je: equal / zero */

loc_0011589B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001158A1u); RECOMP_ABI_CALL(0x000D3280u, sub_000D3280); /* call 0x000D3280 */

loc_001158A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001158A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001158B0
 * Original: 0x001158B0 - 0x00115917 (103 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001158B0(void)
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

loc_001158B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001158BFu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001158BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001158C5u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001158C5: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001158CFu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001158CF: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001158D9u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001158D9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ebp = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00115900; /* jle: less or equal (signed <=) */

loc_001158F1: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001158F9u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_001158F9: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115900: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011590Cu); RECOMP_ABI_CALL(0x00108740u, sub_00108740); /* call 0x00108740 */

loc_0011590C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00115920
 * Original: 0x00115920 - 0x00115987 (103 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115920(void)
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

loc_00115920: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011592Fu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011592F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115935u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00115935: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0011593Fu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_0011593F: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00115949u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00115949: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ebp = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00115970; /* jle: less or equal (signed <=) */

loc_00115961: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115969u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00115969: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00115970: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011597Cu); RECOMP_ABI_CALL(0x00108760u, sub_00108760); /* call 0x00108760 */

loc_0011597C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00115990
 * Original: 0x00115990 - 0x001159A0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115990: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011599Au); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011599A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001159A0
 * Original: 0x001159A0 - 0x001159BF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001159A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001159A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001159ABu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001159AB: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001159B3u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_001159B3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x35D5E8) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001159C0
 * Original: 0x001159C0 - 0x00115A20 (96 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001159C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001159C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001159CEu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_001159CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001159D4u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001159D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001159DAu); RECOMP_ABI_CALL(0x00095C20u, sub_00095C20); /* call 0x00095C20 */

loc_001159DA: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001159E4u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_001159E4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_00115A1D; /* ja: above (unsigned >) */

loc_001159F1: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x115A20); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001159F8u) goto loc_001159F8;
    if (_jt == 0x00115A00u) goto loc_00115A00;
    if (_jt == 0x00115A08u) goto loc_00115A08;
    if (_jt == 0x00115A10u) goto loc_00115A10;
    if (_jt == 0x00115A18u) goto loc_00115A18;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001159F8: ;
    MEM8(0x35FED1) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00115A00: ;
    MEM8(0x35FF81) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00115A08: ;
    MEM8(0x35FF29) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00115A10: ;
    MEM8(0x35FFD9) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00115A18: ;
    MEM8(0x35FE79) = LO8(eax);

loc_00115A1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115A40
 * Original: 0x00115A40 - 0x00115A82 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115A40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115A4Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115A4C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115A54u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115A54: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00115A6C; /* je: equal / zero */

loc_00115A60: ;
    SET_LO8(eax, MEM8(eax + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 4) = LO8(eax);

loc_00115A6C: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115A77u); RECOMP_ABI_CALL(0x001129B0u, sub_001129B0); /* call 0x001129B0 */

loc_00115A77: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00115A90
 * Original: 0x00115A90 - 0x00115AF6 (102 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115A90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115A9Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115A9C: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115AA4u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115AA4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00115AE0; /* je: equal / zero */

loc_00115AB0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115ADF; /* je: equal / zero */

loc_00115AB8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00115ABFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115ABCu); } /* indirect call */
    }

loc_00115ABF: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115ADF; /* jne: not equal / not zero */

loc_00115AD1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x378); PUSH32(esp, 0x00115ADBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115AD5u); } /* indirect call */
    }

loc_00115ADB: ;
    MEM8(esp + 8) = LO8(eax);

loc_00115ADF: ;
    POP32(esp, esi);

loc_00115AE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115AEBu); RECOMP_ABI_CALL(0x001129B0u, sub_001129B0); /* call 0x001129B0 */

loc_00115AEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00115B00
 * Original: 0x00115B00 - 0x00115BA0 (160 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115B00(void)
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

loc_00115B00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115B0Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115B0C: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115B14u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115B14: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00115B85; /* je: equal / zero */

loc_00115B24: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00115B53; /* je: equal / zero */

loc_00115B2F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6E99129D);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00115B3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115B38u); } /* indirect call */
    }

loc_00115B3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115B4E; /* je: equal / zero */

loc_00115B3F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115B45u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00115B45: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00115B85;

loc_00115B4E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_00115B7F;

loc_00115B53: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115B74; /* je: equal / zero */

loc_00115B5B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00115B62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115B5Fu); } /* indirect call */
    }

loc_00115B62: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115B76; /* je: equal / zero */

loc_00115B74: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00115B76: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    POP32(esp, esi);

loc_00115B7F: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00115B85: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115B95u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00115B95: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00115BA0
 * Original: 0x00115BA0 - 0x00115C10 (112 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115BA0(void)
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

loc_00115BA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115BAEu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115BAE: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115BB6u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00115BB6: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00115BC0u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00115BC0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00115C04; /* je: equal / zero */

loc_00115BC9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115C04; /* je: equal / zero */

loc_00115BCD: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00115BD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115BD1u); } /* indirect call */
    }

loc_00115BD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115C04; /* je: equal / zero */

loc_00115BDB: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00115BE3u); RECOMP_ABI_CALL(0x00067E10u, sub_00067E10); /* call 0x00067E10 */

loc_00115BE3: ;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115BF7u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00115BF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00115C04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00115C10
 * Original: 0x00115C10 - 0x00115CAC (156 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115C10(void)
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

loc_00115C10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115C1Du); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115C1D: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115C25u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115C25: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00115C64; /* je: equal / zero */

loc_00115C35: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00115C80; /* je: equal / zero */

loc_00115C40: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA31ADDB9u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00115C4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115C49u); } /* indirect call */
    }

loc_00115C4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115C5B; /* je: equal / zero */

loc_00115C50: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115C56u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00115C56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00115C68;

loc_00115C5B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00115C64: ;
    fp_push(MEMF(esp + 8)); /* fld float */

loc_00115C68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115C74u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00115C74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00115C80: ;
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115C64; /* je: equal / zero */

loc_00115C87: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00115C8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115C8Bu); } /* indirect call */
    }

loc_00115C8E: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115C64; /* jne: not equal / not zero */

loc_00115CA0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00115CAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115CA4u); } /* indirect call */
    }

loc_00115CAA: ;
    goto loc_00115C68;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00115CB0
 * Original: 0x00115CB0 - 0x00115D25 (117 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115CB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115CBCu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115CBC: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115CC4u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00115CC4: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115D20; /* je: equal / zero */

loc_00115CCD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00115CD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115CD1u); } /* indirect call */
    }

loc_00115CD4: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115D20; /* jne: not equal / not zero */

loc_00115CE6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38C); PUSH32(esp, 0x00115CF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115CEAu); } /* indirect call */
    }

loc_00115CF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115D20; /* je: equal / zero */

loc_00115CF4: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115D00u); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_00115D00: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115D06u); RECOMP_ABI_CALL(0x001ED370u, sub_001ED370); /* call 0x001ED370 */

loc_00115D06: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00115D0Eu); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_00115D0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115D15u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00115D15: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00115D20: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00115D30
 * Original: 0x00115D30 - 0x00115E08 (216 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115D30(void)
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

loc_00115D30: ;
    _fb = (uint32_t)(0x82C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x82C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x838);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115D45u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115D45: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00115D4Du); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115D4D: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00115D57u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00115D57: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115DFD; /* je: equal / zero */

loc_00115D66: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00115DCD; /* je: equal / zero */

loc_00115D70: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x00115D79u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00115D79: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x18;
    PUSH32(esp, 0x2DE28C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00115D92u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00115D92: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F0374);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00115DA8u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00115DA8: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x00115DB6u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00115DB6: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00115DC2u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_00115DC2: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x82C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x82C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00115DCD: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115DED; /* je: equal / zero */

loc_00115DD4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00115DDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115DD8u); } /* indirect call */
    }

loc_00115DDB: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115DEF; /* je: equal / zero */

loc_00115DED: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00115DEF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */

loc_00115DFD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x82C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x82C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00115E10
 * Original: 0x00115E10 - 0x00115E4B (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00115E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00115E10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115E1Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115E1B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115E23u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00115E23: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00115E48; /* je: equal / zero */

loc_00115E2B: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00115E48; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00115E40: ;
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */

loc_00115E48: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00115E50
 * Original: 0x00115E50 - 0x00115EEC (156 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115E50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00115E5Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115E5C: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00115E64u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115E64: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00115ED6; /* je: equal / zero */

loc_00115E70: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00115EA7; /* je: equal / zero */

loc_00115E7C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB6B8E5C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00115E88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115E85u); } /* indirect call */
    }

loc_00115E88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115ED5; /* je: equal / zero */

loc_00115E8C: ;
    PUSH32(esp, edi);
    esi = eax;
    edi = 0x2DC8F4;
    ecx = 5;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    SET_LO8(ecx, ((_flags != 0)) ? 1 : 0); /* sete */
    MEM8(esp + 0xC) = LO8(ecx);
    POP32(esp, edi);
    goto loc_00115ED5;

loc_00115EA7: ;
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115EC7; /* je: equal / zero */

loc_00115EAE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00115EB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115EB2u); } /* indirect call */
    }

loc_00115EB5: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115EC9; /* je: equal / zero */

loc_00115EC7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00115EC9: ;
    SET_LO8(eax, MEM8(esi + 0x124));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 8) = LO8(eax);

loc_00115ED5: ;
    POP32(esp, esi);

loc_00115ED6: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00115EE1u); RECOMP_ABI_CALL(0x001129B0u, sub_001129B0); /* call 0x001129B0 */

loc_00115EE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00115EF0
 * Original: 0x00115EF0 - 0x00115F67 (119 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115EF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115EFDu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115EFD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115F05u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115F05: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00115F0Fu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00115F0F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00115F61; /* je: equal / zero */

loc_00115F18: ;
    SET_LO8(eax, MEM8(edi + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00115F61; /* jne: not equal / not zero */

loc_00115F22: ;
    edi = MEM32(edi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00115F46; /* je: equal / zero */

loc_00115F29: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00115F30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00115F2Du); } /* indirect call */
    }

loc_00115F30: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00115F46; /* jne: not equal / not zero */

loc_00115F42: ;
    eax = edi;
    goto loc_00115F48;

loc_00115F46: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00115F48: ;
    SET_LO8(ecx, MEM8(eax + 0x124));
    SET_LO8(edx, MEM8(eax + 0x124));
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x124) = LO8(edx);

loc_00115F61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00115F70
 * Original: 0x00115F70 - 0x0011603E (206 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00115F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00115F70: ;
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x818);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115F86u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00115F86: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00115F8Eu); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00115F8E: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00115F98u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00115F98: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00116032; /* je: equal / zero */

loc_00115FA5: ;
    SET_LO8(eax, MEM8(edi + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011600C; /* je: equal / zero */

loc_00115FAF: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00115FB8u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00115FB8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    ecx = esp + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_00115FD7; /* jne: not equal / not zero */

loc_00115FC1: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2F0380);
    PUSH32(esp, 0x00115FD0u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00115FD0: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    goto loc_00115FEB;

loc_00115FD7: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2F0380);
    PUSH32(esp, 0x00115FE6u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00115FE6: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);

loc_00115FEB: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00115FF4u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00115FF4: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00116000u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_00116000: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011600C: ;
    edi = MEM32(edi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116032; /* je: equal / zero */

loc_00116013: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0011601Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116017u); } /* indirect call */
    }

loc_0011601A: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116032; /* jne: not equal / not zero */

loc_0011602C: ;
    MEM8(edi + 0x808) = LO8(ebx);

loc_00116032: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116040
 * Original: 0x00116040 - 0x00116118 (216 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116040: ;
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x818);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116056u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116056: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011605Eu); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_0011605E: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00116068u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00116068: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0xC) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0011610C; /* je: equal / zero */

loc_00116079: ;
    SET_LO8(eax, MEM8(edi + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001160E0; /* je: equal / zero */

loc_00116083: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0011608Cu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0011608C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    ecx = esp + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_001160AB; /* jne: not equal / not zero */

loc_00116095: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2F0390);
    PUSH32(esp, 0x001160A4u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_001160A4: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    goto loc_001160BF;

loc_001160AB: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2F0390);
    PUSH32(esp, 0x001160BAu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_001160BA: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);

loc_001160BF: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x001160C8u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_001160C8: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001160D4u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_001160D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001160E0: ;
    edi = MEM32(edi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011610C; /* je: equal / zero */

loc_001160E7: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001160EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001160EBu); } /* indirect call */
    }

loc_001160EE: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011610C; /* jne: not equal / not zero */

loc_00116100: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0011610Cu); RECOMP_ABI_CALL(0x00052A80u, sub_00052A80); /* call 0x00052A80 */

loc_0011610C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116120
 * Original: 0x00116120 - 0x0011618E (110 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116120(void)
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

loc_00116120: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011612Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011612C: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116134u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00116134: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011617D; /* je: equal / zero */

loc_0011613D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00116147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116141u); } /* indirect call */
    }

loc_00116147: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011617D; /* je: equal / zero */

loc_0011614B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00116155u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011614Fu); } /* indirect call */
    }

loc_00116155: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0011615Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116159u); } /* indirect call */
    }

loc_0011615C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011617D; /* je: equal / zero */

loc_00116160: ;
    fp_push(MEMD(0x2ED218)); /* fld double */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116172u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00116172: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011617D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116183u); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_00116183: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
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
 * sub_00116190
 * Original: 0x00116190 - 0x001161D0 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116190: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011619Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011619B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001161A3u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_001161A3: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001161CC; /* je: equal / zero */

loc_001161AC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001161B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001161B0u); } /* indirect call */
    }

loc_001161B3: ;
    edx = MEM32(0x30D88C);
    ecx = MEM32(0x30D888);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001161CC; /* jne: not equal / not zero */

loc_001161C5: ;
    ecx = esi;
    PUSH32(esp, 0x001161CCu); RECOMP_ABI_CALL(0x00059CF0u, sub_00059CF0); /* call 0x00059CF0 */

loc_001161CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001161D0
 * Original: 0x001161D0 - 0x00116210 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001161D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001161D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001161DBu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001161DB: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001161E3u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_001161E3: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011620C; /* je: equal / zero */

loc_001161EC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001161F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001161F0u); } /* indirect call */
    }

loc_001161F3: ;
    edx = MEM32(0x30D88C);
    ecx = MEM32(0x30D888);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011620C; /* jne: not equal / not zero */

loc_00116205: ;
    ecx = esi;
    PUSH32(esp, 0x0011620Cu); RECOMP_ABI_CALL(0x00059CD0u, sub_00059CD0); /* call 0x00059CD0 */

loc_0011620C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116210
 * Original: 0x00116210 - 0x00116289 (121 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116210: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011621Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011621C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116224u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00116224: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116246; /* je: equal / zero */

loc_0011622D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00116234u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116231u); } /* indirect call */
    }

loc_00116234: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011624B; /* je: equal / zero */

loc_00116246: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011624B: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116253u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00116253: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116259u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00116259: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011625Fu); RECOMP_ABI_CALL(0x00095C20u, sub_00095C20); /* call 0x00095C20 */

loc_0011625F: ;
    ecx = eax + eax;
    eax = MEM32(edi + 0x244);
    edx = 3;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011627Eu); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_0011627E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116290
 * Original: 0x00116290 - 0x00116304 (116 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116290: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011629Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011629B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001162A3u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_001162A3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116300; /* je: equal / zero */

loc_001162AA: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001162C0; /* je: equal / zero */

loc_001162B5: ;
    ecx = eax;
    PUSH32(esp, 0x001162BCu); RECOMP_ABI_CALL(0x001EE0E0u, sub_001EE0E0); /* call 0x001EE0E0 */

loc_001162BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001162C0: ;
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001162F2; /* je: equal / zero */

loc_001162C7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001162CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001162CBu); } /* indirect call */
    }

loc_001162CE: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001162F2; /* jne: not equal / not zero */

loc_001162E0: ;
    ecx = esi;
    PUSH32(esp, 0x001162E7u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_001162E7: ;
    ecx = eax;
    PUSH32(esp, 0x001162EEu); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_001162EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001162F2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001162F9u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_001162F9: ;
    ecx = eax;
    PUSH32(esp, 0x00116300u); RECOMP_ABI_CALL(0x001EAA20u, sub_001EAA20); /* call 0x001EAA20 */

loc_00116300: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116310
 * Original: 0x00116310 - 0x001163E0 (208 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00116310(void)
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

loc_00116310: ;
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
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116324u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116324: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011632Eu); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_0011632E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001163D8; /* je: equal / zero */

loc_00116339: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011636A; /* je: equal / zero */

loc_00116344: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116350u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00116350: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    goto loc_0011639A;

loc_0011636A: ;
    edi = MEM32(eax + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011638E; /* je: equal / zero */

loc_00116371: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00116378u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116375u); } /* indirect call */
    }

loc_00116378: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011638E; /* jne: not equal / not zero */

loc_0011638A: ;
    ecx = edi;
    goto loc_00116390;

loc_0011638E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00116390: ;
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0011639Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116397u); } /* indirect call */
    }

loc_0011639A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001163AAu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001163AA: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001163BAu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001163BA: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001163CAu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001163CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 3;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001163D8: ;
    eax = edi;
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
 * sub_001163E0
 * Original: 0x001163E0 - 0x00116549 (361 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001163E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001163E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001163ECu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001163EC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001163F6u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_001163F6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011653E; /* je: equal / zero */

loc_00116401: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011653E; /* jne: not equal / not zero */

loc_00116410: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116543; /* je: equal / zero */

loc_0011641C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00116423u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116420u); } /* indirect call */
    }

loc_00116423: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116543; /* jne: not equal / not zero */

loc_00116439: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00116444u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011643Eu); } /* indirect call */
    }

loc_00116444: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116466; /* je: equal / zero */

loc_0011644A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00116450u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011644Eu); } /* indirect call */
    }

loc_00116450: ;
    edx = MEM32(0x30D994);
    ecx = MEM32(0x30D990);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116466; /* jne: not equal / not zero */

loc_00116462: ;
    edi = esi;
    goto loc_00116468;

loc_00116466: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00116468: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001164CA; /* je: equal / zero */

loc_0011646C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00116472u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116470u); } /* indirect call */
    }

loc_00116472: ;
    edx = MEM32(0x30DA48);
    ecx = MEM32(0x30DA44);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001164CA; /* jne: not equal / not zero */

loc_00116484: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0011648Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116488u); } /* indirect call */
    }

loc_0011648B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001164D9; /* je: equal / zero */

loc_0011648F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00116496u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116493u); } /* indirect call */
    }

loc_00116496: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001164B2; /* jne: not equal / not zero */

loc_0011649A: ;
    PUSH32(esp, 0x2F03C8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001164A5u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001164A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001164B2: ;
    PUSH32(esp, 0x2F03BC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001164BDu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001164BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001164CA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116537; /* je: equal / zero */

loc_001164CE: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001164D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001164D2u); } /* indirect call */
    }

loc_001164D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001164F1; /* jne: not equal / not zero */

loc_001164D9: ;
    PUSH32(esp, 0x2F03B4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001164E4u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001164E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001164F1: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001164F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001164F5u); } /* indirect call */
    }

loc_001164F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116514; /* jne: not equal / not zero */

loc_001164FC: ;
    PUSH32(esp, 0x2F03A8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00116507u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00116507: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00116514: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0011651Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116518u); } /* indirect call */
    }

loc_0011651B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001164B2; /* jne: not equal / not zero */

loc_0011651F: ;
    PUSH32(esp, 0x2F03C8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0011652Au); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_0011652A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00116537: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011653E: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00116543: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116550
 * Original: 0x00116550 - 0x00116590 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116550: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011655Cu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011655C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00116566u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00116566: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011658B; /* je: equal / zero */

loc_0011656D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116573u); RECOMP_ABI_CALL(0x000117B0u, sub_000117B0); /* call 0x000117B0 */

loc_00116573: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116579u); RECOMP_ABI_CALL(0x00011640u, sub_00011640); /* call 0x00011640 */

loc_00116579: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116580u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_00116580: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011658B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116590
 * Original: 0x00116590 - 0x001165F6 (102 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116590: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011659Bu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011659B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001165A3u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_001165A3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001165F2; /* je: equal / zero */

loc_001165AA: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001165C0; /* je: equal / zero */

loc_001165B5: ;
    ecx = eax;
    PUSH32(esp, 0x001165BCu); RECOMP_ABI_CALL(0x001EE0E0u, sub_001EE0E0); /* call 0x001EE0E0 */

loc_001165BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001165C0: ;
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001165EB; /* je: equal / zero */

loc_001165C7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001165CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001165CBu); } /* indirect call */
    }

loc_001165CE: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001165EB; /* jne: not equal / not zero */

loc_001165E0: ;
    ecx = esi;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001165E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001165E4u); } /* indirect call */
    }

loc_001165E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001165EB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001165F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001165EFu); } /* indirect call */
    }

loc_001165F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00116600
 * Original: 0x00116600 - 0x001166C6 (198 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00116600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116600: ;
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
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116614u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116614: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011661Cu); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_0011661C: ;
    PUSH32(esp, 2);
    esi = eax;
    eax = esp + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011662Bu); RECOMP_ABI_CALL(0x00112A10u, sub_00112A10); /* call 0x00112A10 */

loc_0011662B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001166BE; /* je: equal / zero */

loc_00116636: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00116692; /* je: equal / zero */

loc_00116641: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011664Du); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0011664D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    eax = MEM32(esi);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = esp + 0x20;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0011668Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116688u); } /* indirect call */
    }

loc_0011668A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00116692: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001166BE; /* je: equal / zero */

loc_00116699: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001166A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011669Du); } /* indirect call */
    }

loc_001166A0: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001166BE; /* jne: not equal / not zero */

loc_001166B2: ;
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001166BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001166BBu); } /* indirect call */
    }

loc_001166BE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001166D0
 * Original: 0x001166D0 - 0x0011675F (143 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001166D0(void)
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

loc_001166D0: ;
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
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001166E4u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_001166E4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001166EEu); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_001166EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116757; /* je: equal / zero */

loc_001166F5: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116701u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00116701: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x44); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x48); /* subss */
    ecx = esp + 0x14;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116737u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00116737: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F03D0)); /* fmul dword ptr [0x2f03d0] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116749u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00116749: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00116757: ;
    eax = edi;
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
 * sub_00116760
 * Original: 0x00116760 - 0x0011683E (222 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116760(void)
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

loc_00116760: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011676Fu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_0011676F: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00116779u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00116779: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011682D; /* je: equal / zero */

loc_00116784: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011682D; /* jne: not equal / not zero */

loc_00116793: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116835; /* je: equal / zero */

loc_0011679F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001167A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001167A3u); } /* indirect call */
    }

loc_001167A6: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116835; /* jne: not equal / not zero */

loc_001167B8: ;
    eax = MEM32(edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x001167C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001167C1u); } /* indirect call */
    }

loc_001167C4: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001167EEu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001167EE: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001167FEu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001167FE: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011680Eu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_0011680E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011681Eu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_0011681E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011682D: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00116835: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
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
 * sub_00116840
 * Original: 0x00116840 - 0x001169E3 (419 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00116840(void)
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

loc_00116840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116857u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116857: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011685Fu); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_0011685F: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116869u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00116869: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_001169DB; /* je: equal / zero */

loc_0011687E: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011699B; /* je: equal / zero */

loc_0011688C: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116898u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00116898: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x50); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x54); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x58); /* subss */
    ecx = esp + 0x14;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001168CEu); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_001168CE: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) - fp_top()); /* fsubr dword ptr [esp + 0xc] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001168DBu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_001168DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001168F0u); RECOMP_ABI_CALL(0x001F7D90u, sub_001F7D90); /* call 0x001F7D90 */

loc_001168F0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD6C0)); /* fmul dword ptr [0x2dd6c0] */
    PUSH32(esp, ecx);
    eax = esp + 0x10;
    ecx = esp + 0x14;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011690Du); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0011690D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011696Eu); RECOMP_ABI_CALL(0x001F8210u, sub_001F8210); /* call 0x001F8210 */

loc_0011696E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011697Eu); RECOMP_ABI_CALL(0x00011CB0u, sub_00011CB0); /* call 0x00011CB0 */

loc_0011697E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116988u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00116988: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00116993u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116991u); } /* indirect call */
    }

loc_00116993: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011699B: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001169DB; /* je: equal / zero */

loc_001169A2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001169A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001169A6u); } /* indirect call */
    }

loc_001169A9: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001169DB; /* jne: not equal / not zero */

loc_001169BB: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001169C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001169C4u); } /* indirect call */
    }

loc_001169C7: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x660E4490) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0x660E4490 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001169DB; /* jne: not equal / not zero */

loc_001169D0: ;
    PUSH32(esp, edi);
    ecx = 0x4140E8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001169DBu); RECOMP_ABI_CALL(0x000977F0u, sub_000977F0); /* call 0x000977F0 */

loc_001169DB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_001169F0
 * Original: 0x001169F0 - 0x00116B07 (279 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001169F0(void)
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

loc_001169F0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x00116A07u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00116A07: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    esi = eax;
    PUSH32(esp, 0x00116A11u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00116A11: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00116AED; /* je: equal / zero */

loc_00116A1E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116AED; /* je: equal / zero */

loc_00116A26: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116A46; /* je: equal / zero */

loc_00116A2D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00116A34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116A31u); } /* indirect call */
    }

loc_00116A34: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116A48; /* je: equal / zero */

loc_00116A46: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00116A48: ;
    edi = MEM32(edi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116A68; /* je: equal / zero */

loc_00116A4F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00116A56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116A53u); } /* indirect call */
    }

loc_00116A56: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116A6A; /* je: equal / zero */

loc_00116A68: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00116A6A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116AED; /* je: equal / zero */

loc_00116A6E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116AED; /* je: equal / zero */

loc_00116A72: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00116A7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116A7Bu); } /* indirect call */
    }

loc_00116A7E: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00116A8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116A87u); } /* indirect call */
    }

loc_00116A8A: ;
    edx = MEM32(edi);
    esi = eax;
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00116A98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116A95u); } /* indirect call */
    }

loc_00116A98: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    MEM8(esp + 0xC) = 1;
    if ((_fca > _fcb)) goto loc_00116AED; /* ja: above (unsigned >) (xmm3.f[0] vs MEMF(0x2DC098)) */

loc_00116AE8: ;
    MEM8(esp + 0xC) = 0;

loc_00116AED: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00116AF8u); RECOMP_ABI_CALL(0x001129B0u, sub_001129B0); /* call 0x001129B0 */

loc_00116AF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00116B10
 * Original: 0x00116B10 - 0x00116B9A (138 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00116B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116B10: ;
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
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116B27u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116B27: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116B2Fu); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00116B2F: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116B39u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00116B39: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116B92; /* je: equal / zero */

loc_00116B40: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116B92; /* je: equal / zero */

loc_00116B44: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00116B5D; /* je: equal / zero */

loc_00116B4F: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116B5Bu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_00116B5B: ;
    goto loc_00116B70;

loc_00116B5D: ;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    ecx = 0x30C0B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116B6Bu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_00116B6B: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116B70: ;
    ecx = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00116B7Au); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00116B7A: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00116B86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116B83u); } /* indirect call */
    }

loc_00116B86: ;
    edx = MEM32(edi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00116B92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116B8Fu); } /* indirect call */
    }

loc_00116B92: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00116BA0
 * Original: 0x00116BA0 - 0x00116C11 (113 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116BA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116BADu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116BAD: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116BB5u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00116BB5: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00116BBFu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00116BBF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 8) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00116C0B; /* je: equal / zero */

loc_00116BCA: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00116C0B; /* jne: not equal / not zero */

loc_00116BD4: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116C0B; /* je: equal / zero */

loc_00116BDB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00116BE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116BDFu); } /* indirect call */
    }

loc_00116BE2: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116C0B; /* jne: not equal / not zero */

loc_00116BF4: ;
    edi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28C); PUSH32(esp, 0x00116C03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116BFDu); } /* indirect call */
    }

loc_00116C03: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00116C0Bu); RECOMP_ABI_CALL(0x0004EC40u, sub_0004EC40); /* call 0x0004EC40 */

loc_00116C0B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116C20
 * Original: 0x00116C20 - 0x00116CB3 (147 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116C20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116C2Du); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116C2D: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116C35u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00116C35: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00116C3Fu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00116C3F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00116CAD; /* je: equal / zero */

loc_00116C48: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00116C4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116C4Cu); } /* indirect call */
    }

loc_00116C4F: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116CAD; /* jne: not equal / not zero */

loc_00116C61: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    ecx = esi;
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00116C74; /* jne: not equal / not zero */

loc_00116C6A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x33C); PUSH32(esp, 0x00116C72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116C6Cu); } /* indirect call */
    }

loc_00116C72: ;
    goto loc_00116C7C;

loc_00116C74: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x334); PUSH32(esp, 0x00116C7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116C76u); } /* indirect call */
    }

loc_00116C7C: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x28C); PUSH32(esp, 0x00116C8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116C86u); } /* indirect call */
    }

loc_00116C8C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00116C93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116C90u); } /* indirect call */
    }

loc_00116C93: ;
    edx = MEM32(0x30D88C);
    ecx = MEM32(0x30D888);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116CAD; /* jne: not equal / not zero */

loc_00116CA5: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00116CADu); RECOMP_ABI_CALL(0x0004EC40u, sub_0004EC40); /* call 0x0004EC40 */

loc_00116CAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116CC0
 * Original: 0x00116CC0 - 0x00116D0D (77 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116CC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116CCDu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116CCD: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116CD5u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00116CD5: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00116CDFu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00116CDF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00116D07; /* je: equal / zero */

loc_00116CE8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00116CEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116CECu); } /* indirect call */
    }

loc_00116CEF: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116D07; /* jne: not equal / not zero */

loc_00116D01: ;
    MEM8(esi + 0x809) = LO8(ebx);

loc_00116D07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116D10
 * Original: 0x00116D10 - 0x00116ECB (443 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116D10(void)
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

loc_00116D10: ;
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x828);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116D27u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116D27: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116D2Du); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00116D2D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00116D37u); RECOMP_ABI_CALL(0x00112B20u, sub_00112B20); /* call 0x00112B20 */

loc_00116D37: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00116D41u); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00116D41: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEM8(esp + 0x10) = LO8(eax);
    MEM32(esp + 0x20) = 0x2F76F59;
    MEM8(esp + 0x18) = 0;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00116D81; /* jle: less or equal (signed <=) */

loc_00116D6A: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116D72u); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00116D72: ;
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00116D7Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00116D7A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;

loc_00116D81: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00116D95; /* jle: less or equal (signed <=) */

loc_00116D86: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116D8Eu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00116D8E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x18) = LO8(eax);

loc_00116D95: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00116DA9; /* jle: less or equal (signed <=) */

loc_00116D9A: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116DA2u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00116DA2: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116DA9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116EBE; /* je: equal / zero */

loc_00116DB1: ;
    SET_LO8(eax, MEM8(ebx + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00116E7C; /* je: equal / zero */

loc_00116DBF: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00116DC8u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00116DC8: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x10), 1 (8-bit) */
    ecx = esp + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_00116E46; /* jne: not equal / not zero */

loc_00116DD3: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2F0404);
    PUSH32(esp, 0x00116DE2u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00116DE2: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00116DF0u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00116DF0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = esp + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_00116DFB; /* je: equal / zero */

loc_00116DF8: ;
    PUSH32(esp, ebp);
    goto loc_00116E00;

loc_00116DFB: ;
    PUSH32(esp, 0x2F03F8);

loc_00116E00: ;
    PUSH32(esp, 0x2F03E8);
    PUSH32(esp, 0x00116E0Au); RECOMP_ABI_CALL(0x00012280u, sub_00012280); /* call 0x00012280 */

loc_00116E0A: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esp + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_00116E1D; /* je: equal / zero */

loc_00116E16: ;
    PUSH32(esp, 0x2DC8F4);
    goto loc_00116E22;

loc_00116E1D: ;
    PUSH32(esp, 0x2DE2A4);

loc_00116E22: ;
    PUSH32(esp, 0x2F03D4);
    PUSH32(esp, 0x00116E2Cu); RECOMP_ABI_CALL(0x00012280u, sub_00012280); /* call 0x00012280 */

loc_00116E2C: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB8B346A1u);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00116E3Fu); RECOMP_ABI_CALL(0x001EAFF0u, sub_001EAFF0); /* call 0x001EAFF0 */

loc_00116E3F: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    goto loc_00116E5A;

loc_00116E46: ;
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x2F0404);
    PUSH32(esp, 0x00116E55u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00116E55: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);

loc_00116E5A: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00116E63u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00116E63: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00116E6Fu); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_00116E6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00116E7C: ;
    esi = MEM32(ebx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116EA0; /* je: equal / zero */

loc_00116E83: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00116E8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116E87u); } /* indirect call */
    }

loc_00116E8A: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116EA0; /* jne: not equal / not zero */

loc_00116E9C: ;
    ecx = esi;
    goto loc_00116EA2;

loc_00116EA0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00116EA2: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x00116EBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116EB8u); } /* indirect call */
    }

loc_00116EBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00116ED0
 * Original: 0x00116ED0 - 0x00116F28 (88 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00116ED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116EDDu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116EDD: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116EE5u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00116EE5: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00116EEFu); RECOMP_ABI_CALL(0x00112990u, sub_00112990); /* call 0x00112990 */

loc_00116EEF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 8) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00116F22; /* je: equal / zero */

loc_00116EFA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00116F01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116EFEu); } /* indirect call */
    }

loc_00116F01: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00116F22; /* jne: not equal / not zero */

loc_00116F13: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x29C); PUSH32(esp, 0x00116F22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00116F1Cu); } /* indirect call */
    }

loc_00116F22: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00116F30
 * Original: 0x00116F30 - 0x00116FC6 (150 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116F30(void)
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

loc_00116F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116F3Du); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116F3D: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116F45u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00116F45: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00116F4Fu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_00116F4F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00116FB4; /* je: equal / zero */

loc_00116F58: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116FB4; /* je: equal / zero */

loc_00116F5C: ;
    ecx = esi;
    PUSH32(esp, 0x00116F63u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_00116F63: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116FA6; /* je: equal / zero */

loc_00116F67: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00116F6Du); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00116F6D: ;
    ecx = MEM32(esi + 0x6B0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116FB4; /* je: equal / zero */

loc_00116F7A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00116F84u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_00116F84: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00116FB4; /* je: equal / zero */

loc_00116F88: ;
    fp_push(MEMD(0x2ED218)); /* fld double */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116F9Au); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00116F9A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00116FA6: ;
    PUSH32(esp, 0x2F0418);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116FB1u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_00116FB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00116FB4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00116FBAu); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_00116FBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00116FD0
 * Original: 0x00116FD0 - 0x0011703D (109 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116FD0(void)
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

loc_00116FD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116FDCu); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00116FDC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00116FE4u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00116FE4: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011702C; /* je: equal / zero */

loc_00116FED: ;
    ecx = edi;
    PUSH32(esp, 0x00116FF4u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_00116FF4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011701E; /* je: equal / zero */

loc_00116FF8: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00117001u); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_00117001: ;
    fp_push(MEMD(0x2ED218)); /* fld double */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117013u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_00117013: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011701E: ;
    PUSH32(esp, 0x2F0460);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117029u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_00117029: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011702C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117032u); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_00117032: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
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
 * sub_00117040
 * Original: 0x00117040 - 0x00117111 (209 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117040(void)
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

loc_00117040: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117051u); RECOMP_ABI_CALL(0x00113B60u, sub_00113B60); /* call 0x00113B60 */

loc_00117051: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117057u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_00117057: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x00117061u); RECOMP_ABI_CALL(0x00113BA0u, sub_00113BA0); /* call 0x00113BA0 */

loc_00117061: ;
    edi = eax;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x0011706Fu); RECOMP_ABI_CALL(0x00112AD0u, sub_00112AD0); /* call 0x00112AD0 */

loc_0011706F: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM8(esp + 0x14) = LO8(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_001170B2; /* jle: less or equal (signed <=) */

loc_00117081: ;
    edi = 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001170AE; /* jl: less (signed <) */

loc_0011708A: ;
    /* nop */

loc_00117090: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117097u); RECOMP_ABI_CALL(0x001129C0u, sub_001129C0); /* call 0x001129C0 */

loc_00117097: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0011709Fu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_0011709F: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00117090; /* jle: less or equal (signed <=) */

loc_001170A6: ;
    eax = MEM32(esp + 0x18);
    MEM8(esp + 0x14) = LO8(ebx);

loc_001170AE: ;
    edi = MEM32(esp + 0x10);

loc_001170B2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001170FB; /* je: equal / zero */

loc_001170B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001170FB; /* je: equal / zero */

loc_001170BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001170C0u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001170C0: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x001170D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001170CFu); } /* indirect call */
    }

loc_001170D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001170FB; /* je: equal / zero */

loc_001170D9: ;
    fp_push(MEMD(0x2ED218)); /* fld double */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001170EBu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001170EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001170FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00117101u); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_00117101: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
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
